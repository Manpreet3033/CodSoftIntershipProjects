#include <iostream>
#include <vector>
#include <unistd.h>
using namespace std;

class Tasks
{
public:
    string desc;
    bool comp;
};

void addTasks(vector<Tasks> &list, string desc)
{
    Tasks task;
    task.desc = desc;
    task.comp = false;
    list.push_back(task);
    cout << "\nTask Added: " << desc << endl;
}

void deleteTasks(int index, vector<Tasks> &list)
{
    if (index >= 0 || index < list.size())
    {
        cout << "\nTask Deleeted : " << list[index - 1].desc << endl;
        list.erase(list.begin() + (index - 1));
    }
    else
    {
        cout << "\nInvalid Task Number Provided. " << endl;
    }
}

void viewTasks(vector<Tasks> &list)
{
    if (list.empty())
    {
        cout << "\nNo task added in To-Do-List yet!! \n"
             << endl;
    }
    for (int i = 0; i < list.size(); i++)
    {
        cout << "[" << (list[i].comp ? "X" : " ") << "] " << i + 1 << ". " << list[i].desc << endl;
    }
}

void updateTasks(vector<Tasks> &list, int operation, int index)
{
    if (operation == 1)
    {
        cin.ignore();
        cout << "\nEnter New Description for the task : ";
        string desc;
        getline(cin, desc);
        list[index - 1].desc = desc;
    }
    else if (operation == 2)
    {
        cout << "\nHave you done the this task ? \n"
             << endl;
        cout << "\n1. Yes \n";
        cout << "\n2. No \n";
        int taskdone;
        cout << "\nChoose one Option : ";
        cin >> taskdone;
        switch (taskdone)
        {
        case 1:
        {
            list[index - 1].comp = true;
            break;
        }
        case 2:
        {
            list[index - 1].comp = false;
            break;
        }
        }
    }
}

int main()
{
    vector<Tasks> list;
    cout << "\nWelcome to To-Do-List Console Based Application!!" << endl;
    while (true)
    {
        cout << "\nEnter your choice : " << endl;
        cout << "\n1. Add a Task " << endl;
        cout << "\n2. Delete a Task " << endl;
        cout << "\n3. View To-Do-List " << endl;
        cout << "\n4. Update any Entered Task " << endl;
        cout << "\n5. Quit " << endl;
        int user_Choice;
        cout << "\nEnter which action you want to Perform : ";
        cin >> user_Choice;
        switch (user_Choice)
        {
        case 1:
        {
            cin.ignore();
            string desc;
            cout << "\nEnter task you want to add : ";
            getline(cin, desc);
            addTasks(list, desc);
            break;
        }
        case 2:
        {
            int index;
            cout << "\nEnter Task Number you want to delete from the To-Do-List : ";
            cin >> index;
            deleteTasks(index, list);
            break;
        }
        case 3:
        {
            cout << "\nTasks in To-Do-List\n"
                 << endl;
            cout << "\n[X] means Task Completed and [ ] means Task Incomplete \n " << endl;
            viewTasks(list);
            break;
        }
        case 4:
        {
            cout << "\nEnter Task Number you want to Update : ";
            int index;
            cin >> index;
            cout << "\n1. Update Task Description " << endl;
            cout << "\n2. Update Task Completed or Not " << endl;
            cout << "\nChoose the Operation which you want to Perform : ";
            int operation;
            cin >> operation;
            switch (operation)
            {
            case 1:
            {
                updateTasks(list, operation, index);
                break;
            }
            case 2:
            {
                updateTasks(list, operation, index);
                break;
            }

            default:
                cout << "\nInvalid Choice entered. \n"
                     << endl;
                break;
            }
            break;
        }
        case 5:
        {
            cout << "\nThanks for using the To-Do-List \n"
                 << endl;
            ;
            exit(0);
        }
        default:
        {
            cout << "\n Invalid Choice. ";
            break;
        }
        }
        sleep(2);
    }
}