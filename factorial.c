#include <stdio.h>					
int factorial(int n)
{
	if (n==0){	
	return 1;
	}
	else{
	return n*factorial(n-1);
	}
}
int main(){
	int a;
	printf("valor de a:\n");
	scanf("%d", &a);	
	printf("El valor factorial es %d:\n\n", factorial(a));
}
