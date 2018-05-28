#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,index,i,x,q;
    int a[5]={0};
    int nums [1000]={0};

    q=n=index=i=0;
    x=1;

    scanf("%d",&n);
    while(n>0){
        scanf("%d",&nums[index]);
        n--;
        index++;
    }
    for(i;i<index;i++){
            n=nums[i];
        if(n%5==0&&n%2==0)
        {
            a[0]+=n;
        }
        if(n%5==1){
             a[1]+=n*x;
             x=-x;
        }
        if(n%5==2){
            a[2]+=1;
        }
        if(n%5==3){
            a[3]+=n;
            q++;
        }
        if(n%5==4){
                if(n>a[4])
            a[4]=n;
        }
    }

    for (i=0;i<=4;i++){
        if(a[i]==0)
            printf("N");
         else if(i==3)
            printf("%.1f",(float)a[i]/q);
        else
            printf("%d",a[i]);
        if(i!=4)
            printf(" ");
    }


    return 0;
}

