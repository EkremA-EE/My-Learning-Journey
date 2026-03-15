#include <iostream>
#include <string> 

// Define a structure to group related data
struct Student {
    std::string name;
    int studentId;
};

int main() {
    const int MAX_STUDENTS = 3; 
    Student studentList[MAX_STUDENTS];

    // Data entry process
    for (int i = 0; i < MAX_STUDENTS; i++) {
        std::cout << "Enter name for student " << i + 1 << ": ";
        std::getline(std::cin >> std::ws, studentList[i].name);
        
        std::cout << "Enter ID for student " << i + 1 << ": ";
        std::cin >> studentList[i].studentId;
    }

    std::cout << "\n--- Student Records ---\n" << std::endl;

    // Displaying the data
    for (int i = 0; i < MAX_STUDENTS; i++) {
        std::cout << "Name : " << studentList[i].name << std::endl;
        std::cout << "ID   : " << studentList[i].studentId << std::endl;
        std::cout << "-----------------------" << std::endl;
    }

    return 0;
}
