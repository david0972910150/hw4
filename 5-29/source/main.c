#include<stdio.h>
#include<stdlib.h>

void LCM(int i, int j);
int main(void) {
	int i, j;
	printf("enter two number�G");
	scanf_s("%d%d", &i, &j);
	LCM(i, j);

	system("pause");
	return 0;

}

void LCM(int i, int j) {
	int a, b, c,t;
	if (i < j) {
		t = i;
		i = j;
		j = t;
	}
	for (a = 1; a <= j; a++) {
		if (i%a == 0) {
			if (j%a == 0) { c = a; }
		}

	}
	printf("�̤j���]�ơG%d\n", c);
	b = i * j / c;
	printf("�̤p�����ơG%d\n", b);
}