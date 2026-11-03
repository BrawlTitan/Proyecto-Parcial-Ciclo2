#pragma once

using namespace System;
using namespace std;


class Agujero
{
private:
    int x, y;
    int ancho, alto;
    int colorNormal;

public:
    Agujero(int, int);
    ~Agujero();

    void Dibujar();

    int GetX();
    int GetY();
    int GetAncho();
    int GetAlto();
};

Agujero::Agujero(int pX, int pY)
{
    this->x = pX;
    this->y = pY;
    this->ancho = 20;
    this->alto = 5;


    this->colorNormal = 23;
}

Agujero::~Agujero()
{
}

void Agujero::Dibujar()
{
    color(colorNormal);

    Console::SetCursorPosition(x + 6, y);       cout << "████████";
    Console::SetCursorPosition(x + 2, y + 1);   cout << "████████████████";
    Console::SetCursorPosition(x, y + 2);       cout << "████████████████████";
    Console::SetCursorPosition(x + 2, y + 3);   cout << "████████████████";
    Console::SetCursorPosition(x + 6, y + 4);   cout << "████████";
}

int Agujero::GetX() { return x; }
int Agujero::GetY() { return y; }
int Agujero::GetAncho() { return ancho; }
int Agujero::GetAlto() { return alto; }