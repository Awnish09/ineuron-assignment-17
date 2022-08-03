/*program in C to count the total number of alphabets, digits and special characters in a string.*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str[15];
    int a=0, d=0, s=0, i;
    printf("Enter a word.\n");
    fgets(str, 15, stdin);
    for(i=0; str[i]; i++)
    {
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
            a++;
        else if(str[i]>='0' && str[i]<='9')
            d++;
        else
            s++;
    }
    printf("The total number of alphabets is %d, digit is %d and special character is %d.",a,d,s);
    getch();
    return 0;
}
