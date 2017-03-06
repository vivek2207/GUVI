#include<stdio.h>

int main(){
	
	int num, i, flag=0;
	scanf("%d", &num);
	
	for(i=2; i<=num/2; i++){
		if(0==num%i){
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("not prime");
	else 	
		printf("prime");
}
