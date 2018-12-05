//pointer on function
#include<iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
int sum(int a, int b) {
    return a + b;
}

int main () {
    //Îãîëîøóºìî ïîêàç÷èê íà ôóíêö³þ
    int (*fptr)(int, int) = NULL;
    int result;
    //Ïðèñâîþºìî ïîêàç÷èêó çíà÷åííÿ - àäðåñè ôóíêö³¿
    
    fptr = &sum;
    //Âûçîâ îñóùåñòâëÿåòñÿ òàêæå, êàê è îáû÷íîé ôóíêöèè
    result = fptr(10, 40);
    printf("%d", result);


    getch();
}
