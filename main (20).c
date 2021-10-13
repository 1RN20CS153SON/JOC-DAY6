#include<stdio.h>
#include<conio.h>
int main()
{
    char str[100];
    int i, countWithSpace=0, countWithoutSpace=0;
    printf("Enter any string: ");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
        countWithSpace++;
    }
    for(i=0; i<countWithSpace; i++)
    {
        if(str[i]==32)
            countWithoutSpace++;
    }
    countWithoutSpace = countWithSpace-countWithoutSpace;
    printf("\nNumber of character (with space) = %d", countWithSpace);
    printf("\nNumber of character (without space) = %d", countWithoutSpace);
    getch();
    return 0;}
    