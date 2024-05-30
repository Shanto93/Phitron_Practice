// #include <bits/stdc++.h>

// using namespace std;

// class Student
// {
// public:
//     int id;
//     char name[101];
//     char section[26];
//     int marks;

//     Student(int id, const char *name, const char *section, int marks)
//     {
//         this->id = id;
//         strcpy(this->name, name);
//         strcpy(this->section, section);
//         this->marks = marks;
//     }
// };

// Student fun()
// {
//     int id1, id2, id3, marks1, marks2, marks3;
//     char name1[101], name2[101], name3[101], section1[26], section2[26], section3[26];

//     cin >> id1 >> name1 >> section1 >> marks1;
//     Student A(id1, name1, section1, marks1);
//     cin >> id2 >> name2 >> section2 >> marks2;
//     Student B(id2, name2, section2, marks2);
//     cin >> id3 >> name3 >> section3 >> marks3;
//     Student C(id3, name3, section3, marks3);

//     if (A.marks > B.marks && A.marks > C.marks)
//     {
//         return A;
//     }
//     else if (B.marks > A.marks && B.marks > C.marks)
//     {
//         return B;
//     }
//     else if (C.marks > A.marks && C.marks > B.marks)
//     {
//         return C;
//     }
//     else if (A.marks == B.marks)
//     {
//         if (A.id < B.id)
//             return A;
//         else
//             return B;
//     }
//     else if (A.marks == C.marks)
//     {
//         if (A.id < C.id)
//             return A;
//         else
//             return C;
//     }
//     else if (B.marks == C.marks)
//     {
//         if (B.id < C.id)
//             return B;
//         else
//             return C;
//     }
// }

// int main()
// {
//     int t;
//     cin >> t;
//     for (int i = 0; i < t; i++)
//     {
//         Student result = fun();
//         cout << result.id << " " << result.name << " " << result.section << " " << result.marks << endl;
//     }

//     return 0;
// }


#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    int id;
    char name[101];
    char section[26];
    int marks;

    Student() {}

    Student(int id, const char *name, const char *section, int marks)
    {
        this->id = id;
        strcpy(this->name, name);
        strcpy(this->section, section);
        this->marks = marks;
    }
};

Student findTopStudent(Student student1, Student student2, Student student3)
{
    Student topStudent;

    if (student1.marks > student2.marks)
    {
        topStudent = student1;
    }
    else if (student2.marks > student1.marks)
    {
        topStudent = student2;
    }
    else
    {

        if (student1.id < student2.id)
        {
            topStudent = student1;
        }
        else
        {
            topStudent = student2;
        }
    }

    if (student3.marks > topStudent.marks)
    {
        topStudent = student3;
    }
    else if (student3.marks == topStudent.marks && student3.id < topStudent.id)
    {
        topStudent = student3;
    }

    return topStudent;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        Student student1, student2, student3;

        cin >> student1.id >> student1.name >> student1.section >> student1.marks;
        cin >> student2.id >> student2.name >> student2.section >> student2.marks;
        cin >> student3.id >> student3.name >> student3.section >> student3.marks;

        Student topStudent = findTopStudent(student1, student2, student3);
        cout << topStudent.id << " " << topStudent.name << " "
             << topStudent.section << " " << topStudent.marks << endl;
    }

    return 0;
}
