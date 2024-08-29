#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for(int i = 0; i < 3; i++){
        int x;
        cin >> x;
        sum += x;
    }
    cout << sum << '\n' << sum / 3 << '\n' << sum - sum/3;
    return 0;
}