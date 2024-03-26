#include <iostream>

int fatorial(int num){
    if(num==1){
        std::cout<< num;
        return 1;
    }else{
        std::cout<< num<<" * ";
        return num *fatorial(num-1);
        
    }
}

int main(){

    int numFatorial;

    std :: cout << "Digite um numero para o seu fatorial: " ;
    std :: cin>>numFatorial;
    
    int resultado;

    resultado = fatorial(numFatorial);

    std:: cout <<" = "<<resultado;
    return 0;
}