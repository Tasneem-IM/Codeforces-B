#include <iostream>
#include <vector>

#define ll long long
using namespace std;

// Function to check if a number is prime
bool is_prime(ll x) {
    if (x < 2) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;
    for (ll i = 3; i * i <= x; i += 2) {
        if (x % i == 0) return false;
    }
    return true;
}

// Function to check if a number is a T-prime
bool check_t_prime(ll x) {
    if (x < 4) return false; // smallest T-prime is 4 (2^2)
    ll root = 0;
    while (root * root < x) ++root;
    return root * root == x && is_prime(root);
}

int main() {
    ll n;
    cin >> n;
    vector<ll> arr(n);

    for (ll k = 0; k < n; k++) {
        cin >> arr[k];
        if (check_t_prime(arr[k])) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
