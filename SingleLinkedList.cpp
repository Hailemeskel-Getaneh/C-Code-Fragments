#include<iostream>
#include<cstdlib> 
#include<conio.h>
using namespace std;

struct Student {
	char Id[20], name[25];
	int age;
	
	Student *next;
	
}*start = NULL;

void insertAtBeginning();
void deleteAtBeginning();
void insertAtEnd();
void deleteAtEnd();
void display();

int menu();

int main(){
	
	char response = 'y';
	
	do {
		//system("cls");
	
		int choice = menu();
		switch(choice){
			case 1:
				insertAtBeginning();
				break;
			case 2:
				insertAtEnd();
				break;
			case 3:
				deleteAtBeginning();
				break;
			case 4:
				deleteAtEnd();
				break;
			case 5:
				display();
				break;
			case 6:
				return 0;
            case 7:
            	system("cls");
            	menu();
            	break;
				
           default:
           	cout<<"Invalid choice";
		}
		
		if(choice != 5){
			cout<<"Enter any  key to continue"<<endl;
				
			getch();
		}
		
		
	
		
		
	}
	
	while(response == 'y');
}


void insertAtBeginning()
{
         Student *newStudent = new Student;
		cout<<"Enter the Id of the student :";
		cin>>newStudent->Id;
		
		cout<<"Enter the name of the student :";
		cin>>newStudent->name;
		
        cout<<"Enter the age  of the student :";
		cin>>newStudent->age;
		
	if(start == NULL){
		
   start = newStudent;
   newStudent->next = NULL;

	}
	else{
		newStudent->next = start;
		start = newStudent;
	}
	
}

int  menu(){
         int choice = 0;
         cout<<"\t 1. insert at the beginning"<<endl;
		cout<<"\t 2. insert at the end"<<endl;
		cout<<"\t 3. delete at the beginning"<<endl;
		cout<<"\t 4. delete at the end"<<endl;
		cout<<"\t 5. display the list "<<endl;
		cout<<"\t 6. exit"<<endl;
		cout<<"\t 7. clear the console"<<endl;
		
		cout<<"Enter your choice"<<endl;
		cin>>choice;
		
		return choice;
		}
		
		
void deleteAtBeginning(){
	
	if(start == NULL){
		cout<<"No data to delete";
	}
	else{
		Student *temp = start;
		
		start = start->next;
		delete temp;
		cout<<"A data was deleted successfully";
	}
}
void insertAtEnd(){
	
	   Student *newStudent = new Student;
        cout<<"Enter the Id of the student :";
		cin>>newStudent->Id;
		
		cout<<"Enter the name of the student :";
		cin>>newStudent->name;
		
        cout<<"Enter the age  of the student :";
		cin>>newStudent->age;
		
		if(start == NULL){
			start = newStudent;
			newStudent->next = NULL;
		}
		
		else{
			Student *temp = new Student;
			
			while(temp->next != NULL){
				temp = temp->next;
			}
			temp->next = newStudent;
			newStudent->next = NULL;
		}
	
	
}
void deleteAtEnd(){
		Student *temp = start;
	if(start == NULL){
		cout<<"No data to delete";
		return;
	}
	if(start->next == NULL){
		Student *temp = start;
		start = NULL;
		delete temp;
		cout<<"A data was deleted successfully";
		
	}
	else{
		Student *temp = start;
		   Student *prev = NULL;
		   while(temp->next!= NULL){
			   prev = temp;
			   temp = temp->next;
		   }
		   prev->next = NULL;
      	delete temp;
		cout<<"A data was deleted successfully";
		
		
	}
}
void display(){
	
	if(start == NULL){
		cout<<"No data to display"<<endl;
		return;
	}
	
	else{
		Student *temp = start;
		cout<<"\t  ID"<<"\t    name"<<endl;
		cout<<"\t __________________"<<endl;
		while(temp != NULL){
			cout<<"\t  "<<temp->Id<<"\t    "<<temp->name<<endl<<endl;
			temp = temp->next;
		}
		
		
		
	}
	
}