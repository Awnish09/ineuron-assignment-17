/*program to reverse a string.*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str[15], a;
    int i, n;
    printf("Enter a word.\n");
    fgets(str, 15, stdin);
    n=strlen(str)-1;
    for(i=0; i<n/2; i++)
    {
       a=str[i];
       str[i]=str[n-1-i];
       str[n-1-i]=a;
    }
    printf("%s",str);
    getch();
    return 0;
}
