
#include "stdio.h"
int main()
{
	int a;
	printf("1 - summer\n2 - autumn\n3 - winter\n4 - spring\n");// ����������� ������� ������ ����� ��� ����� �������� �����//
	printf("Enter the time of year:");
	//scanf_s("%d", &a);

	while (scanf_s("%d", &a) != 1)//���� ����� ������� �����, ������ ������
	{
		printf("Wrong imput. Try again\n");
		rewind(stdin);
	}


	switch (a) //���������� �������� � ����������� �����������, ����� �������� �������������� ����� case//
	{
	case 1:// ���� ������� ����� 1, �� ����� �������� ������ ���� ���� ��� ������� 1//
		printf("June, July, August\n");
		break;
	case 2:
		printf("September, October, November\n");
		break;
	case 3:
		printf("December, January, February\n");
		break;
	case 4:
		printf("March, April, May\n");
		break;
	default: printf("Mistake\n");//���� ������� �����, ������� �� ��������� ����� ���� ������������ ������//
		return 0;
	}
}
