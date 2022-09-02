// CPPTestBench.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdio>
#include <iomanip>
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

    int n = 4;
    //cin >> n;
    int arr[4];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        //cout << arr[i];
    }

    n = sizeof(arr) / sizeof(int);

    for (int i = n-1; i >= 0; i--) {
        std::cout << arr[i] << " ";
    }
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
    printInArrayReverseOrder();
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
