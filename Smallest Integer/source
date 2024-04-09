#include <iostream>
#include <string>
#include <stack>

std::string removeKdigits(std::string num, int k) {
    std::stack<char> stk;

    for (char digit : num) {
        while (!stk.empty() && k > 0 && stk.top() > digit) {
            stk.pop();
            k--;
        }
        stk.push(digit);
    }

   
    while (k > 0 && !stk.empty()) {
        stk.pop();
        k--;
    }

   
    std::string result = "";
    while (!stk.empty()) {
        result = stk.top() + result;
        stk.pop();
    }

    
    int i = 0;
    while (i < result.length() && result[i] == '0') {
        i++;
    }

    result = result.substr(i);

    
    if (result.empty()) {
        return "0";
    }

    return result;
}

int main() {
    std::string num;
    int k;
    std::cin >> num >> k;

    std::cout << removeKdigits(num, k) << std::endl;

    return 0;
}
