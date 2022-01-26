#include <stdio.h>

int main(){
	int W;
	scanf("%d", &W);
	int N;
	scanf("%d", &N);

	int w, l, sum, count = 0;
	for(int i = 0; i < N; i++){
		scanf("%d %d", &w, &l);
		sum = w * l;
		count += sum;
	}
	int total = count / W;
	printf("%d", total);
	
	return 0;
}
