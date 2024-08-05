// problem link
// https://www.codechef.com/problems/CHEFDETE


#include <iostream>
#include <set>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	set<int> st;
	int k;
	for(int i = 0;i < n;i++){
	    cin >> k;
	    st.insert(k);
	}
	
	for(int i = 1;i <= n;i++){
	    if(st.find(i) == st.end()){
	        cout << i << " ";
	    }
	}
	
	cout << endl;
	
	
	return 0;
}
