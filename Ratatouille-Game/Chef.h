#pragma once



using namespace System;
using namespace std;



class Chef
{
private:
    short empatia;

public:
    Chef();
    ~Chef();

    short GetEmpatia();
    void SetEmpatia();
};

Chef::Chef()
{
    this->empatia = 0;
}

Chef::~Chef()
{
}

short Chef::GetEmpatia()
{
    return empatia;
}

void Chef::SetEmpatia()
{

    empatia = empatia + 10;
}
