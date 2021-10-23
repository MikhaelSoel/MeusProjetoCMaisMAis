#include <iostream>
//A diretiva de pré processador #include
// Indica para incluir o arquivo de cabeçalho
// iostream
//"namespace" Espaço de nome
int main()
// Função principal. Todo programa começa com esta função principal mein
{//Indica o inicio de um bloco de codigo
//cout é um comando de saida de dados, neste caso está solicitando para colocar na saida padrão(tela) a frase especificada
// endl inidca para inserir um caracter de quebra de linha na frase("string")
    std::cout << "Primeiro codigo, Olá mundo!!!" << std::endl;
    system("PAUSE");
    //Chama o shell do windos e coloca este pause
    return 0;
}// Indica o fim de um bloco de codigo