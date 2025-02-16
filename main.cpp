//problem1
#include <iomanip>
#include <iostream>
using namespace std;
// int main() {
//     // //1.1
//     for (int i=1; i <= 10; i++) {
//         cout << i << " ";
//     }
//     cout << endl;
//     //1.2
//     int N;
//     cin >> N;
//     for (int i=1; i <= N; i++) {
//         cout << i << " ";
//     }
//     cout << endl;
//     //1.3
//     int sum10 =0;
//     for (int i=1; i <=10; i++) sum10 += i;
//     {
//         cout << sum10;
//     }
//     cout << endl;
//     //1.4
//     int sumN =0;
//     for (int i=1; i<=N; i++) sumN += i;
//     {
//         cout << sumN;
//     }
//     cout << endl;
//     //1.5
//     cout << sum10/10 << endl;
//     //1.6
//     cout << sumN/10 << endl;
//     return 0;
// }

//problem 2
// int main() {
//     int N;
//     cin >> N;
//     //2.1
//     for (int i = 1; i <= 10; i+=2) {
//         cout << i << " ";
//     }
//     cout << endl;
//     //2.2
//     for (int i = 2; i <= 10; i+=2) {
//         cout << i << " ";
//     }
//     cout << endl;
//     //2.3
//     for (int i = 1; i <= N; i+=2) {
//         cout << i << " ";
//     }
//     cout << endl;
//     //2.4
//     for (int i = 2; i <= N; i+=2) {
//         cout << i << " ";
//     }
//     cout << endl;
//     //2.5
//     for (int i = 10; i <= 100; i+=10) {
//         cout << i << " ";
//     }
//     cout << endl;
//     //2.6
//     for (int i = 10; i <=N; i+=10) {
//         cout << i << " ";
//     }
//     cout << endl;
//     return 0;
// }

//problem 3
// int main() {
//     int count=0;
//     for (char c= 'A'; c <= 'Z'; c++) {
//     cout << c << " ";
//         if (++count % 5 == 0) cout << endl;
//     }
//     cout << endl;
//     return 0;
// }

//problem 4
// int main() {
//     int number;
//     cout << "Enter a number:";
//     cin >> number;
//     if (number < 0) {
//         cout <<" Factorial of a negative number is not defined";
//     }else {
//         int factorial = 1;
//         for (int i = 1; i <= number; i++) factorial *= i; {
//             cout << "Factorial of" << number << " is " << factorial << endl;
//         }
//     }
//     return 0;
// }

//problem 5
// int main() {
//    int classes;
//     cout << "Enter number of classes ";
//     cin >> classes;
//     float totalCredits = 0.0 , weightedSum = 0.0;
//     for (int i =0 ; i < classes ; i++) {
//       double credit, grade;
//       cout << "Enter credit hours and grade points for class " << i+1 << ": ";
//       cin >> credit >> grade;
//       weightedSum += credit * grade;
//       totalCredits += credit;
//     }
//     double gpa =  weightedSum/ totalCredits;
//     cout << "Total GPA = " << gpa << endl;
//     return 0;
// }

//problem 6
// int main() {
//     int numStudents;
//     cout << " Enter the number students: ";
//     cin >> numStudents;
// double totalGPA = 0.0;
//     for (int s = 0; s < numStudents; s++) {
//         int numClasses;
//         cout << " Enter the number of classes for student " << s+1 << ": ";
//         cin >> numClasses;
//     }
//     double totalCredits = 0.0, weightedSum = 0.0;
//     for (int i = 0; i < numStudents; i++) {
//         double credit, grade;
//         cout << " Enter credit hours and grade points for class " << i+1 << ": ";
//         cin >> credit >> grade;
//         weightedSum += credit * grade;
//         totalCredits += credit;
//     }
//     double studentGPA = totalCredits == 0.0 ? 0.0 : weightedSum / totalCredits;
//     totalGPA += studentGPA;
//     double avgGPA = totalGPA / numStudents;
//     cout << " Class average Gpa:" << fixed << setprecision(4) << avgGPA << endl;
//     return 0;
// }

//problem 7
 // int main () {
 //     int n;
 //     cin >> n;
 //     for ( int i = 0; i < n; i++ ) {
 //         for (int j = 0; j < n; j++ ) cout << "*";
 //         cout << endl;
 //     }
 //     return 0;
 // }

//problem 8
// int main() {
//  int n;
//  cin>>n;
//  for (int i = 1; i <= n; i++) {
//    for (int j = 0; j < i; j++) cout << "*";
//      cout << endl;
//  }
//     return 0;
// }

//problem 9
// int main () {
//  int n;
//  cin >> n;
//  bool isPrime = n>1;
//  for (int i =2; i * i <= n; i++) {
//   if (n % i == 0) {
//    isPrime = false;
//    break;
//   }
//  }
//  cout << "Number is" << (isPrime ? "prime" : "not prime ")  << endl;
//  return 0;
// }

//problem 10
// int main () {
//  int n;
//  cin >> n;
//  for (int i = 1; i <= n; i++) {
//   cout << i << "*" << i << " = " << i * i << endl;
//  }
//  return 0;
// }

//problem 11
 // int main () {
 //  int num,count = 0 , pos = 0, neg =0, sum =0;
 //  while (true) {
 //   cin>>num;
 //   if (num == 0) break;
 //   count++;
 //   sum += num;
 //   (num > 0) ? neg++ : pos++;
 //  }
 //  cout << "The number of positive is " << pos << endl;
 //  cout << "The number of negative is " << neg << endl;
 //  cout << "The sum is " << sum << endl;
 //  cout << "The average is" << (sum / (double)count) << endl;
 //  return 0;
 // }

//problem 12
// int main () {
//  int n;
//  cin >> n;
//    while (n >0) {
//     cout << (n % 10);
//     n /= 10;
//   }
//  return 0;
// }

//problem 13
// int main () {
//  int n;
//  cin >> n;
//  if ( n == 0) {
//   cout << " The depth is 0";
//  }else {
//   for ( int i= 1; i <= n; i++) {
//    for ( int j= 0; j < i; j++) cout << i;
//    cout << endl;
//   }
//  }
//
//  return 0;
// }

//problem 14
//  int main() {
//   int n, dec = 0, base = 1;
//   cin >> n;
//   while (n > 0) {
//    dec += (n % 10) * base;
//    base *= 2;
//    n /= 10;
//   }
//   cout << "The decimal number is " << dec << endl;
//   return 0;
//  }
// }