#include <stdio.h>


int main(void)
{
	float inch, cm = 0;
	printf("��ġ�� ��Ƽ���ͷ� ȯ���ϴ� ���α׷��Դϴ�.\n");
	printf("��ġ �Է�(�Ҽ� ��°�ڸ�):");
	scanf_s("%f", &inch);

	cm = inch * 2.54;

	printf("%.2f��ġ�� %.2fcm�Դϴ�.\n", inch, cm);
	printf("32210932_������");

	
	/*char mun[10];
	
	printf("�迭�� ����Ͽ� ���ڿ��� ����ϴ� ���α׷��Դϴ�.\n");
	printf("���ڿ� �Է�:");
	scanf_s("%s", &mun, sizeof(mun)); //���ڴ� c, ���ڿ��� s
	printf("���ڿ� ���: \"%s\"\n", mun); //����ǥ ����Ϸ��� ������ \�������� ��!!!
	printf("32210932_������");
*/

	return 0;
}