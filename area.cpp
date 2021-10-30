#include <stdio.h>

int main(void)
{
	int width;
	int height;
	int area;

	printf("사각형의 밑변을 입력하세요.:");
	scanf_s("%d", &width);
	printf("사각형의 높이를 입력하세요.:");
	scanf_s("%d", &height);

	area = width * height;

	printf("사각형의 넓이는 %d 입니다.", area);

	return 0;
}