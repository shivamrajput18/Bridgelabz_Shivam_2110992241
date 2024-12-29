#include <iostream>
#include<math.h>
using namespace std;

/*
   same flow
      ans=ans*10+digit;
    
   reverse flow
      ans=digit*pow(10,i)+ans;
*/


int main() {
    int n;
    cin >> n; 

    int ans = 0;  
    int i=1;

    while (n != 0) {
        int bit = n & 1; 

       ans+=bit*i;
       i=i*10; 

        n = n >> 1;
    }

    cout << ans << endl;
    return 0;
    
}

//if n is negative  
/* 

#include <iostream>
using namespace std;

void printBinary(int n) {
    int bits = sizeof(int) * 8; // Number of bits in an integer (typically 32)
    for (int i = bits - 1; i >= 0; i--) {
        cout << ((n >> i) & 1); // Print each bit from most significant to least significant
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n; // Input integer (can be negative)

    cout << "Binary representation of " << n << ": ";
    printBinary(n);

    return 0;
}
 */