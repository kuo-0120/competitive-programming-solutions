#include <iostream>
#include <vector>
#include <unordered_map>
#include <sstream>
using namespace std;

// 定義二叉樹節點結構
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
    // 建立二叉樹的遞迴輔助函數
    TreeNode* buildTreeHelper(vector<int>& preorder, int preStart, int preEnd,
                               vector<int>& inorder, int inStart, int inEnd,
                               unordered_map<int, int>& mp) {
        // 終止條件：若範圍無效，返回 nullptr
        if (preStart > preEnd || inStart > inEnd)
            return nullptr;

        // 取得根節點在中序遍歷中的位置
        int inRoot = mp[preorder[preStart]];  // 根節點的值對應的中序索引
        int inleft = inRoot - inStart;  // 左子樹的節點數目

        // 創建當前的根節點
        TreeNode* root = new TreeNode(preorder[preStart]);

        // 遞迴建造左子樹
        root->left = buildTreeHelper(preorder, preStart + 1, preStart + inleft,
                                      inorder, inStart, inRoot - 1, mp);

        // 遞迴建造右子樹
        root->right = buildTreeHelper(preorder, preStart + inleft + 1, preEnd,
                                       inorder, inRoot + 1, inEnd, mp);

        // 返回當前的根節點
        return root;
    }

    // 主函數，構建二叉樹
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        // 使用哈希表存儲中序遍歷數據中每個值的索引，以加速查詢
        unordered_map<int, int> mp;
        for (int i = 0; i < inorder.size(); i++) {
            mp[inorder[i]] = i;  // 將中序遍歷的元素與其索引對應起來
        }

        // 呼叫輔助函數來構建二叉樹
        TreeNode* root = buildTreeHelper(preorder, 0, preorder.size() - 1,
                                          inorder, 0, inorder.size() - 1, mp);

        // 返回構建好的樹的根節點
        return root;
    }
};

// 中序遍歷打印樹結構，用來驗證樹是否正確構建
void inorderTraversal(TreeNode* root) {
    if (root == nullptr) return;
    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}

// 用來讀取以空格分隔的數字輸入
vector<int> readArray() {
    vector<int> arr;
    string line;
    getline(cin, line); // 讀取一行
    stringstream ss(line);
    int num;
    while (ss >> num) {
        arr.push_back(num);
    }
    return arr;
}

int main() {
    cout << "Enter the preorder array (space-separated): ";
    vector<int> preorder = readArray();  // 讀取前序遍歷數組

    cout << "Enter the inorder array (space-separated): ";
    vector<int> inorder = readArray();  // 讀取中序遍歷數組

    // 創建 Solution 類的對象，並調用 buildTree 方法
    Solution sol;
    TreeNode* root = sol.buildTree(preorder, inorder);

    // 用中序遍歷檢查構建的二叉樹
    cout << "Inorder Traversal of the constructed tree: ";
    inorderTraversal(root);  // 輸出樹的中序遍歷結果
    cout << endl;

    return 0;
}
