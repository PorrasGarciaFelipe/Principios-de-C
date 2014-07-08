#include <stdio.h>

int main(){
    
    int n, Mayor=18;
    printf("Introdusca la edad: ");
    scanf("%d",&n);

	if(n<Mayor){
		printf("no puede votar, eres menor de edad %d \n",n);
	}
	else{
		printf("puedes votar; tienes: %d\n",n);
	}

}
