#include <stdio.h>
#include <stdlib.h>
/**
*\brief Solicita dos numeros al usaurio
*\param mensaje solicita que ingrese las opciomes deseadas
*
*/
int menu(float num1, float num2)
{
    int opcion;
        system("cls");
        printf("A continuacion elija la opcion que desee: \n\n");
        printf("1- Ingresar 1er numero (A=%.2f)\n",num1);
        printf("2- Ingresar 2do numero (B=%.2f)\n",num2);
        printf("3- Calcular la suma (%.2f+%.2f)\n",num1,num2);
        printf("4- Calcular la resta (%.2f-%.2f)\n",num1,num2);
        printf("5- Calcular la division (%.2f/%.2f)\n",num1,num2);
        printf("6- Calcular la multiplicacion (%.2f*%.2f)\n",num1,num2);
        printf("7- Calcular el factorial (%.0f!)\n",num1);
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");
        printf("\nIndique la operacion que desee realizar: ");
        scanf("%d",&opcion);

/**
*\brief se hace un bucle que indica que si la opcion es menor que 1 y mayor que 9
*\param imprime un error para volver a ingresar una opcion
*
*/

        while(opcion<1 || opcion>9)
        {
            printf("\nError, Elija una opcion entre el 1 y el 8, o 9 para salir: ");
            scanf("%d",&opcion);
        }
            system("cls");
        return opcion;
}
void validacion(int opcion, float numero1, float numero2)
{

    return;
}
/**
*\brief llama a las funciones de las operaciones
*\param Ejecuta las operaciones de suma, resta, division, multiplicacion y factorial
*\return retorna el resultado de las operaciones
*
*/

float suma(float numero1,float numero2)
{
    float resultado;
    return resultado=numero1+numero2;
}
/**
*\brief se calcula la resta de los numeros ingresados
*\return retorna el resultado entre numero uno y numero dos
*
*/

float resta(float numero1,float numero2)
{
    float resultado;
    return resultado=numero1-numero2;
}
/**
*\brief se calcula la multiplicacion de los numeros ingresados
*\return retorna el resultado entre numero uno y numero dos
*
*/

float multiplicacion(float numero1,float numero2)
{
    float resultado;
    return resultado=numero1*numero2;
}
/**
*\brief se calcula la division de los numeros ingresados
*\param se hace un bucle para que de un error si se ingresa 0 como divisor
*\return retorna el resultado entre numero uno y numero dos
*/

float division(float numero1,float numero2)
{
    float resultado;
        while(numero2==0){
            printf("El divisor no puede ser 0, ingrese nuevamente: ");
            scanf("%f",&numero2);
        }
        return resultado=numero1/numero2;
}
/**
*\brief se calcula el factorial del primer numero ingresado
*\return retorna el resultado del factorial
*
*/
float factorial (float num)
{
    float resultado;


        if(num==1|| num==0)
        {
            return 1;
        }
       resultado = num* factorial(num-1);
        return (resultado);



}

