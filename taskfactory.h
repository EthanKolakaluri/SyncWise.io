#include <iostream>

using namespace std;

class Task;

class TaskFactory {
public:
    TaskFactory();

    ~TaskFactory();

    Task* createIt(char type);
private:
    Task* taskfactory['R' - 'A'];

    int hash(char ch);

};