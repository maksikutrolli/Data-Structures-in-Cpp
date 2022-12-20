#include<iostream>
#include "Tree.cpp"
using namespace std;

int main()
{
	Tree<string> t;
	Tree<string>::Position p = t.root();
	t.insert("Food", p);
	p = t.root();



   t.insert("fruit", p);
   t.insert("vegetables", p);
   t.insert("grains", p);



    for (Tree<string>::PositionList::Iterator iterator = p.children().begin();
                       iterator != p.children().end(); ++iterator)
    {
         Tree<string>::Position pos = *iterator;
         if (*pos == "fruit")
         {
	       t.insert("apple", *iterator);
           t.insert("grape", *iterator);
           t.insert("berry", *iterator);
        }
         if (**iterator == "vegetables")
         {
	       t.insert("broccoli", *iterator);
           t.insert("potato", *iterator);
           t.insert("carrot", *iterator);
        }
         if (**iterator == "grains")
         {
	       t.insert("rice", *iterator);
           t.insert("wheat", *iterator);
           t.insert("oat", *iterator);
        }
    }





	Tree<string>::PositionList list  = t.Positions();
	for (Tree<string>::PositionList::Iterator i = list.begin(); i != list.end(); ++i)
		cout << **i << endl;

    system("PAUSE");
}
