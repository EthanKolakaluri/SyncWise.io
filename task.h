#include <iostream>

using namespace std;

class Task {
public: 
    Task();

    Task(string name, char type, int durInMin, int startTime, int endTime);

    char getType();

    virtual Task* create();

    ~Task();

private:
    string name;
    char type;
    int durInMin;
    int startTime;
    int endTime;
};