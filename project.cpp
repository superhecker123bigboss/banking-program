#include <iostream>
#include <cmath>

void deposit(float& totalBalance);  
void withdraw(float& totalBalance);
void totalAmount(float& totalBalance);




int main(){

    int choice;
    float totalBalance = 0;

    
    
    std::cout << "welcome to the National online bank service of the Netherlands" << std::endl;
    
   do {
    std::cout << "Please enter the number thats corrisponding to what you want to do" << std::endl;
    std::cout << "1. show total balance ; 2. deposit ; 3. withdraw ; 4. exit program" << std::endl; 
    std::cin >> choice;

    switch(choice){
        case 1: 
            totalAmount(totalBalance);
            break;
        case 2: 
            deposit(totalBalance);
            break;
        case 3:
            withdraw(totalBalance);
            break;
        case 4:
            std::cout << "Exiting program..." << std::endl;
            break;
        default: 
            std::cout << "invalid input, Please enter number 1,2,3 or 4" << std::endl;

    }
    } while(choice != 4); 




 return 0;

}

void totalAmount(float& totalBalance){
    std::cout << "Your total balance is: " << totalBalance << "$" << std::endl;
    
}

void withdraw(float& totalBalance){
    
    std::string Withdrawchoice;
    float withdrawAmount;


        std::cout << "Enter the withdraw amount: " << std::endl;
        std::cin >> withdrawAmount;

        std::cout << "Are you sure you want to withdraw: " << withdrawAmount << "$" << std::endl;
        std::cout << "Awnser in yes or no" << std::endl;
        std::cin >> Withdrawchoice;

        if(Withdrawchoice == "YES" || Withdrawchoice == "Yes" || Withdrawchoice == "yes"){
        if(withdrawAmount > totalBalance){
                    std::cout << "Unable to process transaction: Insufficient funds" << std::endl;
        }
        else{ 
        
                    std::cout << "withdraw succesfull" << std::endl;
                    std::cout << "you withdrew: " << withdrawAmount << "$" << std::endl;
                    totalBalance -= withdrawAmount;
        }
        }
        else if(Withdrawchoice == "NO" || Withdrawchoice == "No" || Withdrawchoice == "no"){
            std::cout << "withdraw cancelled" << std::endl;
        }
        else{
            std::cout << "Invalid user input: Awnser in a yes or no" << std::endl;
        }
}

void deposit(float& totalBalance){
    float depositAmount;
    std::string depositChoice;

    std::cout << "Enter the deposit amount: " << std::endl;
    std::cin >> depositAmount;
    
    std::cout << "Are you sure you want to deposit: " << depositAmount << "$" << std::endl;
    std::cout << "Awnser in yes or no" << std::endl;
    std::cin >> depositChoice;

    if(depositChoice == "YES" || depositChoice == "Yes" || depositChoice == "yes"){
            std::cout << "deposit succesfull" << std::endl;
            std::cout << "you deposited: " << depositAmount << "$" << std::endl;
            totalBalance += depositAmount;
            
        }
        else if(depositChoice == "NO" || depositChoice == "No" || depositChoice == "no"){
            std::cout << "Deposit cancelled" << std::endl;
        }
        else{
            std::cout << "Invalid user input: Awnser in a yes or no" << std::endl;
        }

}