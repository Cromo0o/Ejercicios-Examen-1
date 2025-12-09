#include <stdio.h>

/*
                   FILA
             1      1
          2  3      2
       6  5  4      3
    7  8  9 10      4
15 14 13 12 11      5

*/

int main(void){

    //Ingreso y validacion de la entrada

    int lineas, contador = 1;


    do{
    
        printf("Ingrese el numero de lineas: ");
        scanf("%d", &lineas);

        if (lineas < 1){

            printf("Numero de lineas no valido, intente nuevamente\n");

        }
        
        printf("Su numero de lineas ingresado es: %d\n", lineas);


        
    }while (lineas < 1);
    

    //Impresion del patron

    //Impresion de espacios en blanco

    for (int i = 1; i <= lineas; i++){
        
        for (int j = 1; j <= lineas - i; j++){
            
            printf("    ");

        }
        
        //Impresion de secuencia
        
        //Logica para las filas impares
        
        if(i %2 != 0){

            int fin_fila = (contador + i) - 1;
            
            for ( int j = 0; j < i; j++){
                
                printf("%4d", fin_fila - j);

                contador += 1;
            }
        }

        //Logica para las filas pares
        
        else{

            for (int j = 1; j <= i; j++){
                
                printf("%4d", contador++);    

            }

        }

        printf("\n");
    }
    
    //


    return 0;
}