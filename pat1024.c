#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a [100];
    char a1,a2;
    int i=0,index,x=0;


    scanf("%s",a);
    a1=a[0];
    i=2;
    while(a[i]!='E')
        i++;
    index=i;
    a2=a[index+1];
    i=0;
    while(a[index+2+i]!='\0'){
        x=x*10+(a[index+2+i]-'0');
        i++;
    }

    if(a1=='-')printf("-");
    if(x==0){
        for(i=0;i<index;i++)
        printf("%c",a[i]);
    }
    if(a2=='-'){
        printf("0.");
        for(i=1;i<x;i++){
            printf("0");
        }
        for(i=1;i<index;i++)
            if(a[i]!='.')
        printf("%c",a[i]);
    }
    if(a2=='+'){
        if(x<index-2){
            for(i=1;i<index;i++){
                if(a[i]!='.')
                    printf("%c",a[i]);
                if(i==x+2)printf(".");
            }
        }else{
        for(i=1;i<index;i++)
            if(a[i]!='.')
        printf("%c",a[i]);
        for(i=i-3;i<x;i++){
            printf("0");
        }
        }
    }

    return 0;
}
