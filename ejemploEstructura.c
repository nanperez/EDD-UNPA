// Emular el comportamiento de un Cajero automático
/*
Registrar clientes
Hacer depósitos
Hacer retiros
Consultas de saldo
*/
#include<stdio.h>
#define MAX 2

typedef struct cuenta
{
    char nombre[50];
    char ap[50];
    char am[50];
    int  id_cliente;
    int saldo;
}Cuenta;
// Declarar un arreglo de estructura
Cuenta clientes[MAX];
// Declarar el prototipo de mis funciones
void registrarClientes();
int consultarSaldo();
void hacerDeposito();
void hacerRetiro();
int obtenerPos(int id);

int main(){

    int op;
    do{
    printf("\n BIENVENIDO AL CAJERO UNPA \n");
    printf("Selecciona alguna opción:\n");
    printf("1. Registrar clientes \n");
    printf("2. Consultar saldo \n");
    printf("3. Hacer un deposito \n");
    printf("4. Hacer un retiro \n");
    printf("5. Salir \n");
    scanf("%d",&op);
    // Hacer el llamado a una función
    switch (op)
    {
    case 1:
        registrarClientes();
        break;
    case 2:
        printf("El saldo es: %d",consultarSaldo());
        break;
    
    case 3:
        hacerDeposito();
        break;
    case 4:
        hacerRetiro();
        break;
    
    default:
        break;
    }



    }while(op<5);

}

// Definir la función para registrar los clientes
void registrarClientes(){
    printf("REGISTRANDO CLIENTES \n");
    for (int i = 0; i < MAX; i++)
    {
     printf("Nombre: ");  
     scanf("%s",clientes[i].nombre); 


     printf("Apellido Paterno:");
     scanf("%s",clientes[i].ap);

     printf("Apellido Materno:");
     scanf("%s",clientes[i].am);

     printf("Identificador Cliente:");
     scanf("%d",&clientes[i].id_cliente);

     printf("Saldo:");
     scanf("%d",&clientes[i].saldo);
        
    }
    
}

int consultarSaldo(){
    int id,aux,saldo=0;
    printf("CONSULTANDO SALDO..... \n");
    printf("Cual es tu ID: \n");
    scanf("%d",&id);

    for (int i = 0; i < MAX; i++)
    {
        aux = clientes[i].id_cliente;
        if (id==aux)
        {
          saldo = clientes[i].saldo;
        }
        
        
    }
    
return saldo;
}

void hacerDeposito(){
    int id,dinero,pos;
    printf("HACIENDO DEPOSITO A TU CUENTA \n");
    printf("Introduce tu ID: \n");
    scanf("%d",&id);
    printf("Cantidad a depositar: \n");
    scanf("%d",&dinero);
    pos=obtenerPos(id);
    // actualizando el saldo de un cliente
    clientes[pos].saldo = clientes[pos].saldo+dinero;

}

int obtenerPos(int id){
    int aux;
    for (int  i = 0; i < MAX; i++)
    {
        if (clientes[i].id_cliente==id)
        {
            aux = i;
        }
        
    }
    
    return aux;

}

void hacerRetiro(){
    int id,dinero,pos;
    printf("HACIENDO RETIRO A TU CUENTA \n");
    printf("Introduce tu ID: \n");
    scanf("%d",&id);
    printf("Cantidad a retirar: \n");
    scanf("%d",&dinero);
    pos=obtenerPos(id);
    if (dinero <= clientes[pos].saldo)
    {
        clientes[pos].saldo = clientes[pos].saldo-dinero;
    }
    



}
