//Ejercicio

#include <stdio.h>
int dobleValor(int numero){
numero=2*numero;
return numero;
}
int main(){
int numero;
do{
 printf("\nIntroduzca otro numero distinto de 0;");
 scanf("%i",&numero);
 printf("\nEl doble del numero %i introducido es: %i",numero,dobleValor(numero));
}while(numero!=0);
}



