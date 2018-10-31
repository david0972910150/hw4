#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int i, j,a,fib=0,n0=1,n1=0,k;
	printf("enter a number ¶µ¼Æn=");
	scanf_s("%d", &a);
	for (i = 0; i < a; i++) {
		if (a == 0) {
			fib = 0; printf("0,");
		}
		else if (a == 1) {
			fib = 1; printf("1,");
		}
		else {
			printf("%d ", fib);
			fib = n0 + n1 ;
			n0 = n1;
			n1 = fib;

			//printf("%d,", fib);
		}
	}
   
	system("pause");
	return 0;
}