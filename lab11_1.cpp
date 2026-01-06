// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <limits>
using namespace std;

int main() {
    // รายชื่อเกรดที่เป็นไปได้
    string grades[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    int numGrades = sizeof(grades) / sizeof(grades[0]);

    cout << "Press Enter 3 times to reveal your future." << endl;

    for (int i = 0; i < 3; i++) {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    srand(time(0));
    int randomIndex = rand() % numGrades;

    cout << "You will get " << grades[randomIndex] << " in this 261102." << endl;

    return 0;
}