#include <iostream>
using namespace std;

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%.2lf", (a+b) / (double)(a-b));
    return 0;
}