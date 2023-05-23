// Online C compiler to run C program online
#include <stdio.h>

int binary(int n);
int main()
{
    int i;
    printf("Enter a Positive number");
    scanf("%d",&i);

    binary(i);
    //printf("%d\n",j);
    return 0;
}
int binary(int n)
{

//    printf("%d",res);
    if(n>0)
    {
        int rem=n%2;
        n=n/2;
        binary(n);
        printf("%d",rem);

    }


}
