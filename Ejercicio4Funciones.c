//Ejercicio 5 Funciones Hector Saad
#include <stdio.h>
int main(){
    char letra=0;
    printf("INTRODUZCA UNA LETRA DE LA 'A' A LA 'Z' MINUSUCULA:");
    scanf("%c",&letra);
    while(letra!='0'){
        char conversion=mayuscula(letra);
        while(letra < 'a' || letra > 'z'){
            printf("\nError. Introduce una letra valida: ");
            scanf(" %c", &letra);
            }
        printf("\nLA LETRA MAYUSCULA DE LA LETRA MINUSCULA %c ES: %c",letra,conversion);
        printf("\nINTRODUCE OTRA LETRA (0 PARA SALIR): ");
        scanf(" %c", &letra);






