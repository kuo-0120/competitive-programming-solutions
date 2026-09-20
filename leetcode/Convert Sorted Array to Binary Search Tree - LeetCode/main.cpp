#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Binary Tree 節點定義
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    // 遞迴建樹函式
    TreeNode* buildBST(int left, int right, vector<int>& nums) {
        if (left > right) return nullptr;

        int mid = (left + right) / 2;
        TreeNode* root = new TreeNode(nums[mid]);

        root->left = buildBST(left, mid - 1, nums);
        root->right = buildBST(mid + 1, right, nums);

        return root;
    }

    // 主函式
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return buildBST(0, nums.size() - 1, nums);
    }
};

// 中序遍歷印出 BST
void inorder(TreeNode* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

void printTreeLevelOrder(TreeNode* root) {
    if (!root) return;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();

        // 印出當前層
        for (int i = 0; i < size; ++i) {
            TreeNode* node = q.front();
            q.pop();

            if (node) {
                cout << node->val << " ";
                q.push(node->left);
                q.push(node->right);
            } else {
                cout << "null ";
            }
        }
        cout << endl;
    }
}

// 主程式：手動輸入陣列
int main() {
    vector<int> nums;
    int x;
    cout << "請輸入升序陣列（空格分隔，Enter 結束）: ";
    while (cin >> x) {
        nums.push_back(x);
    }

    Solution sol;
    TreeNode* root = sol.sortedArrayToBST(nums);

    cout << "中序遍歷 BST 結果: ";
    inorder(root);
    cout << endl;
    cout << "BST 層級輸出如下：" << endl;
    printTreeLevelOrder(root);
    cout<<endl;

    return 0;
}
