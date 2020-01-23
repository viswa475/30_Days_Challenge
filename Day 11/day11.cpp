#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int num; cin >> num;
    int counter = 0, maxCounter = 0;
    while (num)
    {
        const auto rem = num % 2;        
        counter = (counter + rem) * rem;
        maxCounter = max(counter, maxCounter);        
        num >>= 1;
    }
    
    cout << maxCounter << endl;
        
    return 0;
}
