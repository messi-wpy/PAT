#include <stdio.h>
#include <string.h>

int main()
{
    int N;
    char s[14] = {0};
    char ID[1001][15] = {0};
    int testNum[1001] = {0};
    int i , j, k;
    char c;
    scanf("%d", &N);
    for(i = 0; i < N; i++)
    {
        scanf("%s %d %d", s, &j, &k );
        strcpy(ID[j], s);
        testNum[j] = k;
    }
    int M;
    scanf("%d", &M);
    for(i = 0; i < M; i++)
    {
        scanf("%d", &j);
        printf("%s %d\n", ID[j], testNum[j]);
    }

    return 0;
}
