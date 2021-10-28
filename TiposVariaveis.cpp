#include <iostream>
#include <iomanip>
int main()
{
    int Numero;
    float Numero2;
    double Numero3;
    char Caracter = '3';
    char caracter2 = 'k';
    Numero3 = 456676888.754444544;
    Numero2 = 55.67f;
    Numero = 45;
    std::cout <<  "Valor número: " << Numero << std::endl;
    std::cout << " Tamanho da variavel numero: " << sizeof(Numero) << "\n";
    std::cout << " Endereço da memoria: " << &Numero2 << "\n";
    std::cout <<  "Valor número2: " << Numero2 << std::endl;
    std::cout << " Tamanho da variavel numero: " << sizeof(Numero2) << "\n";
    std::cout << " Endereço da memoria: " << &Numero2 << "\n";
    std::cout <<  "Valor número3: " << std::setprecision(13) << Numero3 << std::endl;
    std::cout << " Tamanho da variavel numero: " << sizeof(Numero3) << "\n";
    std::cout << " Endereço da memoria: " << &Numero3 << "\n";  
    std::cout <<  "Valor caracter " << Caracter << std::endl;
    std::cout << " Tamanho da variavel numero: " << sizeof(Caracter) << "\n";
    std::cout << " Endereço da memoria: " << (void*)&Caracter << "\n";
    std::cout <<  "Valor caracter2: " << caracter2 << std::endl;
    std::cout << " Tamanho da variavel numero: " << sizeof(caracter2) << "\n";
    std::cout << " Endereço da memoria: " << (void*)&caracter2 << "\n";

    system("PAUSE");
}
