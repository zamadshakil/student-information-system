#include <iostream>
#include <string>
using namespace std;

// Student class definition
class Student {
private:
    string name;
    int age;
    int rollNo;
    float gpa;
public:
    // Default constructor
    Student() : name("Unknown"), age(0), rollNo(0), gpa(0.0f) {
        cout << "[Default constructor called]\n";
    }
    
    // Parameterized constructor with default arguments
    Student(string n, int a, int r, float g = 0.0f) : name(n), age(a), rollNo(r), gpa(g) {
        cout << "[Parameterized constructor called]\n";
    }
    
    // Destructor
    ~Student() {
        cout << "[Destructor called for " << name << "]\n";
    }

    // Setters
    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }
    void setRollNo(int r) { rollNo = r; }
    void setGPA(float g) { gpa = g; }

    // Getters
    string getName() const { return name; }
    int getAge() const { return age; }
    int getRollNo() const { return rollNo; }
    float getGPA() const { return gpa; }

    // Method to display info
    void displayInfo() const {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Roll No: " << rollNo << "\n";
        cout << "GPA: " << gpa << "\n";
        cout << "Grade: " << calculateGrade() << "\n";
        cout << "--------------------------\n";
    }

    // Method to calculate grade
    string calculateGrade() const {
        if (gpa >= 3.7) return "A";
        else if (gpa >= 3.0) return "B";
        else if (gpa >= 2.0) return "C";
        else return "F";
    }
};

int main() {
    cout << "========================================\n";
    cout << "Student Information System (SIS)\n";
    cout << "TechVision Pvt. Ltd.\n";
    cout << "Developed by: Zamad Shakeel\n";
    cout << "========================================\n\n";
    
    // 1. Object using default constructor
    cout << "Creating Student 1 (Default Constructor):\n";
    Student s1;
    s1.setName("Ali Hamza");
    s1.setAge(20);
    s1.setRollNo(1);
    s1.setGPA(3.8f);
    s1.displayInfo();

    // 2. Object using parameterized constructor
    cout << "Creating Student 2 (Parameterized Constructor):\n";
    Student s2("Sara Ahmed", 19, 2, 2.6f);
    s2.displayInfo();

    // 3. Object using parameterized constructor with default GPA
    cout << "Creating Student 3 (Constructor with Default Argument):\n";
    Student s3("Bilal Khan", 18, 3);
    s3.setGPA(1.5f); // Setting GPA after creation
    s3.displayInfo();

    cout << "Program execution completed.\n";
    cout << "Objects will be destroyed now...\n\n";
    
    return 0;
}