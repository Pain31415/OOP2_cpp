#include "workerstore.h"
#include <iostream>

// Додавання працівника
void WorkerStore::addWorker(const Worker& worker) {
    if (workerCount < MAX_WORKERS) {
        workers[workerCount++] = worker;
    }
    else {
        std::cerr << "Error: Maximum number of workers reached.\n";
    }
}

// Виведення списків
void WorkerStore::displayWorkersWithExperience(int experienceYears) const {
    std::cout << "Workers with experience more than " << experienceYears << " years:\n";
    for (int i = 0; i < workerCount; ++i) {
        if (2023 - workers[i].getStartYear() > experienceYears) {
            workers[i].displayWorkerInfo();
        }
    }
}

void WorkerStore::displayWorkersWithSalaryAbove(double salary) const {
    std::cout << "Workers with salary above " << salary << ":\n";
    for (int i = 0; i < workerCount; ++i) {
        if (workers[i].getSalary() > salary) {
            workers[i].displayWorkerInfo();
        }
    }
}

void WorkerStore::displayWorkersByPosition(const std::string& position) const {
    std::cout << "Workers with position " << position << ":\n";
    for (int i = 0; i < workerCount; ++i) {
        if (workers[i].getPosition() == position) {
            workers[i].displayWorkerInfo();
        }
    }
}