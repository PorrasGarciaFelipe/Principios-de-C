#include <stdio.h>

int main(){
    
    int n, fila, columna;
    printf("Introdusca la altura: ");
    scanf("%d",&n);
    
    for(fila=1; fila<=n; fila++){
        
        for(columna=1; columna<=n-fila; columna++){
            printf(" ");  
        }
        
        for(columna=1;columna<=2*fila-1;columna++){  
            printf("*");
        }
        printf("\n" ) ;
        
    }
}

