#pragma once


using namespace System;
using namespace std;



class Skinner : public Chef
{
private:
    int x{ 0 }, y{ 0 };
    int cx{ 96 }, cy{ 15 }, cdir{ 1 };     // datos cabeza
    int cxMin{ 96 }, cxMax{ 100 };
public:
    Skinner();
    Skinner(int, int);
    ~Skinner();
    void Dibujar();
    void SetPosicion(int, int);
    void DibujarCabeza();
    void BorrarCabeza();
    void AnimarCabeza();

};
Skinner::Skinner()
{

}

void Skinner::SetPosicion(int pX, int pY)
{
    x = pX;
    y = pY;
}
Skinner::Skinner(int px, int py)
{
    x = px;
    y = py;
}

Skinner::~Skinner()
{
}

void Skinner::Dibujar() {


    color(0); Console::SetCursorPosition(x, y);            cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██";
    color(0); Console::SetCursorPosition(x, y + 1);           cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██";
    color(0); Console::SetCursorPosition(x, y + 2);           cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██";
    color(0); Console::SetCursorPosition(x, y + 3);           cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██";
    color(1); Console::SetCursorPosition(x + 2, y + 4);           cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██";
    color(1); Console::SetCursorPosition(x + 2, y + 5);           cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██";
    color(1); Console::SetCursorPosition(x + 2, y + 6);           cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██";
    color(50); Console::SetCursorPosition(x + 2, y + 7);           cout << "██"; color(7); cout << "██"; color(50); cout << "██████"; color(7); cout << "██"; color(50); cout << "██";
    color(50); Console::SetCursorPosition(x + 2, y + 8);           cout << "████"; color(7); cout << "██"; color(50); cout << "██"; color(7); cout << "██"; color(50); cout << "████";
    color(50); Console::SetCursorPosition(x, y + 9);           cout << "██"; color(50); cout << "██████████████"; color(51); cout << "██";
    color(51); Console::SetCursorPosition(x, y + 10);          cout << "██"; color(50); cout << "████"; color(53); cout << "██"; color(50); cout << "██"; color(53); cout << "██"; color(50); cout << "████"; color(51); cout << "██";
    color(51); Console::SetCursorPosition(x, y + 11);          cout << "████"; color(50); cout << "██████████"; color(51); cout << "████";
    color(50); Console::SetCursorPosition(x + 4, y + 12);          cout << "████"; color(51); cout << "██"; color(50); cout << "████";
    color(50); Console::SetCursorPosition(x + 4, y + 13);          cout << "██"; color(7); cout << "██"; color(50); cout << "██"; color(7); cout << "██"; color(50); cout << "██";
    color(52); Console::SetCursorPosition(x + 2, y + 14);          cout << "██"; color(0); cout << "██"; color(50); cout << "██████"; color(0); cout << "██"; color(51); cout << "██";
    color(52); Console::SetCursorPosition(x, y + 15);          cout << "████"; color(0); cout << "██████████"; color(52); cout << "████";
    color(52); Console::SetCursorPosition(x, y + 16);          cout << "████"; color(0); cout << "██████████"; color(52); cout << "████";
    color(52); Console::SetCursorPosition(x, y + 17);          cout << "██"; color(0); cout << "██████████████"; color(52); cout << "██";
    color(50); Console::SetCursorPosition(x, y + 18);          cout << "██"; color(0); cout << "██████████████"; color(50); cout << "██";
    color(0); Console::SetCursorPosition(x + 2, y + 19);          cout << "██████████████";
    color(0); Console::SetCursorPosition(x + 2, y + 20);          cout << "██████████████";
    color(7); Console::SetCursorPosition(x, y + 21);          cout << "████████"; Console::SetCursorPosition(x + 10, y + 21);color(7); cout << "████████";










}


void Skinner::DibujarCabeza() {

    color(0); Console::SetCursorPosition(cx, cy);            cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██";
    color(0); Console::SetCursorPosition(cx, cy + 1);           cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██";
    color(0); Console::SetCursorPosition(cx, cy + 2);           cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██";
    color(0); Console::SetCursorPosition(cx, cy + 3);           cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██";
    color(1); Console::SetCursorPosition(cx + 2, cy + 4);           cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██";
    color(1); Console::SetCursorPosition(cx + 2, cy + 5);           cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██";
    color(1); Console::SetCursorPosition(cx + 2, cy + 6);           cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██"; color(0); cout << "██"; color(1); cout << "██";
    color(50); Console::SetCursorPosition(cx + 2, cy + 7);           cout << "██"; color(7); cout << "██"; color(50); cout << "██████"; color(7); cout << "██"; color(50); cout << "██";
    color(50); Console::SetCursorPosition(cx + 2, cy + 8);           cout << "████"; color(7); cout << "██"; color(50); cout << "██"; color(7); cout << "██"; color(50); cout << "████";
    color(50); Console::SetCursorPosition(cx, cy + 9);           cout << "██"; color(50); cout << "██████████████"; color(51); cout << "██";
    color(51); Console::SetCursorPosition(cx, cy + 10);          cout << "██"; color(50); cout << "████"; color(53); cout << "██"; color(50); cout << "██"; color(53); cout << "██"; color(50); cout << "████"; color(51); cout << "██";
    color(51); Console::SetCursorPosition(cx, cy + 11);          cout << "████"; color(50); cout << "██████████"; color(51); cout << "████";
    color(50); Console::SetCursorPosition(cx + 4, cy + 12);          cout << "████"; color(51); cout << "██"; color(50); cout << "████";
    color(50); Console::SetCursorPosition(cx + 4, cy + 13);          cout << "██"; color(7); cout << "██"; color(50); cout << "██"; color(7); cout << "██"; color(50); cout << "██";
}

void Skinner::BorrarCabeza() {
    for (int j = 0; j < 14; j++) {
        Console::SetCursorPosition(cx, cy + j);
        for (int k = 0; k < 18; k++) {
            cout << ' ';
        }
    }
}


void Skinner::AnimarCabeza() {
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
            colBorrar = xAnt + 18 - cuantas;
        }
        for (int j = 0; j < 14; j++) {
            Console::SetCursorPosition(colBorrar, cy + j);
            for (int k = 0; k < cuantas; k++) {
                cout << ' ';
            }
        }
    }
    DibujarCabeza();
}