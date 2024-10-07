
#include <iostream> 
#include "grade.hpp"

using namespace std; 

namespace average {
    double average(int grades[], int size) {
    double sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += grades[i];
    }
    return sum / size;
    }
}

namespace max {
    int max(int grades[], int size) {
    int highest = grades[0];
    for (int i = 1; i < size; ++i) {
        if (grades[i] > highest) {
            highest = grades[i];
        }
    }
    return highest;
    }
}

namespace min {
    int min(int grades[], int size) {
    int lowest = grades[0];
    for (int i = 1; i < size; ++i) {
        if (grades[i] < lowest) {
            lowest = grades[i];
        }
    }
    return lowest;
    }
}

namespace aboveAverage{
    void aboveAverage(int grades[], int size, double average) {
    cout << "Students with grades above the average (" << average << "):\n";
    for (int i = 0; i < size; ++i) {
        if (grades[i] > average) {
            cout << "Student " << i + 1 << " with grade: " << grades[i] << endl;
        }
    }
    }
}

namespace compareGrade{
    void compareGrade(int grades[], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (grades[i] > grades[j]) {
                cout << "Student " << i + 1 << " scored higher than Student " << j + 1 << endl;
            } else if (grades[i] < grades[j]) {
                cout << "Student " << j + 1 << " scored higher than Student " << i + 1 << endl;
            } else {
                cout << "Student " << i + 1 << " and Student " << j + 1 << " have the same grade.\n";
            }
        }
    }
}
}
