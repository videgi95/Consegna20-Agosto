#include <stdio.h>

int main() {
	int num1,num2;
	float media;
	
	printf("Inserisci il primo numero: \n");
	scanf("%d",&num1);
	
	printf("Inserisci il secondo numero \n");
	scanf("%d",&num2);
	
	media=(float)(num1+num2)/2;
	
	printf("La media dei due numeri e': %f",media);
	
	return 0;
}
