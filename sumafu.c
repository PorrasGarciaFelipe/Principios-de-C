#include <stdio.h>

void suma(int a, int b){
	int sum;
	sum=a+b;
	printf("El valor de la suma es %d:\n\n", sum);
} 
main(){
	int a, b;
	printf("valor de a:\n");
	scanf("%d", &a);
	printf("valor de b:\n");
	scanf("%d", &b);
	suma(a,b);
	return 0;
}

