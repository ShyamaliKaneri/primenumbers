#include <stdio.h>
int main()
{
    int n,i,a=1;
    printf("Enter a number n: ");
    scanf("%d", &n);
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            a=0;
            break;
        }
    }
    if(a==1)
        printf("Prime Number\n");
    else
        printf("Not a Prime Number\n");
    return 0;
}
