#include<iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
int sum(int a, int b) {
    return a + b;
}

int main () {
    //Оголошуємо показчик на функцію
    int (*fptr)(int, int) = NULL;
    int result;
    //Присвоюємо показчику значення - адреси функції
    
    fptr = &sum;
    //Вызов осуществляется также, как и обычной функции
    result = fptr(10, 40);
    printf("%d", result);


    getch();
}
