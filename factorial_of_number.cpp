#include<iostream>
using namespace std;
int fact(int n){
    if(n==1)
      return 1;
    n=n*fact(n-1);
    return n;
}
int main(){
    int res,n;
    cout<<"Enter the number:";
    cin>>n;
    res= fact(n);
    cout<<"The factorial of "<<n<<" is :"<<res<<endl;
    return 0;
}