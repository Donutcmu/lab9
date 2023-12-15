#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,rate,amount,PrevBalance,Interest,Total,Payment,NewBalance;
	int year=1;
	cout << "Enter initial loan: ";
	cin>>loan;
	//cout<<endl;
	cout << "Enter interest rate per year (%): ";
	cin>>rate;
	//cout<<endl;
	cout << "Enter amount you can pay per year: ";
	cin>>amount;
	//cout<<endl;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	/*PrevBalance=NewBalance;
	Interest=PrevBalance*(rate/100);
	Total=PrevBalance + Interest;
	Payment=amount;*/
	NewBalance=loan;
	Payment=amount;
	while(NewBalance!=0){
	PrevBalance=NewBalance;
	Interest=PrevBalance*(rate/100);
	Total=PrevBalance + Interest;
	if(Total<=Payment){
		Payment=Total;
	}
	NewBalance=Total-Payment;
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year; 
	cout << setw(13) << left << PrevBalance;
	cout << setw(13) << left << Interest;
	cout << setw(13) << left << Total;
	cout << setw(13) << left << Payment;
	cout << setw(13) << left << NewBalance;
	cout << "\n";	
	year++;
	}
	return 0;
	}