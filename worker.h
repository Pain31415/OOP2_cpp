#include <string>

class Worker {
public:
    // Конструктор з параметрами
    explicit Worker(const std::string& fullName, const std::string& position, int startYear, double salary);

    // Функції-члени для отримання даних про працівника
    const std::string& getFullName() const;
    const std::string& getPosition() const;
    int getStartYear() const;
    double getSalary() const;

    // Константна функція-член для відображення даних про працівника
    void displayWorkerInfo() const;

private:
    std::string fullName;
    std::string position;
    int startYear;
    double salary;
};