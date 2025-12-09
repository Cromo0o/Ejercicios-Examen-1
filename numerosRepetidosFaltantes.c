#include <stdio.h>

int main(void){

    int n;
    
    do{
    
        printf("Ingrese el tamanio del arreglo: ");
        scanf("%d", &n);

        if (n < 1){

            printf("Tamanio del arreglo no valido, intente nuevamente\n");

        }
        
        printf("El tamaño del arreglo ingresado es: ");

        for (int i = 1; i <= n; i++){
            
            printf("%d ", i);

        }

        printf("\n");

    }while (n < 1);

    int arr[n];

    printf("Digite %d numeros entre 1 y %d: ", n, n);

    for (int i = 0; i < n; i++){
        
        scanf("%d", &arr[i]);

    }
    

    printf("Su arreglo ingresado es: ");
    
    for (int i = 0; i < n; i++){
        
        printf("%d ", arr[i]);

    }


    //Numeros repetidos
    //Crear un vector de frecuencias asociado

    int f[n+1];

    for (int i = 0; i < n+1; i++){
        
        f[i] = 0;

    }

    printf("\n");
    printf("\n");

    printf("Vector de frecuencias\n");

    for (int i = 0; i < n + 1; i++){
        
        printf("freq[%d] = %d", i, f[i]);
        printf("\n");
    }
    
    //Contar Frecuencias
    for (int i = 0; i < n; i++){
        
        if(arr[i] >= 1 && arr[i] <= n){

            f[arr[i]]++;

        }

    }

    printf("Vector de frecuencias (actualizado)\n");

    for (int i = 0; i < n + 1; i++){
        
        printf("freq[%d] = %d", i, f[i]);
        printf("\n");
    }
    
    printf("\n");
    printf("\n");
    

    printf("Repetidos: ");
    for (int i = 0; i < n + 1; i++){
        
        if (f[i] > 1){
            
            printf("%d ", i);

        }
    }

    printf("Faltantes: ");
    for (int i = 0; i < n + 1; i++){
        
        if (f[i] == 0 ){
            
            printf("%d ", i);

        }
    }
    



    return 0;
}