#pragma once


class PatronTeclas {
private:
    int secuencia[5];
    int respuesta[5];
    int acumAnim;

public:
    PatronTeclas();
    void generar();
    void dibujarTecla(int tecla, int x, int y);
    void Esperar(int, Linguini*);
    void mostrarSecuencia(Linguini*);
    void pedirRespuesta(Linguini*);
    int contarErrores();
};

PatronTeclas::PatronTeclas() {
    acumAnim = 0;
    for (int i = 0; i < 5; i++) {
        secuencia[i] = 0;
        respuesta[i] = 0;
    }
}


void PatronTeclas::dibujarTecla(int tecla, int x, int y) {
    switch (tecla) {
    case 0:

        Console::SetCursorPosition(x + 4, y);       color(23);      cout << "████████████████";
        Console::SetCursorPosition(x + 2, y + 1);   color(23);    cout << "████████████████████";
        Console::SetCursorPosition(x, y + 2);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 8, y + 2);    color(1);     cout << "████████";
        Console::SetCursorPosition(x, y + 3);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 3);    color(1);     cout << "████"; Console::SetCursorPosition(x + 14, y + 3);cout << "████";
        Console::SetCursorPosition(x, y + 4);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 4);    color(1);     cout << "████";Console::SetCursorPosition(x + 14, y + 4);cout << "████";
        Console::SetCursorPosition(x, y + 5);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 5);    color(1);     cout << "████";Console::SetCursorPosition(x + 14, y + 5);cout << "████";
        Console::SetCursorPosition(x, y + 6);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 6);    color(1);     cout << "████";Console::SetCursorPosition(x + 14, y + 6);cout << "████";
        Console::SetCursorPosition(x, y + 7);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 7);    color(1);     cout << "████";Console::SetCursorPosition(x + 14, y + 7);cout << "████";
        Console::SetCursorPosition(x, y + 8);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 8);    color(1);     cout << "████";Console::SetCursorPosition(x + 14, y + 8);cout << "████";
        Console::SetCursorPosition(x, y + 9);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 8, y + 9);    color(1);     cout << "████████";
        Console::SetCursorPosition(x + 2, y + 10);  color(23);    cout << "████████████████████";
        Console::SetCursorPosition(x + 4, y + 11);  color(23);      cout << "████████████████";





        break;
    case 1:

        Console::SetCursorPosition(x + 4, y);        color(23);      cout << "████████████████";      Console::SetCursorPosition(x, y);        color(1);     cout << "";
        Console::SetCursorPosition(x + 2, y + 1);   color(23);    cout << "████████████████████";     Console::SetCursorPosition(x, y + 1);        color(1);     cout << "";
        Console::SetCursorPosition(x, y + 2);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 10, y + 2);        color(1);       cout << "████";
        Console::SetCursorPosition(x, y + 3);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 8, y + 3);        color(1);     cout << "██████";
        Console::SetCursorPosition(x, y + 4);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 10, y + 4);        color(1);       cout << "████";
        Console::SetCursorPosition(x, y + 5);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 10, y + 5);        color(1);       cout << "████";
        Console::SetCursorPosition(x, y + 6);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 10, y + 6);        color(1);       cout << "████";
        Console::SetCursorPosition(x, y + 7);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 10, y + 7);        color(1);       cout << "████";
        Console::SetCursorPosition(x, y + 8);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 10, y + 8);        color(1);       cout << "████";
        Console::SetCursorPosition(x, y + 9);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 8, y + 9);        color(1);     cout << "████████";
        Console::SetCursorPosition(x + 2, y + 10);    color(23);    cout << "████████████████████";   Console::SetCursorPosition(x, y + 10);        color(1);     cout << "";
        Console::SetCursorPosition(x + 4, y + 11);  color(23);      cout << "████████████████";       Console::SetCursorPosition(x, y + 11);       color(1);     cout << "";

        break;
    case 2:

        Console::SetCursorPosition(x + 4, y);        color(23);      cout << "████████████████";      Console::SetCursorPosition(x, y);        color(1);     cout << "";
        Console::SetCursorPosition(x + 2, y + 1);   color(23);    cout << "████████████████████";     Console::SetCursorPosition(x, y + 1);      color(1);     cout << "";
        Console::SetCursorPosition(x, y + 2);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 8, y + 2);    color(1);     cout << "████████";
        Console::SetCursorPosition(x, y + 3);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 3);    color(1);     cout << "████";Console::SetCursorPosition(x + 14, y + 3); cout << "████";
        Console::SetCursorPosition(x, y + 4);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 4);    color(1);     cout << "████";Console::SetCursorPosition(x + 14, y + 4); cout << "████";
        Console::SetCursorPosition(x, y + 5);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 12, y + 5);   color(1);     cout << "████";
        Console::SetCursorPosition(x, y + 6);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 10, y + 6);   color(1);     cout << "████";
        Console::SetCursorPosition(x, y + 7);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 8, y + 7);    color(1);     cout << "████";
        Console::SetCursorPosition(x, y + 8);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 8);    color(1);     cout << "████";
        Console::SetCursorPosition(x, y + 9);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 9);    color(1);     cout << "████████████";
        Console::SetCursorPosition(x + 2, y + 10);    color(23);    cout << "████████████████████";   Console::SetCursorPosition(x, y + 10);     color(1);     cout << "";
        Console::SetCursorPosition(x + 4, y + 11);  color(23);      cout << "████████████████";       Console::SetCursorPosition(x, y + 11);     color(1);     cout << "";
        break;
    case 3:

        Console::SetCursorPosition(x + 4, y);        color(23);      cout << "████████████████";      Console::SetCursorPosition(x, y);            color(1);     cout << "";
        Console::SetCursorPosition(x + 2, y + 1);   color(23);    cout << "████████████████████";     Console::SetCursorPosition(x + 1, y + 1);        color(1);     cout << "";
        Console::SetCursorPosition(x, y + 2);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 8, y + 2);        color(1);             cout << "████████";
        Console::SetCursorPosition(x, y + 3);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 3);    color(1);           cout << "████";  Console::SetCursorPosition(x + 14, y + 3); cout << "████";
        Console::SetCursorPosition(x, y + 4);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 14, y + 4);       color(1);                   cout << "████";
        Console::SetCursorPosition(x, y + 5);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 10, y + 5);       color(1);               cout << "██████";
        Console::SetCursorPosition(x, y + 6);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 10, y + 6);       color(1);               cout << "██████";
        Console::SetCursorPosition(x, y + 7);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 14, y + 7);   color(1);                   cout << "████";
        Console::SetCursorPosition(x, y + 8);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 8);    color(1);           cout << "████";  Console::SetCursorPosition(x + 14, y + 8); cout << "████";
        Console::SetCursorPosition(x, y + 9);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 8, y + 9);    color(1);             cout << "████████";
        Console::SetCursorPosition(x + 2, y + 10);    color(23);    cout << "████████████████████";   Console::SetCursorPosition(x + 10, y + 10);      color(1);     cout << "";
        Console::SetCursorPosition(x + 4, y + 11);  color(23);      cout << "████████████████";       Console::SetCursorPosition(x + 11, y + 11);      color(1);     cout << "";
        break;
    case 4:

        Console::SetCursorPosition(x + 4, y);        color(23);      cout << "████████████████";      Console::SetCursorPosition(x, y);          color(1);     cout << "";
        Console::SetCursorPosition(x + 2, y + 1);   color(23);    cout << "████████████████████";     Console::SetCursorPosition(x, y + 1);        color(1);     cout << "";
        Console::SetCursorPosition(x, y + 2);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 2);        color(1);     cout << "████"; Console::SetCursorPosition(x + 14, y + 2); cout << "████";
        Console::SetCursorPosition(x, y + 3);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 3);        color(1);     cout << "████"; Console::SetCursorPosition(x + 14, y + 3); cout << "████";
        Console::SetCursorPosition(x, y + 4);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 4);        color(1);     cout << "████"; Console::SetCursorPosition(x + 14, y + 4); cout << "████";
        Console::SetCursorPosition(x, y + 5);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 5);        color(1);     cout << "████"; Console::SetCursorPosition(x + 14, y + 5); cout << "████";
        Console::SetCursorPosition(x, y + 6);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 6);        color(1);     cout << "████████████";
        Console::SetCursorPosition(x, y + 7);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 14, y + 7);        color(1);     cout << "████";
        Console::SetCursorPosition(x, y + 8);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 14, y + 8);        color(1);     cout << "████";
        Console::SetCursorPosition(x, y + 9);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 14, y + 9);        color(1);     cout << "████";
        Console::SetCursorPosition(x + 2, y + 10);    color(23);    cout << "████████████████████";   Console::SetCursorPosition(x, y + 10);       color(1);     cout << "";
        Console::SetCursorPosition(x + 4, y + 11);  color(23);      cout << "████████████████";       Console::SetCursorPosition(x, y + 11);       color(1);     cout << "";
        break;
    case 5:

        Console::SetCursorPosition(x + 4, y);        color(23);      cout << "████████████████";       Console::SetCursorPosition(x, y);        color(1);     cout << "";
        Console::SetCursorPosition(x + 2, y + 1);   color(23);    cout << "████████████████████";     Console::SetCursorPosition(x, y + 1);        color(1);    cout << "";
        Console::SetCursorPosition(x, y + 2);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 2);      color(1);          cout << "███████████";
        Console::SetCursorPosition(x, y + 3);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 3);      color(1);          cout << "████";
        Console::SetCursorPosition(x, y + 4);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 4);      color(1);          cout << "████";
        Console::SetCursorPosition(x, y + 5);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 5);      color(1);          cout << "█████████";
        Console::SetCursorPosition(x, y + 6);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 14, y + 6);     color(1);                  cout << "████";
        Console::SetCursorPosition(x, y + 7);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 14, y + 7);     color(1);                  cout << "████";
        Console::SetCursorPosition(x, y + 8);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 8);  color(1);          cout << "████";Console::SetCursorPosition(x + 14, y + 8); cout << "████";
        Console::SetCursorPosition(x, y + 9);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 8, y + 9);      color(1);            cout << "████████";
        Console::SetCursorPosition(x + 2, y + 10);    color(23);    cout << "████████████████████";     Console::SetCursorPosition(x, y);        color(1);     cout << "";
        Console::SetCursorPosition(x + 4, y + 11);  color(23);      cout << "████████████████";       Console::SetCursorPosition(x, y);       color(1);     cout << "";
        break;
    case 6:

        Console::SetCursorPosition(x + 4, y);        color(23);      cout << "████████████████";      Console::SetCursorPosition(x, y);           color(1);     cout << "";
        Console::SetCursorPosition(x + 2, y + 1);   color(23);    cout << "████████████████████";     Console::SetCursorPosition(x, y + 1);         color(1);     cout << "";
        Console::SetCursorPosition(x, y + 2);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 8, y + 2);        color(1);     cout << "████████";
        Console::SetCursorPosition(x, y + 3);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 3);   color(1);     cout << "████";Console::SetCursorPosition(x + 14, y + 3); cout << "████";
        Console::SetCursorPosition(x, y + 4);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 4);       color(1);     cout << "████";
        Console::SetCursorPosition(x, y + 5);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 5);       color(1);     cout << "██████████";
        Console::SetCursorPosition(x, y + 6);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 6);    color(1);    cout << "████";Console::SetCursorPosition(x + 14, y + 6); cout << "████";
        Console::SetCursorPosition(x, y + 7);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 7);    color(1);    cout << "████";Console::SetCursorPosition(x + 14, y + 7); cout << "████";
        Console::SetCursorPosition(x, y + 8);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 8);    color(1);    cout << "████";Console::SetCursorPosition(x + 14, y + 8); cout << "████";
        Console::SetCursorPosition(x, y + 9);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 8, y + 9);        color(1);    cout << "████████";
        Console::SetCursorPosition(x + 2, y + 10);    color(23);    cout << "████████████████████";   Console::SetCursorPosition(x, y + 10);       color(1);     cout << "";
        Console::SetCursorPosition(x + 4, y + 11);  color(23);      cout << "████████████████";       Console::SetCursorPosition(x, y + 11);       color(1);     cout << "";
        break;
    case 7:

        Console::SetCursorPosition(x + 4, y);        color(23);      cout << "████████████████";      Console::SetCursorPosition(x, y);          color(1);     cout << "";
        Console::SetCursorPosition(x + 2, y + 1);   color(23);    cout << "████████████████████";     Console::SetCursorPosition(x, y + 1);        color(1);     cout << "";
        Console::SetCursorPosition(x, y + 2);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 2);      color(1);     cout << "████████████";
        Console::SetCursorPosition(x, y + 3);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 3);  color(1);     cout << "████";Console::SetCursorPosition(x + 14, y + 3); cout << "████";
        Console::SetCursorPosition(x, y + 4);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 14, y + 4);        color(1);     cout << "████";
        Console::SetCursorPosition(x, y + 5);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 12, y + 5);        color(1);     cout << "████";
        Console::SetCursorPosition(x, y + 6);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 10, y + 6);        color(1);     cout << "████";
        Console::SetCursorPosition(x, y + 7);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 10, y + 7);        color(1);     cout << "████";
        Console::SetCursorPosition(x, y + 8);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 8, y + 8);        color(1);     cout << "████";
        Console::SetCursorPosition(x, y + 9);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 8, y + 9);        color(1);     cout << "████";
        Console::SetCursorPosition(x + 2, y + 10);    color(23);    cout << "████████████████████";   Console::SetCursorPosition(x, y + 10);       color(1);     cout << "";
        Console::SetCursorPosition(x + 4, y + 11);  color(23);      cout << "████████████████";       Console::SetCursorPosition(x, y + 11);       color(1);     cout << "";
        break;
    case 8:

        Console::SetCursorPosition(x + 4, y);       color(23);      cout << "████████████████";       Console::SetCursorPosition(x, y);        color(1);     cout << "";
        Console::SetCursorPosition(x + 2, y + 1);   color(23);    cout << "████████████████████";     Console::SetCursorPosition(x, y + 1);        color(1);     cout << "";
        Console::SetCursorPosition(x, y + 2);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 8, y + 2);    color(1);     cout << "████████";
        Console::SetCursorPosition(x, y + 3);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 3);    color(1);     cout << "████"; Console::SetCursorPosition(x + 14, y + 3);cout << "████";
        Console::SetCursorPosition(x, y + 4);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 4);    color(1);     cout << "████";Console::SetCursorPosition(x + 14, y + 4);cout << "████";
        Console::SetCursorPosition(x, y + 5);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 8, y + 5);    color(1);     cout << "████████";
        Console::SetCursorPosition(x, y + 6);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 6);    color(1);     cout << "████";Console::SetCursorPosition(x + 14, y + 6);cout << "████";
        Console::SetCursorPosition(x, y + 7);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 7);    color(1);     cout << "████";Console::SetCursorPosition(x + 14, y + 7);cout << "████";
        Console::SetCursorPosition(x, y + 8);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 8);    color(1);     cout << "████";Console::SetCursorPosition(x + 14, y + 8);cout << "████";
        Console::SetCursorPosition(x, y + 9);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 8, y + 9);    color(1);     cout << "████████";
        Console::SetCursorPosition(x + 2, y + 10);  color(23);    cout << "████████████████████";     Console::SetCursorPosition(x + 8, y);   color(1);
        Console::SetCursorPosition(x + 4, y + 11);  color(23);      cout << "████████████████";       Console::SetCursorPosition(x, y);        color(1);     cout << "";



        break;
    case 9:

        Console::SetCursorPosition(x + 4, y);        color(23);      cout << "████████████████";      Console::SetCursorPosition(x, y);          color(1);      cout << "";
        Console::SetCursorPosition(x + 2, y + 1);   color(23);    cout << "████████████████████";     Console::SetCursorPosition(x, y + 1);        color(1);      cout << "";
        Console::SetCursorPosition(x, y + 2);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 8, y + 2);        color(1);      cout << "████████";
        Console::SetCursorPosition(x, y + 3);       color(23);  cout << "████████████████████████";  Console::SetCursorPosition(x + 6, y + 3);    color(1);     cout << "████"; Console::SetCursorPosition(x + 14, y + 3);cout << "████";
        Console::SetCursorPosition(x, y + 4);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 4);    color(1);     cout << "████";Console::SetCursorPosition(x + 14, y + 4);cout << "████";
        Console::SetCursorPosition(x, y + 5);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 5);        color(1);      cout << "████████████";
        Console::SetCursorPosition(x, y + 6);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 14, y + 6);        color(1);      cout << "████";
        Console::SetCursorPosition(x, y + 7);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 14, y + 7);        color(1);      cout << "████";
        Console::SetCursorPosition(x, y + 8);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 6, y + 8);       color(1);     cout << "████"; Console::SetCursorPosition(x + 14, y + 8);cout << "████";
        Console::SetCursorPosition(x, y + 9);       color(23);  cout << "████████████████████████";   Console::SetCursorPosition(x + 8, y + 9);        color(1);      cout << "████████";
        Console::SetCursorPosition(x + 2, y + 10);    color(23);    cout << "████████████████████";   Console::SetCursorPosition(x, y + 10);       color(1);      cout << "";
        Console::SetCursorPosition(x + 4, y + 11);  color(23);      cout << "████████████████";       Console::SetCursorPosition(x, y + 11);       color(1);      cout << "";
        break;
    }
}


void PatronTeclas::generar() {
    for (int i = 0; i < 5; i++) {
        int j;
        do {
            secuencia[i] = rand() % 10;
            for (j = 0; j < i && secuencia[j] != secuencia[i]; j++) {
            }
        } while (j < i);
    }
}


void PatronTeclas::Esperar(int pMilisegundos, Linguini* pLinguini) {
    int transcurrido = 0;

    while (transcurrido < pMilisegundos) {
        Sleep(20);
        transcurrido += 20;
        acumAnim += 20;

        if (acumAnim >= 200) {
            acumAnim = 0;
            pLinguini->AnimarCabeza();
        }
    }
}


void PatronTeclas::mostrarSecuencia(Linguini* pLinguini) {
    for (int i = 0; i < 5; i++) {
        dibujarTecla(secuencia[i], 88, 1);
        Esperar(1000, pLinguini);


        for (int l = 0; l < 12; l++) {
            Console::SetCursorPosition(88, 1 + l);
            for (int k = 0; k < 24; k++) {
                cout << ' ';
            }
        }
        Esperar(300, pLinguini);
    }
}


void PatronTeclas::pedirRespuesta(Linguini* pLinguini) {
    Console::SetCursorPosition(88, 0);
    cout << "Ingresa las teclas (0 al 9)";

    for (int i = 0; i < 5; i++) {
        char c;
        do {
            // linguini se mueva miestras espera tecla
            while (!_kbhit()) {
                Esperar(20, pLinguini);
            }
            c = _getch();
        } while (c < '0' || c > '9');

        respuesta[i] = c - '0';


        for (int l = 0; l < 12; l++) {
            Console::SetCursorPosition(88, 1 + l);
            for (int k = 0; k < 24; k++) {
                cout << ' ';
            }
        }


        dibujarTecla(respuesta[i], 88, 1);
    }
    Esperar(800, pLinguini);


    for (int l = 0; l < 13; l++) {
        Console::SetCursorPosition(88, l);
        for (int k = 0; k < 30; k++) {
            cout << ' ';
        }
    }
}


int PatronTeclas::contarErrores() {
    int errores = 0;
    for (int i = 0; i < 5; i++) {
        if (respuesta[i] != secuencia[i]) {
            errores++;
        }
    }
    return errores;
}