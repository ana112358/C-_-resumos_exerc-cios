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

    produto *listaCompras = nullptr;
    int i=0, opcao=8;

    while (opcao!= 0)
    {
        std :: cin >> opcao;
        switch (opcao)
        {
        case 1:
            ++i;
            produto *copiaLista = new produto[i];
            if(i>1){

                for (int a = 0; a < i-1; a++)
                {
                    strcpy(copiaLista[a].nome,listaCompras[a].nome);
                    copiaLista[a].preco = listaCompras[a].preco;
                    copiaLista[a].quantidade = listaCompras[a].quantidade;
                }

                
            }
            
           
            char nome[50];
            std :: cout << "Digite o nome do produto : ";
            std :: cin >>nome;
            strcpy(copiaLista[i-1].nome, nome);
            
            int quatidadeProduto;
            std :: cout <<"Digite a quantidade em estoque: ";
            std :: cin >> quatidadeProduto;
            copiaLista[i-1].quantidade = quatidadeProduto;

            float preco;
            std :: cout << "Digite o preco do produto : ";
            std :: cin >> preco;
            copiaLista[i-1].preco = preco;

            listaCompras = new produto[i];
       
             listaCompras = copiaLista;
            
           

            std :: cout << "\n---------------------------------\n";
            break;
        
        }
    }

    
    //Adicionar item na lista

   

    std :: cout << "quantidade : "<< listaCompras[0].quantidade <<"\nNome: " <<listaCompras[0].nome;
    
}
