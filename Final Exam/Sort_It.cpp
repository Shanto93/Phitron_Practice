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
    int math;
    int eng;
};

bool cmp(Student a, Student b)
{
    if ((a.math + a.eng) == (b.math + b.eng))
    {
        return a.id < b.id;
    }
    else
        return (a.math + a.eng) > (b.math + b.eng);
}

int main()
{
    int n;
    cin >> n;
    Student a[n];
    Student b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id >> a[i].math >> a[i].eng;
    }

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].section << " " << a[i].id << " " << a[i].math << " " << a[i].eng << endl;
    }
    return 0;
}