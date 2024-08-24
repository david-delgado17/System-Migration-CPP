# include "roster.h"
#include <iostream>
#include <string>
using namespace std;





void Roster::add(string studentID, string firstName, string lastName, string emailAddress,
    int age, int daysInCourse1, int daysInCourse2, int daysInCourse3,
    DegreeProgram degreeProgram) {


    int daysInCourse[3] = { daysInCourse1, daysInCourse2, daysInCourse3 };

    Student* Rodrigo = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeProgram);


   



    classRosterArray[nextIndex] = Rodrigo;
    nextIndex = nextIndex + 1;

   

    




}
void Roster::printAll() {

    cout << "Displaying all existing students:" << endl;

    for (int i = 0; i <= 4; i++) {

        if (classRosterArray[i] != nullptr) {

            classRosterArray[i]->Print();
        }




    }

    cout << endl;
}






void Roster::remove(string studentID) {

    cout << "Removing " << studentID << ":" << endl << endl;

    for (int i = 0; i <= 4; i++) {


        if (classRosterArray[i] != nullptr) {

            if (classRosterArray[i]->getID() == studentID) {
                delete classRosterArray[i];
                classRosterArray[i] = nullptr;
                return;
           }
        }

    }
    cout << "NOTE: Student with the ID " + studentID + " was not found." <<  endl;

}





void Roster::printInvalidEmails() {

    cout << "Display invalid emails: " << endl;

    for (int i = 0; i <= 4; i++) {


        string sEmail = classRosterArray[i]->getEmail();

        if (sEmail.find("@") == string::npos || sEmail.find(".") == string::npos || sEmail.find(" ") != string::npos) {
            cout << sEmail << " - is invalid" << endl;
        }

        cout << endl;


    }



    
  


}




void Roster::printAverageDaysInCourse(string studentID) {




    if (studentID == "A1") {


        int total = 0;

        for (int j = 0; j <= 2; j++) {





          total += classRosterArray[0]->GetDaysInCourse(j);


      }

       cout << "Student ID:" << studentID << " average days in course is " << (total / 3) << endl;



    }


    else if (studentID == "A2") {


        int total = 0;

        for (int j = 0; j <= 2; j++) {





            total += classRosterArray[1]->GetDaysInCourse(j);


        }

        cout << "Student ID:" << studentID << " average days in course is " << (total / 3) << endl;



    }


    else if (studentID == "A3") {


        int total = 0;

        for (int j = 0; j <= 2; j++) {





            total += classRosterArray[2]->GetDaysInCourse(j);


        }

        cout << "Student ID:" << studentID << " average days in course is " << (total / 3) << endl;


    }


    else if (studentID == "A4") {


        int total = 0;

        for (int j = 0; j <= 2; j++) {





            total += classRosterArray[3]->GetDaysInCourse(j);


        }

        cout << "Student ID:" << studentID << " average days in course is " << (total / 3) << endl;



    }


    else if (studentID == "A5") {


        int total = 0;

        for (int j = 0; j <= 2; j++) {





            total += classRosterArray[4]->GetDaysInCourse(j);


        }

        cout << "Student ID:" << studentID << " average days in course is " << (total / 3) << endl;

        cout << endl;



    }



}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {

  
    cout << "Showing students in degree program: " << "SOFTWARE" << endl;



    for (int i = 0; i <= 4; i++) {

        if (classRosterArray[i]->getDegreeProgram() == degreeProgram) {

            classRosterArray[i]->Print();
        }


    }

    cout << endl << endl;



}



/// Parsing Process

void Roster::parse(string data) {

    //ID
    size_t rhs = data.find(",");
    string initId = data.substr(0, rhs);

    //firstName
    size_t lhs = rhs + 1;
    rhs = data.find(",", lhs);
    string initFirstName = data.substr(lhs, rhs - lhs);


    //lastName

    lhs = rhs + 1;
    rhs = data.find(",", lhs);
    string initLastName = data.substr(lhs, rhs - lhs);


    // email

    lhs = rhs + 1;
    rhs = data.find(",", lhs);
    string initEmail = data.substr(lhs, rhs - lhs);


    //age

    lhs = rhs + 1;
    rhs = data.find(",", lhs);
    int initAge = stoi(data.substr(lhs, rhs - lhs));


    // daysInCourse array (3 elements total) 


    lhs = rhs + 1;
    rhs = data.find(",", lhs);
    int daysInCourse1 = stoi(data.substr(lhs, rhs - lhs));


    lhs = rhs + 1;
    rhs = data.find(",", lhs);
    int daysInCourse2 = stoi(data.substr(lhs, rhs - lhs));


    lhs = rhs + 1;
    rhs = data.find(",", lhs);
    int daysInCourse3 = stoi(data.substr(lhs, rhs - lhs));


    // degreeProgram


    lhs = rhs + 1;
    rhs = data.find(",", lhs);
    string strDegreeProgram = data.substr(lhs, rhs - lhs);


    DegreeProgram degreeProgram = DegreeProgram::NETWORK;  

    if (strDegreeProgram == "SECURITY") {

        degreeProgram = DegreeProgram::SECURITY;

    }

    else if (strDegreeProgram == "NETWORK") {

        degreeProgram = DegreeProgram::NETWORK;

    }

    else if (strDegreeProgram == "SOFTWARE") {

        degreeProgram = DegreeProgram::SOFTWARE;
    }

    add(initId, initFirstName, initLastName, initEmail, initAge, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);

}



Roster:: ~Roster() {

    for (int i = 0; i <= 4; i++) {
        if (classRosterArray[i] != nullptr) {
            delete classRosterArray[i];
        }
    }
}
