#include<iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
int sum(int a, int b) {
    return a + b;
}

int main () {
    //��������� �������� �� �������
    int (*fptr)(int, int) = NULL;
    int result;
    //���������� ��������� �������� - ������ �������
    
    fptr = &sum;
    //����� �������������� �����, ��� � ������� �������
    result = fptr(10, 40);
    printf("%d", result);


    getch();
}
