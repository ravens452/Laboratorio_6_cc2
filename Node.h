class Node {
public:
    Node *next;
    int elem;
    Node(){};
    Node(Node *next, int elem) : next(next), elem(elem) {}
};
