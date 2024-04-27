#include <iostream>
#include <vector>
#include "schedule.h"

class Task;

using namespace std;

class Student {
    void addTaskToList(Task* toAdd);
private:
    vector<Task*> taskList; //tasks that need to be arranged
    Schedule personalSchedule;

};