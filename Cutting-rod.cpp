#include <iostream>
#include <vector>

using namespace std;

int cuttingRod(vector<int>& price, int n) {
    vector<int> dp(n+1, 0); 

    for (int i = 1; i <= n; i++) {
        int maxPrice = price[i]; 
        for (int j = 1; j < i; j++) {
            maxPrice = max(maxPrice, dp[i-j] + price[j]); // Calculate maximum revenue
        }
        dp[i] = maxPrice; // Store the maximum revenue for rod length i
    }

    return dp[n]; // Return maximum revenue for rod length n
}

int main() {
    int n = 8;
    vector<int> price = {0, 1, 5, 8, 9, 10, 17, 17, 20};
    cout << "Maximum revenue: " << cuttingRod(price, n) << endl;
    return 0;
}
