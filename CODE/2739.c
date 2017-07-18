#include <stdio.h>

int main() {

	int n;
	int i=1;

	scanf("%d", &n);

	for(i ; i<10; i++)
		printf("%d * %d = %d\n", n, i, n*i);

    return 0;
}