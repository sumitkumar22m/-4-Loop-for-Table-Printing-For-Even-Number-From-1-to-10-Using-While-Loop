#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,a=1,b;
    while(a<=10)
    {
        b=a;
        if(b%2==0)
        {
            while(i<=10)
            {
                printf("%d*%d=%d\n",b,i,b*i);
                i++;
            }
        }
        a++;
        i=1;
        printf("\n");
    }
    getch();
}
