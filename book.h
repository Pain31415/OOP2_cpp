#include <string>

class Book {
public:
    explicit Book(const std::string& author, const std::string& title, const std::string& publisher, int year, int pages);

    const std::string& getAuthor() const;
    const std::string& getTitle() const;
    const std::string& getPublisher() const;
    int getYear() const;
    int getPages() const;

    void displayBookInfo() const;

private:
    std::string author;
    std::string title;
    std::string publisher;
    int year;
    int pages;
};