#include <bits/stdc++.h>
using namespace std;

void veda(vector<int>r, int ind, vector<int>& ans, int t, int size, int sum) {
    
    if (ind >= size and sum!= t) {
        return;
    }
    if (sum == t) {
        for (int i = 0; i < ans.size(); i++) 
            cout << ans[i] << " ";
            cout << endl;
        return;
    }                         
    ans.push_back(r[ind]);
    veda(r, ind + 1, ans, t, size, sum + r[ind]);
    ans.pop_back();
    veda(r, ind + 1, ans, t, size, sum);
}

int main() {
    vector<int> rug;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        rug.push_back(x);
    }
    int target;
    cin >> target;
    sort(rug.begin(), rug.end());
    vector<int> ans;
    veda(rug,0,ans,target,n,0);
}
