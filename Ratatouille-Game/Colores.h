#pragma once

using namespace System;
using namespace std;


void colorRGB(int r, int g, int b)
{
    printf("\x1b[38;2;%d;%d;%dm", r, g, b);
}
void colorFondoRGB(int r, int g, int b)
{
    printf("\x1b[48;2;%d;%d;%dm", r, g, b);
}

void color(int c)
{
    switch (c)
    {
    case 0:  colorRGB(0xFF, 0xFF, 0xFF); break; // #FFFFFF blanco
    case 1:  colorRGB(0xCE, 0xCE, 0xCE); break; // #CECECE Doblez sombrero
    case 2:  colorRGB(0xA2, 0xA2, 0xA2); break; // #A2A2A2 Linea separadora
    case 3:  colorRGB(0x60, 0x5D, 0x5D); break; // #605D5D Color base raton
    case 4:  colorRGB(0xD0, 0xA2, 0xA2); break; // #D0A2A2 orejas y manos
    case 5:  colorRGB(0xC9, 0x82, 0x82); break; // #C98282 pis y sobra orejas
    case 6:  colorRGB(0x78, 0x76, 0x76); break; // #787676 Segundo color ratón
    case 7:  colorRGB(0x00, 0x00, 0x00); break; // #000000 Negro


    case 8:  colorRGB(0xFF, 0x00, 0x00); break; // #FF0000 Rojo tomate
    case 9:  colorRGB(0x00, 0x85, 0x03); break; // #008503 Verde oscuro
    case 10: colorRGB(0x2d, 0xcf, 0x36); break; // #2DCF36 Verde claro
    case 11: colorRGB(0xFC, 0x73, 0x2F); break; // #FC732F Naranja zanahoria
    case 12: colorRGB(0xD0, 0x56, 0x19); break; // #D05619 Naranja zanahoria rayas


    case 13: colorRGB(0xB8, 0xB8, 0xB8); break; // #B8B8B8 
    case 14: colorRGB(0x7C, 0x7C, 0x7C); break; // #7C7C7C 
    case 15: colorRGB(0xD6, 0xD6, 0xD6); break; // #D6D6D6 
    case 16: colorRGB(0xB6, 0xF9, 0xF6); break; // #B6F9F6 
    case 17: colorRGB(0x96, 0x96, 0x96); break; // #969696 
    case 18: colorRGB(0x5E, 0x5E, 0x5E); break; // #5E5E5E
    case 19: colorRGB(0x2F, 0x2F, 0x2F); break; // #2F2F2F


    case 20: colorRGB(0x66, 0x29, 0x17); break; // #662917 pelo linguini
    case 21: colorRGB(0xEA, 0xB8, 0x94); break; // #EAB894 piel Linguini
    case 22: colorRGB(0xEE, 0xE8, 0xD2); break; // #eee8d2 color extra



    case 23: colorRGB(0x2C, 0x2C, 0x2C); break; // #2C2C2C
    case 24: colorRGB(0x6A, 0x8C, 0x95); break; // #6A8C95


    case 25: colorRGB(0xE1, 0x8D, 0x2A); break; // #E18D2A
    case 26: colorRGB(0x43, 0x43, 0x43); break; // #434343
    case 27: colorRGB(0xE5, 0xC9, 0xAB); break; // #E5C9AB

    case 28: colorRGB(0x35, 0x8F, 0x00); break; // #358F00 verdezanahoria sopa
    case 29: colorRGB(0xFF, 0xF4, 0xBC); break; // #FFF4BC sopa
    case 30: colorRGB(0xF6, 0x1A, 0x1A); break; // #F61A1A tomate
    case 31: colorRGB(0xF8, 0xAD, 0x1E); break; // #F8AD1E zanahoria
    case 32: colorRGB(0xCD, 0x90, 0x1D); break; // #CD901D zanahoria sombra


    case 33: colorRGB(0x84, 0x84, 0x84); break; // #848484 
    case 34: colorRGB(0x2B, 0x38, 0x5C); break; // #2B385C 
    case 35: colorRGB(0x67, 0x8C, 0x96); break; // #678C96 
    case 36: colorRGB(0x73, 0xB4, 0xC7); break; // #73B4C7 


    case 37: colorRGB(0x65, 0x58, 0x4B); break; // #65584B


    case 38: colorRGB(0x5A, 0x3A, 0x14); break; // #5a3a14



    case 39: colorRGB(0x1D, 0x4E, 0x00); break; // #1d4e00
    case 40: colorRGB(0x5E, 0x5A, 0x45); break; // #5e5a45
    case 41: colorRGB(0x8E, 0x10, 0x10); break; // #8e1010
    case 42: colorRGB(0x67, 0x0D, 0x0D); break; // #670d0d
    case 43: colorRGB(0x6A, 0x4B, 0x11); break; // #6a4b11


    case 44: colorRGB(0x0B, 0x0E, 0x18); break; // #0b0e18
    case 45: colorRGB(0x29, 0x38, 0x3C); break; // #29383c
    case 46: colorRGB(0x29, 0x43, 0x4A); break; // #29434a


    case 47: colorRGB(0x1D, 0x4E, 0xFF); break; // #1D4EFF
    case 48: colorRGB(0x6B, 0x8B, 0xFF); break; // #6B8BFF
    case 49: colorRGB(0x44, 0x44, 0x44); break; // #444444


    case 50: colorRGB(0xF4, 0xB8, 0x88); break; // #f4b888
    case 51: colorRGB(0xCE, 0x80, 0x5A); break; // #ce805a
    case 52: colorRGB(0xBF, 0xBF, 0xBF); break; // #bfbfbf
    case 53: colorRGB(0x00, 0x3B, 0x09); break; // #003b09


    case 54: colorRGB(0xFF, 0xD7, 0x46); break; // #ffd746
    case 55: colorRGB(0x14, 0x18, 0x3B); break; // #14183b
    case 56: colorRGB(0x1B, 0x20, 0x48); break; // #1b2048
    case 57: colorRGB(0x26, 0x28, 0x56); break; // #262856
    case 58: colorRGB(0x36, 0x30, 0x62); break; // #363062
    case 59: colorRGB(0x4E, 0x3B, 0x69); break; // #4e3b69
    case 60: colorRGB(0x6E, 0x46, 0x69); break; // #6e4669
    case 61: colorRGB(0xFF, 0xF4, 0xC8); break; // #fff4c8









    case 99: colorFondoRGB(0xFF, 0xFF, 0xFF);





    }
}
void SetColorPorValor(int valor) {//para matriz el primer numero es el de la matriz y el segundo es el color como tal respecto la función anterior
    if (valor == 12105912) color(13);
    else if (valor == 8158332) color(14);
    else if (valor == 14079702) color(15);
    else if (valor == 11991542) color(16);

    else if (valor == 9868950) color(17);
    else if (valor == 6184542) color(18);
    else if (valor == 3092271) color(19);
    else if (valor == 16777215) color(0);
    else if (valor == 8684676) color(33);
    else if (valor == 1920767) color(47);
    else if (valor == 16297246) color(31);
    else if (valor == 7048191) color(48);
    else if (valor == 4473924) color(49);


    else if (valor == 16766790) color(54);
    else if (valor == 1316923) color(55);
    else if (valor == 1777736) color(56);
    else if (valor == 2500694) color(57);
    else if (valor == 3551330) color(58);


    else if (valor == 5127017) color(59);
    else if (valor == 7226985) color(60);


    else if (valor == 16774344) color(61);


    else if (valor == 13553358) color(1);
    else if (valor == 6315357) color(3);
    else if (valor == 7) color(7);
    else if (valor == 7894646) color(6);
    else if (valor == 13673122) color(4);






}