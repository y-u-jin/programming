#include <stdio.h>

int main(void)
{
	int width;
	int height;
	int area;

	printf("�簢���� �غ��� �Է��ϼ���.:");
	scanf_s("%d", &width);
	printf("�簢���� ���̸� �Է��ϼ���.:");
	scanf_s("%d", &height);

	area = width * height;

	printf("�簢���� ���̴� %d �Դϴ�.", area);

	return 0;
}