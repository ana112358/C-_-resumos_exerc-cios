#include <iostream>
int fibonacci(int num){
    if (num == 1){
        return 1;
    }else if(num==0){
        return 0;
    }else {
        return fibonacci(num-2) + fibonacci(num-1);
    }
    
    

}

int main(){

    int ordem=0 ;
    std :: cout << "Digite a ordem do numero Fibonacci :";
    std :: cin >> ordem;

    int num;
     num = fibonacci(ordem);

     std :: cout <<"O numero de ordem "<<ordem<<" de Fibonaci e: "<< num;

    return 0;
}