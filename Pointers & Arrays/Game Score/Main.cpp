
#include "Scores.h"

int main() {

	Scores scores(4);


	GameEntry ge1("test0", 5);

	scores.printAll();

	scores.add(ge1);

//	scores.printAll();
//
//	GameEntry ge2("mira", 10);
//
//
//
//	GameEntry ge3("test1", 3);
//
//	GameEntry ge4("test2", 5);
//	scores.add(ge1);
//	scores.add(ge2);
//	scores.printIndex(1);
//	scores.add(ge3);
//	scores.add(ge4);
//
//	scores.printAll();
//
//	scores.remove(1);
//	scores.remove(1);
//	scores.printAll();
////	scores.remove(1);
////	scores.printAll();
////	scores.remove(1);
//	scores.remove(1);

	return 0;
}
