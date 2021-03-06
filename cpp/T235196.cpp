#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

long long re(long long x){
    x = abs(x);
    return (x >> 2) + 1 + ((x + 1) >> 1);
}

long long post(long long l, long long r) {
    if ( l < 0 && r > 0)
        return re(l) + re(r) - 1;
    if(abs(l) > abs(r))
        swap(l, r);
    return re(r) - re(l) + ((l % 4 == 0 | l % 2 == 1)? 1 : 0);
}

int main() {
    long long n;
    long long l, r;
    cin >> n;
    for (long long i = 0; i < n; i++) {
        cin >> l >> r;
        cout << post(l, r);
    }
    return 0;
}
