#include "stdio.h"
int main()
{
	int k;

	printf("Enter a number\n ");
	//scanf_s("%d", &k);

	while (scanf_s("%d", &k) != 1)//���� ����� ������� �����, ������ ������
	{
		printf("Wrong imput. Try again\n");
		rewind(stdin);
	}


	if (k % 2 == 0) printf("k - chetnoe\n");
	else printf("k - nechetnoe\n");

	getchar();
}