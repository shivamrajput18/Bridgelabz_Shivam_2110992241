/* #include<iostream>

using namespace std;

 int incrementByOne(int *a){
   return ++(*a);
}

int main(){
   int* a = new int(10);
   incrementByOne(a);
   cout<< *a ;

}


 */


#include <iostream>

using namespace std;

void incrementByOne(int* a) {
    ++(*a); 
}

int main() {
    int a = 10;         
    incrementByOne(&a);  
    cout << a;           
    return 0;
}
