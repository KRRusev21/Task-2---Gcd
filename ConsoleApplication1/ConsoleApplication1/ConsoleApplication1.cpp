#include <iostream>
#include <algorithm>
using namespace std;
class Gcd {
private:
    int num1;
    int num2;

public:
    Gcd(int a, int b) {
        num1 = a;
        num2 = b;
    }
    int calculateGcd() {
        int smaller = min(num1, num2);
        int gcd = 1;
        for (int i = 1; i <= smaller; ++i) {
            if (num1 % i == 0 && num2 % i == 0) {
                gcd = i;
            }
        }
        return gcd;
    }
};
int main() {
    int a, b;
    cin >> a >> b;
    if (a < 0 || b < 0 || (a == 0 && b == 0)) {
        return 0;
    }
    Gcd gcdObj(a, b);
    int gcd = gcdObj.calculateGcd();
    cout << gcd << endl;
}