#include<stdio.h>
// protipo de función
int potencia(int num, int p);

int main(){
    int n,p;
    printf("Dame el valor de n:\n");
    scanf("%d",&n);

    printf("El valor de la potencia: \n");
    scanf("%d",&p);
    // llamado a la función
    printf("El resultado es: %d",potencia(n,p));

}

// n =3   p = 6
int potencia(int n, int p){
    // retornar un resultado
    int resultado;
    // caso base
    if (p==0)
    {
        resultado = 1;
        return resultado;
    }else{
        return  n*potencia(n,p-1);


    }
}


