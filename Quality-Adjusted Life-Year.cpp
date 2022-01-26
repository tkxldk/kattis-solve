#include <stdio.h>

int main(){
	int N;
	float x = 0.0;
	scanf("%d", &N); getchar();

	for(int i = 0; i < N; i++){
		float q, y;
		scanf("%f %f", &q, &y);
		x += q * y;
	}printf("%.3f\n", x);
	
	return 0;
}
