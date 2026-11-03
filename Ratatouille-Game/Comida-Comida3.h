#pragma once

class Comida3 : public Comida {
public:
    Comida3(int x, int y);
    void dibujarNormal();
    void dibujarQuemada();
};

Comida3::Comida3(int x, int y) : Comida(x, y, 60, 11) {
}

void Comida3::dibujarNormal() {
    int x = GetX();
    int y = GetY();

    Console::SetCursorPosition(x + 32, y); color(35); cout << "██████";

    Console::SetCursorPosition(x + 20, y + 1); color(35); cout << "██";
    Console::SetCursorPosition(x + 22, y + 1); color(36); cout << "████";
    Console::SetCursorPosition(x + 30, y + 1); color(35); cout << "██";
    Console::SetCursorPosition(x + 32, y + 1); color(36); cout << "██████████";

    Console::SetCursorPosition(x + 12, y + 2); color(26); cout << "██████████";
    Console::SetCursorPosition(x + 22, y + 2); color(35); cout << "████";
    Console::SetCursorPosition(x + 26, y + 2); color(36); cout << "██████████████";
    Console::SetCursorPosition(x + 40, y + 2); color(34); cout << "██";
    Console::SetCursorPosition(x + 42, y + 2); color(36); cout << "██";
    Console::SetCursorPosition(x + 44, y + 2); color(26); cout << "██████";

    Console::SetCursorPosition(x + 6, y + 3); color(26); cout << "████████████████████";
    Console::SetCursorPosition(x + 26, y + 3); color(36); cout << "████████";
    Console::SetCursorPosition(x + 34, y + 3); color(35); cout << "████";
    Console::SetCursorPosition(x + 38, y + 3); color(36); cout << "████████";
    Console::SetCursorPosition(x + 46, y + 3); color(26); cout << "████████";

    Console::SetCursorPosition(x, y + 4); color(7); cout << "██████";
    Console::SetCursorPosition(x + 6, y + 4); color(23); cout << "████████████████████████████████████████████████";
    Console::SetCursorPosition(x + 54, y + 4); color(7); cout << "██████";

    Console::SetCursorPosition(x + 2, y + 5); color(7); cout << "████";
    Console::SetCursorPosition(x + 6, y + 5); color(23); cout << "████████████████████████████████████████████████";
    Console::SetCursorPosition(x + 54, y + 5); color(7); cout << "████";

    Console::SetCursorPosition(x + 2, y + 6); color(7); cout << "████";
    Console::SetCursorPosition(x + 6, y + 6); color(23); cout << "████████████████████████████████████████████████";
    Console::SetCursorPosition(x + 54, y + 6); color(7); cout << "████";

    Console::SetCursorPosition(x + 6, y + 7); color(23); cout << "████████████████████████████████████████████████";

    Console::SetCursorPosition(x + 10, y + 8); color(23); cout << "████████████████████████████████████████";

    Console::SetCursorPosition(x + 10, y + 9); color(23); cout << "████████████████████████████████████████";

    Console::SetCursorPosition(x + 10, y + 10); color(23); cout << "████████████████████████████████████████";

}

void Comida3::dibujarQuemada() {
    int x = GetX();
    int y = GetY();

    Console::SetCursorPosition(x + 32, y); color(45); cout << "██████";

    Console::SetCursorPosition(x + 20, y + 1); color(45); cout << "██";
    Console::SetCursorPosition(x + 22, y + 1); color(46); cout << "████";
    Console::SetCursorPosition(x + 30, y + 1); color(45); cout << "██";
    Console::SetCursorPosition(x + 32, y + 1); color(46); cout << "██████████";

    Console::SetCursorPosition(x + 12, y + 2); color(26); cout << "██████████";
    Console::SetCursorPosition(x + 22, y + 2); color(45); cout << "████";
    Console::SetCursorPosition(x + 26, y + 2); color(46); cout << "██████████████";
    Console::SetCursorPosition(x + 40, y + 2); color(44); cout << "██";
    Console::SetCursorPosition(x + 42, y + 2); color(46); cout << "██";
    Console::SetCursorPosition(x + 44, y + 2); color(26); cout << "██████";

    Console::SetCursorPosition(x + 6, y + 3); color(26); cout << "████████████████████";
    Console::SetCursorPosition(x + 26, y + 3); color(46); cout << "████████";
    Console::SetCursorPosition(x + 34, y + 3); color(45); cout << "████";
    Console::SetCursorPosition(x + 38, y + 3); color(46); cout << "████████";
    Console::SetCursorPosition(x + 46, y + 3); color(26); cout << "████████";

    Console::SetCursorPosition(x, y + 4); color(7); cout << "██████";
    Console::SetCursorPosition(x + 6, y + 4); color(23); cout << "████████████████████████████████████████████████";
    Console::SetCursorPosition(x + 54, y + 4); color(7); cout << "██████";

    Console::SetCursorPosition(x + 2, y + 5); color(7); cout << "████";
    Console::SetCursorPosition(x + 6, y + 5); color(23); cout << "████████████████████████████████████████████████";
    Console::SetCursorPosition(x + 54, y + 5); color(7); cout << "████";

    Console::SetCursorPosition(x + 2, y + 6); color(7); cout << "████";
    Console::SetCursorPosition(x + 6, y + 6); color(23); cout << "████████████████████████████████████████████████";
    Console::SetCursorPosition(x + 54, y + 6); color(7); cout << "████";

    Console::SetCursorPosition(x + 6, y + 7); color(23); cout << "████████████████████████████████████████████████";

    Console::SetCursorPosition(x + 10, y + 8); color(23); cout << "████████████████████████████████████████";

    Console::SetCursorPosition(x + 10, y + 9); color(23); cout << "████████████████████████████████████████";

    Console::SetCursorPosition(x + 10, y + 10); color(23); cout << "████████████████████████████████████████";
}