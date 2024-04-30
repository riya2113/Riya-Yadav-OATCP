#include <iostream>
#include <fstream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

// Function to check if a given arrangement is valid
bool isValidArrangement(const vector<pair<int, int>>& pairs) {
    unordered_map<int, int> startToEnd;
    for (const auto& pair : pairs) {
        if (startToEnd.find(pair.second) != startToEnd.end())
            return false; // Invalid arrangement
        startToEnd[pair.second] = pair.first;
    }
    return true; // Valid arrangement
}

// Function to arrange the pairs
vector<pair<int, int>> arrangePairs(vector<pair<int, int>>& pairs) {
    sort(pairs.begin(), pairs.end(), greater<pair<int, int>>());
    if (!isValidArrangement(pairs)) {
        return {}; // No valid arrangement possible
    }
    return pairs;
}

int main() {
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    int numPairs;
    inputFile >> numPairs;

    vector<pair<int, int>> pairs(numPairs);
    for (int i = 0; i < numPairs; ++i) {
        inputFile >> pairs[i].first >> pairs[i].second;
    }

    vector<pair<int, int>> result = arrangePairs(pairs);

    if (result.empty()) {
        outputFile << "No valid arrangement possible" << endl;
    } else {
        for (const auto& pair : result) {
            outputFile << "(" << pair.first << ", " << pair.second << ") ";
        }
        outputFile << endl;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}
