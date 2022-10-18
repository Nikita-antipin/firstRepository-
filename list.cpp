#include <iostream>
#include <forward_list>
#include "List.h"



	void List::insert(int position, int value) {
		Node* curNode = first;
		int pos = 0;
		if ((position == 0)) {
			push_front(value);
			return;
		}
		if ((position == size_) && (size_ != 0)) {
			push_back(value);
			return;
		}

		while (!(curNode == nullptr))
		{
			if (position == pos) {
				Node* tmpNode = new Node;
				tmpNode->value = value;
				tmpNode->next = curNode;
				tmpNode->prev = curNode->prev;
				curNode->prev->next = tmpNode;
				curNode->prev = tmpNode;
				curNode = tmpNode;
				size_++;
				return;
			}

			pos++;
			curNode = curNode->next;
		}

	}

	void List::push_front(const int value) {
		Node* newNode = new Node;
		newNode->value = value;
		newNode->next = first;
		first->prev = newNode;
		first = newNode;
		size_++;
	}

	void List::erase(int position) {
		Node* curNode = first;
		if (position >= size_) {
			return;
		}
		if (position == (size_ - 1)) {
			pop_back();
			return;
		}
		if (position == 0) {
			pop_front();
			return;
		}
		for (int i = 0; i < position; i++)
		{
			curNode = curNode->next;
		}
		Node* tmp_next = curNode->next;
		Node* tmp_prev = curNode->prev;
		tmp_next->prev = tmp_prev;
		tmp_prev->next = tmp_next;
		delete curNode;

		size_--;

	}


	void List::push_back(const int value) {
		Node* newNode = new Node;
		Node* curNode = first;
		if (curNode == nullptr) {
			first = newNode;
			first->value = value;
			size_ = 1;
			return;
		}
		for (int i = 0; i < size_ - 1; i++)
		{
			curNode = curNode->next;
		}

		newNode->prev = curNode;
		curNode->next = newNode;
		newNode->value = value;
		size_++;
	}

	void List::print() {
		Node* curNode = first;
		if (curNode == nullptr) {
			return;
		}
		while (!(curNode == nullptr))
		{
			std::cout << curNode->value << "\n";
			curNode = curNode->next;
		}
	};

	void List::swap(int position1, int position2) {
		Node* curNode = first;
		int pos = 0;
		int tmp = 0;
		while (!(curNode == nullptr))
		{
			if (position1 == pos) {
				tmp = get_value(position1);
				curNode->value = get_value(position2);
			}

			pos++;
			curNode = curNode->next;
		}
		pos = 0;
		curNode = first;
		while (!(curNode == nullptr))
		{
			if (position2 == pos) {
				curNode->value = tmp;
			}

			pos++;
			curNode = curNode->next;
		}
	}
	void List::reversed_print() {
		Node* curNode = first;
		if (curNode == nullptr) {
			return;
		}
		while (!(curNode->next == nullptr))
		{
			curNode = curNode->next;
		}
		while (!(curNode == nullptr))
		{
			std::cout << curNode->value << "\n";
			curNode = curNode->prev;
		}
	};

	void List::clear() {
		while (first != nullptr) {
			Node* tmpNode = first->next;
			delete first;
			first = tmpNode;
		}
		size_ = 0;
	}

	void List::pop_front() {
		if (first != nullptr) {
			Node* tmpNode = first->next;
			delete first;
			first = tmpNode;
			if (first != nullptr) {
				first->prev = nullptr;
			}
			size_--;
		}
	}

	bool List::is_empty() {
		if (first != nullptr) {
			return true;
		}
		return false;
	}
	void List::pop_back() {
		Node* curNode = first;
		for (int i = 0; i < size_ - 1; i++)
		{
			curNode = curNode->next;
		}
		if (curNode->prev != nullptr) {
			curNode->prev->next = nullptr;

		}
		else {
			first = nullptr;
			size_--;
			return;
		}

		delete curNode;
		size_--;
	}

	int List::operator[] (const int index) {
		Node* curNode = first;
		int pos = 0;
		while (!(curNode == nullptr))
		{
			if (index == pos) {
				return curNode->value;
			}
			pos++;
			curNode = curNode->next;
		}

		std::cout << "Out of range";
	}
	int List::get_value(const int index) {
		Node* curNode = first;
		int pos = 0;
		while (!(curNode == nullptr))
		{
			if (index == pos) {
				return curNode->value;
			}
			pos++;
			curNode = curNode->next;
		}

		std::cout << "Out of range";
	}

	int List::size() {
		return size_;
	}
