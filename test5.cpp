#include <stdio.h>

int main(void)
{
	/*int input, m, s;
	int TM = 60; //1분은 60초

	printf("숫자 입력: _____\b\b\b\b\b"); // \b해준 이유 : 옆으로 개수만큼 이동하겠다는 의미. 그래서 왼쪽부터 채워짐. 
	scanf_s("%d", &input);

	m = input / TM; //몇분인지 계산하려고 시행.
	s = input % TM; // TM으로 또 나누면 m에서 s가 되기 때문.

	printf("1. 입력한 숫자 : %d\n", input);
	printf("2. 분, 초 단위 : %d분 %d초\n", m, s);
*/
	


	/*int val, a; //val은 변수의 약자로 많이 사용됨!!
	a = 8;
	val = ++a; //a=9, val=9

	printf("a=8일 때 \n");
	printf("1. val = ++a이면 val = %d, a = %d\n", val, a); 

	a = 8;
	val = a++; //val=8, a=9
	printf("2. val = a++이면 val = %d, a = %d\n", val, a);

	a = 8;
	val = --a; //a=7, val=7
	printf("3. val = --a이면 val = %d, a = %d\n", val, a);

	a = 8;
	val = a--; //val=8, a=7
	printf("4. val = a--이면 val = %d, a=%d\n", val, a);
*/
	
	
	/*int a, b, c, max;

	printf("키보드로 정수값 3개를 입력하시오(구분자는 콤마 사용). :");
	scanf_s("%d, %d, %d", &a, &b, &c);

	max = (a > b) ? a : b; //맞으면 a, 틀리면 b가 max가 됨.
	max = (max > c) ? max : c; //대입이기 때문에 뒤에 max는 값을 나타냄. 맞으면 max, 틀리면 c가 max가 됨.

	printf("키보드로 입력한 정수값 3개는 %d, %d, %d\n", a, b, c);
	printf("이 중에서 가장 큰 값(최대값)은 %d입니다.\n", max);
*/	


	int a, b, *a_d, *b_d; //*표시는 주소값에 들어있는 값을 말함. 
	// ex) a_d에 담겨있는 값을 *a_d라고 함.

	printf("정수 2개를 입력하시오.(구분자는 콤마 사용) : ");
	scanf_s("%d,%d",&a,&b);

	a_d = &a; //a_d는 a의 주소값
	b_d = &b; 

	printf("입력한 정수 2개는 %d, %d 입니다.\n", a, b);
	printf("%d의 주소값 : %d\n", a, a_d); //a는 입력값, a_d는 주소값(address), 주소값 앞에 *을 붙이면 담겨있는 값을 얘기함.
	printf("%d의 주소값 : %d\n", b, b_d);

	printf("%d", *a_d);
	printf("%d", *b_d);
	
	return 0;
}