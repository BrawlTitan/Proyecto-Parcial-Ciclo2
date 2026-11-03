#pragma once


class Nivel2 {
private:
    Comida* comidas[3];
    PatronTeclas patron;
    int comidasQuemadas;
    bool completadoSatisfactoriamente;
    Linguini* linguini;

public:
    Nivel2(Linguini*);
    ~Nivel2();

    void jugarComida(int i);
    void jugar();
    int getComidasQuemadas();

    bool GetCompletadoSatisfactoriamente();
};

Nivel2::Nivel2(Linguini* pLinguini) {
    comidasQuemadas = 0;
    completadoSatisfactoriamente = false;
    linguini = pLinguini;

    comidas[0] = new Sarten(0, 10);
    comidas[1] = new Comida2(11, 9);
    comidas[2] = new Comida3(11, 10);
}

Nivel2::~Nivel2() {
    for (int i = 0; i < 3; i++) {
        delete comidas[i];
    }
}



void Nivel2::jugarComida(int i) {

    comidas[i]->dibujar();
    patron.Esperar(1000, linguini);

    patron.generar();
    patron.mostrarSecuencia(linguini);
    patron.pedirRespuesta(linguini);

    if (patron.contarErrores() >= 2) {
        comidas[i]->quemar();
        comidasQuemadas++;
        if (i == 0)
        {








            Console::SetCursorPosition(12, 1);     color(30);                  cout << "████";       Console::SetCursorPosition(20, 1);      cout << "████";
            Console::SetCursorPosition(14, 2);     color(30);                    cout << "██";       Console::SetCursorPosition(20, 2);      cout << "██";
            Console::SetCursorPosition(16, 3);     color(30);                      cout << "████";
            Console::SetCursorPosition(16, 4);     color(30);                      cout << "████";
            Console::SetCursorPosition(14, 5);     color(30);                    cout << "██";       Console::SetCursorPosition(20, 5);      cout << "██";
            Console::SetCursorPosition(12, 6);     color(30);                  cout << "████";       Console::SetCursorPosition(20, 6);      cout << "████";







        }
        if (i == 1)
        {





            Console::SetCursorPosition(34, 1);     color(30);                  cout << "████";       Console::SetCursorPosition(42, 1);      cout << "████";
            Console::SetCursorPosition(36, 2);     color(30);                    cout << "██";       Console::SetCursorPosition(42, 2);      cout << "██";
            Console::SetCursorPosition(38, 3);     color(30);                      cout << "████";
            Console::SetCursorPosition(38, 4);     color(30);                      cout << "████";
            Console::SetCursorPosition(36, 5);     color(30);                    cout << "██";       Console::SetCursorPosition(42, 5);      cout << "██";
            Console::SetCursorPosition(34, 6);     color(30);                  cout << "████";       Console::SetCursorPosition(42, 6);      cout << "████";


        }
        if (i == 2)
        {




            Console::SetCursorPosition(56, 1);     color(30);                  cout << "████";       Console::SetCursorPosition(64, 1);      cout << "████";
            Console::SetCursorPosition(58, 2);     color(30);                    cout << "██";       Console::SetCursorPosition(64, 2);      cout << "██";
            Console::SetCursorPosition(60, 3);     color(30);                      cout << "████";
            Console::SetCursorPosition(60, 4);     color(30);                      cout << "████";
            Console::SetCursorPosition(58, 5);     color(30);                    cout << "██";       Console::SetCursorPosition(64, 5);      cout << "██";
            Console::SetCursorPosition(56, 6);     color(30);                  cout << "████";       Console::SetCursorPosition(64, 6);      cout << "████";


        }



    }
    else
    {




        if (i == 0)
        {
            Console::SetCursorPosition(22, 1);   color(10);             cout << "██";
            Console::SetCursorPosition(20, 2);   color(10);           cout << "████";
            Console::SetCursorPosition(20, 3);   color(10);           cout << "██";
            Console::SetCursorPosition(12, 4);   color(10);   cout << "████";Console::SetCursorPosition(18, 4);color(10);         cout << "████";
            Console::SetCursorPosition(14, 5);   color(10);     cout << "██████";
            Console::SetCursorPosition(16, 6);   color(10);       cout << "██";
        }

        if (i == 1)
        {
            Console::SetCursorPosition(44, 1);   color(10);             cout << "██";
            Console::SetCursorPosition(42, 2);   color(10);           cout << "████";
            Console::SetCursorPosition(42, 3);   color(10);           cout << "██";
            Console::SetCursorPosition(34, 4);   color(10);   cout << "████";Console::SetCursorPosition(40, 4);color(10);         cout << "████";
            Console::SetCursorPosition(36, 5);   color(10);     cout << "██████";
            Console::SetCursorPosition(38, 6);   color(10);       cout << "██";

        }

        if (i == 2)
        {
            Console::SetCursorPosition(66, 1);   color(10);             cout << "██";
            Console::SetCursorPosition(64, 2);   color(10);           cout << "████";
            Console::SetCursorPosition(64, 3);   color(10);           cout << "██";
            Console::SetCursorPosition(56, 4);   color(10);   cout << "████";Console::SetCursorPosition(62, 4);color(10);         cout << "████";
            Console::SetCursorPosition(58, 5);   color(10);     cout << "██████";
            Console::SetCursorPosition(60, 6);   color(10);       cout << "██";
        }
    }








    comidas[i]->Borrar();
    comidas[i]->dibujar();
    patron.Esperar(2000, linguini);


    comidas[i]->Borrar();
}

void Nivel2::jugar() {
    linguini->DibujarCabeza();
    for (int i = 0; i < 3; i++) {
        jugarComida(i);
    }

    Console::SetCursorPosition(10, 22);
    cout << "Comidas quemadas: " << comidasQuemadas << " de 3";
    if (comidasQuemadas >= 2)
    {
        completadoSatisfactoriamente = false;
    }
    else
    {
        completadoSatisfactoriamente = true;
    }



}

int Nivel2::getComidasQuemadas() {
    return comidasQuemadas;
}

bool Nivel2::GetCompletadoSatisfactoriamente() {
    return completadoSatisfactoriamente;
}