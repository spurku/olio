#include "Student.h"
#include <iostream>

int main() {
    Address address("Example Street 1", "Helsinki", "00100");
    Student student("Matti Meikäläinen", 21, address, "S12345", {"Mathematics", "Physics"}, 60);

    student.printInfo();

    student.addCourse("Chemistry");
    student.addCredits(5);

    std::cout << "\nAfter adding Chemistry course and 5 credits:\n";
    student.printInfo();

    return 0;
}