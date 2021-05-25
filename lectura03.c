    #include <stdio.h> 
    #include<stdlib.h> 
    #include<string.h>
     // usar typedef empleado: nombre, salario, id

    void main(){
        FILE *archivo;
        // estructura que se llame empleado
        char *nombre = (char*)malloc(100*sizeof(char));
        float salario;
        int id;

        // aperturar el fichero
        archivo = fopen("prueba.txt","a");
        if (archivo==NULL)
        {
            printf("No se aperturó correctamente");

        }
        // empezar a solicitar los datos del empleado
        printf("Dame tu nombre completo:");
        scanf("%[^\n]s",nombre);
        fprintf(archivo,"Nombre: %s \n",nombre);

        printf("Dame tu identificador:");
        scanf("%d",&id);
        fprintf(archivo,"ID: %d \n",id);

        printf("Dame el valor de tu salario;");
        scanf("%f",&salario);
        fprintf(archivo,"Salario: %.2f \n",salario);
        
        fclose(archivo);



    }
    




