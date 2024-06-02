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
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s, x;
        cin >> s >> x;
        while (s.find(x) != -1)
        {
            s.replace(s.find(x), x.length(), "#");
        }
        cout << s << endl;
    }
    return 0;
}