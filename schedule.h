#include <iostream>
#include "day.h"
#include "task.h"

class Schedule {
    Schedule();

    ~Schedule();

    bool manageTasks(Task* arr[]);
private:
    Day week[7];
};