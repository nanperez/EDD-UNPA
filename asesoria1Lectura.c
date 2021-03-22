// Ejercicio solicitar datos de entrada y hacer una función

// Directivas o librerias
#include <stdio.h>
// Declarar el prototipo de función
int calcularArea(int x, int y);


int main(){
    int b,h,area;
    printf("Dame el valor de la base: \n");
    scanf("%d",&b);

    printf("Dame el valor de la altura: \n");
    scanf("%d",&h);
    // Donde llamo a la función
    
    printf("El area es: %d",calcularArea(b,h));

}

// definición de mi función
int calcularArea(int b, int h){

    return b*h;
}

