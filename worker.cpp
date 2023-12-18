#include "worker.h"
#include <iostream>

// Конструктор з параметрами
Worker::Worker(const std::string& fullName, const std::string& position, int startYear, double salary)
    : fullName(fullName), position(position), startYear(startYear), salary(salary) {}

// Функції-члени для отримання даних про працівника
const std::string& Worker::getFullName() const {
    return fullName;
}

const std::string& Worker::getPosition() const {
    return position;
}

int Worker::getStartYear() const {
    return startYear;
}

double Worker::getSalary() const {
    return salary;
}

// Константна функція-член для відображення даних про працівника
void Worker::displayWorkerInfo() const {
    std::cout << "Full Name: " << fullName << "\n";
    std::cout << "Position: " << position << "\n";
    std::cout << "Start Year: " << startYear << "\n";
    std::cout << "Salary: " << salary << "\n";
}