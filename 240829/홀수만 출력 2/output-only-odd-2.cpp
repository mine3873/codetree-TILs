#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> b >> a;
    while(b >= a){
        if(b%2) cout << b << ' ', b -= 2;
        else b--;
    }
    return 0;
}