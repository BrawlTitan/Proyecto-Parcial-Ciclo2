#pragma once


class Nivel1
{
private:
    int contador;
    int tiempo;
    int tickTiempo;
    int ticksPorSegundo;

    bool completadoSatisfactoriamente;

    Remy* remy;
    Linguini* linguini;
    Skinner* skinner;

public:
    Nivel1(Remy*, Linguini*, Skinner*);
    ~Nivel1();

    void Jugar();
    bool GetCompletadoSatisfactoriamente();
};

Nivel1::Nivel1(Remy* pRemy, Linguini* pLinguini, Skinner* pSkinner)
{
    contador = 0;

    tiempo = 15;
    tickTiempo = 0;

    ticksPorSegundo = 4500;

    completadoSatisfactoriamente = false;

    remy = pRemy;
    linguini = pLinguini;
    skinner = pSkinner;
}

Nivel1::~Nivel1()
{

}

void Nivel1::Jugar()
{
    remy->SetPosicion(50, 10);
    ListaIngredientes* lista = new ListaIngredientes();

    Console::BackgroundColor = ConsoleColor::Gray;
    Console::Clear();
    remy->Dibujar();

    Console::SetCursorPosition(0, 29);
    color(0);
    cout << "Tiempo restante: " << tiempo << " segundos   ";


    while (!lista->Termino() && tiempo > 0)
    {
        remy->Mover();

        lista->Actualizar(remy, &contador);

        color(0);
        tickTiempo++;
        if (tickTiempo >= ticksPorSegundo)
        {
            tickTiempo = 0;
            tiempo--;

            Console::SetCursorPosition(0, 29);
            cout << "Tiempo restante: " << tiempo << " segundos   ";
        }

        Console::SetCursorPosition(0, 28);
        cout << "Ingredientes recolectados: " << contador << " / 7   ";
    }

    color(0);
    if (contador == 7 && tiempo > 0)
    {
        completadoSatisfactoriamente = true;
    }
    else
    {
        completadoSatisfactoriamente = false;
    }

    if (completadoSatisfactoriamente == true)
    {
        _sleep(2000);
        Console::SetCursorPosition(0, 28);
        cout << "Nivel completado! Ingredientes: " << contador << "        " << endl;
    }
    else
    {
        _sleep(2000);
        Console::SetCursorPosition(0, 25);
        cout << "Nivel NO completado. Se acabo el tiempo.        " << endl;
        Console::SetCursorPosition(0, 26);
        cout << "Ingredientes recolectados: " << contador << " / 7   ";
    }

    delete lista;
}

bool Nivel1::GetCompletadoSatisfactoriamente() {
    return completadoSatisfactoriamente;
}