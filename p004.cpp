#include<bits/stdc++.h>
using namespace std;

bool is_palindrome(uint32_t num) {
    string tmp = to_string(num);
    reverse(tmp.begin(), tmp.end());
    return tmp == to_string(num);
}

int main() {

    // for (uint32_t mul_1 = 99; mul_1 >= 10; --mul_1) {
    //     for (uint32_t mul_2 = 99; mul_2 >= 10; --mul_2) {
    //         if (is_palindrome(mul_1 * mul_2)) {
    //             cout << mul_1 * mul_2 << " = " << mul_1 << " * " << mul_2 << endl;
    //             goto end;
    //         }
    //     }
    // }

    // for (uint32_t mul_1 = 999; mul_1 >= 100; --mul_1) {
    //     for (uint32_t mul_2 = 999; mul_2 >= 100; --mul_2) {
    //         if (is_palindrome(mul_1 * mul_2)) {
    //             cout << mul_1 * mul_2 << " = " << mul_1 << " * " << mul_2 << endl;
    //             goto end;
    //         }
    //     }
    // }

    uint32_t top = 999 * 999, bottom = 100 * 100;

    for (uint32_t mul = top; mul >= bottom; --mul) {
        if (is_palindrome(mul)) {
            for (uint32_t div = 999; div >= 100; --div) {
                if (mul % div == 0 && mul / div >= 100 && mul / div <= 999) {
                    cout << mul << " = " << div << " * " << mul / div << endl;
                    goto end;
                }
            }
        }
    }
    end:
    return 0;
}