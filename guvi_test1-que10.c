#include<stdio.h>

int main(){
	
	int n, count=0, n1, n2;
	scanf("%d", &n);
	n1=n;
	if(n==0)
		count++;
	else{
			while(n){
			n=n/10;
			count++;
	}

	}
	
	printf("%d is number of digits in %d", count, n1);
}
