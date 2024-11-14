#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Task {
    string description;
    bool completed;

};

void addTask(vector<Task>& tasks) {
    cout << "Enter the task description: "<< endl;
    string description;
    cin.ignore();
    getline(cin, description);
    tasks.push_back({description, false});
    cout << "Task added successfully !"<< endl;
}

void viewTasks(const vector<Task>& tasks) {
    if (tasks.empty()) {
        cout << "No tasks in the list."<< endl;
        return;
    }
    
    cout << "To-Do List:"<< endl;
    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << "." << tasks[i].description 
             << " [" << (tasks[i].completed ? "Completed" : "Pending") << "]"<< endl;
    }
}

void markTaskAsCompleted(vector<Task>& tasks) {
    viewTasks(tasks);
    if (tasks.empty()) return;

    cout << "Enter the task number to mark as completed: "<< endl;
    int taskNumber;
    cin >> taskNumber ;

    if (taskNumber < 1 || taskNumber > tasks.size()) {
        cout << "Invalid task number"<< endl;
    } else {
        tasks[taskNumber - 1].completed = true;
        cout << "Task marked as completed."<< endl;
    }
}

void removeTask(vector<Task>& tasks) {
    viewTasks(tasks) ;
    if (tasks.empty()) return;

    cout << "Enter the task number to remove: "<< endl;
    int taskNumber;
    cin >> taskNumber;

    if (taskNumber < 1 || taskNumber > tasks.size()) {
        cout << "Invalid task number"<< endl;
    } else {
        tasks.erase(tasks.begin() + taskNumber - 1);
        cout << "Task removed successfully."<< endl;
    }
}

int main() {
    vector<Task> tasks;
    int choice ;

    while (choice != 5) {
        cout << "To-Do List Manager"<< endl;
        cout << "1. Add Task"<< endl;
        cout << "2. View Tasks"<< endl;
        cout << "3. Mark Task as Completed"<< endl;
        cout << "4. Remove Task"<< endl;
        cout << "5. Exit"<< endl;
        cout << "Enter your choice: "<< endl;
        cin >> choice;

        switch (choice) {
            case 1:
                addTask(tasks);
                break;
            case 2:
                viewTasks(tasks);
                break;
            case 3:
                markTaskAsCompleted(tasks);
                break;
            case 4:
                removeTask(tasks);
                break;
            case 5:
                cout << "Exit"<< endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again"<< endl;
        }
   
    }
    return 0 ;
}