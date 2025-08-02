#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end()); 
    int flag = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            flag = 1;
            break;
        }
    }
    if(flag==1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
