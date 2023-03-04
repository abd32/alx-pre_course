#include <stdio.h>
#include <iostream>


using namespace std;


main(){
    int a,b,r;

    cout << "Welcome to PGCD calculator enter at least 2 integers First integer : ";
    cin >> a;
    cout << "Second integer: ";
    cin >> b;
    
    //Our program starts here : 

    
    
    while( b ==! 0)
        {
        r = a%b;
        a = b;
        b = r;
        if(b == 0)
        {
            cout << "The pgcd is  "<< a;
            return a;


        }


            
           
            
           


    }


    
    










    

    







}







