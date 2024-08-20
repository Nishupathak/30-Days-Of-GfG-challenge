//8. Sum tree//

class Solution {
  private:
    pair<bool, int> rec(Node* root){
        if(root==NULL) return {1, 0};
        if(root->left==NULL && root->right==NULL) return {1, root->data};
        auto left = rec(root->left);
        auto right = rec(root->right);
        bool isl = left.first;
        bool isr = right.first;
        int l = left.second;
        int r = right.second;
        return {isl && isr && (l+r==root->data), root->data + l+r};
    }
  public:
    bool isSumTree(Node* root) {
        // Your code here
        return rec(root).first;
    }
};
