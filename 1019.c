#include <stdio.h>
#include <stdlib.h>

void sort_a(int a[4]){
    int i=0,j=0,num=0,t=0;
    for(i=0;i<3;i++){
        num=i;
        for(j=i+1;j<4;j++){
            if(a[num]<a[j])
                num=j;
        }
        if(num!=i){
            t=a[i];
            a[i]=a[num];
            a[num]=t;
        }
    }
}
void sort_b(int a[4],int b[4]){
    int i=0,j=0;
    for(i=3;i>=0;i--){
        b[j]=a[i];
        j++;
    }

}
void input_a(int a[4],int num){
    int i=0;
    if(num<1000)
        a[3]=0;
    while(num!=0){
      a[i] =num%10;
      i++;
      num=num/10;
    }

}
int output_a(int a[4]){
    int num=0,i=0;
    while(i<4){
        num=num*10+a[i];
        i++;
    }
    return num;
}
int main()
{
    int b[4]={0};
    int a[4]={0},num;
    int result1=0,result2=0,result=0;
    scanf("%d",&num);
    input_a(a,num);
    if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3])
    {
        printf("%d - %d = 0000",num,num);
        exit(0);
    }
    while(result!=6174){
        sort_a(a);
        sort_b(a,b);
        result1=output_a(a);
        result2=output_a(b);
        result=result1-result2;
        printf("%04d - %04d = %04d\n",result1,result2,result);
        input_a(a,result);
    }


    return 0;
}
