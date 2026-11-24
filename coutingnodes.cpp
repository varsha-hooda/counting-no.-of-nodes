#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

int countNodes(Node* root) {

    if (root == NULL) {
        return 0;
    }

    int leftCount = countNodes(root->left);

    int rightCount = countNodes(root->right);

    return 1 + leftCount + rightCount;
}

int main() {

    Node* root = new Node(10);

    root->left = new Node(20);
    root->right = new Node(30);

    root->left->left = new Node(40);
    root->left->right = new Node(50);

    cout << "Total Nodes = " << countNodes(root);

    return 0;
}