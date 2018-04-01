#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int a,b;
	int i=0;
    while(scanf("%d%d",&a,&b)!=EOF){

			if((i!=0&&a*b!=0)||(a==0&&b==0))
			cout<<" ";
				if(a==0&&b==0){
				cout<<"0"<<" "<<"0";
			}

	   i++;
	   if(a*b!=0){
	   cout<<a*b<<" ";
	   cout<<b-1;
	   }
    }

    return 0;
}
