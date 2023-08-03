/*This Program calculates the amount of money 
corresponding to the duration of Rent with varying hourly prices*/

#include <iostream>
using namespace std;
//Enter the main() function
int main() {
    int start;  //declare variable to account for the starting time
    int end;    //declare variable to account for the returning time
    int total_cost = 0;   //declare variable to account for the total cost to be paid
    cout<<"Enter the starting time: "; // Ask for input from the user for the starting time
    cin>>start;
    cout<< "Enter the returning time: ";    // Ask for input from the user for the returning time
    cin>>end;

//Define condition to terminate the program (if end input is less than starting time)
  
    if(end < start) {
        cout<<"Invalid! Try again."<<endl;
        return 0;
    }

  //Check for various hourly rates using while loop.
    
    while(start < end) {
        if((start >= 0 && start < 7) || (start >= 21 && start < 24)) {
            total_cost += 500;
        } else if((start >= 7 && start < 14) || (start>= 19 && start < 21)) {
            total_cost += 1000;
        } else if(start >= 14 && start < 19) {
            total_cost += 1500;
        }
        start +=1;
    }

  //Output the total amount of money corresponding to the duration of rent
  
    cout<<"The total amount for the duration of rent is: "<<total_cost<<" Rwf."<<endl;
        
        
    
        return 0; //Existing the program.....
}

