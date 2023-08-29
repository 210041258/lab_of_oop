#include<iostream>
#include<string>

using namespace std;

static int totalStudents = 0;

// OOP class
class Student
{
private :
// private data
    string firstName;
    string lastName;
    int studentID;
    int birthYear;
    string course;
    int obtainedMark;
    int totalStudents;
    float gpa;
    string email;
    int age ;
public :
// normal constructor
    Student(string f_nm,string l_nm,int brth)
    {
        firstName=f_nm;
        lastName=l_nm;
        birthYear=brth;
        ++totalStudents;
        studentID = 12323;
        gpa = 0.0;
            }
    ~Student()
    {
        --totalStudents;
    }
// public functions that can access to your private sesstion inside the app of class
    void age1()
    {
        age = (2023-birthYear);
    }
    string generateEmail()
    {

        email = firstName + lastName + "@iut-dhaka.edu";
        return email;
    }
    void displayCGPA()
    {
        cout << "the student GPA : " << gpa << endl;
    }

    bool willGraduate()
    {
        if(gpa >= 2.75)
        {
            return true;
        }
        else
        {
            return false ;
        }
    }

    bool applyForScholarship()
    {
        if(gpa > 3.8)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
    bool participateInInternship(string company)
    {
        // there is no condetion assigned of each company to compare with it
        // but with gpa we can take the object data and compare with provied info

        if(gpa > 3.0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void printAcademicRecord()
    {
        cout << "\n the student Full Name : " << firstName + " " + lastName << endl;
        cout << "the student id : " << studentID << endl;
        cout << "the student email : " << email << endl;
        cout << "the student age : " << (2023-birthYear) << endl;
        if(willGraduate())cout << "the graduation status : True" << endl;
        else cout << "the graduation status : false" << endl;
        if(applyForScholarship())cout << "the scholarship status : True" << endl;
        else cout << "the scholarship status : False" << endl;
        if(participateInInternship("x"))cout << "the internship status : True" << endl;
        else cout << "the internship status : False" << endl;
    }
};


void start_program()
{
// start your program here
    Student s1("xyz","zyx",2000);
    s1.printAcademicRecord();
}

int main()
{
    start_program();
    return 0;
}
