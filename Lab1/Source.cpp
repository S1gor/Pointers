#include <iostream>

int main()
{
	//9. ��� ��������� ����� ��������� � � ��� � ��������� �.

	system("chcp 1251");

	int a, b, c, A, B;

	printf("������� a = "); scanf_s("%d", &a);
	printf("������� b = "); scanf_s("%d", &b);
	printf("������� c = "); scanf_s("%d", &c);
	printf("������� A = "); scanf_s("%d", &A);
	printf("������� B = "); scanf_s("%d", &B);
	int* pa, * pb, * pc;
	pa = &a; pb = &b; pc = &c;

	*pa = *pa * A + B;
	*pb = *pb * A + B;
	*pc = *pc * A + B;
	
	printf("a = %d\nb = %d\nc = %d", *pa,*pb,*pc);

	return 0;
}