#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    bool f;
    long long t, n, ans;
    cin >> t;

    while (t--) {
        cin >> n;
        ans = 0;

        vector <long long> arr(n), brr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            brr[i] = arr[i];
        }

        sort(brr.begin(), brr.end());

        for (int i = 0; i < n; i++) {
            if (arr[i] != brr[i]) {
                ans++;
            }
        }

        ans /= 2;

        cout << ans << endl;
    }

    return 0;
}