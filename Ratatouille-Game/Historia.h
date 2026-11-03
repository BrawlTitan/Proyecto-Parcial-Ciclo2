#pragma once

using namespace System;
using namespace std;



class Historia
{
private:
    Remy* remy;
    Linguini* linguini;
    Skinner* skinner;

    void DibujarFondo();
    void DibujarFondoNivel2();
    void DibujarCaja(int);
    void Continuar();
    void EscenaSkinnerNivel1();
    char PreguntaAB(const char*, const char*);

public:
    Historia(Remy*, Linguini*, Skinner*);
    ~Historia();

    void Creditos();
    void MostrarPerspectiva(int);
    void EscenaInicioLinguini();
    void IntroNivel1();
    void EscenaNivel1(bool);

    void IntroNivel2();
    void EscenaNivel2(int);
    void IntroNivel3();
    char DecisionSkinner();
    void EscenaNivel3(bool);
    void PantallaPerdiste(int);         //motivo (1, 2 o 3)
    void CriticaFinal();
    void ReflexionFinal();
};

Historia::Historia(Remy* pRemy, Linguini* pLinguini, Skinner* pSkinner)
{
    this->remy = pRemy;
    this->linguini = pLinguini;
    this->skinner = pSkinner;
}

Historia::~Historia()
{

}

void Historia::DibujarFondo()
{
    for (int f = 0; f < FILAS; f++) {
        for (int c = 0; c < COLUMNAS; c++) {
            Console::SetCursorPosition(c, f);
            SetColorPorValor(FondoHistoria[f][c]);
            cout << "█";
        }
    }
}

void Historia::DibujarFondoNivel2()
{
    for (int f = 0; f < FILAS; f++) {
        for (int c = 0; c < COLUMNAS; c++) {
            Console::SetCursorPosition(c, f);

            if (FondoNivel2[f][c] == 0)
            {
                cout << " ";
            }
            else
            {
                SetColorPorValor(FondoNivel2[f][c]);
                cout << "█";
            }
        }
    }
}


void Historia::DibujarCaja(int pFila)
{
    for (int i = 0; i < 9; i++)
    {
        Console::SetCursorPosition(0, pFila + i);
        for (int c = 0; c < COLUMNAS; c++)
        {
            color(0); cout << "█";
        }
    }
}

void Historia::Continuar()
{
    _sleep(2500);

    Console::SetCursorPosition(78, 29); cout << "PRESIONA CUALQUIER TECLA PARA CONTINUAR->";
    system("pause>0");

    Console::BackgroundColor = ConsoleColor::Gray;
}



void Historia::Creditos()
{
    DibujarFondo();
    DibujarCaja(21);

    remy->SetPosicion(8, 8);
    remy->Dibujar();

    linguini->SetPosicion(80, 0);
    linguini->Dibujar();
    color(99);
    color(7);
    Console::SetCursorPosition(6, 23);      cout << "Creditos:";
    Console::SetCursorPosition(6, 24);      cout << "Mateo Alvarado Medina - U20261D677";
    Console::SetCursorPosition(6, 25);      cout << "Aaron Badajos Paredes - U202524759";
    Console::SetCursorPosition(6, 26);      cout << "Jeremy Shannde Advincula Galoc - U202617693";





    Console::SetCursorPosition(78, 29); cout << "PRESIONA ESC PARA VOLVER AL MENU";
}





char Historia::PreguntaAB(const char* pPregunta, const char* pOpciones)
{
    DibujarCaja(21);

    color(99);
    color(7);
    Console::SetCursorPosition(6, 23);      cout << "DECISIÓN:";
    Console::SetCursorPosition(6, 24);      cout << pPregunta;
    Console::SetCursorPosition(6, 26);      cout << pOpciones;

    while (_kbhit()) _getch();

    char tecla;
    do
    {
        tecla = (char)_getch();
    } while (tecla != 'a' && tecla != 'A' && tecla != 'b' && tecla != 'B');

    if (tecla == 'a') tecla = 'A';
    if (tecla == 'b') tecla = 'B';

    return tecla;
}


void Historia::MostrarPerspectiva(int pNivel)
{
    DibujarFondo();

    if (pNivel == 1)
    {
        remy->SetPosicion(8, 8);
        remy->Dibujar();
    }
    else if (pNivel == 2)
    {
        linguini->SetPosicion(80, 0);
        linguini->Dibujar();
    }
    else
    {
        skinner->SetPosicion(80, 8);
        skinner->Dibujar();
    }

    DibujarCaja(21);

    color(99);
    color(7);

    if (pNivel == 1)
    {
        // remy le encanata cocinar
        Console::SetCursorPosition(6, 23);      cout << "REMY:";
        Console::SetCursorPosition(6, 24);      cout << "Una rata cocina en el restaurante de Gusteau, y esa rata soy yo. Cocinar es mi pasión,";
        Console::SetCursorPosition(6, 25);      cout << "aunque todos me juzguen por ser una rata. Guío a Linguini con tirones de pelo, pero sin buenos";
        Console::SetCursorPosition(6, 26);      cout << "ingredientes no puedo hacer nada, así que tengo que conseguirlos yo mismo.";
        Console::SetCursorPosition(6, 27);      cout << "Linguini es amable... aunque no sé si puedo confiar del todo en él.";
    }
    else if (pNivel == 2)
    {
        // Linguini se siente insuficiente 
        Console::SetCursorPosition(6, 23);      cout << "LINGUINI:";
        Console::SetCursorPosition(6, 24);      cout << "Hay una rata cocinando en el restaurante de Gusteau, y es mi amigo Remy. Yo no sirvo para esto:";
        Console::SetCursorPosition(6, 25);      cout << "siento unos tirones en el pelo y mis manos hacen el resto. Todo lo que sale bien es pura suerte,";
        Console::SetCursorPosition(6, 26);      cout << "sin Remy no sería capaz de cocinar nada. Y me preocupa que Skinner lo descubra y le haga daño.";
        Console::SetCursorPosition(6, 27);      cout << "Dependo de él más de lo que quisiera admitir.";
    }
    else
    {
        // Skinner solo quiere que el restaurante
        Console::SetCursorPosition(6, 23);      cout << "SKINNER:";
        Console::SetCursorPosition(6, 24);      cout << "Estoy seguro de que hay una rata en MI cocina, y sospecho que Linguini la está ocultando.";
        Console::SetCursorPosition(6, 25);      cout << "Ese muchacho torpe de pronto cocina de maravilla y no entiendo cómo. Debe de ser pura suerte.";
        Console::SetCursorPosition(6, 26);      cout << "Sea como sea, voy a encontrar a esa rata y acabar con ella antes de que hunda el restaurante.";
        Console::SetCursorPosition(6, 27);      cout << "En su mente: el restaurante debe mantenerse para poder quedármelo.";
    }

    Continuar();
}



void Historia::EscenaInicioLinguini()
{

    DibujarFondo();
    DibujarCaja(21);

    linguini->SetPosicion(80, 0);
    linguini->Dibujar();

    DibujarCaja(21);
    color(99);
    color(7);
    Console::SetCursorPosition(6, 23);      cout << "LINGUINI:";
    Console::SetCursorPosition(6, 24);      cout << "Aquí estoy, en el restaurante de Gusteau... Yo, que ni siquiera sé cocinar bien.";
    Console::SetCursorPosition(6, 25);      cout << "Este lugar es demasiado grande para mí. Siento que no estoy a la altura de nadie aquí,";
    Console::SetCursorPosition(6, 26);      cout << "y me da miedo que descubran que no sirvo para esto.";

    Continuar();


    DibujarFondo();
    DibujarCaja(21);

    remy->SetPosicion(8, 8);
    remy->Dibujar();

    linguini->SetPosicion(80, 0);
    linguini->Dibujar();

    DibujarCaja(21);
    color(99);
    color(7);
    Console::SetCursorPosition(6, 23);      cout << "LINGUINI:";
    Console::SetCursorPosition(6, 24);      cout << "*Linguini ve a Remy cocinando*";
    Console::SetCursorPosition(6, 25);      cout << "¡Wow, una rata cocinando!";
    Console::SetCursorPosition(6, 26);      cout << "*Remy aparece en escena, sin dejar de revolver la preparación*";

    Continuar();


    DibujarCaja(21);
    color(99);
    color(7);
    Console::SetCursorPosition(6, 23);      cout << "LINGUINI:";
    Console::SetCursorPosition(6, 24);      cout << "*Remy añade especias a la preparación de Linguini*";
    Console::SetCursorPosition(6, 25);      cout << "¡Y conoce de especias! Necesito unos ingredientes...";

    Continuar();


    DibujarCaja(21);
    color(99);
    color(7);
    Console::SetCursorPosition(6, 23);      cout << "LINGUINI:";
    Console::SetCursorPosition(6, 24);      cout << "*Intenta agarrar unos ingredientes, pero Remy le selecciona otros*";
    Console::SetCursorPosition(6, 25);      cout << "Ah... ¿esos? Claro, tú sabes más que yo. Seguro los míos habrían salido mal.";

    Continuar();
}


void Historia::IntroNivel1()
{
    Console::BackgroundColor = ConsoleColor::Gray;
    Console::Clear();

    DibujarCaja(10);

    color(99);
    color(7);
    Console::SetCursorPosition(6, 12);      cout << "NIVEL 1: ¡CONSIGUE LOS INGREDIENTES!";
    Console::SetCursorPosition(6, 13);      cout << "Eres Remy. Tu objetivo es recolectar 7 ingredientes antes de que se acabe el tiempo.";
    Console::SetCursorPosition(6, 14);      cout << "Muévete con las teclas W, A, S, D para atrapar cada ingrediente que aparezca en la pantalla.";
    Console::SetCursorPosition(6, 15);      cout << "Tienes un límite de 15 segundos.";

    Continuar();

    Console::Clear();
}



void Historia::EscenaSkinnerNivel1()
{
    DibujarFondo();
    DibujarCaja(21);

    skinner->SetPosicion(80, 8);
    skinner->Dibujar();

    DibujarCaja(21);

    color(99);
    color(7);

    Console::SetCursorPosition(6, 23);      cout << "SKINNER:";
    Console::SetCursorPosition(6, 24);      cout << "RATAAAAAAA.";
    Console::SetCursorPosition(6, 25);      cout << "ALLÍ HAY UNA... ";
    Console::SetCursorPosition(6, 26);      cout << "ra..ta... Qué bien que la atrapaste, más te vale deshacerte de ella.";
    Console::SetCursorPosition(6, 27);      cout << "En su mente: el restaurante debe mantenerse para poder quedármelo.";
    Console::SetCursorPosition(6, 28);      cout << "NOTA: Skinner sospecha que Linguini oculta a una rata, pero ignora que Remy es el cerebro de la cocina.";

    Continuar();
}

void Historia::EscenaNivel1(bool pCompletado)
{
    DibujarFondo();
    DibujarCaja(21);

    remy->SetPosicion(8, 8);
    remy->Dibujar();

    linguini->SetPosicion(80, 0);
    linguini->Dibujar();

    DibujarCaja(21);
    color(99);
    color(7);

    if (pCompletado)
    {
        // Remy muestra su pasion por cocinar
        Console::SetCursorPosition(6, 23);      cout << "REMY:";
        Console::SetCursorPosition(6, 24);      cout << "Mira todos los ingredientes que conseguí, están en mejor estado que los que tú seleccionaste.";
        Console::SetCursorPosition(6, 25);      cout << "Con esto podremos cocinar algo muy rico, lo suficiente para que le empieces a agradar a Skinner.";
        Console::SetCursorPosition(6, 26);      cout << "Cocinar es lo que más amo, y no voy a rendirme solo porque me vean como una rata.";
        Console::SetCursorPosition(6, 27);      cout << "NOTA: Remy sabe que Linguini solo cocina bien porque él lo guía con tirones de pelo.";

        Continuar();


        char decision = PreguntaAB("¿Le darás los ingredientes a Linguini?", "A. Sí   B. No, los llevaré al clan");

        if (decision == 'A')
        {
            linguini->SetEmpatia();     // +10 de empatia

            DibujarCaja(21);
            color(99);
            color(7);
            Console::SetCursorPosition(6, 23);      cout << "REMY:";
            Console::SetCursorPosition(6, 24);      cout << "*Le entrega todos los ingredientes*";
            Console::SetCursorPosition(6, 25);      cout << "Ahora sí vamos a poder cocinar y quedará muy rico.";

            Continuar();


            DibujarCaja(21);
            color(99);
            color(7);
            Console::SetCursorPosition(6, 23);      cout << "LINGUINI:";
            Console::SetCursorPosition(6, 24);      cout << "EXCELENTE. *Recibe la bolsa*";
            Console::SetCursorPosition(6, 25);      cout << "Remy, te ves agotado. ¿Estás bien? Me preocupa que Skinner te descubra.";
            Console::SetCursorPosition(6, 26);      cout << "Sin ti no sé ni por dónde empezar, todo lo que he logrado ha sido pura suerte.";
            Console::SetCursorPosition(6, 27);      cout << "NOTA: Linguini se preocupa por Remy, aunque cree que sus aciertos en la cocina son pura suerte.";

            Continuar();

            DibujarCaja(21);
            color(99);
            color(7);
            Console::SetCursorPosition(6, 23);      cout << "LINGUINI:";
            Console::SetCursorPosition(6, 24);      cout << "Toma, come algo. Te lo has ganado.";
            Console::SetCursorPosition(6, 25);      cout << "*Linguini le da comida a Remy*";
            Console::SetCursorPosition(6, 26);      cout << "Ahora sí, ¡a cocinar! Aunque yo solo sigo tus tirones de pelo... espero no arruinarlo.";

            Continuar();
        }
        else
        {
            // B no añade empatia
            DibujarCaja(21);
            color(99);
            color(7);
            Console::SetCursorPosition(6, 23);      cout << "REMY:";
            Console::SetCursorPosition(6, 24);      cout << "Lo siento, Linguini, pero mi clan también tiene hambre.";
            Console::SetCursorPosition(6, 25);      cout << "*Remy lleva los ingredientes al clan*";
            Console::SetCursorPosition(6, 26);      cout << "NOTA: Remy confía a medias en Linguini, por eso prefiere asegurar primero la comida de su clan.";

            Continuar();


            DibujarCaja(21);
            color(99);
            color(7);
            Console::SetCursorPosition(6, 23);      cout << "LINGUINI:";
            Console::SetCursorPosition(6, 24);      cout << "¿Y ahora qué voy a cocinar? La despensa casi está vacía...";
            Console::SetCursorPosition(6, 25);      cout << "Tendré que improvisar con lo poco que tengo.";
            Console::SetCursorPosition(6, 26);      cout << "Sin Remy ni ingredientes no sé hacer nada, seguro lo arruinaré.";
            Console::SetCursorPosition(6, 27);      cout << "NOTA: Linguini no entiende por qué Remy se llevó todo, solo piensa en que sea seguro para él.";

            Continuar();
        }
    }
    else
    {

        Console::SetCursorPosition(6, 23);      cout << "REMY:";
        Console::SetCursorPosition(6, 24);      cout << "Mira, conseguí algunos ingredientes, no son los mejores pero es suficiente para cocinar.";
        Console::SetCursorPosition(6, 25);      cout << "*Le entrega todos los ingredientes*";
        Console::SetCursorPosition(6, 26);      cout << "Ahora sí, empecemos a cocinar; no pienso rendirme, cocinar es lo mío.";
        Console::SetCursorPosition(6, 27);      cout << "NOTA: Remy sabe que sin ingredientes de calidad, Linguini no podrá lucirse.";

        Continuar();


        DibujarCaja(21);
        color(99);
        color(7);

        Console::SetCursorPosition(6, 23);      cout << "LINGUINI:";
        Console::SetCursorPosition(6, 24);      cout << "Uy.";
        Console::SetCursorPosition(6, 25);      cout << "*Recibe la bolsa*";
        Console::SetCursorPosition(6, 26);      cout << "Bueno, cocinaremos con esto entonces.";
        Console::SetCursorPosition(6, 27);      cout << "Yo solo soy un cocinero improvisado; si esto sale mal, será por mi culpa...";

        Continuar();
    }


    EscenaSkinnerNivel1();

    Console::Clear();

    DibujarFondo();
    DibujarCaja(21);


    color(99);
    color(7);
    Console::SetCursorPosition(6, 23);      cout << "Linguini no se deshizo de la rata. En la noche Remy y Linguini aprenden a trabajar juntos:";
    Console::SetCursorPosition(6, 24);      cout << "Remy da las instrucciones y Linguini las sigue.";
    Console::SetCursorPosition(6, 25);      cout << "Linguini sigue creyendo que lo suyo es pura suerte y depende de Remy para cada paso.";
    Console::SetCursorPosition(6, 26);      cout << "NOTA: Solo Remy y Linguini saben quién cocina en realidad; Skinner sigue sin sospecharlo.";

    Continuar();

    Console::Clear();
}









void Historia::IntroNivel2()
{
    DibujarFondoNivel2();
    DibujarCaja(10);

    color(99);
    color(7);
    Console::SetCursorPosition(6, 12);      cout << "NIVEL 2: ¡A COCINAR!";
    Console::SetCursorPosition(6, 13);      cout << "Aparecerá una secuencia de 5 números y tendrás que memorizarla.";
    Console::SetCursorPosition(6, 14);      cout << "Después tendrás que ingresarlos uno por uno. Cuidado con equivocarte, ";
    Console::SetCursorPosition(6, 15);      cout << "porque la comida se dañará.";






    Continuar();

    Console::BackgroundColor = ConsoleColor::Gray;

    DibujarFondoNivel2();
}


void Historia::EscenaNivel2(int pQuemadas)
{
    bool exito = false;

    if (pQuemadas == 0)
    {
        exito = true;
        linguini->SetEmpatia();     // +10 de empatia
    }
    else if (pQuemadas == 1)
    {

        DibujarFondo();
        DibujarCaja(21);

        linguini->SetPosicion(5, 0);
        linguini->Dibujar();
        remy->SetPosicion(90, 8);
        remy->Dibujar();

        char decision = PreguntaAB("Remy te dice que una comida está mal. ¿Pruebas las comidas para ver si están bien?", "A. Sí, hay que revisar   B. Así nomás");

        if (decision == 'A')
        {

            DibujarCaja(21);
            color(99);
            color(7);
            Console::SetCursorPosition(6, 23);      cout << "*Te deshiciste de la comida en mal estado*";
            Console::SetCursorPosition(6, 24);      cout << "Tú nunca habrías notado que estaba mal; sin el aviso de Remy no estarías a la altura.";
            Console::SetCursorPosition(6, 25);      cout << "NOTA: Linguini no sabe cómo Remy distingue la comida mala, pero confía en su aviso.";

            Continuar();

            exito = true;
            linguini->SetEmpatia();     // +10 de empatia
        }
    }

    DibujarFondo();
    DibujarCaja(21);

    linguini->SetPosicion(5, 0);
    linguini->Dibujar();
    skinner->SetPosicion(80, 8);
    skinner->Dibujar();

    DibujarCaja(21);

    color(99);
    color(7);


    if (exito)
    {
        Console::SetCursorPosition(6, 23);      cout << "SKINNER:";
        Console::SetCursorPosition(6, 24);      cout << "Tuviste suerte Linguini de que la rata de otro día no haya dañado los ingredientes,";
        Console::SetCursorPosition(6, 25);      cout << "te das cuenta de su buen estado por la calidad de la sopa que no tiene NADA QUE VER";
        Console::SetCursorPosition(6, 26);      cout << "con el chef... RATAAAAAAA VOY A ATRAPARLA";
        Console::SetCursorPosition(6, 27);      cout << "En su mente: el restaurante debe mantenerse para poder quedármelo.";
        Console::SetCursorPosition(6, 28);      cout << "NOTA: Skinner cree que la sopa es suerte de Linguini; ignora que Remy es quien cocina.";
    }
    else
    {
        Console::SetCursorPosition(6, 23);      cout << "SKINNER:";
        Console::SetCursorPosition(6, 24);      cout << "LA COMIDA ESTÁ FATAL";
        Console::SetCursorPosition(6, 25);      cout << "UNA MÁS LINGUINI... UNA MÁS Y TE VAS.    RATAAAAAA VOY A ATRAPARLA";
        Console::SetCursorPosition(6, 26);      cout << "En su mente: el restaurante debe mantenerse para poder quedármelo.";
        Console::SetCursorPosition(6, 27);      cout << "NOTA: Skinner culpa a Linguini de cada error; no imagina que hay una rata detrás de los platos.";
    }

    Continuar();


    DibujarFondo();
    DibujarCaja(21);

    linguini->SetPosicion(5, 0);
    linguini->Dibujar();

    DibujarCaja(21);

    color(99);
    color(7);

    if (exito)
    {
        Console::SetCursorPosition(6, 23);      cout << "LINGUINI:";
        Console::SetCursorPosition(6, 24);      cout << "Salió bien... pero seguro fue pura suerte. Yo solo sigo los tirones de Remy,";
        Console::SetCursorPosition(6, 25);      cout << "sin él no habría sido capaz de cocinar nada. ¿Cuánto tiempo más podré fingir que estoy a la altura?";
    }
    else
    {
        Console::SetCursorPosition(6, 23);      cout << "LINGUINI:";
        Console::SetCursorPosition(6, 24);      cout << "Lo arruiné... Sabía que no estaba a la altura de este restaurante.";
        Console::SetCursorPosition(6, 25);      cout << "Sin Remy no sería nada, y aun con él cometo errores. Quizá Skinner tiene razón en dudar de mí.";
    }

    Continuar();
}








void Historia::IntroNivel3()
{
    system("cls");

    SetConsoleOutputCP(65001);
    Console::BackgroundColor = ConsoleColor::Gray;
    Console::Clear();

    DibujarCaja(10);

    color(99);
    color(7);
    Console::SetCursorPosition(6, 12);      cout << "NIVEL 3: ¡ATRAPA A LA RATA!";
    Console::SetCursorPosition(6, 13);      cout << "Eres Skinner. Remy se esconde en los 5 agujeros, numerados del 1 al 5 de izquierda a derecha.";
    Console::SetCursorPosition(6, 14);      cout << "Pulsa el número del agujero donde está Remy antes de que pasen 2 segundos. Tienes 3 vidas.";
    Console::SetCursorPosition(6, 15);      cout << "Si sobrevives 7 rondas, revisa todos los agujeros presionando 1, 2, 3, 4 y 5.";

    Console::SetCursorPosition(6, 16);      cout << "En su mente: el restaurante debe mantenerse para poder quedármelo.";

    Continuar();

    Console::Clear();
    Console::CursorVisible = false;
}


char Historia::DecisionSkinner()
{
    Console::BackgroundColor = ConsoleColor::Gray;
    Console::Clear();

    DibujarFondo();
    DibujarCaja(21);

    remy->SetPosicion(8, 8);
    remy->Dibujar();

    skinner->SetPosicion(80, 8);
    skinner->Dibujar();

    DibujarCaja(21);

    color(99);
    color(7);
    Console::SetCursorPosition(6, 23);      cout << "SKINNER:";
    Console::SetCursorPosition(6, 24);      cout << "RATAAAAAAA. ¡Allí estás! ra..ta... Por fin te encontré.";
    Console::SetCursorPosition(6, 25);      cout << "Todo este tiempo estuviste en MI cocina, y Linguini te ocultaba.";
    Console::SetCursorPosition(6, 26);      cout << "En su mente: el restaurante debe mantenerse para poder quedármelo.";
    Console::SetCursorPosition(6, 27);      cout << "NOTA: Skinner acaba de encontrar a Remy y ahora debe decidir qué hacer con él.";

    Continuar();

    char decision = PreguntaAB("Skinner acaba de encontrar a Remy. ¿Qué decides hacer?", "A. Llamar al inspector de sanidad   B. Recordar lo que siempre decía Gusteau: \"Cualquiera puede cocinar\"");

    return decision;
}


void Historia::EscenaNivel3(bool pCompletado)
{
    if (!pCompletado) return;

    Console::Clear();

    DibujarFondo();
    DibujarCaja(21);

    linguini->SetPosicion(5, 0);
    linguini->Dibujar();
    skinner->SetPosicion(80, 8);
    skinner->Dibujar();

    DibujarCaja(21);


    color(99);
    color(7);
    Console::SetCursorPosition(6, 23);      cout << "SKINNER:";
    Console::SetCursorPosition(6, 24);      cout << "TÚ, LINGUINI, SIEMPRE TUVISTE UNA RATA CONTROLÁNDOTE... Y YO SIN VERLO.";
    Console::SetCursorPosition(6, 25);      cout << "Recuerdo lo que siempre decía Gusteau: Cualquiera puede cocinar... y yo nunca quise creerlo.";
    Console::SetCursorPosition(6, 26);      cout << "En su mente: el restaurante debe mantenerse para poder quedármelo, y esta rata es quien lo sostiene.";
    Console::SetCursorPosition(6, 27);      cout << "NOTA: Skinner descubre al fin que Remy era el verdadero cerebro de la cocina.";

    Continuar();


    DibujarCaja(21);

    color(99);
    color(7);
    Console::SetCursorPosition(6, 23);      cout << "LINGUINI:";
    Console::SetCursorPosition(6, 24);      cout << "¡Suéltalo, Skinner! Remy no es una plaga, es el verdadero chef de esta cocina.";
    Console::SetCursorPosition(6, 25);      cout << "Como decía mi padre, Gusteau: ¡Cualquiera puede cocinar!";
    Console::SetCursorPosition(6, 26);      cout << "*Linguini defiende a Remy y Skinner, recordando a Gusteau, baja la mano y lo deja libre*";
    Console::SetCursorPosition(6, 27);      cout << "NOTA: Linguini defiende a Remy porque siempre se preocupó por él, aunque creyera que cocinaba por suerte.";

    Continuar();

    DibujarFondo();
    DibujarCaja(10);

    color(99);
    color(7);
    Console::SetCursorPosition(6, 12);      cout << "De esta manera Remy y Linguini trabajaron juntos para satisfacer al crítico";
    Console::SetCursorPosition(6, 13);      cout << "Antón Ego";

    Continuar();
}


void Historia::PantallaPerdiste(int pMotivo)
{
    Console::BackgroundColor = ConsoleColor::Gray;
    Console::Clear();

    DibujarFondo();
    DibujarCaja(10);

    color(99);
    color(7);
    Console::SetCursorPosition(6, 12);      cout << "PERDISTE";
    Console::SetCursorPosition(6, 13);      cout << "YOU LOST";

    if (pMotivo == 1)
    {
        Console::SetCursorPosition(6, 15);      cout << "Te quedaste sin vidas: fallaste demasiadas veces al buscar a Remy en los agujeros.";
        Console::SetCursorPosition(6, 16);      cout << "La rata se escapó de ti y la historia no pudo completarse.";
    }
    else if (pMotivo == 2)
    {
        Console::SetCursorPosition(6, 15);      cout << "Llamaste al inspector de sanidad y el restaurante fue cerrado.";
        Console::SetCursorPosition(6, 16);      cout << "Skinner perdió justo lo que quería conservar: el restaurante que esperaba quedarse.";
    }
    else
    {
        Console::SetCursorPosition(6, 15);      cout << "Skinner recordó a Gusteau y quiso dar una oportunidad a Remy, pero ya era tarde.";
        Console::SetCursorPosition(6, 16);      cout << "Linguini no tuvo la empatía suficiente con Remy para defenderlo: tus decisiones con Remy y Linguini";
        Console::SetCursorPosition(6, 17);      cout << "no generaron la confianza necesaria, y Remy ya había sido atrapado.";
    }

    _sleep(2500);
    Console::SetCursorPosition(78, 29);     cout << "PRESIONA CUALQUIER TECLA PARA SALIR";
    system("pause>0");

    Console::BackgroundColor = ConsoleColor::Gray;
}

void Historia::CriticaFinal()
{
    Console::Clear();

    cout << "La vida de un crítico es sencilla en muchos aspectos, arriesgamos poco, y tenemos poder sobre aquellos que ofrecen su trabajo y su servicio a nuestro juicio. ";
    cout << "En el pasado, jamás oculté mi desdén por el famoso lema del chef Gusteau: Cualquiera puede cocinar. Pero al fin me doy cuenta de lo que quiso decir en realidad: ´No cualquiera puede convertirse en un gran artista, pero un gran artista puede provenir de cualquier lado´. Es difícil imaginar un origen más humilde que el del genio que ahora cocina en el restaurante Gusteau, y quien, en opinión de este crítico, es nada menos que el mejor chef de Francia.";

    system("pause>0");
}


void Historia::ReflexionFinal()
{

   
    Console::Clear();
    Console::BackgroundColor = ConsoleColor::Gray;
    color(7);

    Console::SetCursorPosition(38, 13);     cout << "            ¿Somos mas capaces de lo que creemos ?";   // 99 caracteres


    Continuar();


    Console::Clear();

    color(7);

    Console::SetCursorPosition(25, 11);     cout << "Vivir los hechos desde tres miradas cambia lo que creemos haber visto.";
    Console::SetCursorPosition(30, 12);     cout << "Remy cocinaba por pasión, pero lo juzgaban por ser una rata.";
    Console::SetCursorPosition(27, 13);     cout << "Linguini se sentía insuficiente y creía que todo era pura suerte.";
    Console::SetCursorPosition(17, 14);     cout << "Skinner solo quería conservar el restaurante, y por eso veía a Remy como una amenaza.";
    Console::SetCursorPosition(39, 15);     cout << "Cada uno veía solo una parte de la verdad.";
    Console::SetCursorPosition(23, 17);     cout << "Al vivir las tres perspectivas, la historia completa por fin se entiende:";
    Console::SetCursorPosition(27, 18);     cout << "nadie era solo un héroe o un villano, y cualquiera puede cocinar.";

    Continuar();


    Console::Clear();

    color(7);
    Console::SetCursorPosition(56, 14);     cout << "YOU WIN";

    _sleep(2500);
    Console::SetCursorPosition(78, 29);     cout << "PRESIONA CUALQUIER TECLA PARA SALIR";
    system("pause>0");

    Console::BackgroundColor = ConsoleColor::Gray;
}