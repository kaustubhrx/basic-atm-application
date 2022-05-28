#include<iostream>

class menu
{
    public:
        menu() // Constructor of Bank Menu 
        {
            std::cout << std::endl << std::endl;
            std::cout << "*************** MAIN MENU *************** \n\n";
            std::cout << "1.Check Your Balance\n";
            std::cout << "2.Deposit\n";
            std::cout << "3.Withdraw\n";
            std::cout << "4.Exit\n";
            std::cout << "\n**************************\n\n"; 

        }
        ~menu()
        {};
};
int main()
{
        int option;
        double balance = 500;
        int deposit_amount;
        int withdraw_amount;
        
        std::cout << "--------------- WELCOME ---------------"; 
        do{ // Do While Loop so that the Menu option will run unless we press 4
        menu m;
        //--------------------------------------------------------------------------------------
        std::cout << "Select Option \n";
        std::cin >> option;
        system("cls");

        if (option == 1)
        {
            std::cout << std::endl; 
            std::cout << "Your Current Balance is " << balance;
        }
        if (option == 2)
        {
            std::cout << "Enter the amount you want to deposit\n";
            std::cin >> deposit_amount;
            balance += deposit_amount;
            std::cout << std::endl;
            std::cout << "Amount Deposited is " << deposit_amount << std::endl << std::endl;
            std::cout << "Current Balance " << balance;
            std::cout << std::endl;
        }
        if (option == 3)
        {
            std::cout << "Enter the amount to withdraw ";
            std::cin >> withdraw_amount;
            if (withdraw_amount <= balance){
                balance -= withdraw_amount;
                std::cout << std::endl;
                std::cout << "Amount Withdrawed " << withdraw_amount << std::endl << std::endl;
                std::cout << "Current Balance " << balance;
                std::cout << std::endl;
            }
            else
                std::cout << "Not Enough Money" << std::endl; 

        }
        } while (option != 4);
        if (option == 4)
        {
            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << "------ Thanks for visiting ------";
            std::cout << std::endl;
            std::cout << std::endl;
        }
return 0;
}