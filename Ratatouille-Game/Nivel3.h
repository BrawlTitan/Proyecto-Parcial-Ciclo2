#pragma once

using namespace System;
using namespace std;


class Nivel3
{
private:
    Remy* ObjRemy;
    Linguini* ObjLinguini;
    Skinner* ObjSkinner;
    ListaAgujeros* ObjLista;

    int indiceRemy;       //agujero actual
    int vidas;
    int totalRondas;
    int rondaActual;
    int tiempoRonda;
    int acumAnim;
    bool marcado[5];
    bool completadoSatisfactoriamente;

public:
    Nivel3(Remy*, Linguini*, Skinner*);
    ~Nivel3();

    void Redibujar();
    void DibujarNumeros();
    void DibujarHud();
    void Mensaje(const char*);

    void ColocarRemy(int);
    void EsperarAnimando(int);
    bool Evaluar();
    void JugarRonda();
    void FaseFinal();
    void Jugar();
    bool SobrevivioRondas();
    bool Resolver(char);                // decisicon de skinner
    bool GetCompletadoSatisfactoriamente();
};

Nivel3::Nivel3(Remy* pRemy, Linguini* pLinguini, Skinner* pSkinner)
{
    this->ObjRemy = pRemy;
    this->ObjLinguini = pLinguini;
    this->ObjSkinner = pSkinner;
    this->completadoSatisfactoriamente = false;
    this->vidas = 3;
    this->totalRondas = 7;
    this->rondaActual = 0;
    this->tiempoRonda = 2000;
    this->acumAnim = 0;
    this->indiceRemy = 0;

    for (int i = 0; i < 5; i++)
    {
        marcado[i] = false;
    }


    this->ObjLista = new ListaAgujeros(5);
    ObjLista->Agregar(new Agujero(6, 9));
    ObjLista->Agregar(new Agujero(28, 22));
    ObjLista->Agregar(new Agujero(50, 9));
    ObjLista->Agregar(new Agujero(72, 22));
    ObjLista->Agregar(new Agujero(94, 9));


    ObjRemy->SetPosicion(ObjLista->Obtener(0)->GetX() + 2, ObjLista->Obtener(0)->GetY() - 9);
}

Nivel3::~Nivel3()
{
    delete ObjLista;
}


void Nivel3::Redibujar()
{
    ObjLista->DibujarTodos();
    DibujarNumeros();
    ObjRemy->Dibujar();
}


void Nivel3::DibujarNumeros()
{
    for (int i = 0; i < ObjLista->GetCantidad(); i++)
    {
        Agujero* ObjAgujero = ObjLista->Obtener(i);

        Console::SetCursorPosition(ObjAgujero->GetX() + 9, ObjAgujero->GetY() + ObjAgujero->GetAlto());
        if (marcado[i])
        {
            color(9);
            cout << "[" << (i + 1) << "]";
        }
        else
        {
            color(7);
            cout << " " << (i + 1) << " ";
        }
    }
}

void Nivel3::DibujarHud()
{
    color(0);
    Console::SetCursorPosition(2, 29);
    cout << "Vidas: " << vidas << "      Ronda: " << rondaActual << "/" << totalRondas << "      ";
}


void Nivel3::Mensaje(const char* pTexto)
{
    color(0);
    Console::SetCursorPosition(2, 28);
    cout << "                                                                      ";
    Console::SetCursorPosition(2, 28);
    cout << pTexto;
}

void Nivel3::ColocarRemy(int pIndice)
{
    Agujero* ObjAgujero = ObjLista->Obtener(pIndice);

    ObjRemy->Borrar();
    indiceRemy = pIndice;
    ObjRemy->SetPosicion(ObjAgujero->GetX() + 2, ObjAgujero->GetY() - 9);
    Redibujar();
}


void Nivel3::EsperarAnimando(int pMilisegundos)
{
    int transcurrido = 0;

    while (transcurrido < pMilisegundos)
    {
        Sleep(20);
        transcurrido += 20;
        acumAnim += 20;

        if (acumAnim >= 200)
        {
            acumAnim = 0;
            ObjSkinner->AnimarCabeza();
        }
    }
}


bool Nivel3::Evaluar()
{
    return ObjLinguini->GetEmpatia() >= 20;
}

void Nivel3::JugarRonda()
{
    // Remy cambia de pocision
    int nuevo;
    do
    {
        nuevo = rand() % ObjLista->GetCantidad();
    } while (nuevo == indiceRemy);

    ColocarRemy(nuevo);

    while (_kbhit()) _getch();

    int transcurrido = 0;
    bool pulso = false;
    bool fallo = false;

    while (transcurrido < tiempoRonda && !fallo)
    {
        if (_kbhit())
        {
            char tecla = _getch();

            if (!pulso && tecla >= '1' && tecla <= '5')
            {
                if (tecla - '1' == indiceRemy)
                {
                    pulso = true;
                    Mensaje("¡Acierto!");
                }
                else
                {
                    fallo = true;
                    vidas--;
                    Mensaje("Fallaste");
                }
            }

        }

        Sleep(20);
        transcurrido += 20;
        acumAnim += 20;
        if (acumAnim >= 200)
        {
            acumAnim = 0;
            ObjSkinner->AnimarCabeza();
        }
    }

    //se exedio el tiempo
    if (!pulso && !fallo)
    {
        vidas--;
        Mensaje("Fallaste");
    }
}


void Nivel3::FaseFinal()
{
    Mensaje("Skinner revisa todos los agujeros: presiona 1, 2, 3, 4 y 5");
    while (_kbhit()) _getch();

    int pulsados = 0;

    while (pulsados < 5)
    {
        if (_kbhit())
        {
            char tecla = _getch();

            if (tecla >= '1' && tecla <= '5' && !marcado[tecla - '1'])
            {
                marcado[tecla - '1'] = true;
                pulsados++;
                DibujarNumeros();
            }
        }

        EsperarAnimando(20);
    }
}

void Nivel3::Jugar()
{
    Redibujar();
    ObjSkinner->DibujarCabeza();
    DibujarHud();

    while (vidas > 0 && rondaActual < totalRondas)
    {
        rondaActual++;
        DibujarHud();
        JugarRonda();
        DibujarHud();
    }

    if (vidas > 0)
    {
        FaseFinal();


        completadoSatisfactoriamente = false;
        Mensaje("Skinner encontró a Remy...");
    }
    else
    {
        completadoSatisfactoriamente = false;
        Mensaje("Te quedaste sin vidas...");
    }


    EsperarAnimando(2000);
    while (_kbhit()) _getch();
}


bool Nivel3::SobrevivioRondas()
{
    return vidas > 0;
}


// victroia si empatia >=20 y B
bool Nivel3::Resolver(char pDecision)
{
    if (pDecision == 'B' && Evaluar())
    {
        completadoSatisfactoriamente = true;
    }
    else
    {
        completadoSatisfactoriamente = false;
    }

    return completadoSatisfactoriamente;
}

bool Nivel3::GetCompletadoSatisfactoriamente() {
    return completadoSatisfactoriamente;
}