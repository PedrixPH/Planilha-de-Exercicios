#include <stdio.h>

int long long a;
int cont;

int main() {
	scanf("%lld", &a);
	while (a > 0) {
		if (a%10 == 4 || a%10 == 7)
			cont++;
			a = a/10;
	}
		if (cont == 4 || cont == 7) printf("YES");	
		else printf("NO");
	return 0;
}

