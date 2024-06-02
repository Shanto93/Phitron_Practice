/*#############################################################
#    SSSSSSSS  H      H     A     N     N TTTTTTTT OOOOOOOO   #
#    S         H      H    A A    N N   N     T    O      O   #
#    SSSSSSSS  HHHHHHHH   AAAAA   N  N  N     T    O      O   #
#           S  H      H  A     A  N   N N     T    O      O   #
#    SSSSSSSS  H      H A       A N     N     T    OOOOOOOO   #
##############################################################*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string w;
    int count = 0;

    while (ss >> w)
    {
        if (w == "Jessica")
        {
            count++;
        }
    }
    count > 0 ? cout << "YES" << endl : cout << "NO" << endl;
    return 0;
}