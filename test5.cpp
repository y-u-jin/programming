#include <stdio.h>

int main(void)
{
	/*int input, m, s;
	int TM = 60; //1���� 60��

	printf("���� �Է�: _____\b\b\b\b\b"); // \b���� ���� : ������ ������ŭ �̵��ϰڴٴ� �ǹ�. �׷��� ���ʺ��� ä����. 
	scanf_s("%d", &input);

	m = input / TM; //������� ����Ϸ��� ����.
	s = input % TM; // TM���� �� ������ m���� s�� �Ǳ� ����.

	printf("1. �Է��� ���� : %d\n", input);
	printf("2. ��, �� ���� : %d�� %d��\n", m, s);
*/
	


	/*int val, a; //val�� ������ ���ڷ� ���� ����!!
	a = 8;
	val = ++a; //a=9, val=9

	printf("a=8�� �� \n");
	printf("1. val = ++a�̸� val = %d, a = %d\n", val, a); 

	a = 8;
	val = a++; //val=8, a=9
	printf("2. val = a++�̸� val = %d, a = %d\n", val, a);

	a = 8;
	val = --a; //a=7, val=7
	printf("3. val = --a�̸� val = %d, a = %d\n", val, a);

	a = 8;
	val = a--; //val=8, a=7
	printf("4. val = a--�̸� val = %d, a=%d\n", val, a);
*/
	
	
	/*int a, b, c, max;

	printf("Ű����� ������ 3���� �Է��Ͻÿ�(�����ڴ� �޸� ���). :");
	scanf_s("%d, %d, %d", &a, &b, &c);

	max = (a > b) ? a : b; //������ a, Ʋ���� b�� max�� ��.
	max = (max > c) ? max : c; //�����̱� ������ �ڿ� max�� ���� ��Ÿ��. ������ max, Ʋ���� c�� max�� ��.

	printf("Ű����� �Է��� ������ 3���� %d, %d, %d\n", a, b, c);
	printf("�� �߿��� ���� ū ��(�ִ밪)�� %d�Դϴ�.\n", max);
*/	


	int a, b, *a_d, *b_d; //*ǥ�ô� �ּҰ��� ����ִ� ���� ����. 
	// ex) a_d�� ����ִ� ���� *a_d��� ��.

	printf("���� 2���� �Է��Ͻÿ�.(�����ڴ� �޸� ���) : ");
	scanf_s("%d,%d",&a,&b);

	a_d = &a; //a_d�� a�� �ּҰ�
	b_d = &b; 

	printf("�Է��� ���� 2���� %d, %d �Դϴ�.\n", a, b);
	printf("%d�� �ּҰ� : %d\n", a, a_d); //a�� �Է°�, a_d�� �ּҰ�(address), �ּҰ� �տ� *�� ���̸� ����ִ� ���� �����.
	printf("%d�� �ּҰ� : %d\n", b, b_d);

	printf("%d", *a_d);
	printf("%d", *b_d);
	
	return 0;
}