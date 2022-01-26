#include <stdio.h>

int main(){
	int n;
	double a, b, c;
	scanf("%d",&n);
	
	for(int i = 0; i < n; i++){
		scanf("%lf %lf %lf", &a, &b, &c);
		
		if(a + b == c || a - b == c || b - a == c || a * b == c || a / b == c || b / a == c){
			puts("Possible");	
		}
		else{
			puts("Impossible");	
		}
	}
	
	return 0;
}
