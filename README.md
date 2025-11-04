# Tugas Struct and Union - Pemrograman Dasar
500322_W10

This program manages and processes student test data using C++ struct and array. It reads the first name, last name, and test score for 20 students, assigns each a letter grade based on their score, identifies the highest test score, and displays the complete list of students along with their grades. Finally, it prints the names of all students who achieved the highest score.

Functions used:

    readData()  // Reads all student information (name and score).

    assignGrades() // Converts numerical scores to letter grades.

    findHighestScore() // Finds the highest test score in the class.

    printAllStudents() // Displays all student data in a formatted table.

    printHighestScoreName(int best) // Lists students who achieved the top score.



  Compile:
  
    g++ student_test_score.cpp -o student_test_score.exe

  Run:
  
    ./student_test_score
