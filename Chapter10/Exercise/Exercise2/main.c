// Online C compiler to run C program online
#include <stdio.h>
int j=1,count=1;int z=0;
int natural(int n);
int main()
{
    int i=0;
   int j= natural(i);
   printf("%d",j);

    return 0;
}
int natural(int i)
{

    if(count<5)
    {
        count++;
        z=i+j;
        i=z;
        j++;
        natural(i);

    }
    return z;
}
