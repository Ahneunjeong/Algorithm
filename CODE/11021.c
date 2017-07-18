#include <stdio.h>
int main(){
    
    int a=0,b=0;
	int res;
	int n;
	int i=0;


	scanf("%d", &n);
		for(i; i<n;i++){
			scanf("%d %d", &a, &b);
			if((a>0 && a<10) && (b>0 && b<10)){
			res=a+b;
			printf("Case #%d: %d\n",i+1,res);
			}
		}
	return 0;
}