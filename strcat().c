#include <stdio.h>
#include <string.h>

int main(void){

    char s[] = "Hola - Poli - Sistemas!";

    char *t = strtok(s, "- ");

    while (t != NULL){

        printf("%s\n", t);
        t = strtok(NULL, "- ");

    }

    return 0;
}