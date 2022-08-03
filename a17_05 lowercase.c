/*program to convert a given string into lowercase*/

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
        if(str[i]>='A' && str[i]<='Z')
            str[i]+=32;
    }
    printf("%s",str);
    getch();
    return 0;
}
