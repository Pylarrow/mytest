#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n=0;
    printf("请输入一个正整数:");
    scanf("%d",&n);

    if(n<10)
    {
        printf("num must >10");
    }
    double sum=0;
    int flag=-1;
    int i=1;
    for(i=1;i<n;i+=2)
    {
        flag*=-1;
        sum+=1.0/n;
    }

    printf("%lf\n",sum);
    return 0;
}
