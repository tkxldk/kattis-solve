#include <stdio.h>
#include <string.h>

int main(){
	char s[251];
	scanf("%s", s);
	
	int len = strlen(s);
	for(int i = 0; i < len; i++){
		if(s[i] != s[i + 1]){
			printf("%c", s[i]);
		}
	}
	
	return 0;
}
