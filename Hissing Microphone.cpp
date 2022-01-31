#include <stdio.h>
#include <string.h>

int main(){
	char s[31];
	scanf("%s", s);
	
	char* hiss = strstr(s, "ss");
	
	if(hiss) puts("hiss");
	else puts("no hiss");
	
	return 0;
}

/*
strstr explanation
------------------
char *strstr (const char *s1, const char *s2);

Parameters:
s1: This is the main string to be examined.
s2: This is the sub-string to be searched in s1 string.

source : geeksforgeeks
*/
