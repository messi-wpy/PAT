#include <iostream>
#include<string.h>

using namespace std;
void OutputWord(int num);
int main(){
    int lengthA,sum=0,num=0,i=0;
    int N[10];
     char S[10][6]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
   char a [100];
    cin>>a;
 lengthA=strlen(a);
 for(int i=0;i<lengthA;i++){
    sum=sum+a[i]-'0';
 }
for(i;sum!=0;i++){
    num=sum%10;
    sum=sum/10;
      N[i]=num;
}
while(i--){
    if(i!=0)
        cout<<S[N[i]]<<" ";
    else
        cout<<S[N[i]];
}
}



