//https://learnc.info/c/function_pointers.html
#include<iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
int sum(int a, int b) {
    return a + b;
}

int main () {
    //Объявляем указатель на функцию
    int (*fptr)(int, int) = NULL;
    int result;
    //Присваиваем указателю значение - адрес функции
    //Это похоже на работу с массивом: операцию взятия адреса использовать не нужно
    fptr = &sum;
    //Вызов осуществляется также, как и обычной функции
    result = fptr(10, 40);
    printf("%d", result);


    getch();
}
