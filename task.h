#include <iostream>

using namespace std;

class Task {
public: 
    Task(); //constructor

    Task(string name, char type, int durInMin, int startTime, int endTime, bool allowableDays[]); //constructor 

    void setAllowableDays(bool allowableDays[]); //set which days the task can be valid

    bool isValidDay(int dayInt); //is this a day the task is allowed on

    char getType(); //what type of task is this 

    virtual Task* create(); //create function for taskfactory

    ~Task(); //destructor

private:
    string name; //name of the task
    char type; //type of task, whether or not it's fixed, required or optional
    int durInMin; //how long is the task
    int startTime; //what time (in minutes will it start) (will be -1 if it can be moved)
    bool allowableDays[7]; //which days are allowed for the task 
};