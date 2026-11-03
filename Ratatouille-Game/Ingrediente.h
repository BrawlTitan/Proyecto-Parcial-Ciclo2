#pragma once

using namespace System;
using namespace std;



class Ingrediente
{
private:
    int x, dx, y, dy, tipo, alto, ancho;

public:
    Ingrediente(int, int, int);
    ~Ingrediente();

    void Dibujar();
    void Borrar();
    void Mover();

    int GetX();
    int GetY();
    int GetAncho();
    int GetAlto();
    int GetTipo();
};

Ingrediente::Ingrediente(int pX, int pY, int tipoAnterior)
{
    this->x = pX;
    this->y = pY;

    do
    {
        this->tipo = rand() % 4 + 1;
    } while (this->tipo == tipoAnterior);

    if (rand() % 2)
    {
        this->dx = 1;
    }
    else
    {
        this->dx = -1;
    }

    if (rand() % 2)
    {
        this->dy = 1;
    }
    else
    {
        this->dy = -1;
    }


    switch (tipo)
    {
    case 1: ancho = 12; alto = 8; break;
    case 2: ancho = 16; alto = 6; break;
    case 3: ancho = 16; alto = 8; break;
    case 4: ancho = 10; alto = 9; break;
    }


    if (this->x < 0) this->x = 0;
    if (this->x > 120 - ancho) this->x = 120 - ancho;
    if (this->y < 0) this->y = 0;
    if (this->y > 26 - alto) this->y = 26 - alto;
}

Ingrediente::~Ingrediente()
{
}

void Ingrediente::Dibujar()
{
    switch (tipo)
    {
    case 1:
    {
        Console::SetCursorPosition(x, y);     color(9);          cout << "  ██    ██";
        Console::SetCursorPosition(x, y + 1);                    cout << "    ████";
        Console::SetCursorPosition(x, y + 2); color(8);          cout << "  ██";     color(9); cout << "██";     color(8); cout << "████";
        Console::SetCursorPosition(x, y + 3);                    cout << "████████████";
        Console::SetCursorPosition(x, y + 4);                    cout << "████████████";
        Console::SetCursorPosition(x, y + 5);                    cout << "████████████";
        Console::SetCursorPosition(x, y + 6);                    cout << "████████████";
        Console::SetCursorPosition(x, y + 7);                    cout << "  ████████";
    } break;
    case 2:
    {
        Console::SetCursorPosition(x, y);     color(10);         cout << "      ████";
        Console::SetCursorPosition(x, y + 1); color(10);         cout << "    ████████";
        Console::SetCursorPosition(x, y + 2); color(10);         cout << "██"; color(9); cout << "██"; color(10); cout << "██████"; color(9); cout << "██"; color(10); cout << "████";
        Console::SetCursorPosition(x, y + 3); color(10);         cout << "████"; color(9); cout << "██"; color(10); cout << "██"; color(9); cout << "██"; color(10);cout << "██████";
        Console::SetCursorPosition(x, y + 4); color(10);         cout << "██████"; color(9); cout << "██"; color(10); cout << "██████";
        Console::SetCursorPosition(x, y + 5); color(10);         cout << "  ██████"; color(9); cout << "██"; color(10); cout << "██";
    } break;
    case 3:
    {
        Console::SetCursorPosition(x, y);        color(9);               cout << "      ████";
        Console::SetCursorPosition(x, y + 1);    color(9);               cout << "  ██  ██████";
        Console::SetCursorPosition(x, y + 2);    color(9);               cout << "██████████"; color(10); cout << "██"; color(9); cout << "████";
        Console::SetCursorPosition(x, y + 3);    color(9);               cout << "████"; color(10); cout << "██"; color(9); cout << "██"; color(10); cout << "██"; color(9); cout << "██████";
        Console::SetCursorPosition(x, y + 4);    color(9);               cout << "  ████"; color(10); cout << "██"; color(9); cout << "██████";
        Console::SetCursorPosition(x, y + 5);    color(10);              cout << "  ████  ████";
        Console::SetCursorPosition(x, y + 6);    color(10);              cout << "    ████████";
        Console::SetCursorPosition(x, y + 7);    color(10);              cout << "      ██████";
    } break;
    case 4:
    {
        Console::SetCursorPosition(x, y);        color(9);               cout << "  ██  ██";
        Console::SetCursorPosition(x, y + 1);    color(9);               cout << "    ██";
        Console::SetCursorPosition(x, y + 2);    color(11);               cout << "  ████"; color(12); cout << "██";
        Console::SetCursorPosition(x, y + 3);    color(11);               cout << "██████████";
        Console::SetCursorPosition(x, y + 4);    color(11);               cout << "██████"; color(12); cout << "████";
        Console::SetCursorPosition(x, y + 5);    color(11);               cout << "██████████";
        Console::SetCursorPosition(x, y + 6);    color(11);               cout << "  ████"; color(12); cout << "██";
        Console::SetCursorPosition(x, y + 7);    color(11);               cout << "  ██████";
        Console::SetCursorPosition(x, y + 8);    color(11);               cout << "    ██";
    } break;
    }
}

void Ingrediente::Borrar()
{
    for (int i = 0; i < alto; i++)
    {
        for (int j = 0; j < ancho; j++)
        {
            Console::SetCursorPosition(x + j, y + i);
            cout << " ";
        }
    }
}

void Ingrediente::Mover()
{

    x += dx;
    y += dy;

    if (x < 0)
    {
        x = 0;
        dx = 1;
    }
    if (x > 120 - ancho)
    {
        x = 120 - ancho;
        dx = -1;
    }
    if (y < 0)
    {
        y = 0;
        dy = 1;
    }
    if (y > 26 - alto)
    {
        y = 26 - alto;
        dy = -1;
    }
}

int Ingrediente::GetX() {
    return x;
}
int Ingrediente::GetY() {
    return y;
}
int Ingrediente::GetAncho() {
    return ancho;
}
int Ingrediente::GetAlto() {
    return alto;
}
int Ingrediente::GetTipo() {
    return tipo;
}



