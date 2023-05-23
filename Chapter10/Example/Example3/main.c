//calculate finding the prime factors
#include <stdio.h>
int primefact(int n,int i);
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    int n=primefact(num,2);
}
int primefact(int n,int j)
{
    if(j<=n)
    {
        if(n%j==0)
        {
            printf("%d\n",j);
            n=n/j;
        }
        else
        {
            j++;

        }
        primefact(n,j);

    }

}
