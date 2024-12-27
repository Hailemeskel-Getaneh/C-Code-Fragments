#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

struct Student {
    char Id[20];
    char name[25];
    char courses[100]; 

    Student *next;
};

Student *start = NULL;

//fucntion prototypes for my program

void addStudentById(); 
void searchAndDisplay();
void removeStudentById();
void sortStudentsById(); 
void displayStudents();
void reverseStudentList();
void displayGradeReport();


void clearTerminal(){
	system("cls");
}


//  add a student ensuring that the list is ordered  by Id

void addStudentById() {
    Student *newStudent = new Student;

    cout<<"neter the sudent Id :";
    cin >> newStudent->Id;
    cout << "Enter Student Name: ";
    cin.ignore();
    cin.getline(newStudent->name, 25);
    cout << "Enter Courses and Grades (e.g Data structure, Java): ";
    cin.getline(newStudent->courses, 100);

    newStudent->next = NULL;


    // Insert in sorted order by ID
    if (start == NULL || strcmp(start->Id, newStudent->Id) > 0) {
        newStudent->next = start;
        start = newStudent; 
        
    } else {
        Student *current = start;
        while (current->next != NULL && strcmp(current->next->Id, newStudent->Id) < 0) {
            current = current->next;
        }
        newStudent->next = current->next;
        current->next = newStudent;
    }  

    cout<<"Sudent added successfully";
}   



// Search and display a student using binary search 

void searchAndDisplay() {
    char searchId[20];
    cout << "Enter Student ID to search: ";
    cin >> searchId;

    Student *current = start;
    while (current != NULL) {
        if (strcmp(current->Id, searchId) == 0) {
            cout << "Student Found:\n";
            cout << "ID: " << current->Id << "\n";
            cout << "Name: " << current->name << "\n";
            cout << "Courses and Grades: " << current->courses << "\n";
            return;
        }
        current = current->next; 
    }
    cout << "Student not found!\n";
}

// Remove a student by ID
void removeStudentById() {
    char removeId[20];
    cout << "Enter Student ID to remove: ";
    cin >> removeId;

    if (start == NULL) {
        cout << "No student to rmove!\n";
        return;
    }

    if (strcmp(start->Id, removeId) == 0) {
        Student *toDelete = start;
        start = start->next;
        delete toDelete;
        cout << "Student removed successfully!\n";
        return;
    }

    Student *current = start;
    while (current->next != NULL && strcmp(current->next->Id, removeId) != 0) {
        current = current->next;
    }

    if (current->next == NULL) {
        cout << "Student not found!\n";
        return;
    }

    Student *toDelete = current->next;
    current->next = current->next->next;
    delete toDelete;
    cout << "Student removed successfully!\n";
}

// Sort students by ID using selection sort
void sortStudentsById() {
    if (start == NULL || start->next == NULL) {
        return;
        
        

    for (Student *i = start; i != NULL; i = i->next) {
        Student *minNode = i;
        for (Student *j = i->next; j != NULL; j = j->next) {
            if (strcmp(j->Id, minNode->Id) < 0) {
                minNode = j;
            }
        }

        // Swap the data
        if (minNode != i) {
            swap(i->Id, minNode->Id);
            swap(i->name, minNode->name);
            swap(i->courses, minNode->courses);
        }
    }

    cout << "Students sorted by ID successfully!\n";
}
}

// Display all students
void displayStudents() {
    if (start == NULL) {
        cout << "No students to display!\n";
        return;
    }

    Student *current = start;
    while (current != NULL) {
        cout << "\n  ID: " << current->Id << "\n";
        cout << "  Name: " << current->name << "\n";
        cout << "  Courses and Grades: " << current->courses << "\n";
		cout << "====================================\n\n";
        current = current->next;
    }
}

// Reverse the student list
void reverseStudentList() {
    Student *prev = NULL, *current = start, *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    start = prev;
    cout << "Student list reversed successfully!\n";
}



// Display grade report 
void displayGradeReport() {
    if (start == NULL) {
        cout << "No students to display grade report!\n";
        return;
    }

    Student *current = start;
    cout << "Grade Report:\n";
    while (current != NULL) {
        cout << "ID: " << current->Id << ", Name: " << current->name << ", Courses and Grades: " << current->courses << "\n";
        current = current->next;
    }
}



// Main function
int main() {
    int choice;

    do {
    	
        cout << "\n \tThis is a Student Registration System";
        cout << "\n \t=====================================\n";
        cout<<"\n\t\t MENU\n";
        cout << "1. Adf Student\n";
        cout << "2. Search and Display Student\n";
        cout << "3. Remove Student\n";
        cout << "4. Sort Students by ID\n";
        cout << "5. Display All Students\n";
        cout << "6. Reverse Student List\n";
        cout << "7. Display Grade Report\n";
        cout << "8. Exit\n";
        cout<< "9. clear the Terminal\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudentById();
                break;
            case 2:
                searchAndDisplay();
                break;
            case 3:
                removeStudentById();
                break;
            case 4:
                sortStudentsById();
                break;
            case 5:
                displayStudents();
                break;
            case 6:
                reverseStudentList();
                break;
            case 7:
                displayGradeReport();
                break;
            case 8:
                cout << "exiting...\n";
                break;
            case 9:
            	clearTerminal();
            	break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 8);

    return 0;
}
