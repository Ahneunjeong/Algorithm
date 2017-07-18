#include <stdio.h>
#define nu 1000000
int arr[nu];
int main() {
	int min,max;
	int i=0;
	int a,b;

	scanf("%d", &a);

	for(i; i<a; i++){
		scanf("%d", &arr[i]);
	}

	i=0;
	max=arr[0];
	min=arr[0];
	for(i; i<a-1; i++){
		if(max<arr[i+1])
			max=arr[i+1];

		if(min>arr[i+1])
			min=arr[i+1];
	}

	printf("%d %d", min, max);
    return 0;
}