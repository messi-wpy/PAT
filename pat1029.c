#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void change(char word[])
{
    int i=0;
    while(word[i]!='\0')
    {
        if(word[i]>='a'&&word[i]<='z')
        word[i]-=32;
        i++;
    }
}

int  find(char *p,char word)
{
    int i=0;
    while(*(p+i)!='\0')
    {
        if(*(p+i)==word)
            return 1;
            i++;
    }
    return 0;
}
int main()
{
    char rightWords[1000],words[1000],wrongW[100]={'\0'};
    int i,j=0,h=0;
    scanf("%s%s",rightWords,words);
    change(rightWords);
    change(words);
    for(i=0;i<=strlen(rightWords);i++)
    {
        if(rightWords[i]=='_')i++;
        if(words[j]=='_')j++;
        if(rightWords[i]!=words[j])
        {
            if(!find(wrongW,rightWords[i]))
            {
                wrongW[h]=rightWords[i];
                h++;
            }

            continue;
        }
        else
            j++;
    }
    change(wrongW);
    printf("%s",wrongW);
    printf("\n");
}
