/*program in C to copy one string to another string.*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str1[25], str2[25];
    int i;
    printf("Enter a word.\n");
    fgets(str1, 15, stdin);
    for(i=0; str1[i]; i++)
        str2[i]=str1[i];
    printf("%s",str2);
    getch();
    return 0;
}
