#include <stdio.h>

//���Ϸ� �޼��� ����Լ��� �̿��Ͽ� �ﰢ�Լ��� �����Ͽ����ϴ�.
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
	int x = 1; //x�� �ﰢ�Լ��� �� ��(60�й�)
	int num = 20;
	//x�� �ﰢ�Լ��� �� ��(60�й�)
	//num�� ���Ϸ� �޼��� �� ����, �������� ��Ȯ���� �������ϴ�.
	//num�� ���� 20�� �ǵ� float������ ����� math.h�� �ﰢ�Լ� ���� ���� �̴ϴ�.

	printf("sin ��: %f\ncos ��: %f\ntan ��: %f", SIN(radian(x), i), COS(radian(x), i), TAN(radian(x), i));

	return 0;
}
[��ó] C���: math.h ���� �ﰢ�Լ� ���� | �ۼ��� MrWon
