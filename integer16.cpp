#include <iostream>

using namespace std;

int main(){

    int a, b1, b2, b3;
    cin >> a;

    b1 = a%10;
    a = a/10;
    b2 = a%10;
    a = a/10;
    b3 = a%10;
    
    cout << b3 << b1 << b2 << endl;

    return 0;
}
