////
////  main.cpp
//// endeavour c++ assignment1
////
////  Created by abhimanyu kumar on 03/01/23.
////
//
//
//
//
//
//
//
//que1.******************************************************************************************************************************************
//Write a program to display the following output using a single cout statement.
//subject       marks
//mathematics   99
//Computer      91
//chemistry     79

#include <iostream>
using namespace std;
int main() {

    cout<<"subject"<<"       "<<"marks"<<endl<<"mathematics" <<"   "<<"99"<<endl<<"Computer"<<"      "<<"91"<<endl<<"chemistry"<<"     "<<"79";

    return 0;
}

//output
//subject       marks
//mathematics   99
//Computer      91
//chemistry     79Program ended with exit code: 0

//
//
//
//
//
//
//
////que2.**************************************************************************************************************************************************
//// WAP which accept temperature in Fahrenheit and print it in Centigrade.
////hint;  (Formula used : C = [(F-32)×5]/9
//
//#include <iostream>
//using namespace std;
//int main() {
//    float C,F;
//    cout<<"enter the temperature in farenheit"<<endl;
//    cin>>F;
//    C = ((F-32)*5/9);
//    cout<<"temperature in centigrade is "<<C;
//    return 0;
//}
////output
////enter the temperature in farenheit
////10
////temperature in centigrade is -12.2222
//
//
//
//
//
//
////ques3.***************************************************************************************************************************************************************
////3. WAP to calculate area of circle. (Use pi= 3.14)
////
//#include <iostream>
//using namespace std;
//int main() {
//    float r, aoc, pi =3.14;  //aco stand for area of circle
//    cout<<"enter the radius of circle"<<endl;
//    cin>>r;
//
//    aoc= pi*r*r;
//    cout<<"the area of circle with given parameters is "<<aoc<<endl;
//    return 0;
//}
//
////output:
////enter the radius of circle
////5
////the area of circle with given parameters is 78.5
////Program ended with exit code: 0
//
//
//
//
//
//
//
////ques.4****************************************************************************************************************************************************
////WAP to print prime numbers between 1 to 100.
//#include <iostream>
//using namespace std;
//int main() {
//
//    cout<<"1,";
//    cout<<"2,";
//    cout<<"3,";
//    cout<<"5,";
//    cout<<"7,";
//    for (int i=2; i<=100; i++) {
//
//        if (i%i == 0 && i%1 == 0 && i%2 != 0 && i%3  != 0 && i%5 !=0 && i%7 !=0 ){
//            cout<<i<<",";
//        }
//
//    }
//
//    return 0;
//
//}
////output
////  1,2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,
//
//
//
//
//
////ques.5****************************************************************************************************
////WAP which accepts days as integer and display total number of years, months and days in
//
//#include <iostream>
// using namespace std;
//
//int main()
//{
//    int days, years, months;
//    cout <<"enter the no. of days"<<endl;
//    cin >> days;
//
//    years = days/ 365;
//    months = (days % 365) / 30;
//    days = (days % 365) - (months * 30);
//
//    cout << years << "years," << months << "months," << days << "days";
//
//    return 0;
//}
//
////output
////enter the no. of days
////400
////1years,1months,5daysProgram ended with exit code: 0
//
//
//
//
//
//
//
//
////ques. optional********************************************************************************************************************************************************************************************
////Optional: Write a function to calculate the factorial value of any integer as an
////           argument. Call this function from main) and print the results.
//
//
//
//
//#include <iostream>
//using namespace std;
//
//
////we make a funcn;
//int factorial(int n){
//
//
//    if(n<=1){     //if we enter 3 as number then it wil check ki ye 1 ya 1 se chota nhi hai so iss if wale part ko skip kar dega.
//        return n;
//    }
//
//    return n* factorial(n-1);         //if 4 enter kra too ye 4*factorial(3) ... to ye print nhi karega as factorial(3) int nhi hai ek function hai so  phirse isko bhi execute karega
//                      //                          and like wise karte karte value last me return karega
//
//}
//int main() {
//    int a;
//    //factorail of a number
//    //6! = 6*5*4*3*2*1=720
//    cout<<"enter a number"<<endl;
//    cin>>a;
//    cout<<"the factorial of "<<a<<" is "<<factorial(a)<<endl;
//
//    return 0;
//}
////output
////enter a number
////5
////the factorial of 5 is 120
////Program ended with exit code: 0
