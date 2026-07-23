#include <iostream>
using namespace std;

int main() {
    int matrix [3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter value at position (" << i+1 << "," << j+1 << "): ";
            cin >> matrix[i][j];
        }
    }
    cout << endl;
    cout << "Values in the matrix are: ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix [i][j] << " ";
        }
    }
    cout << endl;

    int max = matrix[0][0];
    int min = matrix[0][0];

    int maxRow = 0, maxCol = 0;
    int minRow = 0, minCol = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
                maxRow = i;
                maxCol = j;
            }

            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }
    cout << endl;
    cout << "Max value = " << max << " at position (" << maxRow+1 << "," << maxCol+1 << ")" << endl;
    cout << "Min value = " << min << " at position (" << minRow+1 << "," << minCol+1 << ")" << endl;
    return 0;
}
