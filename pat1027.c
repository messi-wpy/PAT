#include <stdio.h>
#include <stdlib.h>

int paint(int x,int used ,int n,char f){
    if(x==1)used=1;
    else used=used+2*x;
    if(used<n)
        paint(x+2,used,n,f);
    else
        {
            if(used!=n) x=x-2;
            int i,i2;
            for(i=1;i<=x/2+1;i++){
                for(i2=0;i2<(i-1);i2++){
                    printf(" ");
                }
                for(i2=0;i2<x-(2*(i-1));i2++)
                    printf("%c",f);
                printf("\n");
            }

            for(i;i<=x;i++){
                for(i2=0;i2<(x-i);i2++){
                    printf(" ");
                }
                for(i2=0;i2<2*i-x;i2++)
                    printf("%c",f);
                printf("\n");
            }
                if(used!=n)
                return n-(used-2*(x+2));
                else
                    return 0;
        }
}
int main()
{
    int n,left;
    char f;
    scanf("%d %c",&n,&f);
    left=paint(1,0,n,f);
    printf("%d",left);
    return 0;
}

