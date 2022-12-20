#ifndef NODELIST_H
#define NODELIST_H
template <typename Elem>
class NodeList {				// node-based list
	private:
		template <typename E>

 		struct Node {
			E elem;				// element value
			Node<E>* prev;				// previous in list
			Node<E>* next;				// next in list
		};


	public:


		class Iterator {				// an iterator for the list
			public:
				Elem& operator*();			// reference to the element
				bool operator==(const Iterator& p) const;	// compare positions
				bool operator!=(const Iterator& p) const;
				Iterator& operator++();			// move to next position
				Iterator& operator--();			// move to previous position
				Iterator& operator+(int);			// move up by some positions
				Iterator& operator-(int);			// move down by some positions
				friend class NodeList<Elem>;			// give NodeList access
			private:
				Node<Elem>* v;					// pointer to the node
				Iterator(Node<Elem>* u);			// create from node
		};

	public:
		NodeList<Elem>();					// default constructor
		int size() const;				// list size
		bool empty() const;				// is the list empty?
		Iterator begin() const;			// beginning position
		Iterator end() const;			// (just beyond) last position
		void insertFront(const Elem& e);		// insert at front
		void insertBack(const Elem& e);		// insert at rear
		void insert(const Iterator& p, const Elem& e); // insert e before p
		void eraseFront();				// remove first
		void eraseBack();				// remove last
		void erase(const Iterator& p);		// remove p

	private:					// data members
		int     n;					// number of items
		Node<Elem>*   header;				// head-of-list sentinel
		Node<Elem>*   trailer;				// tail-of-list sentinel
};
#endif
