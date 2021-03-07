#include<stdio.h>
// Resolver una suma a y b
// Declaración de la función suma
int suma(int a, int b);


int main(){
    int a, b;
    printf("Dame el valor de a y b (separado por un espacio)\n");
    scanf("%d %d",&a,&b);
    printf("La suma es: %d",suma(a,b));
}

// Definición de la función suma
int suma(int a, int b){
    return a+b;
}