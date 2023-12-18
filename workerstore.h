#include "worker.h"

class WorkerStore {
public:
    // Додавання працівника
    void addWorker(const Worker& worker);

    // Виведення списків
    void displayWorkersWithExperience(int experienceYears) const;
    void displayWorkersWithSalaryAbove(double salary) const;
    void displayWorkersByPosition(const std::string& position) const;

private:
    static const int MAX_WORKERS = 100; // Максимальна кількість працівників
    Worker workers[MAX_WORKERS]; // Масив для зберігання працівників
    int workerCount = 0; // Кількість доданих працівників
};