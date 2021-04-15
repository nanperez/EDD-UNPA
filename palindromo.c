#include <stdio.h>
#include <string.h>
#define TAM 100 

typedef struct{
  int tope;
  char frase[100];	
}Pila;



void insertar(Pila *pila, char dato);
char eliminar(Pila *pila);
int vacia(Pila pila);
void muestra(Pila *pila);
void traslado(Pila *p1, Pila *p3, int len);
void compara(Pila *p1, Pila *p3, int len);

int main(){
	// Hacer el llamado a las operaciones primitivas de la pila
	Pila pila1 = {-1,{""}}; // inicializando 
	Pila pila2 = {-1,{""}}; // inicializando la instancia de la Pila
	Pila pila3 = {-1,{""}}; // inicializando la instancia de la Pila
	char lectura[100];// variable temporal
	
	// Aquí estoy llenando la Pila1
	printf( "Frase sin validar: " );
	scanf("%[^\n]s",lectura);
    int len = strlen(lectura);
    printf("La longitud de la cadena %d \n",len);

	int i =0;
	// Aqui recorro la cadena para ir agregando cada caracter a la pila1
	while(lectura[i]){
		insertar(&pila1,lectura[i]);
		insertar(&pila2,lectura[i]);
		i++;
		}
	
	muestra(&pila1);
	printf("\n  PILA 2 \n");
	muestra(&pila2);
	traslado(&pila1,&pila3,len);
	printf("\n  PILA 3 \n");
	muestra(&pila3);
	compara(&pila2,&pila3,len);
	
}

void traslado(Pila *p1, Pila *p3,int len){
	char aux;
    for(int i = 0; i<len;i++){
		aux = eliminar(p1);
		insertar(p3,aux);
	}
}

void compara(Pila *p2, Pila *p3, int len){
	int r = 0;
	for(int i=p2->tope;i >=0; i--){
		if((p2->frase[i])!=(p3->frase[i])){
			r = 1;
			
		}
	}

	if(r==1){
		printf("NO ES PALINDROMO");
	}else{
		printf("ES PALINDROMO");
	}

}

char eliminar(Pila *p){
    char dato;
    if (p->tope >-1)
    {
        dato = p->frase[p->tope];
        p->tope--;
    }
    
    return dato;

}

void insertar(Pila *pilaT, char dato){
	if (dato != ' ')
	{
		pilaT->tope++;
	pilaT->frase[pilaT->tope]=dato;
	}
	

	
}





void muestra(Pila *tas){
	int i;
	for(i=tas->tope;i>=0;i--){
			printf("|%c", tas->frase[i]);
			printf("|\n");
	}
	
	
}









