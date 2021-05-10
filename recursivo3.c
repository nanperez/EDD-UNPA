#include<stdio.h>
// prototipo de la función
int sumaR(int n);
int iterativa(int n);

int main(){
    int n;
    printf("Dame el valor de n:");
    scanf("%d",&n);
    //llamado a la función recursiva
    printf("La suma es: %d \n",sumaR(n));
    // llamado a la función iterativa
    printf("La suma es: %d \n",iterativa(n));


}

// Opción recursiva
int sumaR(int n){
    // caso base
    if(n==1){
        return 1;
    }else{
        // llamado recursivo
        return n+sumaR(n-1);
    }
}

// opción iterativa
int iterativa(int n){
    //ciclo for
    int suma = 0;
    for (int i = n; i >=1; i--)
    {
       suma = suma+i;
    }
    
    return suma;
}
