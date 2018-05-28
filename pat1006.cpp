#include <iostream>

using namespace std;
void hundred(int num);
void tensDigit(int num);
void singleFigures(int num);
int main()
{
    int num;
    cin>>num;
    while(num>1000){
		cin>>num;
    }
    hundred(num);
    tensDigit(num);
    singleFigures(num);

    return 0;
}
void hundred(int num){
    int n=num/100;
    for(int i=0;i<n;i++)
		cout<<"B";
}
void tensDigit(int num){
	int n=num/10%10;
	  for(int i=0;i<n;i++)
		cout<<"S";
}

void singleFigures(int num){
	int n=num%10;
	  for(int i=1;i<=n;i++)
		cout<<i;
}
