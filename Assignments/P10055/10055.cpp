/**
* Name: Sarah Turner
* Course : 4883-Programming Techniques
* Date : 8/30/2021
*/
#include <iostream>
#include <cmath> 

#define endl "\n"

using namespace std;

int main() {
    long long int B = 0, A = 0;
    
    while (cin >> A >> B) {
        cout << abs(A-B) << endl;
    }
    return 0;
}