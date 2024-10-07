#include <iostream> 
#include "grade.hpp " 

using namespace std;  

int main(){
    int numberOfStudents; 
    cout << "The number of Students: " << endl; 
    cin >> numberOfStudents; 

    int grade[] = {numberOfStudents}; 

     for (int i = 0; i < numberOfStudents; ++i) {
        cout << "Enter grade for student " << i + 1 << ": ";
        cin >> grade[i];
    }
    
    double average;
    int max, min; 
     average::average(grade, numberOfStudents); 
    max::max(grade, numberOfStudents); 
    min::min(grade, numberOfStudents); 

    cout << "Average grade: " << average << endl;
    cout << "Highest grade: " << max << endl;
    cout << "Lowest grade: " << min << endl;

    aboveAverage::aboveAverage(grade, numberOfStudents, average); 
    compareGrade::compareGrade(grade, numberOfStudents); 


    return 0; 
}

