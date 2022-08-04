/*program in C to Find the Frequency of Characters.*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str[25], a;
    int i, j, k, count, n, l=1;
    printf("Enter a word.\n");
    fgets(str, 25, stdin);
    n=strlen(str)-2;
    for(i=0; i<=n; i++)
    {

        for(j=i+1, count=1; j<=n; j++)
        {
            if(str[i]==str[j])
            {
                count++;
                for(k=j; k<=n; k++)
                       str[k]=str[k+1];
                n--;
                j--;
            }
        }
        printf("The frequency of \'%c\' is %d.\n",str[i],count);
       // printf("%s.",str);
    }
    getch();
    return 0;
}
