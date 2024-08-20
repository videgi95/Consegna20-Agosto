#include <stdio.h>

int moltiplicazione(int a,int b){
	int c;
	c=a*b;
	
	return c;
}

float media(int a,int b){
	float m;
	m=(float)(a+b)/2;
	
	return m;
}

int main(){
	
	int num1,num2;
	
	printf("Inserisci il primo numero:  \n");
	scanf("%d",&num1);
	
	printf("Inserisci il secondo numero:  \n ");
	scanf("%d",&num2);
	
	printf("Il prodotto tra i due numeri e': %d\n",moltiplicazione(num1,num2));
	printf("La media dei due numeri e': %f",media(num1,num2));
	
	
	
	return 0;
}
