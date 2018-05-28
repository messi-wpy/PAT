#include <stdio.h>
#include <stdlib.h>
int find(int num,int n){
    int result=0;
    while(num!=0)
        {
        int a=num%10;
        num=num/10;
        if(a==n)
            {
                result=result*10+a;
            }
        }
    return result;
}

int main()
{
    int a,A,b,B;
    int result1,result2;
    scanf("%d%d%d%d",&a,&A,&b,&B);
    result1=find(a,A);
    result2=find(b,B);
    printf("%d",result1+result2);
    return 0;
}
