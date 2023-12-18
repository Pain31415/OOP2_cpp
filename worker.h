#include <string>

class Worker {
public:
    // ����������� � �����������
    explicit Worker(const std::string& fullName, const std::string& position, int startYear, double salary);

    // �������-����� ��� ��������� ����� ��� ����������
    const std::string& getFullName() const;
    const std::string& getPosition() const;
    int getStartYear() const;
    double getSalary() const;

    // ���������� �������-���� ��� ����������� ����� ��� ����������
    void displayWorkerInfo() const;

private:
    std::string fullName;
    std::string position;
    int startYear;
    double salary;
};