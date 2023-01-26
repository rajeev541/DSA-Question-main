#include <iostream>
using namespace std;

void commonElement(int a[], int b[], int c[], int m, int n, int o)
{
    for (int i = 0; i < m; i++)
    {
        int element = a[i];
        for (int j = 0; j < n; j++)
        {
            if (element == b[j])
            {
                for (int k = 0; k < o; k++)
                {
                    if (b[j] == c[k])
                    {
                        cout << element << " ";
                    }
                }
            }
        }
        // cout << endl;
    }
}

int main()
{
    int a[100] = {1, 5, 10, 20, 40, 80};
    int b[100] = {6, 7, 20, 80, 100};
    int c[100] = {3, 4, 15, 20, 30, 70, 80, 120};

    int m = 6;
    int n = 5;
    int o = 8;

    commonElement(a, b, c, m, n, o);
    return 0;
}