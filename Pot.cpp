#include <stdio.h>
#include <math.h>

int main(){
	int N, P;
	scanf("%d", &N); getchar();
	
	int total, count = 0;
	for(int i = 1; i <= N; i++){
		scanf("%d", &P);
		int num = P / 10;
		int power = P % 10;
		total = pow(num, power);
		count = count + total;
	}printf("%d\n", count);
	
	return 0;
}
