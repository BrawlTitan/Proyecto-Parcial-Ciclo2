#pragma once



using namespace System;
using namespace std;

class ListaIngredientes
{
private:
    int total;
    int ticksPorMovimiento;

    Ingrediente* actual;
    int recolectados;
    int tickActual;
    int ultimoTipo;

    void GenerarNuevo();
    bool HayColision(Remy* remy);
    bool DebeMoverse();

public:
    ListaIngredientes();
    ~ListaIngredientes();

    void Actualizar(Remy* remy, int* contador);
    bool Termino();
    int GetRecolectados();
};

ListaIngredientes::ListaIngredientes()
{
    total = 7;
    ticksPorMovimiento = 400;
    recolectados = 0;
    tickActual = 0;
    actual = nullptr;
    ultimoTipo = 0;
    GenerarNuevo();
}

ListaIngredientes::~ListaIngredientes()
{
    if (actual != nullptr)
    {
        delete actual;
        actual = nullptr;
    }
}

bool ListaIngredientes::DebeMoverse()
{
    tickActual++;
    if (tickActual >= ticksPorMovimiento)
    {
        tickActual = 0;
        return true;
    }
    return false;
}

void ListaIngredientes::GenerarNuevo()
{
    if (actual != nullptr)
    {
        ultimoTipo = actual->GetTipo();
        delete actual;
        actual = nullptr;
    }

    if (recolectados < total)
    {

        int px = rand() % (120 - 16 + 1);
        int py = rand() % (26 - 9 + 1);

        actual = new Ingrediente(px, py, ultimoTipo);
    }
}

bool ListaIngredientes::HayColision(Remy* remy)
{
    if (actual == nullptr) return false;
    if (remy == nullptr) return false;

    int rx = remy->GetX();
    int ry = remy->GetY();
    int rAncho = remy->GetAncho();
    int rAlto = remy->GetAlto();

    int ix = actual->GetX();
    int iy = actual->GetY();
    int iAncho = actual->GetAncho();
    int iAlto = actual->GetAlto();


    if (rx < ix + iAncho && rx + rAncho > ix &&
        ry < iy + iAlto && ry + rAlto > iy)
    {
        return true;
    }
    return false;
}

void ListaIngredientes::Actualizar(Remy* remy, int* contador)
{
    if (actual == nullptr) return;

    if (DebeMoverse())
    {
        actual->Borrar();
        actual->Mover();
        actual->Dibujar();
    }

    if (HayColision(remy))
    {
        actual->Borrar();
        *contador = *contador + 1;
        recolectados++;
        GenerarNuevo();
    }
}

bool ListaIngredientes::Termino()
{
    return recolectados >= total;
}

int ListaIngredientes::GetRecolectados() {
    return recolectados;
}