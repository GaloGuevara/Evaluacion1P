/*Diseñe un programa que reciba como dato un número entero y a partir de este genere un número de un dígito (entre 0 y 9)
sumando los dígitos tantas veces como sea necesario.

Por ejemplo:
Entrada: 3265
Salida: 7
*/

// Adición de bibliotecas
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int num;

    printf("Ingrese un numero entero: ");
    scanf("%d%*c", &num);

    int digito = 0, suma = 0;

    while (num > 0)
    {
        digito = num % 10;
        suma += digito;
        num = num / 10;
    }
    
    printf("La suma es: %d", suma);

    return 0;
}