#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode {
    int val;
    struct TreeNode *left, *right;
} TreeNode;

TreeNode* createNode(int val) {
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
    newNode->val = val;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void inorderTraversal(TreeNode* root) {
    if (root == NULL)
        return;

    inorderTraversal(root->left);
    printf("%d", root->val);
    inorderTraversal(root->right);
}

void deleteNode(TreeNode* root, int key) {
    if (root == NULL)
        return;

    TreeNode* deepestNode = NULL;
    TreeNode* keyNode = NULL;

    TreeNode* queue[10000];
    int front = 0, rear = 0;
    queue[rear++] = root;

    while (front < rear) {
        TreeNode* temp = queue[front++];
        if (temp->val == key)
            keyNode = temp;

        if (temp->left != NULL) {
            queue[rear++] = temp->left;
            deepestNode = temp->left;
        }

        if (temp->right != NULL) {
            queue[rear++] = temp->right;
            deepestNode = temp->right;
        }
    }

    if (keyNode != NULL) {
        int x = keyNode->val;
        keyNode->val = deepestNode->val;
        free(deepestNode);
    }
}

int main() {
    char s[1000];
    scanf("%s", s);

    TreeNode* root = NULL;
    int i = 0;

    while (s[i] != '\0') {
        if (s[i] == 'N') {
            i++;
            continue;
        }

        int val = 0;
        while (s[i] >= '0' && s[i] <= '9') {
            val = val * 10 + (s[i] - '0');
            i++;
        }

        if (root == NULL) {
            root = createNode(val);
        } else {
            TreeNode* curr = root;
            TreeNode* parent = NULL;

            while (curr != NULL) {
                parent = curr;

                if (curr->left == NULL)
                    curr = curr->left;
                else
                    curr = curr->right;
            }

            if (parent->left == NULL)
                parent->left = createNode(val);
            else
                parent->right = createNode(val);
        }
    }

    int key;
    scanf("%d", &key);

    deleteNode(root, key);

    inorderTraversal(root);
    printf("\n");

    return 0;
}

