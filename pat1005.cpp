#include <iostream>

using namespace std;

int main()
{
   int n=0,x=0;

   int num [105]={0};
   int key [105]={0};
int i=0;
        cin>>n;
x=n;

   while(x>0){
    int k=0;

        cin>>k;
    key[i]=k;
     num[k]=k;
    x--;
    i++;
    }
   for (int q=0;q<n;q++){
         int _num=key[q];
         int _key;

         while(_num!=1){

         if (_num%2!=0){
			_num=_key=(_num*3+1)/2;
			if(_num>100)continue;
			if(num[_key]){
				num[_key]=0;

			}
         }
         else {
			_num=_key=_num/2;
			if(num[_key]){
			  num[_key]=0;

			}
         }
   }
   }
int num2 [100];
int a=0;
   for(int i=0;i<n;i++){
	if(num[key[i]]){
	num2[a]=key[i];
	a++;
	}
   }
   for(int w=1;w<=a-1;w++){
	for(int j=0;j<a-1;j++){
		if(num2[j]<num2[j+1]){
			int h=num2[j];
			num2[j]=num2[j+1];
			num2[j+1]=h;
		}

	}
   }
   for(int x=0;x<a;x++){
	cout<<num2[x];
	if(x!=a-1)
		cout<<" ";
   }
    return 0;
}
