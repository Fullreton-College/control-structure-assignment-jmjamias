#include <iostream>

using namespace std;

int main()
{ 
    double length1, width1, length2, width2;
    
    cout << "Enter the length of the first rectangle: ";
    cin >> length1;

    cout << "Now, enter the width of the first rectangle: ";
    cin >> width1;

    cout << "Enter the length of the second rectangle: ";
    cin >> length2; 

    cout << "Now, enter the width of the second rectangle: ";
    cin >> width2;

    double area1 = length1 * width1;
    double area2 = length2 * width2;

    if(area1 > area2) {
        cout << "The 1st rectangle has the greater area.";
    } else if (area1 < area2) {
        cout << "The 2nd rectangle has the greater area.";
    } else {
        cout << "The areas are the same.";
    }

	
    return 0;
}

