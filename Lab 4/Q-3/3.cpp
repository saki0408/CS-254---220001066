#include<bits/stdc++.h>
using namespace std;
int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t; 
    cin >> t;
    while(t--) {
        int n, k; 
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        priority_queue<int> pq(a.begin(), a.end());
        for(int i = 0; i < k - 1; i++) {
            pq.pop();
        }
        cout << k << "th largest element is: " << pq.top() << endl;
    }
}