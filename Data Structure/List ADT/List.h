
#ifndef LIST_H_
#define LIST_H_

class List {
public:

	virtual ~ List () =default;

	virtual bool isEmpty() = 0;
	virtual bool insertElement(int index, int value) = 0;
	virtual bool modifyElement(int index, int value) = 0;
	virtual bool removeElement(int index) = 0;
	virtual int getElement(int index) = 0;
	virtual int getSize() = 0;

};


#endif /* LIST_H_ */


