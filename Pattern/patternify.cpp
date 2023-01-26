//  #INFOSYS

//partially excepted

vector<string> printPatt(int n)
{
    vector<string> st;
    int m;
    m = n + 1;
    for (int i = 1; i <= n; i++)
    {
        string s;
        for (int j = 1; j <= n; j++)
        {
            if (j <= (m - i))
            {
                s.push_back('*');
                // cout << "*";
            }
            else
            {
                s.push_back(' ');
                // cout << " ";
            }
        }
        st.push_back(s);
        cout << endl;
    }
    return st;
}
