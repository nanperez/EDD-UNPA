#include<stdio.h>
#include<string.h>

typedef struct estudiante
{
  char nombre[30];
  int edad;
  float estatura;
}Estudiante;

int contar(Estudiante *Estu);

int main(){
    // declaración de un arreglo de estructuras
    Estudiante e1[5];

    // Solicitud de los datos de cinco estudiantes
    for (int i = 0; i < 3; i++)
    {
       printf("Datos del estudiante No. %d  \n",i+1);
       printf("Nombre:");
       scanf("%s",e1[i].nombre);
       //fgets(e1[i].nombre,30,stdin);
       printf("Edad:");
       scanf("%d",&e1[i].edad);
       printf("Estatura:");
       scanf("%f",&e1[i].estatura);
       
    }
    printf("Estudiantes mayores de edad: %d",contar(e1));
} 

 int contar(Estudiante *Estu){
   int contador=0,edad;
  edad = Estu->edad;
  if (edad>=18)
  {
    contador++;
  }
  
  return contador;
 }   
    

