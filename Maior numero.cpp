#include <stdio.h>

int a;
int maior = -1;

int main() {
	do {
    scanf("%d", &a);
   		if (a > maior) maior = a;
    } while (a > 0);
	
	printf("%d\n", maior);
	
    return 0;
}                                                                            
