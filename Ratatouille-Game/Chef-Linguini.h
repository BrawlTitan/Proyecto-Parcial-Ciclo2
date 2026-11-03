#pragma once

using namespace System;
using namespace std;


class Linguini : public Chef
{
private:
    int x, y;
    int cx{ 88 }, cy{ 13 }, cdir{ 1 };     // para la cabeza
    int cxMin{ 88 }, cxMax{ 92 };

public:
    Linguini();
    Linguini(int, int);
    ~Linguini();
    void Dibujar();
    void SetPosicion(int, int);
    void DibujarCabeza();
    void BorrarCabeza();
    void AnimarCabeza();
};

Linguini::Linguini()
{
    this->x = 0;
    this->y = 0;
}

void Linguini::SetPosicion(int pX, int pY)
{
    this->x = pX;
    this->y = pY;
}
Linguini::Linguini(int px, int py) {
    this->x = px;
    this->y = py;
}



Linguini::~Linguini()
{
}

void Linguini::Dibujar() {

    Console::SetCursorPosition(x + 8, y);        color(0);     cout << "████████████";
    Console::SetCursorPosition(x + 8, y + 1);    color(0);     cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(0); cout << "██";
    Console::SetCursorPosition(x + 8, y + 2);    color(0);     cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(0); cout << "██";
    Console::SetCursorPosition(x + 8, y + 3);    color(0);     cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(0); cout << "██";
    Console::SetCursorPosition(x + 8, y + 4);    color(0);     cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(0); cout << "██";
    Console::SetCursorPosition(x + 8, y + 5);    color(0);     cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(0); cout << "██";
    Console::SetCursorPosition(x + 8, y + 6);    color(0);     cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(0); cout << "██";
    Console::SetCursorPosition(x + 8, y + 7);    color(20);    cout << "████████████";
    Console::SetCursorPosition(x + 2, y + 8);    color(20);    cout << "████████████████████████";
    Console::SetCursorPosition(x, y + 9);    color(20);    cout << "████████████████████████████";
    Console::SetCursorPosition(x, y + 10);   color(20);    cout << "████████████████████████████";
    Console::SetCursorPosition(x, y + 11);   color(20);    cout << "██████"; color(21); cout << "██"; color(20); cout << "████"; color(21); cout << "██"; color(20); cout << "████"; color(21); cout << "████"; color(20); cout << "██████";
    Console::SetCursorPosition(x, y + 12);   color(20);    cout << "████"; color(21); cout << "████████████████████"; color(20); cout << "████";
    Console::SetCursorPosition(x, y + 13);   color(20);    cout << "████"; color(21); cout << "██"; color(7); cout << "████"; color(21); cout << "████████"; color(7); cout << "████"; color(21); cout << "██"; color(20); cout << "████";
    Console::SetCursorPosition(x, y + 14);   color(21);    cout << "██"; color(20); cout << "██"; color(21); cout << "██"; color(7); cout << "████"; color(21); cout << "████████"; color(7); cout << "████"; color(21); cout << "██"; color(20); cout << "██"; color(21); cout << "██";
    Console::SetCursorPosition(x, y + 15);   color(21);    cout << "████████████████████████████";
    Console::SetCursorPosition(x + 4, y + 16);   color(21);    cout << "████████"; color(7); cout << "████"; color(21); cout << "████████";
    Console::SetCursorPosition(x + 6, y + 17);   color(21);    cout << "████████████████";
    Console::SetCursorPosition(x + 11, y + 18);   color(0);     cout << "██"; color(21); cout << "████"; color(0); cout << "██";
    Console::SetCursorPosition(x + 9, y + 19);   color(0);     cout << "████████████";
    Console::SetCursorPosition(x + 9, y + 20);   color(22);    cout << "██"; color(0); cout << "██"; color(22); cout << "████"; color(0); cout << "██"; color(22); cout << "██";





}


void Linguini::DibujarCabeza() {

    Console::SetCursorPosition(cx + 8, cy);        color(0);     cout << "████████████";
    Console::SetCursorPosition(cx + 8, cy + 1);    color(0);     cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(0); cout << "██";
    Console::SetCursorPosition(cx + 8, cy + 2);    color(0);     cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(0); cout << "██";
    Console::SetCursorPosition(cx + 8, cy + 3);    color(0);     cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(0); cout << "██";
    Console::SetCursorPosition(cx + 8, cy + 4);    color(0);     cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(0); cout << "██";
    Console::SetCursorPosition(cx + 8, cy + 5);    color(0);     cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(0); cout << "██";
    Console::SetCursorPosition(cx + 8, cy + 6);    color(0);     cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(0); cout << "██";
    Console::SetCursorPosition(cx + 8, cy + 7);    color(20);    cout << "████████████";
    Console::SetCursorPosition(cx + 2, cy + 8);    color(20);    cout << "████████████████████████";
    Console::SetCursorPosition(cx, cy + 9);    color(20);    cout << "████████████████████████████";
    Console::SetCursorPosition(cx, cy + 10);   color(20);    cout << "████████████████████████████";
    Console::SetCursorPosition(cx, cy + 11);   color(20);    cout << "██████"; color(21); cout << "██"; color(20); cout << "████"; color(21); cout << "██"; color(20); cout << "████"; color(21); cout << "████"; color(20); cout << "██████";
    Console::SetCursorPosition(cx, cy + 12);   color(20);    cout << "████"; color(21); cout << "████████████████████"; color(20); cout << "████";
    Console::SetCursorPosition(cx, cy + 13);   color(20);    cout << "████"; color(21); cout << "██"; color(7); cout << "████"; color(21); cout << "████████"; color(7); cout << "████"; color(21); cout << "██"; color(20); cout << "████";
    Console::SetCursorPosition(cx, cy + 14);   color(21);    cout << "██"; color(20); cout << "██"; color(21); cout << "██"; color(7); cout << "████"; color(21); cout << "████████"; color(7); cout << "████"; color(21); cout << "██"; color(20); cout << "██"; color(21); cout << "██";
    Console::SetCursorPosition(cx, cy + 15);   color(21);    cout << "████████████████████████████";
    Console::SetCursorPosition(cx + 4, cy + 16);   color(21);    cout << "████████"; color(7); cout << "████"; color(21); cout << "████████";
}

void Linguini::BorrarCabeza() {
    for (int j = 0; j < 17; j++) {
        Console::SetCursorPosition(cx, cy + j);
        if (cy + j >= 23) color(17);
        for (int k = 0; k < 28; k++) {
            if (cy + j >= 23) cout << "█";
            else cout << ' ';
        }
    }
}


void Linguini::AnimarCabeza() {
    int xAnt = cx;
    cx = cx + cdir * 2;
    if (cx >= cxMax) { cx = cxMax; cdir = -1; }
    if (cx <= cxMin) { cx = cxMin; cdir = 1; }

    int desplazado = cx - xAnt;
    if (desplazado != 0) {
        int cuantas = desplazado;
        int colBorrar = xAnt;
        if (desplazado < 0) {
            cuantas = -desplazado;
            colBorrar = xAnt + 28 - cuantas;
        }
        for (int j = 0; j < 17; j++) {
            Console::SetCursorPosition(colBorrar, cy + j);
            if (cy + j >= 23) color(17);
            for (int k = 0; k < cuantas; k++) {
                if (cy + j >= 23) cout << "█";
                else cout << ' ';
            }
        }
    }
    DibujarCabeza();
}