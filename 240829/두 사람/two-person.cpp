#include <iostream>
using namespace std;

int main() {
    int age[2]; 
    char gender[2];
    bool solve = false;
    for(int i = 0; i < 2; i++){
        cin >> age[i] >> gender[i];
        if(age[i] >= 19 && gender[i] == 'M') solve = true;
    }
    cout << solve;
    return 0;
}