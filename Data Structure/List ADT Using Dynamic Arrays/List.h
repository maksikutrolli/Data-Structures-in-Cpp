

#include <iostream>

#include <string>

class List{

public:

	virtual ~List() = default; //{}

	virtual bool insert(int index, std::string value) = 0;

	virtual void modify(int index, std::string nValue) = 0;

	virtual bool remove(int index) = 0;

	virtual bool empty() = 0;

	virtual int size() = 0;

	virtual std::string getByIndex(int index) = 0;

};
