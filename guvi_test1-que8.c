#include<stdio.h>

int main(){
	int i, n, sum=0;
	
	scanf("%d", &n);
	
	for(i=0; i<=n; i++)
		sum+=i;
	
	printf("%d is sum of %d natural numbers", sum, n);
}
