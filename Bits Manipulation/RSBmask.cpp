/* #include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

   int ans=n&(-n);  
   cout<<Integer.toBinaryString(ans);

} */

#include <iostream>
#include <bitset> 
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = n & (-n); 
   
    cout << bitset<32>(ans).to_string() << endl; 

    return 0;
}
