#include <stdio.h>
#include <stdlib.h>

int main()
{
    char words[1000],word;
    int letter[26]={0},i=0,num=0,index=0;
    while((word=getchar())!='\n')
    {
        words[i]=word;
        i++;
    }
    words[i]='\0';
    i=0;
    while(words[i]!='\0')
    {
        word=words[i];
        i++;
        if(word>='A'&&word<='Z')
            word+=32;
        if(word>='a'&&word<='z')
            letter[word-'a']+=1;
    }
    num=letter[0];
    for(i=1;i<26;i++)
    {
        if(num<letter[i])
        {
            num=letter[i];
            index=i;
        }

    }
    printf("%c %d\n",'a'+index,num);

    return 0;
}
