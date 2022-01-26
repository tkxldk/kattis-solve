#include <stdio.h>

int main(){
	int N;
	scanf("%d", &N);
	
	char s[101];
	for(int i = 1; i <= N; i++){
		scanf("%s", s);
		if(i % 2 != 0){
			printf("%s\n", s);
		}
	}
	
	return 0;
}
