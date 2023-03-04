#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int  n1,n2;
	char op2;
	printf("\n\n--- CALCULATOR ---\n\n");
	printf("Number 1 : "); scanf("%d",&n1);
	printf("Choose Operation ( +  -  *  /) --> "); scanf(" %c",&op2);
	printf("Number 2 : "); scanf("%d",&n2);
	
	switch(op2){
		
		case '+' : printf("%d + %d = %d",n1,n2,n1+n2);  break;
		case '-' : printf("%d - %d = %d",n1,n2,n1-n2);	break;
		case '*' : printf("%d * %d = %d",n1,n2,n1*n2);  break;
		case '/' : printf("%d / %d = %d",n1,n2,n1/n2);  break;
		default : printf("incorrect Entry");			break;
	}
	return 0;
}
