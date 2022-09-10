// CPPTestBench.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdio>
#include <iomanip>
#include <vector>
#include <sstream>
using namespace std;

void printInput() {
    int userInputA, userInputB, userInputC;
    std::cin >> userInputA >> userInputB >> userInputC;
    int sum = userInputA + userInputB + userInputC;
    std::cout << sum;
}

void basicDataTypes() {
    /*
    int i;
    long l;
    char c;
    float f;
    double d;
    scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);

    printf("%d\n%ld\n%c\n%f\n%lf", i, l, c, f, d);
    */
}

void conditionalStatements(int n) {
    if (n < 9 && n < 10000000000) {
        if (n == 1) { cout << "one"; }
        else if( n == 2){ cout << "two"; }
        else if (n == 3) { cout << "three"; }
        else if (n == 4) { cout << "four"; }
        else if (n == 5) { cout << "five"; }
        else if (n == 6) { cout << "six"; }
        else if (n == 7) { cout << "seven"; }
        else if (n == 8) { cout << "eight"; }
        else if (n == 9) { cout << "nine"; }
    }
    else {
        cout << ("Greater than 9");
    }
}

void forLoops() {
    int a, b;
    std::cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (i <= 9) {
            if (i == 1) { cout << "one \n"; }
            else if (i == 2) { cout << "two \n"; }
            else if (i == 3) { cout << "three \n"; }
            else if (i == 4) { cout << "four \n"; }
            else if (i == 5) { cout << "five \n"; }
            else if (i == 6) { cout << "six \n"; }
            else if (i == 7) { cout << "seven \n"; }
            else if (i == 8) { cout << "eight \n"; }
            else if (i == 9) { cout << "nine \n"; }
        }
        else if (i % 2 == 0) {
            cout << "even \n";
        }
        else {
            cout << "odd \n";
        }
    }
}

// https://stackoverflow.com/questions/3350626/whats-the-meaning-of-and-when-applied-to-variable-names
void update(int* a, int* b) {
    int sum = *a + *b;
    int diff;

    if (&a > &b) {
        diff = a - b;
    }
    else {
        diff = b - a;
    }

    cout << sum << "\n";
    cout << diff << "\n";
    *a = sum;
    *b = diff;
    cout << *a << "\n";
    cout << *b << "\n";
}

void updates(int* a, int* b) {
    int sum = *a + *b;
    int diff;

    if (*a > *b) {
        diff = *a - *b;
    }
    else {
        diff = *b - *a;
    }

    cout << "sum " << sum << "\n";
    cout << "diff " << diff << "\n";
    *a = sum;
    *b = diff;
    cout << "*a " << *a << "\n";
    cout << "*b " << *b << "\n";
}

void printInArrayReverseOrder() {

    //int n;
    //cin >> n;
    //int arr[n];
    int arr[4];
    int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        //cout << arr[i];
    }

    for (int i = n-1; i >= 0; i--) {
        std::cout << arr[i] << " ";
    }
}

void variableSizedArrays() {
    /*
    * https://www.hackerrank.com/challenges/variable-sized-arrays/problem?isFullScreen=true&h_r=next-challenge&h_v=zen
    * Sample Input
    2 2
    3 1 5 4
    5 1 2 8 9 3
    0 1
    1 3

    //arr[1,  2,  3,  4,  5]
    //   [1] [2] [3] [4] [3]
    //   [5] [6]     [7]
    //   [3]
    */
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

// Array = a,
// first line contains n & q
// n = variable-length arrays
// q = number of queries

// query (i, j)
    int n, queries;
    cin >> n >> queries;
    cout << "n = " << n;
    cout << "\nqueries = " << queries;
    cout << "\n";

    vector<vector<int>> twoDVectorArray;

    for (int i = 0; i < n; i++) {
        int lengthOfArray;
        cin >> lengthOfArray;

        vector<int> vectorI;

        for (int j = 0; j < lengthOfArray; j++) {
            int val;
            cin >> val;
            vectorI.push_back(val);
        }
        twoDVectorArray.push_back(vectorI);
    }

    for (int y = 0; y < 3; y++) {
        cout << twoDVectorArray[0][y] << " ";
    }

    cout << "\n";

    for (int y = 0; y < 5; y++) {
        cout << twoDVectorArray[1][y] << " ";
    }

    for (int i = 0; i < queries; i++) {
        int posOne, posTwo;
        cin >> posOne >> posTwo;
        cout << twoDVectorArray[posOne][posTwo];
    }
}

vector<int> parseInts(string str) {
    // Complete this function
    stringstream ss(str);
    vector<int> integers;

    char ch;
    int tempNr;

    while (ss >> tempNr) {
        integers.push_back(tempNr);// Assign number to integers vector
        ss >> ch; // Assign the following "," to a throwaway character. Then get the next number.
    }
    return integers;
}

//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box {
private: int length, breadth, height = 0;
public: Box(int l, int b, int h) {
    length = l;
    breadth = b;
    height = h;
}
      int getLength() {
          return length;
      };
      int getBreadth() {
          return breadth;
      };
      int getHeight() {
          return height;
      };
      long CalculateVolume() {
          //long volume = length * breadth * height;
          return length * breadth * height;
      }

      //friend bool operator < (Box b1, Box b2)

};

void gets_n(std::string& str)
{
    // Dummy code
    char st[100];
    cout << str;
    std::cin.getline(st, 100);
    str = std::string(st);
    // Code for new gets
}

int main()
{
    //printInput();
    //basicDataTypes();
    //conditionalStatements(44);
    //forLoops();

    //int a, b;
    //int* pa = &a, * pb = &b;// because these are pointers to a and b, we can set the values of a & b later. 
    //a = 4;
    //b = 5;
    //update(pa, pb);
    //cout << "\n \n";
    //updates(pa, pb);
    //printInArrayReverseOrder();
    //variableSizedArrays();
    //vector<int> integers = parseInts("23,4,56");
    //for (int i = 0; i < integers.size(); i++) {
        //cout << integers[i] << "\n";
    //}

    //Box b1(1, 2, 3);
    //Box b2(4, 5, 6);

    //cout << &b1;

    string bazinga = "Bazinga";
    gets_n(bazinga);

    //std::cout << b1;
    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
