#include <stdio.h>

int n, i, lamp, lamp_2;

int main() {
	scanf("%d", &n);
	for (int cont = n; cont >= 1; cont--){
		scanf("%d", &i);
		if (i == 1){
			lamp = !lamp;			
		}
		else{
			lamp = !lamp;
			lamp_2 = !lamp_2;
		}
	}
	printf("%d\n%d", lamp, lamp_2);
	return 0;
}
