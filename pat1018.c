#include <stdio.h>
#include <stdlib.h>
int compare(char a, char b ){
    if(a=='C'&&b=='J')
        return 1;
    else if(a=='C'&&b=='B')
        return -2;
    else if(a=='B'&&b=='J')
        return -3;
    else if(a=='B'&&b=='C')
        return 2;
    else if(a=='J'&&b=='B')
        return 3;
    else if(a=='J'&&b=='C')
        return -1;
    else
        return -1;
}
void output(int a,int b,int c){
    if(a>b&&a>=c)
        printf("C");
    if(b>=a&&b>=c)
        printf("B");
    if(c>a&&c>b)
        printf("J");


}

int main()
{
    int n=0,index=0;
    int a[6]={0},b[6]={0};
    char q,w,ch;
    scanf("%d",&n);
    while(n>0){
        n--;
        while((ch = getchar()) != '\n' && ch != EOF);
        scanf("%c %c",&q,&w);
        index=compare(q,w);
        if(index>0){
            a[0]++;
            b[2]++;
            if(index==1)
                a[3]++;
            else if(index==2)
                a[4]++;
            else
                a[5]++;
        }
        else if(index<0){
            a[2]++;
            b[0]++;
            if(index==-1)
                b[3]++;
            else if(index==-2)
                b[4]++;
            else
                b[5]++;
        }
        else{
            a[1]++;
            b[1]++;
        }

    }
    printf("%d %d %d\n",a[0],a[1],a[2]);
    printf("%d %d %d\n",b[0],b[1],b[2]);
    output(a[3],a[4],a[5]);
    printf(" ");
    output(b[3],b[4],b[5]);


    return 0;
}

