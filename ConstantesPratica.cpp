#include <iostream>
//Para usar #define precisa colocar o includes
#define NUM_VIDAS 10
//Veja que não tem ;
int main()
{
    //const int NUM_VIDAS = 10;
    int TotalDeVidas;
    TotalDeVidas = NUM_VIDAS - 1;
    std::cout << "Total de vidas: " << TotalDeVidas << "\n";
    std::cout << "Valor constante NUM_VIDAS: " << NUM_VIDAS << "\n";
    system("PAUSE");
}