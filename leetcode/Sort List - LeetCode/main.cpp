#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// ListNode 定義
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// 解法類別
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (!head || !head->next) return head;

        vector<ListNode*> nodes;
        ListNode* curr = head;
        while (curr) {
            nodes.push_back(curr);
            curr = curr->next;
        }

        sort(nodes.begin(), nodes.end(), [](ListNode* a, ListNode* b) {
            return a->val < b->val;
        });

        for (int i = 0; i < nodes.size() - 1; ++i) {
            nodes[i]->next = nodes[i + 1];
        }
        nodes.back()->next = nullptr;

        return nodes[0];
    }
};

// 建立 linked list
ListNode* createList(const vector<int>& vals) {
    if (vals.empty()) return nullptr;
    ListNode* head = new ListNode(vals[0]);
    ListNode* curr = head;
    for (int i = 1; i < vals.size(); ++i) {
        curr->next = new ListNode(vals[i]);
        curr = curr->next;
    }
    return head;
}

// 印出 linked list
void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

// 主程式
int main() {
    cout << "請輸入節點數值（用空格分隔，Enter 結束）: ";

    vector<int> data;
    int x;
    while (cin >> x) {  // 持續讀取直到遇到 EOF 或非數字
        data.push_back(x);
    }

    ListNode* head = createList(data);

    cout << "原始 linked list: ";
    printList(head);

    Solution sol;
    ListNode* sorted = sol.sortList(head);

    cout << "排序後 linked list: ";
    printList(sorted);

    return 0;
}
