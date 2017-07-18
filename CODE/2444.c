#include <stdio.h>
int main() {
	int n;
	int i,j,k;

	scanf("%d", &n);

	for(i=1; i<=n; i++){
        for (j = 0; j < n-i; j++){
		printf(" ");
		}
		for(k=0; k<2*i-1; k++)
			printf("*");
	printf("\n");
	}
		for(i=n-1; i>=1; i--){
        for (j = n-i; j >0; j--){
		printf(" ");
		}
		for(k=2*i-1; k>0; k--)
			printf("*");
	printf("\n");
	}
}