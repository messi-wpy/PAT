#include <stdio.h>
#include <stdlib.h>
#define CLK_TCK 100
int main()
{
    int t;
    double t2,start,end;
    int h,m,s;
    scanf("%lf%lf",&start,&end);
    t2=(double)(end-start)/100;
    t=t2;
    h=t/3600;
    m=(t-h*3600)/60;
    if((t2-t)!=0)
    {
        if((t2-t)<0.5)
            s=(t-h*3600-m*60);
        else
            s=(t-h*3600-m*60)+1;
    }
    else
        s=(t-h*3600-m*60);
    printf("%2d:%2d:%2d\n",h,m,s);

    return 0;
}
