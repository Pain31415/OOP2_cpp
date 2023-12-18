#include "bookstore.h"
#include <algorithm>
#include <iostream>

void Bookstore::addBook(const Book& book) {
    books.push_back(book);
}

void Bookstore::displayBooksByAuthor(const std::string& author) const {
    std::cout << "Books by author " << author << ":\n";
    for (const auto& book : books) {
        if (book.getAuthor() == author) {
            book.displayBookInfo();
        }
    }
}

void Bookstore::displayBooksByPublisher(const std::string& publisher) const {
    std::cout << "Books published by " << publisher << ":\n";
    for (const auto& book : books) {
        if (book.getPublisher() == publisher) {
            book.displayBookInfo();
        }
    }
}

void Bookstore::displayBooksPublishedAfterYear(int year) const {
    std::cout << "Books published after " << year << ":\n";
    for (const auto& book : books) {
        if (book.getYear() > year) {
            book.displayBookInfo();
        }
    }
}