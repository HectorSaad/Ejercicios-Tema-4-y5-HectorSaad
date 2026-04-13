//Ejercicio 2 Funciones Hector Saad
#include <stdio.h>
#include <math.h>
float parametroReal(float x){
return sqrt(log10(ceil(x)));
}
int main(){
    float numero=0;
    printf("Introduzca un numero del que quiera calcular la raiz cuadrada del logaritmo en base 10 del menor numero entero mayor que el arg. del a funcion:");
    scanf("%f",&numero);

    float resultado=parametroReal(numero);
    printf("\nEl resultado del numero introducido %f tras meterlo en la funcion es: %f",numero,resultado);

}
