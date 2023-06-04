#include <iostream>
#include <string>

// Class declaration
class Person {
private:
    std::string name;
    int age;

public:
    // Constructor
    Person(const std::string& personName, int personAge) {
        name = personName;
        age = personAge;
    }

    // Member function to display person information
    void displayInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

int main() {
    // Create an object of the Person class
    Person person("John Doe", 25);

    // Call the member function to display person information
    person.displayInfo();

    return 0;
}

