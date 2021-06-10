#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

 	float time, rate = .1, interest, value;
 	float tax = 0;
 	
 	cout <<"** THE 10% RATE IS ALREADY INCLUDED, I REMOVED THAT IN THE PROGRAM\nAND YOU ONLY NEED TO INPUT VALUE AND TIME**";
 	cout <<"\n\nEnter deposited value of money(250,000): ";
	cin >>value;
	cout <<"Time = 30 days = 1 term: "; /*1 lang lang yung input ko sa term kase 30 days a term*/
	cin >>time;

	interest = time * rate  *value;
	tax = interest * .12;
	cout <<"\nTotal Interest: " <<interest;
	cout <<"\nWitholding Tax deducted: " <<tax;

    return 0;
}
