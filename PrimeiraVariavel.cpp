#include <iostream>
//#include <tchar.h>

int main()
{
    //_tsetlocale(LC_ALL, _T("portuguese")) ... função que configura para monstrar acentos
    int NumVidas = 5; //Estou indicando que quando o programa for executado o computador devera criar um local de memoria com tamanho suficiente para armazenar um numero inteiro
// Declaração de variavel: primeiro colocamos qual o  tipo de variavel que desejamos que o computador crie. AQui foi a variavel int(Integer)
// computador por favor me fornece um local na meoria ram com tamanho suficiente para armazenar um numero inteiro.(1,2,3,4,5,6,-1,-2). vai facilitar muito voce nomear este endereço da memoria com um nome pra me permitir manipular ao inves de eu decorar 0987UJHUY7 ou coisa assim
    int Score = 1350;
    // Acima o computador ira alocar um espaço de memoria do tipo inteiro, depois vat ate esse local no ram e vai colocar o valor 1350
    std::cout << "*******INICIO DO JOGO*********" << std::endl;
    std::cout << " Vidas Jogador: " << NumVidas;
    std::cout << " Pontuação: " << Score << std::endl;
    std::cout << " Tamanho da Variavel NumVidas: " << sizeof(NumVidas);
    std::cout << " // Endereço que NumVidas Ocupa Na Memoria RAM: " <<&NumVidas << "\n";
    std::cout << " // Endereço que Pontuação Ocupa Na Memoria RAM: " <<&Score << "\n";
    std::cout << "*******DURANTE O JOGO**********" << std::endl;
    system("PAUSE");
    // Vá ate a região da memoria rotulada com o nome pontuação e colowque agora a soma do valor que está contido nela + 150
    Score = Score + 150;
    NumVidas = NumVidas - 1;
}