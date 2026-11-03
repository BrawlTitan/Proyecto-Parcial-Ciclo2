#pragma once

using namespace System;
using namespace std;


class ListaAgujeros
{
private:
    Agujero** arreglo;
    int cantidad;
    int capacidad;

public:
    ListaAgujeros(int);
    ~ListaAgujeros();

    void Agregar(Agujero*);
    Agujero* Obtener(int);
    int GetCantidad();

    void DibujarTodos();
};

ListaAgujeros::ListaAgujeros(int pCapacidad)
{
    this->capacidad = pCapacidad;
    this->cantidad = 0;
    this->arreglo = new Agujero * [capacidad];
}

ListaAgujeros::~ListaAgujeros()
{
    for (int i = 0; i < cantidad; i++)
    {
        delete arreglo[i];
    }
    delete[] arreglo;
}

void ListaAgujeros::Agregar(Agujero* pAgujero)
{
    if (cantidad < capacidad)
    {
        arreglo[cantidad] = pAgujero;
        cantidad++;
    }
}

Agujero* ListaAgujeros::Obtener(int pIndice)
{
    return arreglo[pIndice];
}

int ListaAgujeros::GetCantidad()
{
    return cantidad;
}

void ListaAgujeros::DibujarTodos()
{
    for (int i = 0; i < cantidad; i++)
    {
        arreglo[i]->Dibujar();
    }
}