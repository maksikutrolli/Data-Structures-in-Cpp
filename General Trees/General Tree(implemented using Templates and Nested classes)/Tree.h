#ifndef TREE_H
#define TREE_H
#include <cstdlib>
#include "NodeList.cpp"


template <typename E>
class Tree {

      public:
             class TreeNode; // This is called a forward declaration of a class. Since TreeNode depends on Position and
                             // Position depends on TreeNode, we need to do a forward declaration of one of them so that
                             // the compiler knows that a complete definition will come later.
                             // After we do a forward declaration, we are allowed to create instances of the class TreeNode
                             // but we cannot use those instances yet.

      public:
           	class Position 				// a node position
            {

    			public:
    				E operator*();				// get element
    				Position parent();
    				NodeList<Position> children();
    		 		bool isRoot() const; 			// root node?
    				bool isExternal() const; 			// external node?
    				bool operator==(Position p);
    			//	Position& operator=(const Position&);

    				Position(typename Tree<E>::TreeNode *v);
     				Position(){}

      				typename Tree<E>::TreeNode *u;
     			friend class NodeList<Position>;


      		};

           	typedef NodeList<typename Tree<E>::Position> PositionList;
     // public:
      //     class PositionList;  //We are reusing the NodeList class we wrote before. We dont need to implement it here
                                // We can use the implementation from the included file NodeList.cpp

      public:
            class TreeNode
            {
               	E e;
               	TreeNode *parent;
               	typename Tree<E>::PositionList child;
              	friend class Tree;
              	friend class Tree<E>::Position;

              	public:
              		TreeNode(){
              			parent = NULL;
             		  }
              		TreeNode(E,Tree<E>::Position*, Tree<E>::PositionList*);
              		TreeNode& operator=(const TreeNode &t)
              		{
              			parent = t.parent;
              			child = t.child;
              			e = t.e;
            		}

            };

      public:					// public functions of Tree
    		Tree<E>(){
    			n = 0;
     		}
    		int size() const;				// number of nodes
    		bool empty() const;				// is tree empty?

    		Position root();
    		PositionList Positions();

    		void insert(E e, Position p);
    		void preorder(Position p ,PositionList &pre_order);
    	private:
    		TreeNode *r;
    		int n;
    	friend class Position;
};


#endif
