#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaration
    string s1 = "Hello";
    string s2 = "World";

    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;

    // Length
    cout << "\nLength of s1 = " << s1.length() << endl;

    // Concatenation
    string s3 = s1 + " " + s2;
    cout << "Concatenation = " << s3 << endl;

    // Comparison
    if (s1 == s2)
        cout << "Strings are Equal" << endl;
    else
        cout << "Strings are Not Equal" << endl;

    // Assignment
    s2 = s1;
    cout << "After assignment s2 = " << s2 << endl;

    // Access Character
    cout << "First character = " << s1[0] << endl;

    // Insert
    s1.insert(5, " Everyone");
    cout << "After Insert = " << s1 << endl;

    // Erase
    s1.erase(5, 9);
    cout << "After Erase = " << s1 << endl;

    // Append
    s1.append("!!");
    cout << "After Append = " << s1 << endl;

    // Push Back
    s1.push_back('?');
    cout << "After Push Back = " << s1 << endl;

    // Pop Back
    s1.pop_back();
    cout << "After Pop Back = " << s1 << endl;

    // Find
    cout << "Position of 'lo' = " << s1.find("lo") << endl;

    // Substring
    cout << "Substring = " << s1.substr(0, 4) << endl;

    string line;
    cout << "\nEnter a full line: ";
    getline(cin, line);
    cout << "You entered: " << line << endl;

    return 0;
}