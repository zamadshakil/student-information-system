# Student Information System (SIS)

**TechVision Pvt. Ltd. - OOP Assignment**  
**Developed by:** Zamad Shakeel  
**Course:** Object-Oriented Programming  
**University:** UCP (University of Central Punjab)

## Assignment Overview

This repository contains a C++ implementation of a Student Information System (SIS) prototype demonstrating Object-Oriented Programming (OOP) principles including:

- **Encapsulation**: Private data members with public getter/setter methods
- **Abstraction**: Grade calculation and information display methods
- **Constructor Overloading**: Default and parameterized constructors
- **Destructor**: Resource cleanup with informative messages
- **Real-world Modeling**: Student entity representation as a class

## Features

### Student Class
- **Private Attributes:**
  - `name` (string): Student's full name
  - `age` (int): Student's age
  - `rollNo` (int): Unique roll number
  - `gpa` (float): Cumulative Grade Point Average

### Methods
- **Constructors:**
  - Default constructor with initial values
  - Parameterized constructor with optional default arguments
- **Accessor Methods:** Getters and setters for all attributes
- **Business Logic:**
  - `displayInfo()`: Displays complete student information
  - `calculateGrade()`: Returns letter grade based on GPA
    - A: GPA ≥ 3.7
    - B: 3.0 ≤ GPA < 3.7
    - C: 2.0 ≤ GPA < 3.0
    - F: GPA < 2.0

## File Structure

```
student-information-system/
├── student_system.cpp    # Main implementation file
├── README.md            # This documentation
└── .gitignore          # Git ignore patterns
```

## Compilation and Execution

### Prerequisites
- C++ compiler (g++, clang++, or any standard C++ compiler)
- C++11 or later standard support

### Compile
```bash
g++ -o student_system student_system.cpp
```

### Run
```bash
./student_system
```

### Expected Output
```
========================================
Student Information System (SIS)
TechVision Pvt. Ltd.
Developed by: Zamad Shakeel
========================================

Creating Student 1 (Default Constructor):
[Default constructor called]
Name: Ali Hamza
Age: 20
Roll No: 1
GPA: 3.8
Grade: A
--------------------------

Creating Student 2 (Parameterized Constructor):
[Parameterized constructor called]
Name: Sara Ahmed
Age: 19
Roll No: 2
GPA: 2.6
Grade: C
--------------------------

Creating Student 3 (Constructor with Default Argument):
[Parameterized constructor called]
Name: Bilal Khan
Age: 18
Roll No: 3
GPA: 1.5
Grade: F
--------------------------

Program execution completed.
Objects will be destroyed now...

[Destructor called for Bilal Khan]
[Destructor called for Sara Ahmed]
[Destructor called for Ali Hamza]
```

## Assignment Requirements Fulfilled

✅ **Single File Implementation**: All code in `student_system.cpp`  
✅ **Class Design**: Student class with private attributes  
✅ **Encapsulation**: Private data with public access methods  
✅ **Constructor Overloading**: Multiple constructor variants  
✅ **Default Arguments**: Parameterized constructor with defaults  
✅ **Destructor**: Cleanup with informative messages  
✅ **Abstraction**: Grade calculation and display methods  
✅ **Object Creation**: Three different instantiation approaches  
✅ **Real-world Modeling**: Student entity as a class object  

## OOP Concepts Demonstrated

1. **Encapsulation**: Data hiding through private members and controlled access via public methods
2. **Abstraction**: Complex operations (grade calculation) hidden behind simple method calls
3. **Constructor Overloading**: Multiple ways to initialize objects
4. **Object Lifecycle**: Constructor and destructor calls tracking object creation and destruction
5. **Data Integrity**: Controlled data access ensuring consistent state

## Academic Context

**Course Learning Outcome (CLO 1)**: Demonstrate understanding of OOP principles through practical implementation of real-world entities.

**Assessment Criteria**:
- Implementation Process: 15 marks
- Viva Examination: 5 marks
- **Total**: 20 marks

## Submission Details

- **Repository URL**: `https://github.com/zamadshakil/student-information-system`
- **Main File**: `student_system.cpp`
- **Submission Format**: PDF report with GitHub link
- **Platform**: Horizon Portal

## License

This project is created for academic purposes as part of an OOP course assignment at UCP.

---

**Contact Information**  
**Name**: Zamad Shakeel  
**Email**: zamadshakil@gmail.com  
**GitHub**: [@zamadshakil](https://github.com/zamadshakil)  
**Location**: Lahore, Pakistan