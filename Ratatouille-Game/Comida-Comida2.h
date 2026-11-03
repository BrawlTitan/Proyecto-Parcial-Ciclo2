#pragma once

class Comida2 : public Comida {
public:
    Comida2(int x, int y);
    void dibujarNormal();
    void dibujarQuemada();
};

Comida2::Comida2(int x, int y) : Comida(x, y, 60, 12) {
}

void Comida2::dibujarNormal() {
    int x = GetX();
    int y = GetY();


    color(28);                  Console::SetCursorPosition(x + 44, y);                                              cout << "██";
    color(28);                  Console::SetCursorPosition(x + 14, y + 1);                        cout << "██";color(28); Console::SetCursorPosition(x + 18, y + 1);cout << "██";color(28); Console::SetCursorPosition(x + 22, y + 1);cout << "██"; color(28); Console::SetCursorPosition(x + 40, y + 1);cout << "████████";
    color(28);                  Console::SetCursorPosition(x + 16, y + 2);                          cout << "██████";color(31); Console::SetCursorPosition(x + 38, y + 2);cout << "██████";color(28);cout << "██";
    color(29);                  Console::SetCursorPosition(x + 12, y + 3);                      cout << "██";color(30);cout << "██████████";color(29);cout << "████████████";color(31);cout << "██████";color(32);cout << "██";color(29);cout << "██████";
    color(29);                  Console::SetCursorPosition(x + 6, y + 4);                 cout << "██████";color(30);cout << "██████████████";color(29);cout << "████████";color(31);cout << "██████";color(32);cout << "██";color(29);cout << "████████████";
    color(7);                  Console::SetCursorPosition(x + 0, y + 5);           cout << "██████";color(26);cout << "████████████████████████████████████████████████";color(7);cout << "██████";
    color(7);                  Console::SetCursorPosition(x + 2, y + 6);             cout << "████";color(26);cout << "████████████████████████████████████████████████";color(7);cout << "████";
    color(7);                  Console::SetCursorPosition(x + 2, y + 7);             cout << "████";color(26);cout << "████████████████████████████████████████████████";color(7);cout << "████";
    color(26);                  Console::SetCursorPosition(x + 6, y + 8);                cout << "████████████████████████████████████████████████";
    color(26);                  Console::SetCursorPosition(x + 10, y + 9);                   cout << "████████████████████████████████████████";
    color(26);                  Console::SetCursorPosition(x + 10, y + 10);                    cout << "████████████████████████████████████████";
    color(26);                  Console::SetCursorPosition(x + 10, y + 11);                    cout << "████████████████████████████████████████";

}

void Comida2::dibujarQuemada() {
    int x = GetX();
    int y = GetY();

    color(39);                  Console::SetCursorPosition(x + 44, y);                                              cout << "██";
    color(39);                  Console::SetCursorPosition(x + 14, y + 1);                        cout << "██";color(39); Console::SetCursorPosition(x + 18, y + 1);cout << "██";color(39); Console::SetCursorPosition(x + 22, y + 1);cout << "██"; color(39); Console::SetCursorPosition(x + 40, y + 1);cout << "████████";
    color(39);                  Console::SetCursorPosition(x + 16, y + 2);                          cout << "██████";color(42); Console::SetCursorPosition(x + 38, y + 2);cout << "██████";color(39);cout << "██";
    color(40);                  Console::SetCursorPosition(x + 12, y + 3);                      cout << "██";color(41);cout << "██████████";color(40);cout << "████████████";color(42);cout << "██████";color(43);cout << "██";color(40);cout << "██████";
    color(40);                  Console::SetCursorPosition(x + 6, y + 4);                 cout << "██████";color(41);cout << "██████████████";color(40);cout << "████████";color(42);cout << "██████";color(43);cout << "██";color(40);cout << "████████████";
    color(7);                  Console::SetCursorPosition(x + 0, y + 5);           cout << "██████";color(26);cout << "████████████████████████████████████████████████";color(7);cout << "██████";
    color(7);                  Console::SetCursorPosition(x + 2, y + 6);             cout << "████";color(26);cout << "████████████████████████████████████████████████";color(7);cout << "████";
    color(7);                  Console::SetCursorPosition(x + 2, y + 7);             cout << "████";color(26);cout << "████████████████████████████████████████████████";color(7);cout << "████";
    color(26);                  Console::SetCursorPosition(x + 6, y + 8);                cout << "████████████████████████████████████████████████";
    color(26);                  Console::SetCursorPosition(x + 10, y + 9);                   cout << "████████████████████████████████████████";
    color(26);                  Console::SetCursorPosition(x + 10, y + 10);                    cout << "████████████████████████████████████████";
    color(26);                  Console::SetCursorPosition(x + 10, y + 11);                    cout << "████████████████████████████████████████";

}