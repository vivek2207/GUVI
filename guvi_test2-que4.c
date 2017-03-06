#include<stdio.h>

int main(){
	
	int i, n1, n2;
	scanf("%d%d", &n1, &n2);
	
	for(i=n1; i<=n2; i++){
		if(0!=i%2)
		printf("%d is odd number\n", i);
	}
	
}
