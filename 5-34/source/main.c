#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float power(float a, float b);
int main(void) {
	float i, j,answer;
	printf("base=exponent=");
	scanf_s("%f%f", &i, &j);
	answer=power(i, j);
	printf("answer=%f",answer);
	system("pause");
	return 0;
}

float power(float a, float b) {
	float result=1;
	if (b == 0) {
		return 1;
	}
	if (b == 1)
	{
		return a;
	}
	
	else {return  a = a * power(a, b - 1);  }
}