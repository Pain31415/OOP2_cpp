#include "workerstore.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    WorkerStore workerStore;

    // Додавання працівників з консолі
    string fullName, position;
    int startYear;
    double salary;

    cout << "Enter worker details:\n";
    cout << "Full Name: ";
    getline(cin, fullName);

    cout << "Position: ";
    getline(cin, position);

    cout << "Start Year: ";
    cin >> startYear;

    cout << "Salary: ";
    cin >> salary;
    cin.ignore(); // Clear newline character from the buffer

    // Додавання працівника до книгарні
    workerStore.addWorker(Worker(fullName, position, startYear, salary));

    // Виведення списків
    int experienceYears;
    double minSalary;
    string targetPosition;

    cout << "Enter the minimum number of years of experience to display workers: ";
    cin >> experienceYears;

    cout << "Enter the minimum salary to display workers: ";
    cin >> minSalary;

    cin.ignore(); // Clear newline character from the buffer

    cout << "Enter the target position to display workers: ";
    getline(cin, targetPosition);

    // Виведення списків з використанням користувацьких вводів
    workerStore.displayWorkersWithExperience(experienceYears);
    workerStore.displayWorkersWithSalaryAbove(minSalary);
    workerStore.displayWorkersByPosition(targetPosition);

    return 0;
}