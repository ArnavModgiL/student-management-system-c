// College DaTaBase SysTem [small C ProjecT ---

#include<stdio.h>
#include <string.h>

#define MAX 100

//Structure for Student -

struct student {
    int id;
    char name[50];
    int age;
    char course[50];
    float marks;
};

struct student students[MAX];
int count = 0;

// Function to Add Student

void addStudent() {
    printf("\nEnter Student Id: ");
    scanf("%d", &students[count].id);

    printf("Enter Name: ");
    scanf("%[^\n]", students[count].name);

    printf("Enter Age: ");
    scanf("%d", &students[count].age);

    printf("Enter Course: ");
    scanf("%[^\n]", students[count].course);

    printf("Enter Marks: ");
    scanf("%f",&students[count].marks);

    count ++;

    printf("\nStudent Added Successfully!\n");
}

// Function to Display Students

void displayStudents() {
    if(count == 0) {
        printf("\n No records found!\n");
        return ;

    }
    printf("\n -- student RECORDS ---\n");

    for(int i = 0; i < count ; i++) {

        printf("\nStudent %d\n", i+1);
        printf("ID: %d\n",students[i].id);
        printf("Name: %s\n",students[i].name);
        printf("Age: %d\n",students[i].course);
        printf("Course: %s\n",students[i].course);
        printf("Makrs: %.2f\n",students[i].marks);
    }
}

//Function to search Student
void searchStudent() {
    int id;
    printf("\n Enter Studen ID to search: ");
    scanf("%d",&id);

    for(int i = 0; i < count; i++) {
        if(students[i].id == id) {
            printf("\nStudent Found!\n");
            printf("Name: %d\n",students[i].age);
            printf("Course: %s\n",students[i].course);
            printf("Marks: %.2f\n", students[i].marks);
            return;
        }
    }

    printf("\nStudent Not Found!\n");
}

// Function To Update Student 
void updateStudent() {
    int id;
    printf("Enter Student ID to Update: ");
    scanf("%d", &id);

    for(int i = 0; i < count ; i++) {
        if(students[i].id == id) {
            printf("\nEnter New Name: ");
            scanf("%[^\n]",students[i].name);

            printf("Enter New Marks: ");
            scanf("%f", &students[i].marks);

            printf("\nStudent update successfully!\n");
            return;
        }
    }
    printf("\nStudent not Found!\n");
}

// Function Delete Student
void deleteStudent() {
    int id;
    printf("\n Enter Student ID to delete: ");
    scanf("%d",&id);

    for(int i = 0; i < count; i++) {
        if(students[i].id == id) {
            for(int j = i; j < count - 1; j++) {
                students[j] = students[j + 1];
            }
            count --;

            printf("\n student Delete Successfully!\n");
        }
    }
    printf("\nStudent Not Found!\n");
}

int main() {
    int choice;

    while(1) {
        printf("\n\n == COLLEGE DATEBASE SYSTEM ====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search student\n");
        printf("4. Update student\n");
        printf("5. Delete Student\n");
        printf("6. EXIT\n ");

        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice) {

            case 1:
            addStudent();
            break;

            case 2:
            displayStudents();
            break;

            case 3:
            searchStudent();
            break;

            case 4:
            updateStudent();
            break;

            case 5:
            deleteStudent();
            break;

            case 6:
            return 0;

            default:
            printf("\nInvALID CHOICE !\n");

        }
    }
    return 0;
}