/*@Author : Abdou*/

#include <iostream>
#include <stdio.h>

using namespace std;

main()
{
    struct intel
    {
        string date_of_birth;
        int apogee;
    };

    intel student_1;
    student_1.date_of_birth = "14/05/2004";
    student_1.apogee = 22045210;

    intel student_2;
    student_2.date_of_birth = "18/06/2005";
    student_2.apogee = 34246365;

    string *memory_adress_1 = &student_1.date_of_birth; 

    cout << student_1.apogee << " " << student_1.date_of_birth << '\n';
    cout << student_2.apogee << " " << student_2.apogee << '\n';
    cout << "memory adress of std 1   " << memory_adress_1 << '\n'; 
    cout << "value of std 1   " << *memory_adress_1<<'\n';                

    *memory_adress_1 = "HEHEHE";

    cout << "Value :  "<< *memory_adress_1;





}
