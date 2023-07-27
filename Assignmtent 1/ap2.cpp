#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }
        std::unordered_set<int> s;
        for (int i : arr) {
            s.insert(i);
        }

        if (s.size() == 1 || s.size() == 2) {
            cout << "YES" << endl;
        } else if (s.size() == n) {
            int oddCount = 0, evenCount = 0;
            for (int r = 0; r < n; r++) {
                if (arr[r] % 2 == 0)
                    evenCount++;
                else
                    oddCount++;
            }
            // If both oddCount and evenCount are odd, and there is more than one occurrence
            // of the same element at odd and even positions, then it's not possible to sort
            if (evenCount % 2 == 1 && oddCount % 2 == 1) {
                bool multipleSameElement = false;
                for (int r = 0; r < n - 1; r++) {
                    if (arr[r] == arr[r + 1] && r % 2 != (r + 1) % 2) {
                        multipleSameElement = true;
                        break;
                    }
                }
                if (multipleSameElement) {
                    cout << "NO" << endl;
                } else {
                    int index;
                    int index_big;
                    int z = arr[0];
                    int y = arr[0];
                    for (int r = 1; r < n; r++) {
                        if (arr[r] < z) {
                            z = arr[r];
                            index = r;
                        }
                    }
                    for (int h = 1; h < n; h++) {
                        if (arr[h] > y) {
                            y = arr[h];
                            index_big = h;
                        }
                    }
                    if (index % 2 == 0 && index_big % 2 != 0) {
                        cout << "YES" << endl;
                    } else {
                        cout << "NO" << endl;
                    }
                }
            } else {
                cout << "YES" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
