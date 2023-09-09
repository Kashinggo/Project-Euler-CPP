#include<bits/stdc++.h>

using namespace std;

bool t[10004] = {0};
int main() {

    int top = 1000;

    for (int i = 0; i * 3 < top; ++i) {
        t[i * 3] = 1;
        if (i * 5 < top) {
            t[i * 5] = 1;
        }
    }

    long long sum = 0;
    for (int i = 1; i < top; ++i) {
        if (t[i]) sum += i;
    }
    cout << sum << endl;
    return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       