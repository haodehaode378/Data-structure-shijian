#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        cin >> b[i];
    }
    int c[2 * n];
    for (int i = 0; i < n; i++){
        c[i] = a[i];
    }
    for (int i = 0; i < n; i++){
        c[i + n] = b[i];
    }
    sort (c, c + 2 * n);
    int r = (2 * n - 1) / 2;
    cout << c[r] << endl;

    return 0;
}