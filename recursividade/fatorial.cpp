#include <iostream>

int fatorial(int num){
    if(num==1){
        return 1;
    }else{
        return num *fatorial(num-1);
        std::cout<< num<<"-";
    }
}

int main(){

    int numFatorial;

    std :: cout << "Digite um numero para o seu fatorial: " ;
    std :: cin>>numFatorial;
    
    int resultado;

    resultado = fatorial(numFatorial);

    std:: cout <<numFatorial<<"! = "<<resultado;
    return 0;
}