#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to check if "!!!" exists in the file
bool ContainsThreeExclamationMarks(const string& fileName) {
    ifstream inputFile(fileName);
    if (!inputFile) {
        cerr << "Error: Unable to open file \"" << fileName << "\".\n";
        return false;
    }

    string line;
    while (getline(inputFile, line)) {
        if (line.find("!!!") != string::npos) {
            inputFile.close();
            return true; // Found "!!!"
        }
    }

    inputFile.close();
    return false; // "!!!" not found
}

// Main function
int main() {
    string fileName;

    cout << "Enter the name of the file: ";
    cin >> fileName;

    // Call the function and display the result
    if (ContainsThreeExclamationMarks(fileName)) {
        cout << "The file contains a group of three consecutive exclamation marks (\"!!!\").\n";
    }
    else {
        cout << "The file does not contain a group of three consecutive exclamation marks (\"!!!\").\n";
    }

    return 0;
}
