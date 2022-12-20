#include "Tree.h"

template <typename E>
bool Tree<E>::Position::isRoot() const
{
	if (u->parent == NULL)
		return true;
	else
		return false;
}

template <typename E>
bool Tree<E>::Position::isExternal() const
{
	return (u->child.empty());

}

template <typename E>
bool Tree<E>::Position::operator==(Tree<E>::Position p)
{
	if (u == p.u)
		return true;
	else
		return false;
}
template <typename E>
Tree<E>::Position::Position(TreeNode *v)
{
	u = v;
}

template <typename E>
 typename Tree<E>::Position Tree<E>::Position::parent()
{
	return Tree<E>::Position(u->parent);

}

template <typename E>
 typename Tree<E>::PositionList Tree<E>::Position::children()
{
	return (u->child);

}
 /*
template <typename E>
 typename Tree<E>::Position& Tree<E>::Position::operator=(const Tree<E>::Position &p)
{
	u = p.u;
	return typename Tree<E>::Position(u);
}*/

template <typename E>
E Tree<E>::Position::operator*()
{
	return u->e;
}

template <typename E>
typename Tree<E>::Position Tree<E>::root()
{
	return typename Tree<E>::Position(r);
}

template <typename E>
int Tree<E>::size() const
{
	return this->n;
}

template <typename E>
bool Tree<E>::empty() const
{
	return size() == 0;
}

template <typename E>
void Tree<E>::insert(E e, Tree<E>::Position p)
{
	TreeNode *v = new TreeNode() ;
	v->e = e;
	if (empty())
		v->parent = NULL;
	else
		v->parent = p.u;
	if (!empty() )
	{
 		p.u->child.insertBack(v);
	}
	else
	{
		v->parent = NULL;
  		r = v;
	}
	++n;
}

template <typename E>
NodeList<typename Tree<E>::Position>  Tree<E>::Positions()
{
	typename Tree<E>::PositionList list;
	preorder(r, list);
	return list;
}

template <typename E>
void Tree<E>::preorder(Tree<E>::Position  p, Tree<E>::PositionList &pl)
{
 	pl.insertBack(p);
	if (p.u->child.empty()==false)
		for(typename Tree<E>::PositionList::Iterator ii = p.u->child.begin(); ii!= p.u->child.end(); ++ii)
			preorder(*ii, pl);
}

