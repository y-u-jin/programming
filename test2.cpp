#include <stdio.h>


int main(void)
{
	float inch, cm = 0;
	printf("인치를 센티미터로 환산하는 프로그램입니다.\n");
	printf("인치 입력(소수 둘째자리):");
	scanf_s("%f", &inch);

	cm = inch * 2.54;

	printf("%.2f인치는 %.2fcm입니다.\n", inch, cm);
	printf("32210932_김유진");

	
	/*char mun[10];
	
	printf("배열을 사용하여 문자열을 출력하는 프로그램입니다.\n");
	printf("문자열 입력:");
	scanf_s("%s", &mun, sizeof(mun)); //문자는 c, 문자열은 s
	printf("문자열 출력: \"%s\"\n", mun); //따옴표 사용하려면 무조건 \사용해줘야 함!!!
	printf("32210932_김유진");
*/

	return 0;
}