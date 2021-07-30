#include <stdio.h>
int x, y;

int main(){
    scanf("%d", &x);
    scanf("%d", &y);
    if ((x > 0) && (y > 0)){
        printf("Q1\n");
    }
    else if ((x < 0) && (y > 0)){
        printf("Q2\n");
    }
    else if ((x < 0) && (y < 0)){
        printf("Q3\n");
    }
    else if ((x > 0) && (y < 0)){
        printf("Q4\n");
    }
    else{
    	printf("eixos\n");
	}
    return 0;
    }
