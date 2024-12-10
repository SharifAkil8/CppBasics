#include<iostream>
#include<string>
using namespace std;

class bankAccount{
private:
    string ownerName;
    string ownerAddress;
    long long int accountNumber;

protected:
    double balance;

    void setAccount(long long int acctNum, double startBalance = 0.0){
        accountNumber = acctNum;
        balance = startBalance;
    }

public:

    bankAccount(){
        ownerName = "";
        ownerAddress = "";
        accountNumber = 0;
        balance = 0.0;
    }

    bankAccount(string name, string address, long long int num, double bal){
        ownerName = name;
        ownerAddress = address;
        accountNumber = num;
        balance = bal;
    }

    void updateOwner(string name, string address){
        ownerName = name;
        ownerAddress = address;
    }

    void printAccountInfo(){
        cout << "Account: " << accountNumber << endl;
        cout << "Current balance: " << balance << endl;
        cout << "Owner: " << ownerName << endl;
        cout << "Address: " << ownerAddress << endl;
    }
};

    // this class is inherited from bankAccount class
class checkingAccount: public bankAccount{      
public:

    checkingAccount() : bankAccount(){
    }

    checkingAccount(string name, string address, long long int num, 
        double bal) : bankAccount(name, address, num, bal){
    }
    
    void beginAccount(long long int num, double amt){
        setAccount(num,amt);        
    }

    void deposit(double amt){
        balance += amt;
    }

    double withdraw(double amt){
        if (balance >= amt){
            balance -= amt;
            return amt;
        }
            else{
                return 0;
            }
    }
};

class savingsAccount: public bankAccount{
    double interestRate;

public:
    savingsAccount() : bankAccount(){
        interestRate = 0.0;
    }

    savingsAccount(string name, string address, long long int num, 
        double bal, double rate) : bankAccount(name, address, num, bal){
            interestRate = rate;
        }

    void beginAccount(long long int num, double amt, double rate){
        setAccount(num,amt);
        interestRate = rate;
    }

    void generateInterest(){
        balance = balance + interestRate * balance;
    }
};

int main(){
    checkingAccount HolmesChecking("Sherlock Holmes", "221B Baker St., London",
        11122233, 100.0);
    savingsAccount HolmesSaving("Sherlock Holmes", "221B Baker St., London",
        99988877, 500.0, 0.03);

    HolmesChecking.printAccountInfo();
    HolmesSaving.printAccountInfo();
}