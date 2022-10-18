struct Node {
	int value = 0;
	Node* next = nullptr;
	Node* prev = nullptr;
};

struct List {
	Node* first = nullptr;
	int size_ = 0;
	void insert(int, int);
	void push_front(const int);
	void erase(int);
	void push_back(const int);
	void print();
	void reversed_print();
	void swap(int, int);
	void clear();
	void pop_front();
	bool is_empty();
	void pop_back();
	int operator[] (const int);
	int get_value(const int);
	int size();
};