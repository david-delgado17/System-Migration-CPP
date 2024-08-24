# Student System Migration in C++

This project is focused on migrating an existing student management system to a new platform using C++. The objective is to implement and extend the functionality of the current system to manage a roster of students within a specific course. The system is designed with two primary classes: `Student` and `Roster`.

## Table of Contents

- [Project Overview](#project-overview)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [File Structure](#file-structure)
- [Technical Details](#technical-details)
- [Screenshots](#screenshots)
- [Optimizations](#optimizations)
- [Lessons Learned](#lessons-learned) 
- [License](#license)

## Project Overview

The Student System Migration project is a C++ application that maintains a roster of students. The system allows for the manipulation and retrieval of student data, including the addition, removal, and listing of students. This project serves as a practical example of object-oriented programming principles in C++, focusing on class design, data encapsulation, and dynamic memory management.

## Features

- **Student Class:**
  - Manages student information including ID, first name, last name, email, age, days to complete each course, and degree program.
  - Provides accessor and mutator methods for secure data handling.
  - Includes a method to print student details in a formatted output.

- **Roster Class:**
  - Maintains a dynamic array of student objects.
  - Supports operations such as adding and removing students, printing the full roster, calculating and displaying average days in course, and validating email addresses.
  - Filters and prints students based on their degree program.

## Installation

To run this project, ensure you have a C++ compiler and an integrated development environment (IDE) installed on your system.

1. Clone the repository:
   ```bash
   git clone https://github.com/david-delgado17/System-migration-CPP.git

2. Open the project in your IDE.

3. Compile the project:
```bash
g++ main.cpp student.cpp roster.cpp -o StudentSystem
```
4. Run the executable:
```bash
./StudentSystem
```

### Usage
The application reads student data from a predefined array, parses it, and populates the `classRosterArray` with `Student` objects. The main function then demonstrates various operations such as printing all students, removing a student by ID, and listing students by degree program.

### Example Function Calls:

 R.printAll();   

```cpp
    R.printInvalidEmails();
    for (int i = 0; i <= 4; i++) {
        R.printAverageDaysInCourse(R.classRosterArray[i]-> getID());   
    }
 R.printByDegreeProgram(SOFTWARE);
 R.remove("A3");
R.printAll();
R.remove("A3");
```


