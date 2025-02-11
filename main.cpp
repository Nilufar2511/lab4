//problem 1
#include <iostream>
using namespace std;
// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     if (num > 0) {
//         cout << "Your number is positive" << endl;
//     }
//     else if (num < 0) {
//         cout << "Your number is negative" << endl;
//     }
//     else {
//         cout << "Your number is zero" << endl;
//     }
//     return 0;
// }

//problem 2
// int main() {
// int num;
//     cout << "Enter a number" << endl;
//     cin >> num;
//     if (num % 2 == 0) {
//         cout << "The number is even" << endl;
//     }
//     else if (num % 2 != 0) {
//         cout << "The number is odd" << endl;
//     }
//     return 0;
//     }

//problem 3
// int main () {
//     int num1, num2;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;
//     if (num1 > num2) {
//         cout << num1 << " is greater than " << num2 << endl;
//     }
//     else {
//     cout << num2 << " is greater than " << num1 << endl;
//     }
//     return 0;
// }

//problem 4
// int main() {
//     int num1, num2, num3;
//     cout << "Enter three numbers: ";
//     cin >> num1 >> num2 >> num3;
//     if (num1 > num2) {
//         if (num1 > num3) {
//             cout << num1 << " is the largest number" << endl;
//         }
//     }
//         if (num2 > num3) {
//             if (num2 > num1) {
//                 cout << num2 << " is the largest number" << endl;
//             }
//         }
//             else {
//                 cout << num3 << "is the largest number" << endl;
//             }
//             return 0;
//             }

// problem 5
// int main() {
//     int year;
//     cout << " Enter a year : ";
//     cin >> year;
//     if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
//         cout << " The year is a leap year";
//     }
//     else {
//         cout << " The year is not a leap year";
//     return 0;
// }

// problem 6
// int main() {
//     int speed;
//     cout << "Enter speed: ";
//     cin >> speed;
//     if (speed < 20) {
//         cout << " Speed is too slow" << endl;
//     }
//     else if (speed > 80) {
//         cout << " Speed is too fast" << endl;
//     }
//     else {
//         cout << " Speed is just right" << endl;
//     }
//     return 0;
// }

//problem 7
// int main() {
//     int mark;
//     cout << "Please enter your mark: ";
//     cin >> mark;
//     if (mark >= 50) {
//         cout << " You passed the course";
//     }
//     else {
//         cout << " You failed the course";
//     }
//     return 0;
// }

//problem 8
// int main () {
// int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     if (num >= 0) {
//         if (num == 0) {
//             cout << " Status: zero";
//         } else {
//             cout << " Status: positive";
//         }
//     } else {
//         cout << " Status: negative";
//     }
// return 0;
//         }

//problem 9
// int main() {
//     char letter;
//     cout << "Enter a traffic light symbol: ";
//     cin >> letter;
//     if (letter == 'g') {
//         cout << " Go";
//     }
//     if (letter == 'y') {
//         cout << "Get ready";
//     }
//     if (letter == 'r') {
//         cout << "Stop";
//     }
// return 0;
// }

//problem 10
// int main () {
//     int grade;
//     cout << "Please enter your grade: ";
//     cin >> grade;
//     if (grade >= 90 && grade <= 100) {
//         cout << "Your grade is: A " << endl;
//     }
//     if (grade >= 80 && grade <= 89) {
//         cout << "Your grade is: B " << endl;
//     }
//     if (grade >= 70 && grade <= 79) {
//         cout << "Your grade is: C " << endl;
//     }
//     if (grade >= 60 && grade <= 69) {
//         cout << "Your grade is: D " << endl;
//     }else {
//         cout << "Your grade is: F " << endl;
//     }
//     return 0;
// }

//problem 11
// int main() {
//     int num1, num2;;
//     cout << "Enter two integers:";
//     cin >> num1 >> num2;
//     if (num2 ==0) {
//         cout << "Division be zero is not possible";
//     }else if (num1 % num2 ==0) {
//         cout << "Number 1 is divisible by number 2";
//     } else {
//         cout << "Number 1 is not divisible by number 2";
//     }
//     return 0;
// }

//problem 12
// int main() {
//     int num1, num2 , num3;
//     cout << "Enter the angles of the triangle : ";
//     cin >> num1 >> num2 >> num3 ;
//     if (num1+ num2+ num3 == 180 && num1 > 0 && num2 > 0 && num3 > 0) {
//         cout << " A triangle can be formed";
//     }else {
//         cout << " Triangle cannot be formed";
//     }
//     return 0;
// }

//problem 13
// int main() {
//     char ch;
//     cout << "Enter a character: ";
//     cin >> ch;
//     if (ch >= 'a' && ch <= 'z') {
//         cout << ch << " is an lowercase letter ";
//     }
//     else if ( ch >= 'A'&& ch <= 'Z') {
//         cout << ch << " is an uppercase letter ";
//     }else {
//         cout << ch << "is not an alphabet";
//     }
//     return 0;
// }

//problem 14
// int main () {
//     double weight1,price1,weight2,price2;
//     cout << "Enter the weight and the price of the first package";
//     cin >> weight1 >> price1;
//     cout << "Enter the weight and the price of the second package";
//     cin >> weight2 >> price2;
//     double costPerKg1= price1 / weight1;
//     double costPerKg2= price2/ weight2;
//     if (costPerKg1 == costPerKg2) {
//         cout << " They have the same price" << endl;
//     }else if (costPerKg1 > costPerKg2) {
//         cout << " first package has a better price" << endl;
//     } else {
//         cout << " second package has a better price" << endl;
//     }
//     return 0;
// }

//problem 15
// int main() {
//     int number;
//     cout << " Enter a 3 digit number : ";
//     cin >> number;
//     int firstDigit = number /100;
//     int lastDigit = number % 10;
//     if (firstDigit == lastDigit) {
//         cout << number << "is a palindrome";
//     }else {
//         cout << number << "is not a palindrome";
//     }
//     return 0;
// }

//problem 16
// #include <cmath>
// int main() {
//     float x, y;
//     cout << " Enter the coordinates (x,y)";
//     cin >> x >> y;
//     float distance= sqrt (x*x + y*y);
//     if (distance <=10) {
//         cout << "point ( " << x << ", " << y << " )is in the circle ";
//     }else {
//         cout << "point ( " << x << ", " << y << " )is out of the circle";
//     }
//     return 0;
// }

//problem 17
// int main () {
//     float gpa;
//     cout << "Enter GPA (0 - 4.5): ";
//     cin >> gpa;
//
//     if (gpa >= 4.0) {
//         cout << "You got 80% scholarship";
//     } else if (gpa >= 3.5) {
//         cout << "You got 60% scholarship";
//     } else if (gpa >= 3.0) {
//         cout << "You got 50% scholarship";
//     } else {
//         cout << "No scholarship";
//     }
//     return 0;
// }