#include <iostream>
#include<math.h>

using namespace std;
bool checkPrime(int num){
       if(num==1)return false;
	   if(num==2)return true;
	   for(int i=2;i<=sqrt(num);i++){
		if(num%i==0){
			return false;
		}
	   }
	   return true;
}
int main()
{
    int n;
    int index=0;
    int sum=0;
    int prime [100000];
    cin>>n;

    for(int i=1;i<=n;i++){
		if(checkPrime(i)){
			prime[index]=i;
			index++;

		}
    }
    for (int x=0;x<index-1;x++){
		if(prime[x+1]-prime[x]==2)
			sum++;
    }
    cout<<sum;
    return 0;
}
