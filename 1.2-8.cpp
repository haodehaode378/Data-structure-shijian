#include <iostream>
using namespace std;
int main(){
    int m, n;
    cin >> m;
    int a[m];
    for (int i = 0; i < m; i++){
        cin >> a[i];
    }
    cin >> n;
    int b[n];
    for (int i = 0; i < n; i++){
        cin >> b[i];
    }
    int p = m + n;
    int c[p];
    int x = 0;
    int y = 0;
    int z = 0;
    while (x != m && y != n){
        if (a[x] <= b[y]){
            c[z] = a[x];
            z++;
            x++;
        }
        else{
            c[z] = b[y];
            z++;
            y++;
        }
    }
    if (x == m){
        while (y != n){
            c[z] = b[y];
            z++;
            y++;
        }
    }
    else{
        while (x != m){
            c[z] = a[x];
            z++;
            x++;
        }
    }
    for (int i = 0; i < m + n; i++){
        cout << c[i] << " ";
    }
    return 0;
}