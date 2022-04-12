#include <stdio.h>

//테일러 급수와 재귀함수를 이용하여 삼각함수를 구현하였습니다.
double PI = 3.14159265358979323846264338327950288419716939937510;


float radian(int x) {
	x = x % 360;
	return (float)PI * (float)x / 180;
}


float POW(float x, int num) {
	if (num <= 0) return 1;
	return x * POW(x, num - 1);
}

float FACT(float x) {
	if (x == 1) return 1;
	return x * FACT(x - 1);
}

float SIN(float x, int num) {
	if (num <= 0) return x;
	return POW(-1, num) * POW(x, 2 * num + 1) / FACT(2 * num + 1) + SIN(x, num - 1);
}

float COS(float x, int num) {
	if (num <= 0) return 1;
	return POW(-1, num) * POW(x, 2 * num) / FACT(2 * num) + COS(x, num - 1);
}

float TAN(float x, int num) {
	return SIN(x, num) / COS(x, num);
}

int main() {
	int x = 1; //x는 삼각함수에 들어갈 값(60분법)
	int num = 20;
	//x는 삼각함수에 들어갈 값(60분법)
	//num은 테일러 급수의 항 개수, 높을수록 정확도가 높아집니다.
	//num의 값은 20만 되도 float형에서 충분히 math.h의 삼각함수 값과 같을 겁니다.

	printf("sin 값: %f\ncos 값: %f\ntan 값: %f", SIN(radian(x), i), COS(radian(x), i), TAN(radian(x), i));

	return 0;
}
[출처] C언어: math.h 없이 삼각함수 구현 | 작성자 MrWon
