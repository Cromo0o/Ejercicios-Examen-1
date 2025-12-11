#include <stdio.h>

int main(void){

    char nombreCompleto[] = "";
    char saludo[] = "Gusto en verte";
    
    printf("Bienvenido a mi programa :D\n");
    printf("Cual es su nombre?\n");
    printf(">>");
    
    //Usando el scanset en el scanf
    //Leer el mensaje hasta que te encuentres un espacio
    //No haga que termine hasta que llegue al caracter de finalizacion \0
    scanf("%[^\n]s", nombreCompleto);


    printf("%s %s!\n", saludo, nombreCompleto);
    
    return 0;
}