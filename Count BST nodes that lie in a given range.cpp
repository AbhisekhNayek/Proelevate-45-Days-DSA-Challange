class Solution{
public:
    int inorder(Node *root, int low, int high) {
        if (!root) return 0;
        
        int count = 0;

        // Traverse left subtree
        count += inorder(root->left, low, high);
        
        // Check if the current node is in range
        if (low <= root->data && root->data <= high) {
            count++;
        }
        
        // Traverse right subtree
        count += inorder(root->right, low, high);

        return count;
    }

    int getCount(Node *root, int l, int h) {
        // Call the inorder traversal helper
        return inorder(root, l, h);
    }
};
