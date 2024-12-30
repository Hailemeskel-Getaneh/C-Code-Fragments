#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>
using namespace std;

struct Student {
    char Id[20];
    char name[25];
    float grades[10]; // Grades array
    int gradeCount;   // Number of grades
    Student *next;
};

Student *start = NULL;

// Function prototypes
void addStudent();
void searchAndDisplay();
void removeStudentById();
void sortStudentsById();
void displayStudents();
void reverseStudentList();
void displayGradeReport();
void clearTerminal();

// Clears the terminal
void clearTerminal() {
    system("cls");
}

// Adds a student at a user-defined position
void addStudent() {
    Student *newStudent = new Student;

    cout << "Enter the Student ID: ";
    cin >> newStudent->Id;
    cout << "Enter Student Name: ";
    cin.ignore();
    cin.getline(newStudent->name, 25);

    cout << "Enter the number of grades: ";
    cin >> newStudent->gradeCount;

    for (int i = 0; i < newStudent->gradeCount; i++) {
        cout << "Enter grade " << i + 1 << ": ";
        cin >> newStudent->grades[i];
    }

    newStudent->next = NULL;

    cout << "Enter the position to insert the student (1 for beginning): ";
    int position;
    cin >> position;

    if (position == 1 || start == NULL) {
        newStudent->next = start;
        start = newStudent;
    } else {
        Student *current = start;
        for (int i = 1; i < position - 1 && current->next != NULL; i++) {
            current = current->next;
        }
        newStudent->next = current->next;
        current->next = newStudent;
    }

    cout << "Student added successfully!\n";
}

// Searches and displays a student by ID
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
            cout << "Grades: ";
            for (int i = 0; i < current->gradeCount; i++) {
                cout << fixed << setprecision(2) << current->grades[i] << " ";
            }
            cout << "\n";
            return;
        }
        current = current->next;
    }
    cout << "Student not found!\n";
}

// Removes a student by ID
void removeStudentById() {
    char removeId[20];
    cout << "Enter Student ID to remove: ";
    cin >> removeId;

    if (start == NULL) {
        cout << "No student to remove!\n";
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

// Sorts students by their IDs
void sortStudentsById() {
    if (start == NULL || start->next == NULL) {
        cout << "No need to sort, the list has zero or one student!\n";
        return;
    }

    Student *i = start;
    while (i != NULL) {
        Student *j = i->next;
        while (j != NULL) {
            if (strcmp(i->Id, j->Id) > 0) {
                swap(i->Id, j->Id);
                swap(i->name, j->name);
                swap(i->grades, j->grades);
                swap(i->gradeCount, j->gradeCount);
            }
            j = j->next;
        }
        i = i->next;
    }

    cout << "Students sorted by ID successfully!\n";
}

// Reverses the student list
void reverseStudentList() {
    if (start == NULL || start->next == NULL) {
        cout << "No need to reverse, the list has zero or one student!\n";
        return;
    }

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

// Displays all students
void displayStudents() {
    if (start == NULL) {
        cout << "No students to display!\n";
        return;
    }

    Student *current = start;
    while (current != NULL) {
        cout << "\nID: " << current->Id << "\n";
        cout << "Name: " << current->name << "\n";
        cout << "Grades: ";
        for (int i = 0; i < current->gradeCount; i++) {
            cout << fixed << setprecision(2) << current->grades[i] << " ";
        }
        cout << "\n";
        current = current->next;
    }
}

// Displays a grade report
void displayGradeReport() {
    if (start == NULL) {
        cout << "No students to display grade report!\n";
        return;
    }

    Student *current = start;
    cout << "Grade Report:\n";
    while (current != NULL) {
        float total = 0;
        for (int i = 0; i < current->gradeCount; i++) {
            total += current->grades[i];
        }
        float average = current->gradeCount > 0 ? total / current->gradeCount : 0;
        cout << "ID: " << current->Id << ", Name: " << current->name 
             << ", Average Grade: " << fixed << setprecision(2) << average << "\n";
        current = current->next;
    }
}

// Main function
int main() {
    int choice;

    do {
        cout << "\n\tStudent Registration System\n";
        cout << "=====================================\n";
        cout << "1. Add Student\n";
        cout << "2. Search and Display Student\n";
        cout << "3. Remove Student\n";
        cout << "4. Display All Students\n";
        cout << "5. Display Grade Report\n";
        cout << "6. Sort Students by ID\n";
        cout << "7. Reverse Student List\n";
        cout << "8. Clear Terminal\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                searchAndDisplay();
                break;
            case 3:
                removeStudentById();
                break;
            case 4:
                displayStudents();
                break;
            case 5:
                displayGradeReport();
                break;
            case 6:
                sortStudentsById();
                break;
            case 7:
                reverseStudentList();
                break;
            case 8:
                clearTerminal();
                break;
            case 9:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 9);

    return 0;
}
