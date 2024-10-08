template <typename T>
class BinaryTreeNode{
public:
    T data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;

    BinaryTreeNode(T data){
    this->data=data;
    left=nullptr;
    right=nullptr;
    }

    ~BinaryTreeNode(){
    delete this->left;
    delete this->right;
    }

};
