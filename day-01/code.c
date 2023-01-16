#include<stdio.h>
int main()
{
    int i,m,n;
    printf("Enter the range (m,n)");
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        (i%2==0?(i%3==0?(printf("foo\n")):printf("bar\n")):(i%3==0?(printf("foo\n")):printf("baz\n")));
    }
}