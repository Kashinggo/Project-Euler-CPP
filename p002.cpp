#include<bits/stdc++.h>

using namespace std;

int main() {
    int top = 4000000, a = 0, b = 1;
    long long sum = 0;
    while (a < top) {
        int tmp = b + a;
        a = b;
        b = tmp;
        if (a % 2 == 0) sum += a;
    }
    cout << sum << endl;
    return 0;
}