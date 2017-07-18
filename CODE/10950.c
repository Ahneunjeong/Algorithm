#include <stdio.h>
int main(){
    
    int a,b;
	int n=0;
	int i=0;
	int res;

	scanf("%d",&n);
		
	for(i; i<n; i++){	
			scanf("%d %d", &a, &b);
			if((a>0 && a<10) && (b>0 && b<10)){
			res=a+b;
			printf("%d\n",res);
				}
		}

	return 0;
}