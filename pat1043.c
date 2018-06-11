#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=0,max,collect[126]={0};
    char str[]="PATest";
    char word;
    while((word=getchar())!='\n')
        collect[(int)word]+=1;
    max=0;
    for(i=0;i<6;i++)
        if(max<collect[str[i]])
            max=collect[str[i]];

    while(max--)
        for(i=0;i<6;i++)
            if(collect[str[i]]-->0)
                putchar(str[i]);

    return 0;
}
