#pragma once


#ifndef ROSTER_H
#define ROSTER_H


#include <string>



using namespace std;


#include "degree.h"
#include "student.h"



class Roster {

public:

    void parse(string data);


    Student* classRosterArray[5];

    int nextIndex = 0;

 

    void add(string studentID, string firstName, string lastName, string emailAddress,
        int age, int daysInCourse1, int daysInCourse2, int daysInCourse3,
        DegreeProgram degreeProgram);

    void printAll();  




    void remove (string studentID);   



    void printInvalidEmails();


    void printAverageDaysInCourse(string studentID);


    void printByDegreeProgram(DegreeProgram degreeProgram);



    ~Roster();

  






};




#endif
