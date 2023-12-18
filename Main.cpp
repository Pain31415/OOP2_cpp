#include "bookstore.h"

int main() {
    Bookstore bookstore;

    // Додавання декількох книг
    bookstore.addBook(Book("Author1", "Title1", "Publisher1", 2000, 300));
    bookstore.addBook(Book("Author2", "Title2", "Publisher2", 2010, 250));
    bookstore.addBook(Book("Author1", "Title3", "Publisher1", 2020, 400));
    bookstore.addBook(Book("Author3", "Title4", "Publisher3", 2015, 350));

    // Виведення списків
    bookstore.displayBooksByAuthor("Author1");
    bookstore.displayBooksByPublisher("Publisher1");
    bookstore.displayBooksPublishedAfterYear(2010);

    return 0;
}