#include <stdio.h>
int a, b;
int cont = 0;

int main(){
	scanf("%d%d", &a, &b);
	for(int num = 1; num <= b; num++){
		cont++;
		printf("%d", num);
		if (cont == a){
			printf("\n");
			cont = 0;
		}
		else{
			printf(" ");
		}	
	}
	return 0;
}
