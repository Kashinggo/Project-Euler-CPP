#include<bits/stdc++.h>
using namespace std;

// base knowledge: all numbers can be shown as multiplier of prime numbers
int main() {
    uint64_t tar = 600851475143;
    for (uint64_t div = 2; div * div < tar; ++div) {
        while (tar % div == 0) {
            tar /= div;
        }
    }
    cout << tar << endl;
    return 0;
}


// bool is_prime(ll num) {
//     if (num <= 1) return false;
//     if (num == 2) return true;
//     for (ll i = 2; i <= sqrt(num); ++i) {
//         if (num % i == 0) return false;
//     }
//     return true;
// }
// int main() {

//     ll tar = 13195, i;
//     for (i = 1; i < tar; ++i) {
//         if (tar % i == 0 && is_prime(i)) {
//             cout << (tar / i) << endl;
//             break;
//         }
//     }
//     if (i == tar) cout << "No prime factor\n";
//     return 0;
// }