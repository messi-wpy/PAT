#include <stdio.h>
#include <stdlib.h>
void printOne(int n,char a){
     for(int i=0;i<n;i++)printf("%c",a);
}
void printfTwo(int n,char a){
    for(int i=0;i<n;i++){
        if(i==0||i==n-1)
            printf("%c",a);
        else
            printf(" ");
    }
}
void printfK(){
    printf("\n");
}
int main()
{
    char a;
    int j,n;
    scanf("%d %c",&n,&a);
    if(n%2==1)
        j=n/2+1;
    else
        j=n/2;
    printOne(n,a);
    printfK();
    for(int i=2;i<j;i++){
        printfTwo(n,a);
        printfK();
    }
    printOne(n,a);

    return 0;
}
