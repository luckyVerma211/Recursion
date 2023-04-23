#include<iostream>
#include<math.h>
using namespace std;
int digit(int num){
    if(num==0)
        return 0;
    return 1+digit(num/10);
}
int sum(int n,int d){
    if(n==0)
        return 0;
    int res=n%10*pow(10,d-1)+sum(n/10,d-1);
    return res;
}
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    int d=digit(num);
    int res=sum(num,d);
    cout<<"The reverse of "<<num<<" is:"<<res<<endl;
    if(res==num)
       cout<<num<<" is a Palindrome number!!";
    else
       cout<<num<<" is not a Palindrome number!!";
    return 0;
}
