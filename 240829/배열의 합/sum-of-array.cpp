#include <iostream>
#define MAX 4
using namespace std;
int num[MAX][MAX] = {0,};
int main() {
    int sum;
    for(int i = 0; i < MAX; i++){
        sum = 0;
        for(int j = 0; j < MAX; j++){
            cin >> num[i][j];
            sum += num[i][j];
        }
        num[i][0] = sum;
    }
    for(int i = 0; i < MAX; i++)
        cout << num[i][0] << "\n";
    return 0;
}