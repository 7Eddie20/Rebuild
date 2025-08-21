#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 1; i <= 5; ++i) {
        cout << "Iteration " << i << ": sum = " << sum << endl;
        sum += i;
    }

    cout << "Final sum: " << sum << endl;
    return 0;
}