#include <iostream>
using namespace std;

int main () {
        double totalSum = 0;
        double average = 0;
        int grid[3][3] = {{1, 2, 3},
                          {4, 5, 6},
                          {7, 8, 9} };

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                totalSum += grid[i][j];
                average = totalSum / 9;
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
        cout << "The total sum of the elements in the grid is "<< totalSum << endl;
        cout << "The average of the elements in the grid is " << average << endl;
    
    return 0;
    }
