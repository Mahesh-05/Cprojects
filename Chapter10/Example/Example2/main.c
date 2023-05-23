//calculate the sum of 5 digit number
#include <stdio.h>
int add=0;
int sum(int );
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    int n=sum(num);
    printf("%d\n",n);
}
int sum(int n)
{

    if(n>0)
    {
       int rem=n%10;
        add=add+rem;
        n=n/10;
        sum(n);
    }
    return add;
}
