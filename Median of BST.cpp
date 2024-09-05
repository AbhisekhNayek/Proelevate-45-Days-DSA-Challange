vector<int> inorder(struct Node* root) {
    vector<int> ans;
    if (!root) return ans;

    // Traverse left subtree
    vector<int> left = inorder(root->left);
    ans.insert(ans.end(), left.begin(), left.end());

    // Add current node data
    ans.push_back(root->data);

    // Traverse right subtree
    vector<int> right = inorder(root->right);
    ans.insert(ans.end(), right.begin(), right.end());

    return ans;
}

float findMedian(struct Node* root) {
    // Get sorted elements using inorder traversal
    vector<int> arr = inorder(root);
    int n = arr.size();

    // Find median
    if (n % 2 == 0) {
        return (arr[n/2 - 1] + arr[n/2]) / 2.0;
    } else {
        return arr[n/2];
    }
}
