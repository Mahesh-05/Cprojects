// Online C compiler to run C program online
#include <stdio.h>
int z=1;
void recurse(int n);
int main()
{

    recurse(5);
    printf("%d\n",z);
}
void recurse(int n)
{
    if(n>0)
    {


        z=z*n;
        n=n-1;
        recurse(n);
    }

}
