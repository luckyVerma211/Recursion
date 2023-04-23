#include<iostream>
using namespace std;
int hcf(int a,int b){
    int rem=a%b;
    if(rem==0)
      return b;
    return hcf(b,rem);
}
int main(){
    int a,b;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    int res=hcf(a,b);
    cout<<"The HCF of the number is:"<<res<<endl;
    return 0;
}
