#include <iostream>
 
using namespace std;
int main(){
    char c,x;
    cin >> c;
    if (int(c) > 64 & int(c) < 97){
        x = int(c)+32;
        cout<<x;
    }
    if (int(c) > 96 & int(c) < 123){
        x = int(c)-32;
        cout<<x;
    }
    return 0;
}
