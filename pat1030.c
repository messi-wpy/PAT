#include <stdio.h>
#include <stdlib.h>
int compInc(const void *a, const void *b)
{
    return *(double *)a - *(double *)b;
}
int resualFind(double p[],int len,int i,int j,int n,double a)
{
    int temp=0;
    if(i==n&&j==n)return len;
    else if(j<=n)
    {
        if(p[j]<=p[i]*a){
                temp=(j-i+1);
                return (p,(temp>len?temp:len),i,j+1,n,a);
        }
        else
            return(p,len,i,j+1,n,a);

    }
    else if(j>n)
        return(p,len,i+1,0,n,a);

}
int main()
{
    int n,index=0,i,j;
    double *p,a;
    scanf("%d%lf",&n,&a);
    p=(double*)malloc(n*sizeof(double));
    if(p==NULL){
        printf("WRONG!");
        exit(0);
    }
    for(i=0;i<n;i++)
    {
        scanf("%lf",(p+i));
    }
    qsort(p,n,sizeof(double),compInc);
    index=resualFind(p,0,0,0,n,a);
    free(p);
    printf("%d",index);
    return 0;
}
