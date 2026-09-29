/*
name : Reuel Bodhak
PRN NO : 32658010086
DIV : C
*/

#include <stdio.h>

int main() {
	printf("Program to print The Fibonacci sequence. \n\n");
	int a=0,b=1,n=10;
	int c;
	
	printf("%d,%d",a,b);
	for(int i=0;i<n;i++){
		c = a+b;
		a = b;
		b = c;
		printf(",%d",c);
	}
	return 0;
}
