#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    int arr[4][2] = {
        {76, 81},
        {87, 76},
        {97, 97},
        {55, 90}
    };

    int mx = INT_MIN;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            mx = max(mx, arr[i][j]);
        }
    }

    cout << mx;

    return 0;
}