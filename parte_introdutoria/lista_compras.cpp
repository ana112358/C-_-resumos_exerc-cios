#include <iostream>
#include <new>
#include <string.h>

struct produto
{
    int quantidade;
    float preco;
    char nome[50];
};


int main(){

    produto *listaCompras;
    int i=0, opcao=8;

    while (opcao!= 0)
    {
        std :: cin >> opcao;
        switch (opcao)
        {
        case 1:
            ++i;
            listaCompras = new produto[i];
            int quatidadeProduto;

            std :: cout << "Digite o nome do produto";
            char nome[50];
            std :: cin >>nome;
            strcpy(listaCompras[i-1].nome, nome);
            

            std :: cout <<"Digite a quantidade:";
            std :: cin >> quatidadeProduto;
            listaCompras[i-1].quantidade = quatidadeProduto;

            float preco;

            std :: cout << "Digite o preco do produto : ";
            std :: cin >> preco;

            listaCompras[i-1].preco = preco;


            break;
        
        default:
            break;
        }
    }

    
    //Adicionar item na lista

   

    std :: cout <<  listaCompras[0].quantidade<<listaCompras[0].nome;
    
}
