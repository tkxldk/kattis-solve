#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	if(n % 2 != 0){
		printf("Alice");
	}else{
		printf("Bob");
	}
	
	return 0;
}
