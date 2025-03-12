#include <string>

using namespace std;

class Person {
    private:
        string name;
        int age;
    public:
    void salute();
    void setAge(int newAge);
    int getAge();
    void setName(string newName);
    string getName();
};