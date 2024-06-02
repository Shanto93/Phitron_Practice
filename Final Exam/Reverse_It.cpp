/*#############################################################
#    SSSSSSSS  H      H     A     N     N TTTTTTTT OOOOOOOO   #
#    S         H      H    A A    N N   N     T    O      O   #
#    SSSSSSSS  HHHHHHHH   AAAAA   N  N  N     T    O      O   #
#           S  H      H  A     A  N   N N     T    O      O   #
#    SSSSSSSS  H      H A       A N     N     T    OOOOOOOO   #
##############################################################*/

#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int cls;
    string section;
    int id;
};

int main()
{
    int n;
    cin >> n;
    Student a[n];
    Student b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id;
    }
    int start = 0, j = n - 1;
    while (start < n)
    {
        b[j].section = a[start].section;
        start++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << b[i].section << " " << a[i].id << endl;
    }
    return 0;
}