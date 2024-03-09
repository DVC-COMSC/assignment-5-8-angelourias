#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int N;

    ofstream outputFile("students.txt");

    if (!outputFile.is_open()) {
        cout << "Error: Unable to open the file." << endl;
        return 1;
    }

    cout << "Enter the number of students: ";
    cin >> N;

    outputFile << N << endl;

    for (int i = 0; i < N; ++i) {
        string name;
        int score1, score2;

        cout << "Enter name and two scores for student " << (i + 1) << ": ";
        cin >> name >> score1 >> score2;

        outputFile << name << " " << score1 << " " << score2 << endl;
    }

    outputFile.close();

    cout << "Student information saved to students.txt" << endl;

    return 0;
}