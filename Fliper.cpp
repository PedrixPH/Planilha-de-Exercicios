#include <stdio.h>

int p, r;

int main() {
	scanf("%d%d", &p, &r);
	if (p == 0){
		printf("C");
	}
	else if ((p == 1) and (r == 0)){
		printf("B");
	}
	else if ((p == 1) and (r == 1)){
		printf("A");
	}
	return 0;
}

