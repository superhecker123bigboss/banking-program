#include <iostream>
#include <cmath>

class account{
    private:
    std::string password = "1";
    std::string name = "1";
    double totalBalance = 0;
    double* balancePTR = &totalBalance;

    public:
    void setPassword(){
        if(password == "1"){
            std::string newPassword;
            std::string choice;

            std::cout << "enter the password that you want to use" << std::endl;
            std::cin >> newPassword; 

            std::cout << "are you sure that you want your password to be: " << newPassword << std::endl;
            std::cout << "awnser with a YES or NO " << std::endl;
            std::cin >> choice;

            if(choice == "YES" || choice == "Yes" || choice == "yes"){
                std::cout << "your new password has been confirmed" << std::endl;
                password = newPassword;
            } else if(choice == "NO" || choice == "No" || choice == "no"){
                std::cout << "password has been canceled" << std::endl;
            } else{
                std::cout << "invalid input, try again" << std::endl;
            }
        } else{
            std::cout << "you have already set a password" << std::endl;
        }
    }
    
    void setName(){
    if(name == "1"){
            std::string newName;
            std::string choice;

            std::cout << "enter the username that you want to use" << std::endl;
            std::cin >> newName; 

            std::cout << "are you sure that you want your username to be: " << newName << std::endl;
            std::cout << "awnser with a YES or NO " << std::endl;
            std::cin >> choice;

            if(choice == "YES" || choice == "Yes" || choice == "yes"){
                std::cout << "your new username has been confirmed" << std::endl;
                name = newName;
            } else if(choice == "NO" || choice == "No" || choice == "no"){
                std::cout << "Username has been canceled" << std::endl;
            } else{
                std::cout << "invalid input, try again" << std::endl;
            }
        } else{
            std::cout << "you have already set a username" << std::endl;
        }

    }
    
    void changePassword(){ 
        if(password != "1" && name != "1"){
        std::string checkPassword;
        std::string newPassword;
        std::string choice;
        std::cout << "do you want to change your password?" << std::endl;
        std::cout << "awnser with a YES or NO" << std::endl;
        std::cin >> choice;

        if(choice == "YES" || choice == "Yes" || choice == "yes"){
                std::cout << "Enter your password" << std::endl;
                std::cin >> checkPassword;
             
                        if(checkPassword == password){
                        std::cout << "enter your new password" << std::endl;
                        std::cin >> newPassword;
                        password = newPassword;
                        std::cout << "your password has succesfully been changed to: " << password << std::endl;
                        } else {
                        std::cout << "invalid password, try again " << std::endl; 
                        }

        } else if(choice == "NO" || choice == "No" || choice == "no"){
                std::cout << "password change request has been canceled" << std::endl;
        } else{
                std::cout << "invalid input, try again" << std::endl;
        }
        } else{
    std::cout << "You must make an account to have acces to this feature!" << std::endl;
}
}
    

        void changeName(){
        if(password != "1" && name != "1"){
        std::string checkPassword;
        std::string newName;
        std::string choice;
        std::cout << "do you want to change your name?" << std::endl;
        std::cout << "awnser with a YES or NO" << std::endl;
        std::cin >> choice;

        if(choice == "YES" || choice == "Yes" || choice == "yes"){
                std::cout << "Enter your password" << std::endl;
                std::cin >> checkPassword;
             
                        if(checkPassword == password){
                        std::cout << "enter your new username" << std::endl;
                        std::cin >> newName;
                        name = newName;
                        std::cout << "your name has succesfully been changed to: " << name << std::endl;
                        } else {
                        std::cout << "invalid password, try again " << std::endl; 
                        }

        } else if(choice == "NO" || choice == "No" || choice == "no"){
                std::cout << "Username change request has been canceled" << std::endl;
        } else{
                std::cout << "invalid input, try again" << std::endl;
        }
    } else{
    std::cout << "You must make an account to have acces to this feature!" << std::endl;
}
}

    void getName(){
        if(password != "1" && name != "1"){
        std::string checkPassword;
        std::string choice;
        std::cout << "do you want to view your name?" << std::endl;
        std::cout << "awnser with a YES or NO" << std::endl;
        std::cin >> choice;

        if(choice == "YES" || choice == "Yes" || choice == "yes"){
                std::cout << "Enter your password" << std::endl;
                std::cin >> checkPassword;
             
                        if(checkPassword == password){
                        std::cout << "your name is: " << name << std::endl;
                        } else {
                        std::cout << "invalid password, try again " << std::endl; 
                        }

        } else if(choice == "NO" || choice == "No" || choice == "no"){
                std::cout << "Username view request has been canceled" << std::endl;
        } else{
                std::cout << "invalid input, try again" << std::endl;
        }
    } else{
    std::cout << "You must make an account to have acces to this feature!" << std::endl;
}
}
    
void totalAmount(){
    if(password != "1" && name != "1"){
    std::cout << "Your total balance is: " << *balancePTR << "$" << std::endl;}
else {
    std::cout << "You must make an account to have acces to this feature!" << std::endl;
}
}

void withdraw(){
        if(password != "1" && name != "1"){
        
        std::string Withdrawchoice;
        double withdrawAmount;

        std::cout << "Enter the withdraw amount: " << std::endl;
        std::cin >> withdrawAmount;

        std::cout << "Are you sure you want to withdraw: " << withdrawAmount << "$" << std::endl;
        std::cout << "Awnser in yes or no" << std::endl;
        std::cin >> Withdrawchoice;

        if(Withdrawchoice == "YES" || Withdrawchoice == "Yes" || Withdrawchoice == "yes"){
        if(withdrawAmount > *balancePTR){
                    std::cout << "Unable to process transaction: Insufficient funds" << std::endl;
        }
        else{ 
        
                    std::cout << "withdraw succesfull" << std::endl;
                    std::cout << "you withdrew: " << withdrawAmount << "$" << std::endl;
                    *balancePTR -= withdrawAmount;
        }
        }
        else if(Withdrawchoice == "NO" || Withdrawchoice == "No" || Withdrawchoice == "no"){
            std::cout << "withdraw cancelled" << std::endl;
        }
        else{
            std::cout << "Invalid user input: Awnser in a yes or no" << std::endl;
        }
} else{
    std::cout << "You must make an account to have acces to this feature!" << std::endl;
}
}

void deposit(){
    if(password != "1" && name != "1"){
    double depositAmount;
    std::string depositChoice;

    std::cout << "Enter the deposit amount: " << std::endl;
    std::cin >> depositAmount;
    
    std::cout << "Are you sure you want to deposit: " << depositAmount << "$" << std::endl;
    std::cout << "Awnser in yes or no" << std::endl;
    std::cin >> depositChoice;

    if(depositChoice == "YES" || depositChoice == "Yes" || depositChoice == "yes"){
            std::cout << "deposit succesfull" << std::endl;
            std::cout << "you deposited: " << depositAmount << "$" << std::endl;
            *balancePTR += depositAmount;
            
        }
        else if(depositChoice == "NO" || depositChoice == "No" || depositChoice == "no"){
            std::cout << "Deposit cancelled" << std::endl;
        }
        else{
            std::cout << "Invalid user input: Awnser in a yes or no" << std::endl;
        }
} else{
    std::cout << "You must make an account to have acces to this feature!" << std::endl;
}
}

};


int main(){
    account myAcc;
    int choice;
    
    std::cout << "welcome to the National online bank service of the Netherlands" << std::endl;
    
   do {
    std::cout << "Please enter the number thats corrisponding to what you want to do" << std::endl;
    std::cout << "1. show total balance ; 2. deposit ; 3. withdraw ; 4. set password ; 5. set name " << std::endl; 
    std::cout << "6. change password ; 7. change name ; 8. get name ; 9. exit program" << std::endl;
    std::cin >> choice;

    switch(choice){
        case 1: 
            myAcc.totalAmount();
            break;
        case 2: 
            myAcc.deposit();
            break;
        case 3:
            myAcc.withdraw();
            break;
        case 4:
            myAcc.setPassword();
            break;
        case 5:
            myAcc.setName();
            break;
        case 6:
            myAcc.changePassword();
            break;
        case 7: 
            myAcc.changeName();
            break;
        case 8: 
            myAcc.getName();
            break;
        case 9:
            std::cout << "Exiting program..." << std::endl;
            break;
        default: 
            std::cout << "invalid input, Please enter number 1,2,3,4,5,6,7,8 or 9" << std::endl;

    }
    } while(choice != 9); 


 return 0;

}
