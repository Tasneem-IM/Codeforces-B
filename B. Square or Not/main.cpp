#include <iostream>
#include <cmath>
using namespace std;

bool isSquare(int n) {
    int sq = sqrt(n);
    return (sq * sq == n);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (!isSquare(n)) {
            cout << "NO" << endl;
        } else {
            int x = sqrt(n);
            bool isBeautiful = true;

            for (int i = 0; i < x; i++) {
                if (s[i] != '1' || s[(x-1)*x + i] != '1' || s[i*x] != '1' || s[i*x + x-1] != '1') {
                    isBeautiful = false;
                    break;
                }
            }

            for (int i = 1; i < x-1 && isBeautiful; i++) {
                for (int j = 1; j < x-1; j++) {
                    if (s[i*x + j] != '0') {
                        isBeautiful = false;
                        break;
                    }
                }
            }

            if (isBeautiful) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
