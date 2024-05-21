#include <iostream>
#include <string>

void createTask(std::string*& goalsa, int& numTasksSunday , std::string*& goalsb, int& numTasksMonday , std::string*& goalsc, int& numTasksTuesday 
, std::string*& goalsd, int& numTasksWednesday , std::string*& goalse, int& numTasksThursday , std::string*& goalsf, int& numTasksFriday
, std::string*& goalsg, int& numTasksSaturday); 

void taskDone(std::string*& goalsa, int& numTasksSunday , std::string*& goalsb, int& numTasksMonday , std::string*& goalsc, int& numTasksTuesday
, std::string*& goalsd, int& numTasksWednesday , std::string*& goalse, int& numTasksThursday , std::string*& goalsf, int& numTasksFriday
, std::string*& goalsg, int& numTasksSaturday);

void displayTask(std::string*& goalsa, int& numTasksSunday , std::string*& goalsb, int& numTasksMonday , std::string*& goalsc, int& numTasksTuesday
, std::string*& goalsd, int& numTasksWednesday , std::string*& goalse, int& numTasksThursday , std::string*& goalsf, int& numTasksFriday
, std::string*& goalsg, int& numTasksSaturday);

void addTask(std::string*& goalsa, int& numTasksSunday, std::string& newTaskSunday , std::string*& goalsb, int& numTasksMonday , std::string& newTaskMonday
, std::string*& goalsc, int& numTasksTuesday , std::string& newTaskTuesday , std::string*& goalsd, int& numTasksWednesday , std::string& newTaskWednesday
, std::string*& goalse, int& numTasksThursday , std::string& newTaskThursday , std::string*& goalsf, int& numTasksFriday , std::string& newTaskFriday
, std::string*& goalsg, int& numTasksSaturday , std::string& newTaskSaturday);

void deleteTask(std::string*& goalsa, int& numTasksSunday , std::string*& goalsb, int& numTasksMonday , std::string*& goalsc, int& numTasksTuesday 
, std::string*& goalsd, int& numTasksWednesday , std::string*& goalse, int& numTasksThursday , std::string*& goalsf, int& numTasksFriday
, std::string*& goalsg, int& numTasksSaturday);

int main() {
    int choice = 0;
    
    //Sunday string
    std::string* goalsa = nullptr; 
    int numTasksSunday = 0;
    //Monday string
    std::string* goalsb = nullptr; 
    int numTasksMonday = 0;
    //Tuesday string
    std::string* goalsc = nullptr; 
    int numTasksTuesday = 0;
    //Wednesday string
    std::string* goalsd = nullptr; 
    int numTasksWednesday = 0;
    //Thursday string
    std::string* goalse = nullptr; 
    int numTasksThursday = 0;
    //Friday string
    std::string* goalsf = nullptr; 
    int numTasksFriday = 0;
    //Saturday string
    std::string* goalsg = nullptr; 
    int numTasksSaturday = 0;


    std::string newTaskSunday;
    std::string newTaskMonday;
    std::string newTaskTuesday;
    std::string newTaskWednesday;
    std::string newTaskThursday;
    std::string newTaskFriday;
    std::string newTaskSaturday;

    do {
        std::cout << "\nHow may we serve you today?\n";
        std::cout << "\n1. Create a list of tasks\n";
        std::cout << "2. Mark a task as done\n";
        std::cout << "3. Display a list of tasks\n";
        std::cout << "4. Add a task\n";
        std::cout << "5. Delete a task\n";
        std::cout << "6. Exit the app\n";
        std::cin >> choice;

        std::cin.ignore(); // Ignore the newline character left in the input buffer
        
        switch(choice) {
            case 1: createTask(goalsa , numTasksSunday , goalsb , numTasksMonday , goalsc , numTasksTuesday , goalsd , numTasksWednesday 
            , goalse , numTasksThursday , goalsf , numTasksFriday , goalsg , numTasksSaturday);
                break;
            case 2: taskDone(goalsa, numTasksSunday , goalsb , numTasksMonday , goalsc , numTasksTuesday , goalsd , numTasksWednesday
            , goalse , numTasksThursday , goalsf , numTasksFriday , goalsg , numTasksSaturday);
                break;
            case 3: displayTask(goalsa , numTasksSunday , goalsb , numTasksMonday, goalsc , numTasksTuesday , goalsd , numTasksWednesday
            , goalse , numTasksThursday , goalsf , numTasksFriday , goalsg , numTasksSaturday);
                break;
            case 4: addTask(goalsa , numTasksSunday , newTaskSunday, goalsb , numTasksMonday , newTaskMonday, goalsc , numTasksTuesday , newTaskTuesday
            , goalsd , numTasksWednesday , newTaskWednesday , goalse , numTasksThursday , newTaskThursday , goalsf , numTasksFriday , newTaskFriday
            , goalsg , numTasksSaturday , newTaskSaturday);
                break;
            case 5: deleteTask(goalsa, numTasksSunday , goalsb , numTasksMonday , goalsc , numTasksTuesday , goalsd , numTasksWednesday
            , goalse , numTasksThursday , goalsf , numTasksFriday , goalsg , numTasksSaturday);
                break;
            case 6: std::cout << "Have a great day!\n";
                break;
            default: 
                std::cout << "You did not enter a valid number!\n";
        }

    } while(choice != 6);

    delete[] goalsa;
    delete[] goalsb;
    delete[] goalsc;
    delete[] goalsd; 
    delete[] goalse;
    delete[] goalsf;
    delete[] goalsg;

    return 0;
}





//Function definitions
void createTask(std::string*& goalsa, int& numTasksSunday , std::string*& goalsb, int& numTasksMonday , std::string*& goalsc, int& numTasksTuesday
, std::string*& goalsd, int& numTasksWednesday , std::string*& goalse, int& numTasksThursday , std::string*& goalsf, int& numTasksFriday
, std::string*& goalsg, int& numTasksSaturday) {
std::string day;

std::cout << "What day would you like to create tasks?\n";
std::cin >> day;


//Create Sunday Tasks
if(day == "Sunday"){
    std::cout << "\nHow many tasks are you seeking to complete on Sunday?: ";
            std::cin >> numTasksSunday;
            if (numTasksSunday <= 0) {
                std::cout << "Invalid input. Please enter a positive number.\n";
                std::cin.clear();
                std::cin.ignore();
                return;
            }

            delete[] goalsa; // Free any existing memory
            goalsa = new std::string[numTasksSunday];

            // Clear the newline character left in the input buffer
            std::cin.ignore();
            for (int i = 0; i < numTasksSunday; i++) {
                std::cout << "Enter goal " << i + 1 << ": " << '\n';
                std::getline(std::cin, goalsa[i]);
            }
}





//Create Monday Tasks
else if(day == "Monday"){
std::cout << "\nHow many tasks are you seeking to complete on Monday?: ";
            std::cin >> numTasksMonday;
            if (numTasksMonday <= 0) {
                std::cout << "Invalid input. Please enter a positive number.\n";
                std::cin.clear();
                std::cin.ignore();
                return;
            }

            delete[] goalsb; // Free any existing memory
            goalsb = new std::string[numTasksMonday];

            // Clear the newline character left in the input buffer
            std::cin.ignore();
            for (int i = 0; i < numTasksMonday; i++) {
                std::cout << "Enter goal " << i + 1 << ": " << '\n';
                std::getline(std::cin, goalsb[i]);
            }
}


//Create Tuesday Tasks
else if(day == "Tuesday"){
std::cout << "\nHow many tasks are you seeking to complete on Tuesday?: ";
            std::cin >> numTasksTuesday;
            if (numTasksTuesday <= 0) {
                std::cout << "Invalid input. Please enter a positive number.\n";
                std::cin.clear();
                std::cin.ignore();
                return;
            }

            delete[] goalsc; // Free any existing memory
            goalsc = new std::string[numTasksTuesday];

            // Clear the newline character left in the input buffer
            std::cin.ignore();
            for (int i = 0; i < numTasksTuesday; i++) {
                std::cout << "Enter goal " << i + 1 << ": " << '\n';
                std::getline(std::cin, goalsc[i]);
            }
}

//Create Wednesday Tasks
else if(day == "Wednesday"){
std::cout << "\nHow many tasks are you seeking to complete on Wednesday?: ";
            std::cin >> numTasksWednesday;
            if (numTasksWednesday <= 0) {
                std::cout << "Invalid input. Please enter a positive number.\n";
                std::cin.clear();
                std::cin.ignore();
                return;
            }

            delete[] goalsd; // Free any existing memory
            goalsd = new std::string[numTasksWednesday];

            // Clear the newline character left in the input buffer
            std::cin.ignore();
            for (int i = 0; i < numTasksWednesday; i++) {
                std::cout << "Enter goal " << i + 1 << ": " << '\n';
                std::getline(std::cin, goalsd[i]);
            }
}



//Create Thursday Tasks
else if(day == "Thursday"){
std::cout << "\nHow many tasks are you seeking to complete on Thursday?: ";
            std::cin >> numTasksThursday;
            if (numTasksThursday <= 0) {
                std::cout << "Invalid input. Please enter a positive number.\n";
                std::cin.clear();
                std::cin.ignore();
                return;
            }

            delete[] goalse; // Free any existing memory
            goalse = new std::string[numTasksThursday];

            // Clear the newline character left in the input buffer
            std::cin.ignore();
            for (int i = 0; i < numTasksThursday; i++) {
                std::cout << "Enter goal " << i + 1 << ": " << '\n';
                std::getline(std::cin, goalse[i]);
            }
}


//Create Friday Tasks
else if(day == "Friday"){
std::cout << "\nHow many tasks are you seeking to complete on Friday?: ";
            std::cin >> numTasksFriday;
            if (numTasksFriday <= 0) {
                std::cout << "Invalid input. Please enter a positive number.\n";
                std::cin.clear();
                std::cin.ignore();
                return;
            }

            delete[] goalsf; // Free any existing memory
            goalsf = new std::string[numTasksFriday];

            // Clear the newline character left in the input buffer
            std::cin.ignore();
            for (int i = 0; i < numTasksFriday; i++) {
                std::cout << "Enter goal " << i + 1 << ": " << '\n';
                std::getline(std::cin, goalsf[i]);
            }
}


//Create Saturday Tasks
else if(day == "Saturday"){
std::cout << "\nHow many tasks are you seeking to complete on Saturday?: ";
            std::cin >> numTasksSaturday;
            if (numTasksSaturday <= 0) {
                std::cout << "Invalid input. Please enter a positive number.\n";
                std::cin.clear();
                std::cin.ignore();
                return;
            }

            delete[] goalsg; // Free any existing memory
            goalsg = new std::string[numTasksSaturday];

            // Clear the newline character left in the input buffer
            std::cin.ignore();
            for (int i = 0; i < numTasksSaturday; i++) {
                std::cout << "Enter goal " << i + 1 << ": " << '\n';
                std::getline(std::cin, goalsg[i]);
            }
}





}








void taskDone(std::string*& goalsa, int& numTasksSunday , std::string*& goalsb, int& numTasksMonday , std::string*& goalsc, int& numTasksTuesday
, std::string*& goalsd, int& numTasksWednesday , std::string*& goalse, int& numTasksThursday , std::string*& goalsf, int& numTasksFriday
, std::string*& goalsg, int& numTasksSaturday){

std::string jnd;
int taskNumberSunday;
int taskNumberMonday;
int taskNumberTuesday;
int taskNumberWednesday;
int taskNumberThursday;
int taskNumberFriday;
int taskNumberSaturday;

std::cout << "What day would you like to mark a task as completed?: ";
std::cin >> jnd;

//Mark Sunday task as done
if(jnd == "Sunday"){
    std::cout << "Enter the number of the task you have completed on Sunday: ";
    std::cin >> taskNumberSunday;

    if(taskNumberSunday < 1 || taskNumberSunday > numTasksSunday) {
        std::cout << "Invalid task number.\n";
        return;
    }

    // Assuming tasks are numbered starting from 1
    goalsa[taskNumberSunday - 1] = "[X] " + goalsa[taskNumberSunday - 1];

}



//Mark Monday task as done
else if(jnd == "Monday"){
    std::cout << "Enter the number of the task you have completed on Monday: ";
    std::cin >> taskNumberMonday;

    if(taskNumberMonday < 1 || taskNumberMonday > numTasksMonday) {
        std::cout << "Invalid task number.\n";
        return;
    }

    // Assuming tasks are numbered starting from 1
    goalsb[taskNumberMonday - 1] = "[X] " + goalsb[taskNumberMonday - 1];

}


//Mark Tuesday task as done
else if(jnd == "Tuesday"){
    std::cout << "Enter the number of the task you have completed on Tuesday: ";
    std::cin >> taskNumberTuesday;

    if(taskNumberTuesday < 1 || taskNumberTuesday > numTasksTuesday) {
        std::cout << "Invalid task number.\n";
        return;
    }

    // Assuming tasks are numbered starting from 1
    goalsc[taskNumberTuesday - 1] = "[X] " + goalsc[taskNumberTuesday - 1];

}


//Mark Wednesday task as done
else if(jnd == "Wednesday"){
    std::cout << "Enter the number of the task you have completed on Wednesday: ";
    std::cin >> taskNumberWednesday;

    if(taskNumberWednesday < 1 || taskNumberWednesday > numTasksWednesday) {
        std::cout << "Invalid task number.\n";
        return;
    }

    // Assuming tasks are numbered starting from 1
    goalsd[taskNumberWednesday - 1] = "[X] " + goalsd[taskNumberWednesday - 1];

}


//Mark Thursday task as done
else if(jnd == "Thursday"){
    std::cout << "Enter the number of the task you have completed on Thursday: ";
    std::cin >> taskNumberThursday;

    if(taskNumberThursday < 1 || taskNumberThursday > numTasksThursday) {
        std::cout << "Invalid task number.\n";
        return;
    }

    // Assuming tasks are numbered starting from 1
    goalse[taskNumberThursday - 1] = "[X] " + goalse[taskNumberThursday - 1];

}


//Mark Friday task as done
else if(jnd == "Friday"){
    std::cout << "Enter the number of the task you have completed on Friday: ";
    std::cin >> taskNumberFriday;

    if(taskNumberFriday < 1 || taskNumberFriday > numTasksFriday) {
        std::cout << "Invalid task number.\n";
        return;
    }

    // Assuming tasks are numbered starting from 1
    goalsf[taskNumberFriday - 1] = "[X] " + goalsf[taskNumberFriday - 1];

}


//Mark Saturday task as done
else if(jnd == "Saturday"){
    std::cout << "Enter the number of the task you have completed on Saturday: ";
    std::cin >> taskNumberSaturday;

    if(taskNumberSaturday < 1 || taskNumberSaturday > numTasksSaturday) {
        std::cout << "Invalid task number.\n";
        return;
    }

    // Assuming tasks are numbered starting from 1
    goalsg[taskNumberSaturday - 1] = "[X] " + goalsg[taskNumberSaturday - 1];

}


}





void displayTask(std::string*& goalsa, int& numTasksSunday , std::string*& goalsb, int& numTasksMonday , std::string*& goalsc, int& numTasksTuesday
, std::string*& goalsd, int& numTasksWednesday , std::string*& goalse, int& numTasksThursday , std::string*& goalsf, int& numTasksFriday
, std::string*& goalsg, int& numTasksSaturday){

std::string kd;

std::cout << "What day would you like to view your tasks?\n";
std::cin >> kd;


//Display Sunday tasks
if(kd == "Sunday"){
    for(int i = 0; i < numTasksSunday; ++i){
                std::cout << "Task " << i + 1 << ": " << goalsa[i] << '\n';
            }
}



//Display Monday tasks
if(kd == "Monday"){
    for(int i = 0; i < numTasksMonday; ++i){
                std::cout << "Task " << i + 1 << ": " << goalsb[i] << '\n';
            }
}


//Display Tuesday tasks
if(kd == "Tuesday"){
    for(int i = 0; i < numTasksTuesday; ++i){
                std::cout << "Task " << i + 1 << ": " << goalsc[i] << '\n';
            }
}

//Display Wednesday tasks
if(kd == "Wednesday"){
    for(int i = 0; i < numTasksWednesday; ++i){
                std::cout << "Task " << i + 1 << ": " << goalsd[i] << '\n';
            }
}

//Display Thursday tasks
if(kd == "Thursday"){
    for(int i = 0; i < numTasksThursday; ++i){
                std::cout << "Task " << i + 1 << ": " << goalse[i] << '\n';
            }
}

//Display Friday tasks
if(kd == "Friday"){
    for(int i = 0; i < numTasksFriday; ++i){
                std::cout << "Task " << i + 1 << ": " << goalsf[i] << '\n';
            }
}

//Display Saturday tasks
if(kd == "Saturday"){
    for(int i = 0; i < numTasksSaturday; ++i){
                std::cout << "Task " << i + 1 << ": " << goalsg[i] << '\n';
            }
}



}




void addTask(std::string*& goalsa, int& numTasksSunday, std::string& newTaskSunday , std::string*& goalsb , int& numTasksMonday , std::string& newTaskMonday
, std::string*& goalsc, int& numTasksTuesday , std::string& newTaskTuesday , std::string*& goalsd, int& numTasksWednesday , std::string& newTaskWednesday
, std::string*& goalse, int& numTasksThursday , std::string& newTaskThursday , std::string*& goalsf, int& numTasksFriday , std::string& newTaskFriday
, std::string*& goalsg, int& numTasksSaturday , std::string& newTaskSaturday) {

std::string geg;

std::cout << "For what day would you like to add a task?\n";
std::cin >> geg;

//Add a task for Sunday
if(geg == "Sunday"){
    // Allocate a new array with one more slot
    std::string* newGoalsa = new std::string[numTasksSunday + 1];

    // Copy existing tasks
    for (int i = 0; i < numTasksSunday; ++i) {
        newGoalsa[i] = goalsa[i];
    }

    // Add the new task
    newGoalsa[numTasksSunday] = newTaskSunday;

    // Delete the old array and update the pointer
    delete[] goalsa;
    goalsa = newGoalsa;

    // Increment the task count
    ++numTasksSunday;

}


//Add a task for Monday
else if(geg == "Monday"){
    // Allocate a new array with one more slot
    std::string* newGoalsb = new std::string[numTasksMonday + 1];

    // Copy existing tasks
    for (int i = 0; i < numTasksMonday; ++i) {
        newGoalsb[i] = goalsb[i];
    }

    // Add the new task
    newGoalsb[numTasksMonday] = newTaskMonday;

    // Delete the old array and update the pointer
    delete[] goalsb;
    goalsb = newGoalsb;

    // Increment the task count
    ++numTasksMonday;

}



//Add a task for Tuesday
else if(geg == "Tuesday"){
    // Allocate a new array with one more slot
    std::string* newGoalsc = new std::string[numTasksTuesday + 1];

    // Copy existing tasks
    for (int i = 0; i < numTasksTuesday; ++i) {
        newGoalsc[i] = goalsc[i];
    }

    // Add the new task
    newGoalsc[numTasksTuesday] = newTaskTuesday;

    // Delete the old array and update the pointer
    delete[] goalsc;
    goalsc = newGoalsc;

    // Increment the task count
    ++numTasksTuesday;

}

//Add a task for Wednesday
else if(geg == "Wednesday"){
    // Allocate a new array with one more slot
    std::string* newGoalsd = new std::string[numTasksWednesday + 1];

    // Copy existing tasks
    for (int i = 0; i < numTasksWednesday; ++i) {
        newGoalsd[i] = goalsd[i];
    }

    // Add the new task
    newGoalsd[numTasksWednesday] = newTaskWednesday;

    // Delete the old array and update the pointer
    delete[] goalsd;
    goalsd = newGoalsd;

    // Increment the task count
    ++numTasksWednesday;

}


//Add a task for Thursday
else if(geg == "Thursday"){
    // Allocate a new array with one more slot
    std::string* newGoalse = new std::string[numTasksThursday + 1];

    // Copy existing tasks
    for (int i = 0; i < numTasksThursday; ++i) {
        newGoalse[i] = goalse[i];
    }

    // Add the new task
    newGoalse[numTasksThursday] = newTaskThursday;

    // Delete the old array and update the pointer
    delete[] goalse;
    goalse = newGoalse;

    // Increment the task count
    ++numTasksThursday;

}


//Add a task for Friday
else if(geg == "Friday"){
    // Allocate a new array with one more slot
    std::string* newGoalsf = new std::string[numTasksFriday + 1];

    // Copy existing tasks
    for (int i = 0; i < numTasksFriday; ++i) {
        newGoalsf[i] = goalsf[i];
    }

    // Add the new task
    newGoalsf[numTasksFriday] = newTaskFriday;

    // Delete the old array and update the pointer
    delete[] goalsf;
    goalsf = newGoalsf;

    // Increment the task count
    ++numTasksFriday;

}

//Add a task for Saturday
else if(geg == "Saturday"){
    // Allocate a new array with one more slot
    std::string* newGoalsg = new std::string[numTasksSaturday + 1];

    // Copy existing tasks
    for (int i = 0; i < numTasksSaturday; ++i) {
        newGoalsg[i] = goalsg[i];
    }

    // Add the new task
    newGoalsg[numTasksSaturday] = newTaskSaturday;

    // Delete the old array and update the pointer
    delete[] goalsg;
    goalsg = newGoalsg;

    // Increment the task count
    ++numTasksSaturday;

}


}




void deleteTask(std::string*& goalsa, int& numTasksSunday , std::string*& goalsb, int& numTasksMonday , std::string*& goalsc, int& numTasksTuesday
, std::string*& goalsd, int& numTasksWednesday , std::string*& goalse, int& numTasksThursday , std::string*& goalsf, int& numTasksFriday
, std::string*& goalsg, int& numTasksSaturday) {

std::string did;
int taskNumberSunday;
int taskNumberMonday;
int taskNumberTuesday;
int taskNumberWednesday;
int taskNumberThursday;
int taskNumberFriday;
int taskNumberSaturday;

std::cout << "For what day would you like to delete a task?\n";
std::cin >> did;


//Delete Sunday Task
if(did == "Sunday"){
    std::cout << "Enter the number of the task you want to delete for Sunday: ";
    std::cin >> taskNumberSunday;

    if(taskNumberSunday < 1 || taskNumberSunday > numTasksSunday) {
        std::cout << "Invalid task number.\n";
        return;
    }

    // Allocate a new array with one less slot
    std::string* newGoalsa = new std::string[numTasksSunday - 1];

    // Copy over the tasks, skipping the one to delete
    for (int i = 0, j = 0; i < numTasksSunday; ++i) {
        if (i != taskNumberSunday - 1) { // Skip the task to delete
            newGoalsa[j++] = goalsa[i];
        }
    }

    // Delete the old array and update the pointer
    delete[] goalsa;
    goalsa = newGoalsa;

    // Decrement the task count
    --numTasksSunday;

}



//Delete a Monday task
else if(did == "Monday"){
    std::cout << "Enter the number of the task you want to delete for Monday: ";
    std::cin >> taskNumberMonday;

    if(taskNumberMonday < 1 || taskNumberMonday > taskNumberMonday) {
        std::cout << "Invalid task number.\n";
        return;
    }

    // Allocate a new array with one less slot
    std::string* newGoalsb = new std::string[numTasksMonday - 1];

    // Copy over the tasks, skipping the one to delete
    for (int i = 0, j = 0; i < numTasksMonday; ++i) {
        if (i != taskNumberMonday - 1) { // Skip the task to delete
            newGoalsb[j++] = goalsb[i];
        }
    }

    // Delete the old array and update the pointer
    delete[] goalsb;
    goalsb = newGoalsb;

    // Decrement the task count
    --numTasksMonday;

}



//Delete a Tuesday task
else if(did == "Tuesday"){
    std::cout << "Enter the number of the task you want to delete for Tuesday: ";
    std::cin >> taskNumberTuesday;

    if(taskNumberTuesday < 1 || taskNumberTuesday > taskNumberTuesday) {
        std::cout << "Invalid task number.\n";
        return;
    }

    // Allocate a new array with one less slot
    std::string* newGoalsc = new std::string[numTasksTuesday - 1];

    // Copy over the tasks, skipping the one to delete
    for (int i = 0, j = 0; i < numTasksTuesday; ++i) {
        if (i != taskNumberTuesday - 1) { // Skip the task to delete
            newGoalsc[j++] = goalsc[i];
        }
    }

    // Delete the old array and update the pointer
    delete[] goalsc;
    goalsc = newGoalsc;

    // Decrement the task count
    --numTasksTuesday;

}


//Delete a Wednesday Task
else if(did == "Wednesday"){
    std::cout << "Enter the number of the task you want to delete for Wednesday: ";
    std::cin >> taskNumberWednesday;

    if(taskNumberWednesday < 1 || taskNumberWednesday > taskNumberWednesday) {
        std::cout << "Invalid task number.\n";
        return;
    }

    // Allocate a new array with one less slot
    std::string* newGoalsd = new std::string[numTasksWednesday - 1];

    // Copy over the tasks, skipping the one to delete
    for (int i = 0, j = 0; i < numTasksWednesday; ++i) {
        if (i != taskNumberWednesday - 1) { // Skip the task to delete
            newGoalsd[j++] = goalsd[i];
        }
    }

    // Delete the old array and update the pointer
    delete[] goalsd;
    goalsd = newGoalsd;

    // Decrement the task count
    --numTasksWednesday;

}



//Delete a Thursday Task
else if(did == "Thursday"){
    std::cout << "Enter the number of the task you want to delete for Thursday: ";
    std::cin >> taskNumberThursday;

    if(taskNumberThursday < 1 || taskNumberThursday > taskNumberThursday) {
        std::cout << "Invalid task number.\n";
        return;
    }

    // Allocate a new array with one less slot
    std::string* newGoalse = new std::string[numTasksThursday - 1];

    // Copy over the tasks, skipping the one to delete
    for (int i = 0, j = 0; i < numTasksThursday; ++i) {
        if (i != taskNumberThursday - 1) { // Skip the task to delete
            newGoalse[j++] = goalse[i];
        }
    }

    // Delete the old array and update the pointer
    delete[] goalse;
    goalse = newGoalse;

    // Decrement the task count
    --numTasksThursday;

}


//Delete a Friday Task
else if(did == "Friday"){
    std::cout << "Enter the number of the task you want to delete for Friday: ";
    std::cin >> taskNumberFriday;

    if(taskNumberFriday < 1 || taskNumberFriday > taskNumberFriday) {
        std::cout << "Invalid task number.\n";
        return;
    }

    // Allocate a new array with one less slot
    std::string* newGoalsf = new std::string[numTasksFriday - 1];

    // Copy over the tasks, skipping the one to delete
    for (int i = 0, j = 0; i < numTasksFriday; ++i) {
        if (i != taskNumberFriday - 1) { // Skip the task to delete
            newGoalsf[j++] = goalsf[i];
        }
    }

    // Delete the old array and update the pointer
    delete[] goalsf;
    goalsf = newGoalsf;

    // Decrement the task count
    --numTasksFriday;

}


//Delete a Saturday Task
else if(did == "Saturday"){
    std::cout << "Enter the number of the task you want to delete for Saturday: ";
    std::cin >> taskNumberSaturday;

    if(taskNumberSaturday < 1 || taskNumberSaturday > taskNumberSaturday) {
        std::cout << "Invalid task number.\n";
        return;
    }

    // Allocate a new array with one less slot
    std::string* newGoalsg = new std::string[numTasksSaturday - 1];

    // Copy over the tasks, skipping the one to delete
    for (int i = 0, j = 0; i < numTasksSaturday; ++i) {
        if (i != taskNumberSaturday - 1) { // Skip the task to delete
            newGoalsg[j++] = goalsg[i];
        }
    }

    // Delete the old array and update the pointer
    delete[] goalsg;
    goalsg = newGoalsg;

    // Decrement the task count
    --numTasksSaturday;

}



}



