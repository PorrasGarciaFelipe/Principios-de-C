#include <stdio.h>
int main(){
	int n=5,fila,columna;
	for(fila=1;fila<=n;fila++){
		for(columna=1; columna<=1+n-fila; columna++){
		   printf(" ");  
		} 		
		for(columna=1;columna<=fila;columna++){
		printf("*");
		}	
		printf("\n");
	}
return 0;
}
