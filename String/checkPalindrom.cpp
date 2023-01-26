#include <iostream>
using namespace std;

bool checkPalindrome(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (name[s] != name[e])
            return false;
        s++;
        e--;
    }
    return true;
}

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != 0; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout << "Enter your name " << endl;
    cin >> name;
    int len = getLength(name);
    // cout << "length " << len << endl;
    cout<<"palindrome "<<checkPalindrome(name, len);
    return 0;
}