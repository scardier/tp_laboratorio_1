#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(){
    char seguir='s';
    float num1=0, num2=0;
    int opcion=0;

    while(seguir=='s')
    {
        opcion=menu(num1,num2);
        switch(opcion)
        {
            case 1:
                printf("Ingrese el primer numero: ");
                scanf("%f", &num1);
                break;
            case 2:
                printf("Ingrese el primer numero: ");
                scanf("%f", &num2);
                break;
            case 3:
                printf("El resultado de la suma es: %.2f\n", suma(num1, num2));
                break;
            case 4:
                printf("El resultado de la resta es: %.2f\n", resta(num1, num2));
                break;
            case 5:
                printf("El resultado de la division es: %.2f\n", division(num1, num2));
                break;
            case 6:
                printf("El resultado de la multiplicacion es: %.2f\n", multiplicacion(num1, num2));
                break;
            case 7:
                printf("El resultado del factorial del primer numero es: %.2f\n ", factorial(num1));
                break;
            case 8:
                printf("El resultado de la suma es: %.2f\n", suma(num1, num2));
                printf("El resultado de la resta es: %.2f\n", resta(num1, num2));
                printf("El resultado de la division es: %.2f\n", division(num1, num2));
                printf("El resultado de la multiplicacion es: %.2f\n", multiplicacion(num1, num2));
                printf("El resultado del factorial del primer numero es: %.2f\n ", factorial(num1));
                break;
            default:
                seguir = 'n';
                break;
        }
        system("pause");
    }
    return 0;
}
