#include<iostream>
using namespace std;
int decimaltooctal(int n){
    int x=1;
    int ans = 0;
    while(x<=n)
      x*=8;

      while(x>0){
        int lastdigit=n/x;
        n -= lastdigit*x;
        x/=8;
        ans = ans*10 + lastdigit;
      }
      return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<decimaltooctal(n)<<endl;
    return 0;
}