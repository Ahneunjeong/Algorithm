#include <stdio.h>
int main() {
	int n;
	int i,j,k;

	scanf("%d", &n);

		for(i=n; i>=1; i--){
		 for (j = n-i-1; j >=0; j--){
			printf(" ");
		}
		for(j=2*i-1; j>0;j--)
			printf("*");
	printf("\n");
	}
				
		for(i=2; i<=n; i++){
		 for (j = 0; j <=n-i-1; j++){
			printf(" ");
		}
		for(j=0; j<2*i-1;j++)
			printf("*");
	printf("\n");
	}

}