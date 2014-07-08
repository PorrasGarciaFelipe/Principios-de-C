#include <stdio.h>

int main(){
    
    int altura, fila, col;
    printf("Altura de la piramide: ");
    scanf("%d",&altura);
    
    for(fila=1; fila<=altura; fila++){
        
        /* Espacios en blanco*/
        for(col=1; col<=altura-fila; col++){
            printf(" ");  
        }
        
        for(col=1;col<=2*fila-1;col++){  
            printf("*");
        }
        printf("\n" ) ;
        
    }
}

