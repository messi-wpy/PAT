#include <stdio.h>
#include <stdlib.h>
void Csort(int num[],int n)
{
    int i,k,j;
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
        {
            if(num[k]>num[j])
                k=j;
        }
        if(k!=i)
        {
            j=num[i];
            num[i]=num[k];
            num[k]=j;
        }
    }
}
int main()
{
    int num[100000],lmax[100000],rmin[100000];
    int n,i,index=0,max,min;
    int result[100000];

    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);

    for(i=max=0;i<n;i++)
        lmax[i]=num[i]>=num[max]?num[max=i]:num[max];
    for(i=min=n-1;i>=0;i--)
        rmin[i]=num[i]<=num[min]?num[min=i]:num[min];
    for(i=index=0;i<n;i++)
    {
        if(num[i]>=lmax[i]&&num[i]<=rmin[i])
        {
            result[index]=num[i];
            index++;
        }
    }
    printf("%d\n",index);
    for(i=0;i<index;i++){
        printf("%d",result[i]);
        if(i!=index-1)
            printf(" ");
    }
    printf("\n");
    return 0;
}
