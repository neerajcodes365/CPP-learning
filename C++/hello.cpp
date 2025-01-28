// #include <iostream> can be omitted with the next line
#include <bits/stdc++.h> /* Includes all standard libraries */
using namespace std;

int main() {
    /* BASIC I/O PRINTING */
    /*
    int x, y, z;
    cin >> x;
    cout << "The value of x is " << x << "\n";
    cin >> x >> y >> z;
    cout << "The value of x is " << x << "\n";
    cout << "The value of y is " << y << "\n";
    cout << "The value of z is " << z << "\n";
    */

    /* STRING READING: TWO SEPARATE STRINGS */
    /*
    string a = "neeraj";
    cout << a << endl;
    cout << a[2] << endl;

    string a, b;
    cin >> a >> b;
    cout << a << " " << b << endl;
    */

    /* TAKING A FULL LINE AS STRING (INCLUDING SPACES) */
    /*
    string fullline;
    getline(cin, fullline); // Reads the entire line, including spaces
    cout << fullline << endl;
    */

    /* BASIC IF-ELSE STATEMENTS */
    /*
    int age;
    cin >> age;
    if (age < 18) {
        cout << "child" << endl;
    } else {
        cout << "adult" << endl;
    }
    */

    /* SWITCH CASE (SAME AS C) */
    /*
    int choice;
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "Choice 1 selected" << endl;
            break;
        case 2:
            cout << "Choice 2 selected" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }
    */

    /* 1-D ARRAY (SAME AS C) */
    /*
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;
    arr[2] += 10;
    cout << arr[2] << endl;
    */

    /* 2-D ARRAY (SAME AS C) */
    /*
    int arr[2][2];
    cin >> arr[0][0] >> arr[0][1];
    cin >> arr[1][0] >> arr[1][1];
    cout << arr[0][0] << " " << arr[0][1] << endl;
    cout << arr[1][0] << " " << arr[1][1] << endl;
    */

    /* STRING MANIPULATION (SAME AS C) */
    /*
    string a = "neeraj";
    cout << a << endl;
    cout << a[2] << endl;
    cout << a.size() << endl; // Prints the length of the string
    */

    /* FOR LOOP (SCOPE OF 'i' LIMITED TO LOOP) */
    /*
    for (int i = 0; i < 10; i++) {
        cout << "Dia loved Neeru10, but now she hates him, her loss :/" << endl;
    }
    */

    /* WHILE AND DO-WHILE LOOPS (SAME AS C) */
    /*
    int i = 0;
    while (i < 5) {
        cout << "This is a while loop" << endl;
        i++;
    }

    do {
        cout << "This is a do-while loop" << endl;
        i--;
    } while (i > 0);
    */

    /* BASIC FUNCTION (SAME AS C) */
    /*
    int add(int a, int b) {
        return a + b;
    }

    int x = 5, y = 10;
    cout << "Sum = " << add(x, y) << endl;
    */

    /* PASS BY VALUE (SAME AS C) */
    /*
    void changeValue(int x) {
        x += 10;
    }

    int num = 5;
    changeValue(num);
    cout << num << endl; // No change in the original variable
    */

    /* PASS BY REFERENCE (MAJOR DIFFERENCE IN FUNCTION DECLARATION) */
    /*
    void changeName(string &st) { // Pass-by-reference using '&'
        st[0] = 't';
        cout << st << endl; // Changes are reflected in the original variable
    }

    string a = "neeraj";
    changeName(a);
    cout << a << endl;

    // Output:
    // teeraj
    // teeraj
    */

    /* BASICS DONE. STL WILL BE COVERED IN THE NEXT FILE */

    return 0;
}
