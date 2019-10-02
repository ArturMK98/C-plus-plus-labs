/**
 *  Student Name: Artur Karolewski
 *  Student Number: 17388976
 *  Lab 7: Exercise 3
 *
 *    This program works as follows:
 *      - 1: Three student objects are created, one with a default constructor and two with parameterised constructors
 *      - 2: The Name, number, number of modules are printed out as well as a message that lets the user know if that 
 *           student passed or not depending on if they got 40% or more average score
 */

#include <iostream>
#include <string>
#include <time.h> 

using namespace std;

//--------------------------------------------------------
// Classes
//--------------------------------------------------------
class Student {

    // Private data members
    string studentName;
    unsigned int studentNumber;
    unsigned int N;
    int* results;

    public:

        // Public methods
        void printDetails();
        bool pass();
        Student();
        Student(string studentName, unsigned int studentNumber, unsigned int N);
        ~Student();
};

//--------------------------------------------------------
// Main function
//--------------------------------------------------------
int main() {

    srand(time(0));

    cout << "\nDefault constructor:\n";
    Student example = Student();
    example.printDetails();

    cout << "\nParameterised constructor:\n";
    Student Artur = Student("Artur", 17388976, 5);
    Artur.printDetails();

    cout << "\nAnother parameterised constructor:\n";
    Student Jim = Student("Jim", 17390283, 2);
    Jim.printDetails();

    return 0;
}

//--------------------------------------------------------
// Constructors and destructors
//--------------------------------------------------------

// Default constructor
Student::Student() {

    studentName = "No name";
    studentNumber = 0;
    N = 0;
}

// Parameterised constructor
Student::Student(string studentName, unsigned int studentNumber, unsigned int N) {

    this->studentName = studentName;
    this->studentNumber = studentNumber;
    this->N = N;
    results = new (nothrow) int[N];
    if (results == NULL) {cerr << "out of memory error";}

    for(int i = 0; i < N; i++) {

        results[i] = rand() % 101;
    }
}

// Destructor
Student::~Student() {

    cout << "\nDeleting class";
    delete results;
}

//--------------------------------------------------------
// Helper functions
//--------------------------------------------------------

// This function prints the details of a student
void Student::printDetails() {

    cout << "Name: " << studentName;
    cout << "\nNumber: " << studentNumber;
    cout << "\nModules " << N;

    cout << "\n-Grades-" << endl;
    for (int i = 0; i < N; i++) {

        cout << "Module " << i + 1 << ": " << results[i] << endl;
    }

    if (N == 0) {

        cout << "No Grades" << endl;

    } else if (pass()) {

        cout << "The student has passed." << endl;

    } else {

        cout << "The student has not passed." << endl;
    }
}

// This function calculates the average of the grades and determines if a student passed
bool Student::pass() {

    int sum = 0;
    bool passed = false;
    for (int i = 0; i < N; i++) {

        sum += results[i];
    }

    if (sum/N >= 40) {

        passed = true;
    }

    return passed;
}