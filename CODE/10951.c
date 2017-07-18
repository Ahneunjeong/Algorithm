#include <stdio.h>
int main(){
    
    int a,b;
	int res;
		

	while(	scanf("%d %d", &a, &b)!=EOF){	
			if((a>0 && a<10) && (b>0 && b<10)){
			res=a+b;
			printf("%d\n",res);
				}
		}

	return 0;
}