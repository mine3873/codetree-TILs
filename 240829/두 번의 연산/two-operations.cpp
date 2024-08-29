#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    a += (a % 2 ? 3 : 0);
    a /= (a%3 == 0 ? 3 : 1);
    cout << a;
    return 0;
}