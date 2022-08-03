/*program to count vowels in a given string*/

#include<stdio.h>
#include<conio.h>

int main()
{
    char str[15];
    int count=0, i;
    printf("Enter a word.\n");
    fgets(str, 15, stdin);
    for(i=0; str[i]; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
            count++;
    }
    printf("%d",count);
    getch();
    return 0;
}
