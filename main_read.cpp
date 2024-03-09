#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    ifstream inputFile("students.txt");

    if (!inputFile.is_open()) {
        cout << "Error: Unable to open the file." << endl;
        return 1;
    }

    int N;
    inputFile >> N;

    for (int i = 0; i < N; ++i) {
        string name;
        int score1, score2;

        inputFile >> name >> score1 >> score2;

        int sum = score1 + score2;
        float avg = sum / 2.0f;

        cout << "Student Name: " << setw(10) << left << name
             << " score1: " << setw(5) << score1
             << " score2: " << setw(5) << score2
             << " Sum: " << setw(5) << sum
             << " Avg: " << setw(5) << fixed << setprecision(2) << avg << endl;
    }

    inputFile.close();

    return 0;
}