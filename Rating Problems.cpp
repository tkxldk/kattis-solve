#include <stdio.h>

int main(){
	double n, k, r, min, max, total = 0;
	scanf("%lf %lf", &n, &k);
	
	double m = n - k;
	for(int i = 0; i < k; i++){
		scanf("%lf", &r);
		total += r;
	}
	min = (m * (-3) + total) / n;
	max = (m * (3) + total) / n;
	
	printf("%lf %lf", min, max);
	
	return 0;
}
