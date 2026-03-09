#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <vector>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> A(n);
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }
    unordered_set<int> B;
    int num;
    for (int i = 0; i < m; i++){
        cin >> num;
        B.insert(num);
    }
    vector<int> result;
    for (int n : A){
        if (B.find(n) == B.end()){
            result.push_back(n);
        }
    }
    sort(result.begin(), result.end());
    if (result.empty() == 1){
        cout << "0";
        return 0;
    }
    for (int i = 0; i < result.size(); i++){
        cout << result[i];
        if (i != result.size()){
            cout << " ";
        }
    }
    return 0;
}