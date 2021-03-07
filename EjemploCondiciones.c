#include<stdio.h>
// Declaración de la función
int fiesta(int r, int p);


int main(){
    int x,y;
    printf("Dame la cantidad de refrescos y pizzas (separado por un espacio)\n");
    scanf("%d %d",&x,&y);
    printf("El resultado de la fiesta es: %d",fiesta(x,y));


}
// Definición de la función fiesta
int fiesta(int r, int p){
    int exito = 0;
    if (r<5 || p <5)
    {
        exito = 0;
    }else{
        if (r>=p*2 || p>=r*2)
        {
          exito = 2;  
        }else{
            if(r>=5 && p>=5){
                exito = 1;
            }
        }
        
    }
    
    return exito;

}