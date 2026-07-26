#include <iostream>
#include <cmath>
using namespace std;

int main(){
        long long X, result = 1;
        int N;

        cout << "Enter value of X: ";
        cin >> X;

        cout << "Enter value of N: ";
        cin >> N;

        for (int i = 0; i <= N; i++) {
            cout << X << "^" << i
                 << " = " << result << endl;

            result = result * X;
        }
    return 0;
}
