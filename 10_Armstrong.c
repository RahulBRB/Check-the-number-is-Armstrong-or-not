#include<stdio.h>
#include<math.h>

// Write a program to check whether a number is Armstrong (xyz=x3+y3+z3).

int main()
{
    int n,a,r,m,c;
    printf("\nEnter the Number You Want to Check: ");
    scanf("%d",&c);
    m=0;
    n=c;
    while(n!=0)
    {
        a=n%10;
        r=pow(a,3);
        m=m+r;
        n=n/10;
    }
    if(m==c)
        printf("\nThe Number is Armstrong.\n");
    else
        printf("\nThe Number is not Armstrong.\n");
    return 0;
}