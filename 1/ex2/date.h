#include <string>

using namespace std;

class Date {
    private:
        int date;
        int month;
        int year;
    
        public:
    void setDate(int newDate);
    void setMonth(int newMonth);
    void setYear(int newYear);
    int getDate();
    int getmMonth();
    int getYear();
    void printDate(string format);
    void printDate();
    void askDate();
    void addOneDay();
};
