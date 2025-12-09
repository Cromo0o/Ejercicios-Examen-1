#include <stdio.h>

int main(void){

    char nombre[] = "";
    char saludo[] = "Gusto en verte";
    
    printf("Bienvenido a mi programa :D\n");
    printf("Cual es su nombre?\n");
    printf(">>");
    scanf("%s", &nombre);


    printf("%s %s!", saludo, nombre);
    
    return 0;
}