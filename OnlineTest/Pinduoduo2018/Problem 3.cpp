#include <iostream>
#include <list>
#include <fstream>
#include <vector>
#include <set>
#include <algorithm>
#include <queue>
#include <math.h>
using namespace std;

int main() {
    int n, m, num;
    vector<int> h, w;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        h.push_back(num);
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> num;
        w.push_back(num);
    }
    sort(h.begin(), h.end());
    sort(w.begin(), w.end());
    int res = 0;
    int j = 0;
    for (int i = 0; i < n; i++) {
        while (j < m && w[j] < h[i])
            j++;
        if (j >= m) {
            break;
        } else {
            res++;
            j++;
        }
    }
    cout << res << endl;
    return 0;
}
