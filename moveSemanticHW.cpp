#include"Book.h"

int main() {
	Book b;
	Book b1 = std::move(b);
	b = std::move(b1);
}