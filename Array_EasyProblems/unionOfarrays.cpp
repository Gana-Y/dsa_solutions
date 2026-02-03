#include <bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int> &a, vector<int> &b) {
    int i = 0, j = 0;
    int n1 = a.size(), n2 = b.size();
    vector<int> unionArr;

    while (i < n1 && j < n2) {
        if (a[i] == b[j]) {
            if (unionArr.empty() || unionArr.back() != a[i])
                unionArr.push_back(a[i]);
            i++;
            j++;
        }
        else if (a[i] < b[j]) {
            if (unionArr.empty() || unionArr.back() != a[i])
                unionArr.push_back(a[i]);
            i++;
        }
        else {
            if (unionArr.empty() || unionArr.back() != b[j])
                unionArr.push_back(b[j]);
            j++;
        }
    }

    while (i < n1) {
        if (unionArr.empty() || unionArr.back() != a[i])
            unionArr.push_back(a[i]);
        i++;
    }

    while (j < n2) {
        if (unionArr.empty() || unionArr.back() != b[j])
            unionArr.push_back(b[j]);
        j++;
    }

    return unionArr;
}

int main() {
    int n1, n2;
    cin >> n1;

    vector<int> a(n1);
    for (int i = 0; i < n1; i++)
        cin >> a[i];

    cin >> n2;
    vector<int> b(n2);
    for (int i = 0; i < n2; i++)
        cin >> b[i];

    vector<int> result = sortedArray(a, b);

    for (int x : result)
        cout << x << " ";

    return 0;
}
