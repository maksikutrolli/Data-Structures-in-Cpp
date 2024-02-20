
#include "List.h"


class ListArray: public List{

private:
	int capacity;
	int lastIndex;

	std::string *listArray;

public:

	ListArray(int c = 10);

	~ListArray();

	bool insert(int index, std::string value);

	void modify(int index, std::string nValue);

	bool remove(int index);

	bool empty();

	int size();

	std::string getByIndex(int index);

};
