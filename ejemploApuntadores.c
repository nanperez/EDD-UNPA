#include<stdio.h>


void invertir(int *a, int *b){
    int aux;
    aux = *b;
    *b = *a;
    *a = aux;

}

void precioMasIVA(int *p){
    int aux = *p;
    *p = aux+(aux*0.16);
}

int main(){
    // variables comunes y corrientes
    int a = 10, b = 8, c;
    int precio=350;


    precioMasIVA(&precio);
    printf("El precio con IVA es %d",precio);
    
 
}