#include <stdio.h>

int main()
{
    char* Disciplines[] = { "Informatics,Language","Informatics,Language","Culture,Mathematics,Language","Culture,Mathematics,Language" }; //������ ������
    int n; //����������
    printf("Enter the discipline number: \n"); //������ ����������
    scanf_s("%d", &n);
    if (n > 0 && n < 4) //������� �� ������������ �����
        printf("You enter %d - %s", n, Disciplines[n]); //����� ������ �� ������� ���������� ������
    else
        printf("You have a mistake"); //���� ��������� ����� �� �������� ��� �������
    return 0;
}