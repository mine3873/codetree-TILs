#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    cout << (a < b ? (b < c ? b : c) : (a < c ? a : c));
    return 0;
}