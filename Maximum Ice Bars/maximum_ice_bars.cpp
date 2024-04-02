#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxIceCream(vector<int>& costs, int coins) {
    sort(costs.begin(), costs.end());
    int iceCreamBars = 0;
    for (int cost : costs) {
        if (coins >= cost) {
            coins -= cost;
            iceCreamBars++;
        } else {
            break;
        }
    }
    return iceCreamBars;
}

int main() {
    
    int coins;
    cout << "Enter the number of coins: ";
    cin >> coins;


     cout << "Enter the ice cream bar prices separated by space: ";
    vector<int> costs;
    int cost;
    while (cin >> cost) {
        costs.push_back(cost);
        if (cin.get() == '\n') {
            break;
        }
    }

    
    cout << "Maximum number of ice cream bars: " << maxIceCream(costs, coins) << endl;

    return 0;
}