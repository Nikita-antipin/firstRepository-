#include <iostream>
#include <forward_list>
#include "List.h"



int main()
{
	List a;
	List First_test; //Первый тест, есть возможность проверить правильность написания через метдоды print и reversed_prin() которые проходят лист с разных сторон
	First_test.first = new Node;
	First_test.first->value = 0;
	First_test.first->next = new Node;
	First_test.first->prev = nullptr;
	Node* test_first = First_test.first->next;
	Node* prev = First_test.first;
	for (int i = 1; i < 10; i++) {
		if (i != 9) {
			test_first->value = i;
			test_first->next = new Node;
			test_first->prev = prev;
			prev = test_first;
			test_first = test_first->next;

		}
		else {
			test_first->value = i;
			test_first->prev = prev;
		}


	}
	First_test.size_ = 10;
	
	List Second_test;
	Second_test.first = new Node;
	Second_test.size_ = 1;
	Second_test.push_back(12);
	Second_test.print();

	List Third_test;


	//Здесь три теста
}