#include <vector>
#include "book.h"

class Bookstore {
public:
    void addBook(const Book& book);
    void displayBooksByAuthor(const std::string& author) const;
    void displayBooksByPublisher(const std::string& publisher) const;
    void displayBooksPublishedAfterYear(int year) const;

private:
    std::vector<Book> books;
};