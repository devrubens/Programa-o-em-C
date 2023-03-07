#include <stdio.h>

int count;

int fib(int n){

    count += 1;
    if (n == 0){
        return 0;
    } else if (n == 1){
        return 1;
    } else {
        return fib(n-1) + fib(n-2);
    }

}

int main ()
{	

    int qtd;
    scanf("%d", &qtd);
    for (int i = 0; i < qtd; i++){
        count = 0;
        int n;
        scanf("%d", &n);
        int resultado = fib(n);
        printf("fib(%d) = %d calls = %d\n", n, count-1, resultado);
    }

}