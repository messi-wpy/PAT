#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int a,b,m,n,num,sum;
    a=m=n=b=num=sum=0;
    scanf("%d%d",&m,&n);
    for (b=2;;b++){
		if(checkNum(b)){
			sum++;
			if(sum>=m){
					printf("%d",b);
					if((sum+1-m)%10==0)printf("\n");
					if(sum!=n&&((sum+1-m)%10!=0))printf(" ");
					if(sum==n)break;
			}
		}
    }
    return 0;
}
int checkNum(int num){
	for(int a=2;a<=sqrt(num);a++){
		if(num%a==0){
			return 0;
		}
	}
	return 1;

}
