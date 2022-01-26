#include <stdio.h>
#include <math.h>

int main(){
	int x;
	scanf("%d", &x);
	
	int count1 = pow(2, x);
	int count2 = count1 + 1;
	int lastcount = pow(count2, 2);
	printf("%d", lastcount);
	
	return 0;
}
