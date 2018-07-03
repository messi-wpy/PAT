#include <stdio.h>
#include <stdlib.h>
#include<string.h>
 const  char *Mars1[12]={"jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
 const  char *Mars2[12]={"tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
void AtoB(int num)
{
    int temp1,temp2;
    temp1=num/13%13;
    temp2=num%13;
    if(temp1!=0)
        printf("%s ",Mars2[temp1-1]);
    printf("%s\n",Mars1[temp2-1]);
}
void BtoA(char *mars)
{
    char *temp;
    int i,num=0;
    if(strlen(mars)==3&&strcmp(mars,"tam"))
    {
        for(i=0;i<12;i++)
        {
            if(strcmp(Mars1[i],mars)==0)
            {
                printf("%d\n",i+1);
                break;
            }
        }
    }else
    {
        temp=strtok(mars," ");
         for(i=0;i<12;i++)
        {
            if(strcmp(Mars2[i],temp)==0)
            {
                num=i+1;
                break;
            }
        }
        temp=strtok(NULL," ");
        if(temp==NULL)
            printf("%d\n",num*13);
        else{
          for(i=0;i<12;i++)
        {
            if(strcmp(Mars1[i],temp)==0)
            {
                num=num*13+i+1;
                break;
            }
        }
        printf("%d\n",num);
        }
    }
}
int main()
{


    char num[100][10]={0};
    int n,i;
    scanf("%d",&n);
    fflush(stdin);
    for(i=0;i<n;i++)
    {

        gets(num[i]);
    }
    for(i=0;i<n;i++)
    {
        if((num[i][0]-'0')<=9)
            AtoB(atoi(num[i]));
        else
            BtoA(num[i]);
    }

    return 0;
}
