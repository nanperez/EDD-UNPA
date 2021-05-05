#include<stdio.h>
// prototipo y la definición
int factorial(int n){
    // caso base
    if (n==0)
    {
        return 1;
    }else{
        // llamados recursivos
        return factorial(n-1)*n;
    }

}


int main(){
    int n;
    printf("Dame el valor: \n");
    scanf("%d",&n);
    printf("El factorial de %d es %d",n,factorial(n));

    return 0;
}


