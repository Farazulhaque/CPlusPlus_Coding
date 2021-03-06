#include <iostream>
using namespace std;

class BST
{

    struct node
    {
        int data;
        node *left;
        node *right;
    };

    node *root;

    node *makeEmpty(node *t)
    {
        if (t == NULL)
            return NULL;
        {
            makeEmpty(t->left);
            makeEmpty(t->right);
            delete t;
        }
        return NULL;
    }

    node *insert(int x, node *t)
    {
        if (t == NULL)
        {
            t = new node;
            t->data = x;
            t->left = t->right = NULL;
        }
        else if (x < t->data)
            t->left = insert(x, t->left);
        else if (x > t->data)
            t->right = insert(x, t->right);
        return t;
    }

    node *findMin(node *t)
    {
        if (t == NULL)
            return NULL;
        else if (t->left == NULL)
            return t;
        else
            return findMin(t->left);
    }

    node *findMax(node *t)
    {
        if (t == NULL)
            return NULL;
        else if (t->right == NULL)
            return t;
        else
            return findMax(t->right);
    }

    node *remove(int x, node *t)
    {
        node *temp;
        if (t == NULL)
            return NULL;
        else if (x < t->data)
            t->left = remove(x, t->left);
        else if (x > t->data)
            t->right = remove(x, t->right);
        else if (t->left && t->right)
        {
            temp = findMin(t->right);
            t->data = temp->data;
            t->right = remove(t->data, t->right);
        }
        else
        {
            temp = t;
            if (t->left == NULL)
                t = t->right;
            else if (t->right == NULL)
                t = t->left;
            delete temp;
        }

        return t;
    }

    void preorder(node *t)
    {
        if (t == NULL)
        {
            return;
        }
        cout << t->data << " ";
        preorder(t->left);
        preorder(t->right);
    }

    void postorder(node *t)
    {
        if (t == NULL)
        {
            return;
        }
        postorder(t->left);
        postorder(t->right);
        cout << t->data << " ";
    }

    void inorder(node *t)
    {
        if (t == NULL)
            return;
        inorder(t->left);
        cout << t->data << " ";
        inorder(t->right);
    }

    node *find(node *t, int x)
    {
        if (t == NULL)
            return NULL;
        else if (x < t->data)
            return find(t->left, x);
        else if (x > t->data)
            return find(t->right, x);
        else
            return t;
    }

public:
    BST()
    {
        root = NULL;
    }

    ~BST()
    {
        root = makeEmpty(root);
    }

    void insert(int x)
    {
        root = insert(x, root);
    }

    void remove(int x)
    {
        root = remove(x, root);
    }

    void display()
    {
        cout << "Inorder: ";
        inorder(root);
        cout << endl;

        cout << "Preorder: ";
        preorder(root);
        cout << endl;

        cout << "Postorder: ";
        postorder(root);
        cout << endl;
    }

    void search(int x)
    {
        root = find(root, x);
    }
};

int main()
{
    BST t;
    t.insert(10);
    t.insert(8);
    t.insert(23);
    t.insert(7);
    t.insert(35);
    t.insert(18);
    t.insert(2);
    t.insert(40);
    t.insert(1);
    t.insert(37);
    t.insert(19);
    t.insert(4);
    t.insert(17);

    t.display();
    return 0;
}