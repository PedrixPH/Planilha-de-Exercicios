#include <stdio.h>
int a, b;
int cont = 0;
int cont_2 = 0;

int main(){
	scanf("%d%d", &a, &b);
	for(int num = 1; num <= b; num++){
		cont++;
		cont_2++;
		printf("%d", num);
		if (cont_2 = num){
			printf(" ");
		}
		if (cont == a){
		printf("\n");}
			if (cont == a){
				cont = 0;
			}
	}
	return 0;
}
