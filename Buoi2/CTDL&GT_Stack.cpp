#include <bits/stdc++.h>
using namespace std;
#define Max 100
struct Node
{
    int data;
    Node *pNext;
};
struct Stack
{
    Node *pTop;
};
void CreateStack(Stack &s)
{
    s.pTop = NULL;
}
Node *CreateNode(int x)
{
    Node *p = new Node;
    if (p == NULL)
    {
        cout << "Khong du bo nho de cap phat";
        return NULL;
    }
    p->data = x;
    p->pNext = NULL;
    return p;
}
void Push(Stack &s, Node *p)
{
    if (s.pTop == NULL)
    {
        s.pTop = p;
    }
    else
    {
        p->pNext = s.pTop;
        s.pTop = p;
    }
}
int Pop(Stack &s)
{
    if (s.pTop == NULL)
    {
        return -1;
    }
    else
    {
        Node *p = s.pTop;
        s.pTop = s.pTop->pNext;
        int x = p->data;
        delete p;
        return x;
    }
}
void Input(Stack &s)
{
    int n;
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "Nhap phan tu thu " << i << ": ";
        cin >> x;
        Node *p = CreateNode(x);
        Push(s, p);
    }
}
void Output(Stack s)
{
    while (s.pTop != NULL)
    {
        cout << Pop(s) << " ";
    }
}
int main()
{
    Stack s;
    CreateStack(s);
    Input(s);
    cout << "Mang sau khi sap xep la: ";
    Output(s);
    return 0;
}
