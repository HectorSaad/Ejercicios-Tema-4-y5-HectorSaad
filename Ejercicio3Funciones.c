//Ejercicio 3 Funciones Hector Saad
#include <stdio.h>
#include <math.h>

float segundoGrado1(float a, float b, float c){
    return (-b + sqrt(b*b - 4*a*c)) / (2*a);
}

float segundoGrado2(float a, float b, float c){
    return (-b - sqrt(b*b - 4*a*c)) / (2*a);
}

int main(){
    float a, b, c;
    float condicion;

    printf("INTRODUZCA TRES PARAMETROS A,B,C: ");
    scanf("%f %f %f", &a, &b, &c);

    condicion = b*b - 4*a*c;

    while(condicion < 0){
        printf("\nVUELVA A INTRODUCIR TRES PARAMETROS A,B,C: ");
        scanf("%f %f %f", &a, &b, &c);
        condicion = b*b - 4*a*c;
    }

    printf("\nEL VALOR DE LA RAIZ REAL 1 ES: %f, EL VALOR DE LA RAIZ REAL 2 ES: %f",
           segundoGrado1(a,b,c), segundoGrado2(a,b,c));

    return 0;
}








