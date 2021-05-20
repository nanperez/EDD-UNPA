//Author: Nancy P.C.
#include<stdio.h>
#include<stdlib.h>
#include<string.h> // libreria para el maejo de cadenas
// identificar las coincidencias
//strcpy(apuntador hacia cadena existente, nueva cadena)

// prototipo de la función 3.14
char* contarP(char *cadena, char *patron, int i, int j, int cont, int len, char *ncadena, char *npatron);

int main(){

    char *cadena;
    cadena = (char*)malloc(sizeof(char));
    printf("Dame una cadena:");
    scanf(" %[^\n]s",cadena);
    int contador=0; // contabilizar las coincidencias

    char patron[] = "pi";
    //int longitud = strlen(patron);
    char *res = (char*)malloc(sizeof(char));
    //printf("La cantidad de coincidencias es: %d",contarP(cadena,patron,0,0,strlen(cadena)));
    res = contarP(cadena,patron,0,0,0,strlen(cadena),res,"3.14");
    printf("La nueva cadena es: %s",res);

}



char* contarP(char *cadena, char *patron, int i, int j,int cont, int len, char *ncadena, char *npatron){
    // establecer el caso
    if (i<len) // paso recursivo
    {
        if (strstr(&cadena[i],patron) == &cadena[i]) // si existe coincidencia
        {
            strcpy(&ncadena[j],npatron);   // reconstrucción de la cadena
            cont++;
            i+= 2;
            j+=4;
            return contarP(cadena,patron,i,j,cont,len,ncadena,npatron);
        }else{// cuando no encuentra la coincidencia
            //i++;
            ncadena[j++] = cadena[i++];
            return contarP(cadena,patron,i,j,cont,len,ncadena,npatron);
        }
        
    }
    ncadena[j]='\0';
    return ncadena;
}




/*
for (int i=0; i<strlen(cadena); i++)
    {
        
        if (strstr(&cadena[i],patron) == &cadena[i])
        {
            contador++;
            i+= 2-1;
            //i = i+2;
        }

        
    }

    printf("Las coincidencias son: %d",contador);


*/