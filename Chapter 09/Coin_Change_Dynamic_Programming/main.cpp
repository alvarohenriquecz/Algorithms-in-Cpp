#include <iostream>

using namespace std;

int count(int S[], int m, int n)
{
    int x, y;

    // Base case (n = 0)
    int table[n + 1][m];

    // Fill the enteries for 0 value case
    // (n = 0)
    for(int i = 0; i < m; i++)
        table[0][i] = 1;
    
    // Fill rest of the table entries in bottom
    // up manner
    for(int i = 1; i < n + 1; i++)
    {
        for(int j = 0; j < m; j++)
        {
            // solutions count including S[j]
            x = (i - S[j] >= 0) ?
                table[i - S[j]][j] :
                0;
            
            // Solutions count excluding s[j]
            y = (j >= 1) ? table[i][j-1] : 0;

            // total count
            table[i][j] = x + y;
        }
    }

    return table[n][m-1];
}

int main()
{
    cout << "Coin change Dynamic Programming" << endl;

    int S[] = {2, 5, 3, 6};
    int size = 4;
    int n = 10;

    cout << count(S, size, n) << endl;
    return 0;
}