
#include "student.h"
#include "roster.h"
#include <iostream>
#include <string>
using namespace std;








const string studentData[] =
{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
"A5,Leonardo,Rodrigo,Leonardo_100@gmail.com,30,50,30,40,SOFTWARE" };    /// A5 - new student













int main() {





    cout << "C867 Scripting and Programming: Applications" << endl << "Language: C++" << endl << "Student ID: 011447441" << endl <<
        "Name: David Delgado" << endl << endl;

    int x = 0;

    Roster R;

    for (int i = 0; i <= 4; i++) {

        R.parse(studentData[i]);    

    } 

    R.printAll();   

    R.printInvalidEmails();

    for (int i = 0; i <= 4; i++) {

        R.printAverageDaysInCourse(R.classRosterArray[i]-> getID());   

    }

     R.printByDegreeProgram(SOFTWARE);


    R.remove("A3");

    R.printAll();

    R.remove("A3");

    

    return 0;

}