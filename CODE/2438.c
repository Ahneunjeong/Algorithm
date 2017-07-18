#include <stdio.h>
int main() {
	int n;
	int i,j;
	scanf("%d", &n);

	for(i=1; i<n; i++)
	{
		printf("*\n");
		for(j=0; j<i; j++)
			printf("*");
	}
	printf("*\n");
}