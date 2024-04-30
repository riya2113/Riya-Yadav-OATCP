#include <iostream>
#include <fstream>
#include <vector>
#include <unordered_set>

using namespace std;

// Function to generate short forms for a given word
vector<string> generateShortForms(const string& word) {
    unordered_set<string> shortForms;
    int n = word.length();
    
    // Generating all possible subsequences of length 1 to 4
    for (int i = 0; i < n; ++i) {
        string sub = "";
        sub += word[i];
        shortForms.insert(sub);
        for (int j = i + 1; j < n; ++j) {
            sub += word[j];
            shortForms.insert(sub);
            for (int k = j + 1; k < n; ++k) {
                sub += word[k];
                shortForms.insert(sub);
                for (int l = k + 1; l < n; ++l) {
                    sub += word[l];
                    shortForms.insert(sub);
                    sub.pop_back();
                }
                sub.pop_back();
            }
            sub.pop_back();
        }
    }
    
    vector<string> result(shortForms.begin(), shortForms.end());
    return result;
}

int main() {
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    int n;
    inputFile >> n; // Number of distinct words

    vector<string> words(n);
    for (int i = 0; i < n; ++i) {
        inputFile >> words[i]; // Read distinct words
    }

    for (const auto& word : words) {
        vector<string> shortForms = generateShortForms(word);
        outputFile << "Short forms for " << word << ": ";
        for (const auto& sf : shortForms) {
            outputFile << sf << " ";
        }
        outputFile << endl;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}
