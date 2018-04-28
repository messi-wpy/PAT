#include <stdio.h>
#include <stdlib.h>

int main(){

	int q, n,h,sum,i=0,j=0,k=0;
	int a[1000][2]={0};
	double result=0;
	double x,v;
	scanf("%d %d",&n,&sum);
	h=q=k=n;
	while(n>0){
		scanf("%d",&a[i][0]);
		i++;
		n--;
	}
	while(h>0){
		scanf("%d",&a[j][1]);
		j++;
		h--;
	}
	for(i=0;i<k-1;i++){
		h=i;

		for(j=i+1;j<k;j++){
			x=(double)a[h][1]/a[h][0];
		    v=(double)a[j][1]/a[j][0];

			if(x<v)
				h=j;
		}
		if(h!=i){
			q=a[i][0];
			n=a[i][1];
			a[i][0]=a[h][0];
			a[i][1]=a[h][1];
			a[h][0]=q;
			a[h][1]=n;
		}
	}
	n=i=0;
	while(n+a[i][0]<=sum){
	result+=a[i][1];
	n+=a[i][0];
	i++;
	}

	result+=(sum-n)*((double)a[i][1]/a[i][0]);
	printf("%.2lf\n",result);

}
