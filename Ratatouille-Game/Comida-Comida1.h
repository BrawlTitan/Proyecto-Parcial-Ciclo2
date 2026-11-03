#pragma once 

class Sarten : public Comida {
public:
    Sarten(int x, int y);
    void dibujarNormal();
    void dibujarQuemada();
};

Sarten::Sarten(int x, int y) : Comida(x, y, 64, 11) {
}

void Sarten::dibujarNormal() {
    int x = GetX();
    int y = GetY();

    color(25);            Console::SetCursorPosition(x + 46, y);                                                     cout << "██████";
    color(25);            Console::SetCursorPosition(x + 42, y + 1);                                               cout << "████████████";
    color(26);            Console::SetCursorPosition(x + 22, y + 2);                           cout << "██████"; color(27); cout << "████"; color(26); cout << "████████"; color(25); cout << "████████████████"; color(26); cout << "████";
    color(7);             Console::SetCursorPosition(x, y + 3);          cout << "████████████████████"; color(26); cout << "██████████"; color(27); cout << "██████████"; color(25); cout << "████████████████"; color(26); cout << "██████";
    color(7);             Console::SetCursorPosition(x, y + 4);          cout << "████████████████"; color(26); cout << "████████████████████████████████████████████████";
    color(7);             Console::SetCursorPosition(x, y + 5);          cout << "████████████████"; color(26); cout << "████████████████████████████████████████████████";
    color(26);            Console::SetCursorPosition(x + 16, y + 6);                       cout << "████████████████████████████████████████████████";
    color(26);            Console::SetCursorPosition(x + 16, y + 7);                       cout << "████████████████████████████████████████████████";
    color(26);            Console::SetCursorPosition(x + 20, y + 8);                           cout << "████████████████████████████████████████";
    color(26);            Console::SetCursorPosition(x + 20, y + 9);                           cout << "████████████████████████████████████████";
    color(26);            Console::SetCursorPosition(x + 20, y + 10);                           cout << "████████████████████████████████████████";


}

void Sarten::dibujarQuemada() {
    int x = GetX();
    int y = GetY();

    color(38);            Console::SetCursorPosition(x + 46, y);                                                     cout << "██████";
    color(38);            Console::SetCursorPosition(x + 42, y + 1);                                               cout << "████████████";
    color(26);            Console::SetCursorPosition(x + 22, y + 2);                           cout << "██████"; color(37); cout << "████"; color(26); cout << "████████"; color(38); cout << "████████████████"; color(26); cout << "████";
    color(7);             Console::SetCursorPosition(x, y + 3);          cout << "████████████████████"; color(26); cout << "██████████"; color(37); cout << "██████████"; color(38); cout << "████████████████"; color(26); cout << "██████";
    color(7);             Console::SetCursorPosition(x, y + 4);          cout << "████████████████"; color(26); cout << "████████████████████████████████████████████████";
    color(7);             Console::SetCursorPosition(x, y + 5);          cout << "████████████████"; color(26); cout << "████████████████████████████████████████████████";
    color(26);            Console::SetCursorPosition(x + 16, y + 6);                       cout << "████████████████████████████████████████████████";
    color(26);            Console::SetCursorPosition(x + 16, y + 7);                       cout << "████████████████████████████████████████████████";
    color(26);            Console::SetCursorPosition(x + 20, y + 8);                           cout << "████████████████████████████████████████";
    color(26);            Console::SetCursorPosition(x + 20, y + 9);                           cout << "████████████████████████████████████████";
    color(26);            Console::SetCursorPosition(x + 20, y + 10);                           cout << "████████████████████████████████████████";

}