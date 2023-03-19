#include <iostream>
#include <cmath>
using namespace std;
int f(int n) {
    if (n <= 1) return n + 1;
    else return f(n - 1) + f(floor(n/2.0));
}
int main()
{
    int n;
    while (cin >> n) {
    cout << f(n) << endl;
    }

        
    return 0;
}

