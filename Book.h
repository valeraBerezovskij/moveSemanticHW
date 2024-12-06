#pragma once
#include<iostream>

class Book
{
private:
	char* author;
	char* text;
	int pages;
	int year;
public:
	Book() = default;
	Book(const Book& other) = delete;
	Book& operator=(const Book& other) = delete;
	Book(Book&& other)
		: author(other.author), text(other.text), pages(other.pages), year(other.year) {
		other.author = nullptr;
		other.text = nullptr;
		other.pages = 0;
		other.year = 0;
	}
	Book& operator=(Book&& other) {
		this->author = other.author;
		this->text = other.text;
		this->pages = other.pages;
		this->year = other.year;
		other.author = nullptr;
		other.text = nullptr;
		other.pages = 0;
		other.year = 0;
		return *this;
	}
	void input() {
		std::cout << "Autor: ";
		std::cin >> author;
		std::cout << "Text: ";
		std::cin >> text;
		std::cout << "Pages: ";
		std::cin >> pages;
		std::cout << "Year: ";
		std::cin >> year;
	}
	void output() const {
		std::cout << "Autor: " << author << "\n";
		std::cout << "Text: "  << text   << "\n";
		std::cout << "Pages: " << pages  << "\n";
		std::cout << "Year: "  << year   << "\n";
	}
};

