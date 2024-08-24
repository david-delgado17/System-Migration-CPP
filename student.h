#pragma once

#ifndef STUDENT_H
#define STUDENT_H


#include <string>



using namespace std;


#include "degree.h"

class Student {

public:



    Student(string initId, string initFirstName, string initLastName,
        string initEmail, int initAge, int* initDaysInCourse, DegreeProgram initDegreeProgram);           

    ~Student();                                                                                          




    int GetDaysInCourse(int index) const;  //Getter (daysIncourse)

    void SetDaysInCourse(int index, int numbOfDays);         //Setter (daysIncourse)



    string getEmail()  const;    // Getter (email) 

    void setEmail(string userEmail);                   // Setter (email)







    string getFName() const;      // Getter (firstName)

    void setFName(string studentFName);      // Setter (firstname)








    string getLName() const;      // Getter (lastName)

    void setLName(string studentLName);      // Setter (lastname)





    string getID() const;        // Getter (id)

    void setID(string studentID);  //Setter (id)




    int getAge() const;      /// Getter (age)

    void setAge(int studentAge);   //Setter (Age)



    DegreeProgram getDegreeProgram() const;     // Getter (degreeProgram)

    void setDegreeProgram(DegreeProgram studentDegreeProgram);    // Setter (degreeProgram)





    void Print() const;                           // Print



private:

    string id;  

    string firstName;  

    string lastName;  

    string email;   

    int age;    

    int daysInCourse[3];   

    DegreeProgram degreeProgram; 





};




#endif
