#include <iostream>

int atacarTorre(int numPecas){

    if(numPecas==1){
        return 1;
    }else{
        return 2* atacarTorre(numPecas -1)+1;
    }
}
int main(){
    int numPecas;
    std :: cout << "Quantidade de pecas Inicial do jogo:";
    std :: cin >> numPecas;

    int jogadas;
    jogadas = atacarTorre(numPecas);
    std :: cout<< "A quantidade de Jogadas foi: "<< jogadas;

    return 0;
}