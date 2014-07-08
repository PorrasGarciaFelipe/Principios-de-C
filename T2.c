#include <stdio.h>
int main(){
	int n=5,fila,columna,ne=5;
	for(fila=1;fila<=n;fila++){
		for(columna=1;columna<=ne;columna++){
		printf("*");
		}
		printf("\n");
		ne-=1;
	}

return 0;
}
