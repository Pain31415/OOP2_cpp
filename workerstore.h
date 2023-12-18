#include "worker.h"

class WorkerStore {
public:
    // ��������� ����������
    void addWorker(const Worker& worker);

    // ��������� ������
    void displayWorkersWithExperience(int experienceYears) const;
    void displayWorkersWithSalaryAbove(double salary) const;
    void displayWorkersByPosition(const std::string& position) const;

private:
    static const int MAX_WORKERS = 100; // ����������� ������� ����������
    Worker workers[MAX_WORKERS]; // ����� ��� ��������� ����������
    int workerCount = 0; // ʳ������ ������� ����������
};