#include <stdio.h>
#include <string.h>

int main(void){

    char src[] = "Hello";
    char dest[20];

    //Copia "Hello" en dest
    //De src a dest
    strncpy(dest, src, 4);
    printf("%s\n", dest);


    return 0;
}