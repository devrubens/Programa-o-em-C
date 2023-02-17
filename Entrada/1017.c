#include <stdio.h>

int main (){

    double valorHoras, valorKM;
    double resultado;

    scanf("%lf", &valorHoras);
    scanf("%lf", &valorKM);

    resultado = (valorHoras * valorKM)/12;

    printf("%.4lf\n", resultado);

    return 0;

}