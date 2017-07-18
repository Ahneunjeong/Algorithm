#include <stdio.h>
int main() {
	int n;
	int i,j,k;

	scanf("%d", &n);
	
		for(i=n; i>=1; i--){
        for (j = n-i; j>=1; j--){
		printf(" ");
		}
		for(k=i; k>0; k--)
			printf("*");
	printf("\n");
	}
}