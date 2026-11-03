#pragma once





class Comida {
private:
    bool quemada;
    int x;
    int y;
    int ancho;
    int alto;


public:
    Comida(int x, int y, int ancho, int alto);
    virtual ~Comida();
    virtual void dibujarNormal() = 0;
    virtual void dibujarQuemada() = 0;
    void dibujar();
    void quemar();
    bool estaQuemada();
    void Borrar();
    int GetX();
    int GetY();
};

Comida::Comida(int x, int y, int ancho, int alto) {
    quemada = false;
    this->x = x;
    this->y = y;
    this->ancho = ancho;
    this->alto = alto;
}

Comida::~Comida() {
}

void Comida::dibujar() {
    if (quemada) {
        dibujarQuemada();
    }
    else {
        dibujarNormal();
    }
}

void Comida::quemar() {
    quemada = true;
}

bool Comida::estaQuemada() {
    return quemada;
}


void Comida::Borrar() {
    for (int j = 0; j < alto; j++) {
        Console::SetCursorPosition(x, y + j);
        for (int k = 0; k < ancho; k++) {
            cout << ' ';
        }
    }
}

int Comida::GetX() {
    return x;
}

int Comida::GetY() {
    return y;
}