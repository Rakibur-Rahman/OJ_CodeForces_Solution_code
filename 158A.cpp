#include <iostream>
using namespace std;
int n, k, a, cnt = 0, ar[100];
int main() {

    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        
       cin>>ar[i];
    }
    for (int j = 1; j <= n; j++) {
        if (ar[j] >= ar[k] && ar[j] > 0) {
            cnt++;
        }
    }
    cout << cnt;
}
