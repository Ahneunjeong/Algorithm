#include <stdio.h>
int main() {
	int n;
	int i,j,k;

	scanf("%d", &n);

	for(i=1; i<=n; i++){       
		for(k=0; k<i; k++)
			printf("*");
		 for (j = 0; j < n-i; j++){
		printf("  ");
		}
		for(j=0; j<i;j++)
			printf("*");
	printf("\n");
	}
	for(i=n-1; i>=1; i--){       
		for(k=i; k>0; k--)
			printf("*");
		 for (j = n-i; j >0; j--){
		printf("  ");
		}
		for(j=i; j>0;j--)
			printf("*");
	printf("\n");
	}
}