#include<stdio.h>
#include<stdlib.h>

int main(void) {
	char a,c; int b;
	printf("enter a leter(a-z)or(A-Z):");
	scanf_s("%c", &a);
	b = (int)(a);
	if (b >= 65 && b <= 90) {
		c = (char)(b + 32);
		printf("%c\n", c);
	}
	if (b >= 97 && b < 122) {
		c = (char)(b - 32);
		printf("%c\n", c);
	}
	system("pause");
	return 0;
}