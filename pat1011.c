#include<stdio.h>
void main(){
	
	double a,b,c;
	int i=1,n=0;
	while(n>10||n<=0){
	scanf("%d",&n);

	}
	while(n--){
		scanf("%lf%lf%lf",&a,&b,&c);
		if(a+b>c)
			printf("Case #%d: true\n",i);
			else
			printf("Case #%d: false\n",i);
			i++;
	}

}