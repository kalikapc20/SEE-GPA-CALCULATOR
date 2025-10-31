#include <iostream>
using namespace std;

float percentToGPA(float percent) {
    if (percent >= 90) return 4.0;
    else if (percent >= 80) return 3.6;
    else if (percent >= 70) return 3.2;
    else if (percent >= 60) return 2.8;
    else if (percent >= 50) return 2.4;
    else if (percent >= 40) return 2.0;
    else return "NG aayo Nani/Babu Re-exam ko tayari gara"; // fail
}

int main() {
    // Marks for 75-full subjects
    float english, nepali, math, science, optMath;
    // Marks for 50-full subjects
    float ddm, dbms, cherm, ds;
    char includeOpt;

    cout << "Enter marks (out of 75) for:\n";
    cout << "English: "; cin >> english;
    cout << "Nepali: "; cin >> nepali;
    cout << "Math: "; cin >> math;
    cout << "Science: "; cin >> science;
    cout << "Optional Math: "; cin >> optMath;

    cout << "\nEnter marks (out of 50) for:\n";
    cout << "DDM: "; cin >> ddm;
    cout << "DBMS: "; cin >> dbms;
    cout << "CHERM: "; cin >> cherm;
    cout << "DS/C++: "; cin >> ds;

    cout << "\nInclude Optional Math in GPA? (y/n): ";
    cin >> includeOpt;

    float totalMarks = english + nepali + math + science
                       + ddm + dbms + cherm + ds;
    float fullMarks  = (4 * 75) + (4 * 50); 

    if (includeOpt == 'y' || includeOpt == 'Y') {
        totalMarks += optMath;
        fullMarks  += 75;
    }

    float percent = (totalMarks / fullMarks) * 100.0;
    float gpa = percentToGPA(percent);

    cout << "\nYour Percentage = " << percent << "%" << endl;
    cout << "Your GPA        = " << gpa << endl;

    return 0;
}
