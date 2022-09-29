#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(){
	int a,b,c,i;
do{	
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	
	if(a==b){
		c = a+b;
		printf("%d + %d = %d",a,b,c);
	}else{
		c = a*b;
		printf("%d * %d = %d",a,b,c);
	}
	printf("\n 1 - para continuar \n 2 - para encerrar \n");
	scanf("%d", &i);
}while(i==1);
}
