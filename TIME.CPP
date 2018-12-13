#include <stdio.h>
#include <time.h>
#include<conio.h>

int main()
{   clrscr();
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    char s[64];
    strftime(s, sizeof(s), "%c", tm);
    printf("%s\n", s);
    getch();
}