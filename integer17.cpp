#include <iostream>

using namespace std;

int main(){

    int a, b;
    cin >> a;

    b = a/100;
    b %= 10;

    cout << b << endl;

    return 0;
}