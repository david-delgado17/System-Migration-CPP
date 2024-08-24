#include <iostream>
#include "student.h"
#include <string>




using namespace std;




void Student::SetDaysInCourse(int index, int numbOfDays) {

    daysInCourse[index] = numbOfDays;
}



int Student::GetDaysInCourse(int index) const {

    return daysInCourse[index];
}


string Student::getEmail() const {          ///  Getter (email) 

    return email;
}

void Student::setEmail(string userEmail) {      /// Setter (email)

    email = userEmail;

}






string Student::getFName() const {          ///  Getter (fName) 

    return firstName;
}

void Student::setFName(string studentFName) {     ///  Setter (fName) 

    firstName = studentFName;
}







string Student::getLName() const {    ///  Getter (lName) 

    return lastName;
}


void Student::setLName(string studentLName) {       ///  Setter (lName) 

    lastName = studentLName;
}







string Student::getID() const {     ///  Getter (id) 

    return id;
}


void Student::setID(string studentID) {     ///  Setter (id) 


    id = studentID;
}






int Student::getAge() const {         ///  Getter (age) 

    return age;
}

void Student::setAge(int studentAge) {           ///  Setter (age) 


    age = studentAge;
}






DegreeProgram Student::getDegreeProgram() const {     ///  Getter (degree) 

    return degreeProgram;

}


void Student::setDegreeProgram(DegreeProgram studentDegreeProgram) {

    degreeProgram = studentDegreeProgram;                                             ///  Setter (degree) 
}



void Student::Print() const {

    string dps = "SOFTWARE";

    if (degreeProgram == NETWORK) {

        dps = "NETWORK";
    }

    else if (degreeProgram == SECURITY) {

        dps = "SECURITY";
    }

    cout << id << " " << firstName << " " << lastName << " " << email << " " << age << " " << "Days in Course: " << daysInCourse[0] << " " <<
        daysInCourse[1] << " " << daysInCourse[2] << " " << dps << endl;


}


Student::Student(string initId, string initFirstName, string initLastName,
    string email, int initAge, int* initDaysInCourse, DegreeProgram initDegreeProgram) {

    id = initId;
    firstName = initFirstName;
    lastName = initLastName;
    this->email = email;   
    age = initAge;
    daysInCourse[0] = initDaysInCourse[0];
    daysInCourse[1] = initDaysInCourse[1];
    daysInCourse[2] = initDaysInCourse[2];
    degreeProgram = initDegreeProgram;



}

Student:: ~Student() {

   // cout << "Removing A3:" << endl;
    cout << id << " has been destroyed." << endl;
    
};