// problem link
// https://codeforces.com/contest/1696/problem/A


#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        long long int n, k, val = 0;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i = 0; i < n;i++){
            cin >> arr[i];
            if(val < (arr[i] | k)){
                val = arr[i] | k;
            }
        }
        
       
        
        cout << val << endl;
    }
}