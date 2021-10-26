#include <iostream>
//Diretiva de pre processador indica para incluir o arquivo de cabeçalho
//IOsstream pede para anexxar todo o codigo
int main()
//Função principal main, todo programa em c++ comecça com essa função
{ //indica o inico de um bloco de codigo
//cout é um comando de saida de dados, neste caso solicita que saida padrão, a tela, ponha a frase especificada.
//endl indcica para inserir um caracter de quebra de linha("String")
//system pause chama o shell do windowns, propmt
    std::cout << "Primeiro codigo, Olá mundo!!!" << std::endl;
    system("color 5F");
    system("PAUSE");
    return 0;
    //retorna para o sistema opercaional zero
    //zero é o padrão para informa que tudo deu certo, assim se a função main de certo, então ela retornara
}//indica o fim de um bloco

