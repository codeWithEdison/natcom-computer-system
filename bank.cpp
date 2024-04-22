#include <iostream>

// Global variable to store balance
double balance = 1000.0;

// Function to check balance
void checkBalance() {
    std::cout << "Current balance: " << balance << std::endl;
}

// Function to withdraw money
void withdraw() {
    double amount;
    std::cout << "Enter amount to withdraw: ";
    std::cin >> amount;
    if (amount > balance) {
        std::cout << "Insufficient funds. Withdrawal failed." << std::endl;
    } else {
        balance -= amount;
        std::cout << "Withdrawal successful. New balance: " << balance << std::endl;
    }
}

// Function to add savings
void addSavings() {
    double amount;
    std::cout << "Enter amount to add to savings: ";
    std::cin >> amount;
    balance += amount;
    std::cout << "Savings added. New balance: " << balance << std::endl;
}

int main() {
    int choice;

    // Display menu options until the user chooses to exit
    do {
        std::cout << " \n welcome to simple banking app \nChoose an action:" << std::endl;
        std::cout << "1. Check Balance" << std::endl;
        std::cout << "2. Withdraw" << std::endl;
        std::cout << "3. Add Savings" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch(choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                withdraw();
                break;
            case 3:
                addSavings();
                break;
            case 4:
                std::cout << "THANK YOU FOR BANKING WITH US!!!!." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 4);

    return 0;
}

