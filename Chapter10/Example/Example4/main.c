// Online C compiler to run C program online
#include <stdio.h>
int i=1,j=1,count=1;
void fibo(int n);
int main() {

    fibo(i);
    return 0;
}
void fibo(int n)
{
    if(count<=25)
    {
        count++;
        int z=i+j;
        printf("%d\n",z);
        j=i;
        i=z;
        fibo(i);
    }
}
