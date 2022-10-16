#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    bool f;
    long long t, n, k, a;
    cin >> t;

    while (t--) {
        cin >> n >> k;
        f = false;

        while (n--) {
            cin >> a;
            if (a == 1) f = true;
        }
        (f) ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}