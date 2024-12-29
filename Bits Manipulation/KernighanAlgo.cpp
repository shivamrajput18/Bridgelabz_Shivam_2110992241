//count set bits

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int cnt=0;
/*     while(n!=0){
        int bit=n&1;
        if(bit==1){
            cnt++;
        }
        n=n>>1;
    } */

  //worst case o(logn) & best case o(1)
    while(n!=0){
         int rsbm=n&(-n);
         n=n-rsbm;
         cnt++;
    }
   
   cout<<cnt;

}