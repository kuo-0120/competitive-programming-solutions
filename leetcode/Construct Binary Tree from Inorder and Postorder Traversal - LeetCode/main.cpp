#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
#include <sstream>

using namespace std;

// 定義二叉樹的節點結構
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
    // 主函數，根據中序遍歷和後序遍歷構建二叉樹
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int, int> inorderIndexMap;
        for (int i = 0; i < inorder.size(); ++i) {
            inorderIndexMap[inorder[i]] = i;
        }
        int postIndex = postorder.size() - 1;
        return constructTree(inorder, postorder, inorderIndexMap, postIndex, 0, inorder.size() - 1);
    }

    TreeNode* constructTree(vector<int>& inorder, vector<int>& postorder, unordered_map<int, int>& inorderIndexMap, int& postIndex, int inStart, int inEnd) {
        if (inStart > inEnd) return nullptr;
        int rootVal = postorder[postIndex--];
        TreeNode* root = new TreeNode(rootVal);
        int rootIndex = inorderIndexMap[rootVal];
        root->right = constructTree(inorder, postorder, inorderIndexMap, postIndex, rootIndex + 1, inEnd);
        root->left = constructTree(inorder, postorder, inorderIndexMap, postIndex, inStart, rootIndex - 1);
        return root;
    }

    // 層級遍歷並顯示 null 節點
    void levelOrderTraversal(TreeNode* root) {
        if (root == nullptr) return;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();
            if (node != nullptr) {
                cout << node->val << " ";
                q.push(node->left);
                q.push(node->right);
            } else {
                cout << "null ";
            }
        }
        cout << endl;
    }
};

// 用來解析用戶輸入的數列
vector<int> parseInput() {
    vector<int> result;
    string line;
    getline(cin, line);
    stringstream ss(line);
    int num;
    while (ss >> num) {
        result.push_back(num);
    }
    return result;
}

int main() {
    Solution sol;

    cout << "請輸入 inorder 序列（以空格分開）：";
    vector<int> inorder = parseInput();

    cout << "請輸入 postorder 序列（以空格分開）：";
    vector<int> postorder = parseInput();

    TreeNode* root = sol.buildTree(inorder, postorder);

    cout << "層級遍歷結果：";
    sol.levelOrderTraversal(root);
    return 0;
}
