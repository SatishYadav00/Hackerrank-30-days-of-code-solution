#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;	
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }

	void levelOrder(Node * root){
      //Write your code here
      queue<Node *> Q;
      Q.push(root);
      
      while(Q.size() !=0)
      {
          Node* curr=Q.front();
          Q.pop();
          
          cout<<curr->data<<" ";
          
          if(curr->left)
          {
              Q.push(curr->left);
          }
          if(curr->right)
          {
              Q.push(curr->right);
          }
      }
  	
  
	}

};//End of Solution
