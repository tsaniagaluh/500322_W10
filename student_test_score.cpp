#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct studentType {
    string studentFName;
    string studentLName;
    int    testScore;  
    char   grade;      
};
// Deklarasi array dari studentType
studentType studentList[20];  

// Membaca data student dari input
void readData() {
    for (int i = 0; i < 20; i++) {
        cout << "Input student's firstName lastName score(0-100) " << "(" << (i + 1) << "): ";
        cin >> studentList[i].studentFName
            >> studentList[i].studentLName
            >> studentList[i].testScore;
        studentList[i].grade = '-'; // diisi pada fungsi assignGrades
    }
}

// Menentukan grade berdasarkan test score
void assignGrades() {
    for (int i = 0; i < 20; i++) {
        int score = studentList[i].testScore;
        if      (score >= 90 && score <= 100) studentList[i].grade = 'A';
        else if (score >= 80)                 studentList[i].grade = 'B';
        else if (score >= 70)                 studentList[i].grade = 'C';
        else if (score >= 60)                 studentList[i].grade = 'D';
        else if (score >= 50)                 studentList[i].grade = 'E';
        else                                  studentList[i].grade = 'F';
    }
}

// Mencari nilai tertinggi dalam daftar student
int findHighestScore() {
    int best = studentList[0].testScore;
    for (int i = 1; i < 20; i++)
        if (studentList[i].testScore > best) best = studentList[i].testScore;
    return best;
}

// Mencetak semua data student dalam format tabel
void printAllStudents() {
    cout << left << setw(25) << "Name"
         << setw(8) << "Score"
         << "Grade\n";
    cout << string(40, '-') << '\n';

    for (int i = 0; i < 20; i++) {
        string fullName = studentList[i].studentLName + ", " + studentList[i].studentFName;
        cout << left << setw(25) << fullName
             << setw(8) << studentList[i].testScore
             << studentList[i].grade << '\n';
    }
}

// Mencetak nama student dengan nilai tertinggi
void printHighestScoreName(int best) {
    cout << "\nHighest score: " << best << "\n";
    cout << "Students with highest score:\n";
    for (int i = 0; i < 20; i++)
        if (studentList[i].testScore == best)
            cout << " - " << studentList[i].studentLName << ", "
                 << studentList[i].studentFName << '\n';
        }

int main() {
    readData();
    assignGrades();
    int top = findHighestScore();
    printAllStudents();
    printHighestScoreName(top);
    return 0;
}