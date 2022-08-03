/*program to calculate the length of the string.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    char str[15];
    int count=0, i;
    printf("Enter a word.\n");
    fgets(str, 15, stdin);
    for(i=0; str[i]; i++)
        count++;
    printf("%d",count-1);
    getch();
    return 0;
}
