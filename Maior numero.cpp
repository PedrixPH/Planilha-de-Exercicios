#include <stdio.h>
int x, maior, cont, chest;
int maior = 0;
int cont = 0;
int chest = 0;
int main(){
	scanf("%d", &x);
	while (x > 0){
		scanf("%d", &x);
	}
		if (cont == 0){
			maior = x;
		}	if (x > maior){
			maior = x;
		}
			else if(x < maior){
			chest = x;
		}	
			// Se x for maior do que maior, maior = x
			// Se x for menor do que maior, sus = x


	int maior_numero;
	maior_numero = maior;
	printf("%d\n", maior_numero);
	return 0;
}


