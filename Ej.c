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

int main() // Funcion main
{
    int num; // Declaramos el entero num donde guardamos la variable que ingresa el usuario

    printf("Ingrese un numero entero: "); // Mostramos en pantalla la solicitud para ingresar el numero entero
    scanf("%d%*c", &num);                 // Guardamos el numero entero con el identificador %d de enteros y en caso de ingresar un caracter extra
                                          // Lo eliminamos con %*c

    // Bloque if para convertir el numero entero a positivo en caso de ingresarlo
    if (num < 0)
    {
        num = -num;
    }

    int digito = 0, suma = 10; // Definimos las variables contador de digitos para manipular cada digito del numero, y suma para ir guardando
    // el valor de la suma. Decimos suma=10 para que no de errores en el siguiente while

    while (suma > 9) // Bloque while para que en caso de tener la suma de los digitos un numero fuera de 0 a 9, vuelva a sumarlos hasta tener un solo digito
    {
        suma = 0;       // Cambiamos la variable suma a cero para volver a realizar la suma
        while (num > 0) // Bloque while para ir separando cada digito y añadirlo en la variable suma
        {
            digito = num % 10; // Aqui separamos cada digito, por ejemplo tenemos 345, el resultado de 345%10=5, el ultimo digito

            suma += digito; // Guardamos el ultimo digito en la suma

            num = num / 10; // Eliminamos el ultimo digito porque ya lo sumamos
        }
        num = suma; // Cambiamos la variable del numero por el valor de la suma para volver a sumar, por ejemplo la suma es 16 diferente de un solo digito
        // tenemos que num ahora es 16 y volvemos a sumar cada digito para tener 1+6=7
    }

    printf("La suma de todos los digitos hasta tener un unico numero entre 0 y 9 es: %d\n", suma); // Mostramos en pantalla cero

    return 0; // Devolvemos 0 para la función int main()
}