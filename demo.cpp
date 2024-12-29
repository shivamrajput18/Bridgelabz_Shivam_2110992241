#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "";
    string ans = "";
    cin >> s;

    if (!s.empty()) {
      ans += s[0]; 
    for (int i = 1; i < s.size(); i++) {
        char prev = s[i - 1];
        char curr=s[i];
        int diff = curr - prev;
        ans += to_string(diff); 
        ans += curr; 
      }
    }
    cout << ans<<endl;
    return 0;
}
