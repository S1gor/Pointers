#include <iostream>

int main()
{
	//9. Три введенных числа увеличить в А раз и прибавить В.

	system("chcp 1251");

	int a, b, c, A, B;

	printf("Введите a = "); scanf_s("%d", &a);
	printf("Введите b = "); scanf_s("%d", &b);
	printf("Введите c = "); scanf_s("%d", &c);
	printf("Введите A = "); scanf_s("%d", &A);
	printf("Введите B = "); scanf_s("%d", &B);
	int* pa, * pb, * pc;
	pa = &a; pb = &b; pc = &c;

	*pa = *pa * A + B;
	*pb = *pb * A + B;
	*pc = *pc * A + B;
	
	printf("a = %d\nb = %d\nc = %d", *pa,*pb,*pc);

	return 0;
}