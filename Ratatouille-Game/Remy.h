#pragma once

using namespace System;
using namespace std;


class Remy
{
private:
    int x, y;

public:
    Remy(int, int);
    ~Remy();

    void Dibujar();
    void Borrar();
    void Mover();

    int GetX();
    int GetY();
    int GetAncho();
    int GetAlto();

    void SetPosicion(int, int);
};

Remy::Remy(int pX, int pY)
{
    this->x = pX;
    this->y = pY;

    if (this->x < 0) this->x = 0;
    if (this->x > 120 - 16) this->x = 120 - 16;
    if (this->y < 0) this->y = 0;
    if (this->y > 26 - 13) this->y = 26 - 13;
}

Remy::~Remy()
{
}




void Remy::Dibujar()
{
    Console::SetCursorPosition(x + 4, y);        color(0);     cout << "█"; color(1); cout << "█"; color(0); cout << "█"; color(1); cout << "█"; color(0); cout << "█"; color(1); cout << "█"; color(0); cout << "█"; color(1); cout << "█";
    Console::SetCursorPosition(x + 4, y + 1);      color(0);     cout << "█"; color(1); cout << "█"; color(0); cout << "█"; color(1); cout << "█"; color(0); cout << "█"; color(1); cout << "█"; color(0); cout << "█"; color(1); cout << "█";
    Console::SetCursorPosition(x + 4, y + 2);      color(0);     cout << "█"; color(1); cout << "█"; color(0); cout << "█"; color(1); cout << "█"; color(0); cout << "█"; color(1); cout << "█"; color(0); cout << "█"; color(1); cout << "█";
    Console::SetCursorPosition(x + 4, y + 3);      color(0);     cout << "█"; color(1); cout << "█"; color(0); cout << "█"; color(1); cout << "█"; color(0); cout << "█"; color(1); cout << "█"; color(0); cout << "█"; color(1); cout << "█";
    Console::SetCursorPosition(x + 4, y + 4);      color(2);     cout << "████████";

    Console::SetCursorPosition(x, y + 5);      color(4);     cout << "████"; color(3); cout << "████████"; color(4); cout << "████";
    Console::SetCursorPosition(x, y + 6);      color(5);     cout << "████"; color(7); cout << "██"; color(3); cout << "████"; color(7); cout << "██"; color(5); cout << "████";
    Console::SetCursorPosition(x + 4, y + 7);      color(3);     cout << "██"; color(4); cout << "████"; color(3); cout << "██";
    Console::SetCursorPosition(x + 2, y + 8);      color(6);     cout << "██"; color(3); cout << "██"; color(6); cout << "████"; color(3); cout << "██"; color(6); cout << "██";
    Console::SetCursorPosition(x + 2, y + 9);      color(3);     cout << "██"; color(6); cout << "██"; color(3); cout << "████"; color(6); cout << "██"; color(3); cout << "██";
    Console::SetCursorPosition(x + 2, y + 10);     color(3);     cout << "████"; color(6); cout << "████"; color(3); cout << "████";
    Console::SetCursorPosition(x + 2, y + 11);     color(4);     cout << "██"; color(6); cout << "██"; color(3); cout << "████"; color(6); cout << "██"; color(4); cout << "██";
    Console::SetCursorPosition(x + 4, y + 12);     color(5);     cout << "███  ";Console::SetCursorPosition(x + 9, y + 12); color(5); cout << "███";
}

void Remy::Borrar()
{
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            Console::SetCursorPosition(x + j, y + i);
            cout << " ";
        }
    }
}

void Remy::Mover()
{

    if (!_kbhit()) return;

    char tecla = _getch();

    int nuevoX = x;
    int nuevoY = y;


    if (tecla == 'a' || tecla == 'A') nuevoX -= 1;
    if (tecla == 'd' || tecla == 'D') nuevoX += 1;
    if (tecla == 'w' || tecla == 'W') nuevoY -= 1;
    if (tecla == 's' || tecla == 'S') nuevoY += 1;

    if (nuevoX < 0) nuevoX = 0;
    if (nuevoX > 120 - 16) nuevoX = 120 - 16;
    if (nuevoY < 0) nuevoY = 0;
    if (nuevoY > 26 - 13) nuevoY = 26 - 13;

    if (nuevoX != x || nuevoY != y)
    {
        Borrar();
        x = nuevoX;
        y = nuevoY;
        Dibujar();
    }
}


int Remy::GetX() {
    return x;
}
int Remy::GetY() {
    return y;
}
int Remy::GetAncho() {
    return 16;
}
int Remy::GetAlto() {
    return 13;
}

void Remy::SetPosicion(int pX, int pY)
{
    this->x = pX;
    this->y = pY;
}






