#include <iostream>
using namespace std;

int main() {
    int a, num[4];
    cin >> a >> num[0] >> num[1] >> num[2] >> num[3];
    for(int elem : num){
        cout << (a > elem ? 1 : 0) << '\n';
    }
    return 0;
}