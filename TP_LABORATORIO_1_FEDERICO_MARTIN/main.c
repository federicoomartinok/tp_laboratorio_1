#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int num1 = 0;
int num2 = 0;
int menu;
int resultadoSuma = 0;
int resultadoResta = 0;
int resultadoMultiplicacion = 0;
int resultadoDivision = 0;
int resultadoFactorial = 0;
int resultadoFactorialDos = 0;
int flagnum1 = 0;
int flagnum2 = 0;

int main()
{
    do {

        printf("<<-- BIENVENIDO A LA CALCULADORA -->>\n");


        printf("\n1) Ingresar el primero operando. A=%d" , num1);
        printf("\n2) Ingresar el segundo operando. B=%d" , num2);
        printf("\n3) Calcular todas las operaciones.");
        printf("\n4) Informar los resultados.");
        printf("\n5) Salir.\n");
        printf("\nSeleccionar una opcion <1-5>: ");
        scanf( "%d" , &menu );

        switch( menu ) {
            case 1:
                printf("\nIngrese el primer operando: ");
                scanf( "%d" , &num1 );
                flagnum1 = 1;
                system("cls");
            break;
            case 2:
                printf("\nIngrese el segundo operando: ");
                scanf( "%d" , &num2 );
                flagnum2 = 1;
                system("cls");
            break;
            case 3:
                if( flagnum1 == 0 && flagnum2 == 0 ) {
                    printf("\nError! No ingreso el primer operando.\n");
                    printf("\nError! No ingreso el segundo operando.\n");
                    break;
                } else if( flagnum1 == 1 && flagnum2 == 0 ) {
                    printf("\nError! No ingreso el segundo operando.\n");
                    break;
                } else if( flagnum1 == 0 && flagnum2 == 1 ) {
                    printf("\nError! No ingreso el primer operando.\n");
                    break;
                }
                resultadoSuma = suma( num1 , num2 );
                resultadoResta = resta( num1 , num2 );
                resultadoMultiplicacion = multiplicacion( num1 , num2 );
                resultadoFactorial = factorial( num1 );
                resultadoFactorialDos = factorial( num2 );
                if( num2 > 0 ) {
                    resultadoDivision = (float) division( num1 , num2 );
                }
                system("cls");
                break;
            case 4:
                printf( "\nEl resultado del primer operando + el segundo es: %d" , resultadoSuma );
                printf( "\nEl resultado del primer operando - el segundo es: %d" , resultadoResta );
                if( num2 > 0 ) {
                    printf( "\nEl resultado del primer operando dividido el segundo es: %d" , resultadoDivision );
                } else {
                    printf("\nERROR! el segundo operando debe ser mayor a cero");
                };
                printf( "\nEl resultado del primer operando multiplacado por el segundo es: %d" , resultadoMultiplicacion );
                printf( "\nEl factorial del primer operando es: %d" , resultadoFactorial );
                printf( "\nEl factorial del segundo operando es: %d" , resultadoFactorialDos );
                printf( "\n" );
                num1 = 0;
                num2 = 0;
                break;
            case 5: break;
        };

    } while (menu != 5);


    return 0;
}
