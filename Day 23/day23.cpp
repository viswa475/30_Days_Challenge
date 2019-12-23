#include <iostream>
#include <cstddef>

using namespace std;	

class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            }
            else {
                Node* cur;
                if(data <= root->data){
                    cur = insert(root->left, data);
                    root->left = cur;
                }
                else{
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

		int getHeight(Node* root){
          //Write your code here
          if (root->right==NULL && root->left==NULL)
        return 0;
        
    int hL = 0, hR = 0;
    if (root->left)
        hL = getHeight(root->left);
    if (root->right)
        hR = getHeight(root->right);

    return 1 + max(hL, hR);
        }

}; //End of Solution
