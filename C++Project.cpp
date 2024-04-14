/*  This is simple banking system that allows you to :
          - Create Account 
          - Perform Deposit
          - Perform withdraw  
          - View Account Balance.
          - change password
    Developed by :
          => Hailemeskel Getaneh
          => Hailemariam Adane
          => Halid Faruk
          => Hailu Kassa
          => Natnael Bekele
   */


#include <iostream>
#include <string>
using namespace std;

const int MAX_ACCOUNTS = 100;

struct Account 
     {
        string accountNumber;
        string accountHolder;
        string sex;
        string age;
        double balance;
        string password ;
        
     };

int main() 
{
    Account accounts[MAX_ACCOUNTS];
    string password ;
     string changedpassword ;
     string newpassword ;
     string accountNumber;
     double amount;
    int numAccounts = 0;
    int choice;
    cout<<" Welcome to  Unique Bank \n\n";
while (true) 
 {    
        cout<<"\n***************************************\n";
        cout << "   1. Create Account \n";
        cout << "   2. Perform Deposit\n";
        cout << "   3. Perform withdraw  \n";
        cout << "   4. View Account Balance.\n";
       cout << "   5. change password \n";
        cout << "   6 . Exit\n\n";
        cout << "   Enter your choice: ";
        cin >> choice;
   
      if (choice == 1) 
        {
            if (numAccounts >= MAX_ACCOUNTS)
               {
                   cout << "Cannot create more accounts. Maximum limit reached.\n";
               }
             else 
             {
                Account newAccount;

                cout << "Enter the account number: ";
                cin >> newAccount.accountNumber;

                cout << "Enter the account holder name: ";
                cin.ignore();
                getline(cin, newAccount.accountHolder);
                cout<<" enter password"<<endl;
                cin>>newAccount.password ;
                cout <<" enter your  sex";
                cin>>newAccount.sex;
               cout <<" enter your  age";
                cin>>newAccount.age;
                 newAccount.balance = 0.0;

                accounts[numAccounts] = newAccount;
                cout << "  Account created successfully!\n";
                numAccounts++;
            }
         }
         
         
else if (choice == 2)
           {
                 
                cout << "Enter the account number: ";
                cin >> accountNumber;
                 int accountIndex = -1;

               for (int i = 0; i < numAccounts; i++) 
                   {
                            if (accounts[i].accountNumber == accountNumber) 
                               {
                                   accountIndex = i;
                                   break;
                              }
                   }
                   
               if (accountIndex != -1)
                     {   
                         cout<<" enter your password  : ";
                          cin>>password ;
                         if (accounts[accountIndex].password == password) 
                               {
                                  cout << "Enter the  deposit amount: ";
                                  cin >> amount;
                                    accounts[accountIndex].balance += amount;
                                    cout << " Deposit successful!\n";
                              }
                         else
                             {
                                  cout<<" incorrrectpassword\a"<<endl;
                            }
                    }
               else
                       {
                           cout << " Account not found\a\n";
                           break;
                       }
              } 
              
else if (choice == 3)
           {
            
                cout << "Enter the account number: ";
                cin >> accountNumber;

                 int accountIndex = -1;

               for (int i = 0; i < numAccounts; i++) 
                   {
                            if (accounts[i].accountNumber == accountNumber) 
                               {
                                   accountIndex = i;
                                   break;
                              }
                   }

               if (accountIndex != -1)
                     {
                           cout<<" enter your password  : ";
                           cin>>password ;
                           if (accounts[accountIndex].password == password) 
                                 {
                                      cout << "Enter the  withdrawal amount: ";
                                      cin >> amount;
                                    if (amount <= accounts[accountIndex].balance)
                                           {
                                               accounts[accountIndex].balance -= amount;
                                              cout << " Withdrawal successful!\n";
                                          }  
                                  else 
                                         {
                                              cout << "  Insufficient balance for withdrawal.\n\a";
                                        }
                                 }
                          else
                                {
                                   cout<<"  incorrrectpassword\a"<<endl;
                               }
                    }
               else
                       {
                           cout << " Account not found.\a\n";
                       }
           } 
              
    else if (choice == 4) 
              {
                    cout << "Enter the account number: ";
                    cin >> accountNumber ;
              
                    int accountIndex = -1;

                       for (int i = 0; i < numAccounts; i++) 
                            {
                                   if (accounts[i].accountNumber == accountNumber)
                                       {
                                             accountIndex = i;
                                             break;
                                       }
                           }
                    if (accountIndex != -1) 
                                {
                                     cout<<" enter your password  : ";
                                    cin>>password ;
                            
                                       if (accounts[accountIndex].password == password) 
                                             {
                                                 cout << "\nAccount Holder: " << accounts[accountIndex].accountHolder << "\n";
                                                 cout << "Account Balance: " << accounts[accountIndex].balance << "\n";
                                            }
                                     else
                                         {
                                              cout<<" incorrrectpassword\a"<<endl;
                                        }
                               } 
                   else 
                           {
                                     cout <<  Account not found.\a\n";
                               }
              } 
              
else if (choice == 5) //to change password by accepting and accountNumber and the previous password 
        {
              
              
   
                cout << "Enter the account number: ";
                cin >> accountNumber;

             int accountIndex = -1;

               for (int i = 0; i < numAccounts; i++) 
                   {
                            if (accounts[i].accountNumber == accountNumber) 
                               {
                                   accountIndex = i;
                                   break;
                              }
                   }

               if (accountIndex != -1)
                  {   
                         cout<<" Enter your previous pass word"  ;
                         cin>>password;
                          if (accounts[accountIndex].password == password) 
                                  {
                                     cout<<" enter your new password  : ";
                                     cin>>newpassword ;;
                                     accounts[accountIndex].password = newpassword ;
                               
                                     cout << "confirm  new password: ";
                                     cin >> changedpassword;
                               
                                     if( accounts[accountIndex].password == changedpassword)    
                                           {
                                               accounts[accountIndex].password = changedpassword;
                                               cout <<  password changed successful!\n";
                                           }
                                    else
                                        {
                                             cout<<" you entered two different new passwords\a"<<endl;
                                        }
                                }
                  }        
               else
                       {
                           cout << "Account not found.\a\n";
                           break;
                       }
       }
              
 else if (choice == 6)
               {   
                      cout << "Exiting the program. Goodbye!\n";
                     break;
              }
 else 
           {
                   cout << "Invalid choice. Please try again.\n"<< "\n";
          }
 
  }
    return 0;
}
    
