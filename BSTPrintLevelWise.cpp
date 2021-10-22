#include<iostream>
#include<queue>
using namespace std;
template<typename t>
class binarytreeNode{
    public:
    t data;
    binarytreeNode<t>* left;
    binarytreeNode<t>* right;
    binarytreeNode(t data){
    this->data=data;
    left=NULL;
    right=NULL;
    }
    ~binarytreeNode(){
    delete left;
    delete right;}
};
 class BST{
  binarytreeNode<int> * root;
  public :
      BST(){
       root = NULL;
      }
  ~BST(){
   delete root;
  }
  private:
    bool hasdata( int data, binarytreeNode<int> *node){
     if ( node== NULL){
        return NULL;
     }
      if (node->data == data){
        return true;
      }
       if ( data< node->data){
        return hasdata(data, node->left);

       }
       else
         return hasdata( data, node->right);

    }
  public:
    bool hasdata(int data){
     return hasdata( data, root);
    }

  private:
    binarytreeNode<int> * insert(int data, binarytreeNode<int>* node){
    if( node == NULL){

        binarytreeNode<int > * newnode = new binarytreeNode<int> ( data);
        return newnode;
    }
    if ( data< node ->data){
        node->left = insert( data, node ->left);
        return node;
    }
    else{
        node ->right = insert( data, node->right);

     }

    return node;
    }

  public :
     void insert( int data){
      this ->  root = insert(data, this->root);
     }


     public:
     void deletedata(int data){
      root = deletedata(root,data);

     }



  private:
    binarytreeNode<int>* deletedata(binarytreeNode<int> *node, int data){

    if (node == NULL){

        return NULL;


    }
     if ( data> node->data){
        node->right= deletedata(node->right,data);
        return node;
     }
     else if (data< node->data){

        node->left = deletedata( node->left , data);
        return node;
     }
    else{
        if ( node ->left ==NULL && node->right== NULL){
            delete node ;
            return NULL;

        }
        else if ( node->left == NULL){
            binarytreeNode<int > * temp = node->right;
            node->right =NULL;
            delete node;
            return temp;

        }
        else if ( node ->right== NULL){
            binarytreeNode<int> * temp = node ->left;
            node ->left = NULL;
            delete node;
            return temp;

        }
        else {
            binarytreeNode<int >* minnode = node->right;
            while(minnode->left){
                minnode= minnode->left;

            }
             int rightmin = minnode->data;
             node->data = rightmin;
             node ->right = deletedata (node->right, rightmin);
             return node;
        }
    }
    }


private :

void printlevelwise(binarytreeNode<int>*root){
    if(root==NULL)
        return;
queue<binarytreeNode<int>*> nodes;
nodes.push(root);
while(!nodes.empty()){
binarytreeNode<int>*front=nodes.front();
nodes.pop();
cout<<front->data<<":"<<" ";
if(front->left){
cout<<front->left->data;
nodes.push(front->left);}
if(front->right){
cout<<","<<front->right->data;
nodes.push(front->right);}
cout<<endl;
}
}
  public:
     void printlevelwise(){
      printlevelwise(root);

     }


 };
  int main(){

  BST b;
b.insert(10);
b.insert(2);
b.insert(7);
b.insert(30);
b.insert(1);
b.insert(90);
b.printlevelwise();
b.deletedata(10);
cout<< endl;
b.printlevelwise();


   return 0;
  }
