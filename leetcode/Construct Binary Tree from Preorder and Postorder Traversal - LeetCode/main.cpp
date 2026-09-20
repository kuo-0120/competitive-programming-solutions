#include <iostream>
#include <vector>
#include <unordered_map>
#include <sstream>
#include <queue>

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
    vector<int> x2pre, x2post;  // 用來存儲 preorder 和 postorder 序列中元素對應的索引，以便快速查找

    // 遞迴函式，用來根據 preorder 和 postorder 重建二叉樹
    TreeNode* f(vector<int>& preorder, vector<int>& postorder, int preS, int postS, int postE) {
        if (postS > postE) return NULL;  // 終止條件：如果 postS 超過 postE，表示子樹為空
        TreeNode* root = new TreeNode(preorder[preS]);  // 創建根節點，根節點在 preorder 中的當前位置

        if (postS == postE) return root;  // 如果只有一個節點，直接返回該節點

        // 確定左子樹的根節點並在 postorder 中找到它的位置
        int lRoot = preorder[preS + 1];  // 左子樹的根節點是 preorder 中的下一個元素
        int lrPostIdx = x2post[lRoot];   // 在 postorder 中查找左子樹根節點的位置

        // 遞迴構建左子樹和右子樹
        root->left = f(preorder, postorder, preS + 1, postS, lrPostIdx);  // 左子樹
        root->right = f(preorder, postorder, x2pre[postorder[postE - 1]], lrPostIdx + 1, postE - 1);  // 右子樹

        return root;  // 返回根節點
    }

    // 根據 preorder 和 postorder 兩個序列構建二叉樹
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        const int n = preorder.size();  // 記錄序列的長度
        x2pre.assign(n + 1, -1);  // 初始化 preorder 索引映射表
        x2post.assign(n + 1, -1);  // 初始化 postorder 索引映射表

        // 記錄 preorder 和 postorder 中每個元素的索引
        for (int i = 0; i < n; i++) {
            x2pre[preorder[i]] = i;  // 在 preorder 中存儲每個元素的索引
            x2post[postorder[i]] = i;  // 在 postorder 中存儲每個元素的索引
        }

        return f(preorder, postorder, 0, 0, n - 1);  // 呼叫遞迴函式構建二叉樹
    }

    // 層級遍歷並輸出樹的節點
    void levelOrderTraversal(TreeNode* root) {
        if (root == nullptr) return;
        queue<TreeNode*> q;
        q.push(root);
        bool first = true;  // 用來標記是否是第一個元素

        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();

            // 輸出節點值，處理第一個元素不加空格，之後每個節點值加空格
            if (!first) {
                cout << " ";  // 不是第一個元素，輸出空格
            }
            first = false;  // 一旦輸出過第一個元素，將 first 設為 false

            cout << node->val;  // 輸出節點的值

            if (node->left) q.push(node->left);  // 把左子樹節點加入隊列
            if (node->right) q.push(node->right);  // 把右子樹節點加入隊列
        }
        cout << endl;  // 最後換行
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

    // 輸入 preorder 序列
    cout << "請輸入 preorder 序列（以空格分開）：";
    vector<int> preorder = parseInput();

    // 輸入 postorder 序列
    cout << "請輸入 postorder 序列（以空格分開）：";
    vector<int> postorder = parseInput();

    // 構建二叉樹
    TreeNode* root = sol.constructFromPrePost(preorder, postorder);

    // 輸出層級遍歷結果
    cout << "層級遍歷結果：";
    sol.levelOrderTraversal(root);

    return 0;
}
