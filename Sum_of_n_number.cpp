#include<iostream>
using namespace std;
int sum(int n){
    if(n==0)
      return 0;
    n=n+sum(n-1);
    return n;
}
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    int res=sum(num);
    cout<<"The sum of number upto "<<num<<" is:"<<res;
    return 0;
}