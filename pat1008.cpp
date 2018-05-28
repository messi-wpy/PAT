#include <iostream>

using namespace std;

int main()
{
   int n,m;
   int nums[100];
   cin>>n;
   cin>>m;
   int i=0;

   while(n>0){
	cin>>nums[i];
	i++;
	n--;
   }

   for (int x=0;x<i;x++){
for(int j=0;j<i;j++){
if((j+m)%i==x){

	cout<<nums[j];
	if(x!=i-1)
		cout<<" ";
}
   }
   }
    return 0;
}
