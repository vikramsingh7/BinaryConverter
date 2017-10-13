#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;


string intToString(int arg){
	stringstream ss;
	string onthego;
   	ss << arg;
   	ss >> onthego;
   	return onthego;
}

int main(){
	
   int number = 0; // Input variable
   int quo =0;    // Quotient varialbe
   int rem;      // Remainder variable
   int counter = 0; // Counts number of consecutive one's
   int result = 0;  // Final Result of Consecutive numbers
   
   int controller = 0;
   
   while(controller != -1){
   cout << endl;
   cout << "Enter any positive Integer " <<endl;
   cin >> number;  
    
    vector<int> stack;   // Empty Stack that stores the binary digits
    stringstream ss;
    string binarynumber = "";
      
        rem = number%2;     // Calcualates the remainder of Entered number for first time
        quo = number/2;     // Calulates the quotient of Entered Number for first time
        stack.push_back(rem); // Stores the remainder in stack
        
        //Converts the 10 digit number into binary number format and stores the digits into vector stack
        while(quo != 1){
        	// Keeps on calulating remainder until quotient turns 1
            rem = quo%2;
        	quo = quo/2;
        	stack.push_back(rem);
		}
         stack.push_back(1);
        
  // Size of stack
   int x = stack.size();


// This for loop calculates the number of consecutive one's and also creates a string representation of binary number
   for(int i=x-1; i>=0; i--){
   	binarynumber += intToString(stack[i]);
   	if(stack[i]==1){
   		counter++;
   		if(counter>result){
   		result = counter;
   	}
   	}else{
   		counter = 0;
   	}
   }
  cout << binarynumber << " is the binary representation of your entered number " << number << "." << endl;
  cout << "There are maximum " <<  result << " Consecutive one's in the binary number." <<endl;
  cout << endl;
  cout <<endl;
  
  cout << "Enter any number to CONTINUE.  EXIT(-1)" <<endl;
  cin >> controller;
}
}
