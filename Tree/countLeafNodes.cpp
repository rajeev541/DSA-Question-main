//  #samSung
/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    
***********************************************************/
void inorderTraversal(BinaryTreeNode<int> *root,int &count)
{
    if (root == NULL)
        return;
	
    if(root->left == NULL && root->right == NULL)
        count++;
    inorderTraversal(root->left,count);  
    inorderTraversal(root->right,count);
}
int noOfLeafNodes(BinaryTreeNode<int> *root){
    int cnt = 0;
    inorderTraversal(root,cnt);
    return cnt;
    
}