#include <stdio.h>

int main(void){

    char str[] = "Geeks";


    //Actualizamos el primer elemento del arreglo
    str[0] = 'R';
    
    printf("%c\n", str[0]); //Imprimo un solo caracter de la cadena
    printf("%s\n", str);    //Imprimo una cadena de texto

    return 0;
}

