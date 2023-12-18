#include "book.h"
#include <iostream>

Book::Book(const std::string& author, const std::string& title, const std::string& publisher, int year, int pages)
    : author(author), title(title), publisher(publisher), year(year), pages(pages) {}

const std::string& Book::getAuthor() const {
    return author;
}

const std::string& Book::getTitle() const {
    return title;
}

const std::string& Book::getPublisher() const {
    return publisher;
}

int Book::getYear() const {
    return year;
}

int Book::getPages() const {
    return pages;
}

void Book::displayBookInfo() const {
    std::cout << "Author: " << author << ", Title: " << title << ", Publisher: " << publisher << ", Year: " << year << ", Pages: " << pages << std::endl;
}