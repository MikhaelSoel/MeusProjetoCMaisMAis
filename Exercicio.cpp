#include <iostream>
int main()
{
    int numeroint;
    float numerofloat;
    double numerodouble;
    char caracter;

    numeroint = 25;
    numerofloat = 26.34853;
    numerodouble = 6578.38383;
    caracter = 'A';

    std::cout << " Número inteiro: " << numeroint << std::endl;
    std::cout << "Tamanho da variável: " << sizeof(numeroint) << "\n";
    std::cout << "Endereço: " << &numeroint << "\n";
    std::cout << " Número Float: " << numerofloat << std::endl;
    std::cout << "Tamanho da variável: " << sizeof(numerofloat) << "\n";
    std::cout << "Endereço: " << &numerofloat << "\n";

    std::cout << " Número Double: " << numerodouble << std::endl;
     std::cout << "Tamanho da variável: " << sizeof(numerodouble) << "\n";
     std::cout << "Endereço: " << &numerodouble << "\n";
    std::cout << " Caracter: " << caracter << std::endl;
    std::cout << "Endereço: " << (void*)&caracter << "\n";
     std::cout << "Tamanho da variável: " << sizeof(caracter) << "\n";
    system("PAUSE");






    return 0;
}
