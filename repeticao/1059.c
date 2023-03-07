#include <stdio.h>

int main (){

    int soma = 0, i = 0;

    while (i < 100){
        i++;
        if (i % 2 == 0){
            soma += i;
        }
    }  
    printf("%d ", soma);

    return 0;


}