#include <iostream>

using namespace std;

int SumFrom1toN(int n) {
    int sum = (n * (n + 1)) / 2;
    return sum;
}

int main() {
    cout << SumFrom1toN(4);
    return 0;
}
