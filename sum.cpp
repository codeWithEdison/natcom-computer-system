#include <iostream>
#include <string>
using namespace std;

int main(){
	int choice, withdraw, deposit;
	int balance = 1000;
	string password = "123", user_input;
	
	
	cout << "WELCOME to simple banking app\n";
	cout << "enter password to access our system: ";
	cin>> user_input;
	if(user_input != password){
		cout << "incorrect password. Acess denied";
		}else{
		
	
	
	do{
	cout << "choose any action : \n";
	cout <<"1.  Check balance "<<endl;
	cout << "2. Withdraw" << endl;
	cout << "3. deposit " << endl;
	cout << "4. EXIT" <<endl;
	
	cout << "Enter you choice: "<<endl;
	cin>> choice;
//	cout << choice;
 if (choice == 1){
 	cout << " your balance is :"<<balance;
 } else if(choice == 2){
 	cout << "enter  withdraw amount:  ";
 	cin >> withdraw;
 	if(withdraw > balance){
 		cout << "sorry insuffient balance";
 	}
	 else{
//	 	balance = balance - withdraw;
		balance -= withdraw;
		cout << "withdraw sucessfully your new balance is :" <<balance <<endl;
	 }
 } else if (choice ==3){
 	cout << "enter deposit amount: "<<endl;
 	cin >> deposit;
 		balance += deposit;
		 cout<< "deposit successfully.  new balance is " <<balance <<endl; 
	 
 }
 else if( choice == 4){
 	cout << "thank you for banking with us!";
 }
 else{
 	cout << "invalid input please try again!!" <<endl;
 }
 
} while(choice !=4);

}
	return 0;
}
