#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right)
        : val(x), left(left), right(right) {}
};

class Solution
{
public:
    void myrightSideView(TreeNode *root, vector<int> &ans, queue<int> &q)
    {
        cout << "dscsdc";
        while (!q.empty())
        {
            
        }
    }

    vector<int> rightSideView(TreeNode *root)
    {
        vector<int> ans;
        queue<int> q;

        myrightSideView(root, ans, q);

        return ans;
    }
};

int main()
{

    // [1,2,3,4,null,null,null,5]

    TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);

    root->left->left->left = new TreeNode(5);

    Solution obj;

    vector<int> ans = obj.rightSideView(root);

    for (int x : ans)
    {
        // cout << x << " ";
    }

    return 0;
}