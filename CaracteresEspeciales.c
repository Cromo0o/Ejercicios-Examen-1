#include <stdio.h>
#include <string.h>

int main(void){

    //  \' -> '
    //  \" -> "
    //  \\ -> \

    char txt[] = "We are the so-called \"Vikings\" from the north.";

    printf("%s", txt);


    return 0;
}