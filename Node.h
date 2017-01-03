#include <iostream>
#include <string.h>

using namespace std;

class Node{
 public:
  Node* getNext();
  Node();
  ~Node();
  Node* createNode(Student*);
  void deleteNode();
 private:
  Node* n;


  
}
