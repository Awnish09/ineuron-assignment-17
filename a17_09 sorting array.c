/*program to sort a string array in ascending order.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    char str[25], a;
    int i, j, k;
    printf("Enter a word.\n");
    fgets(str, 15, stdin);

    for(i=0; str[i]; i++)
    {
        a=str[i];
        for(j=i+1, k=0; str[j]; j++)
        {
            if(a>str[j])
            {
                a=str[j];
                k=j;
            }
        }
        str[k]=str[i];
        str[i]=a;
        printf("%c",str[i]);

    }
    //printf("\n");
    //printf("%s",str);
    getch();
    return 0;
}
