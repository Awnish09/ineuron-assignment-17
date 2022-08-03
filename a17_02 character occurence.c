/*program to count the occurrence of a given character in a given string.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    char str[15], c;
    int count=0, i;
    printf("Enter a word and an alphabet.\n");
    fgets(str, 15, stdin);
    scanf("%c",&c);
    for(i=0; str[i]; i++)
    {
        if(str[i]==c)
            count++;
    }
    printf("%d",count);
    getch();
    return 0;
}
