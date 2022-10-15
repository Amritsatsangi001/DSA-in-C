//Traversalin Tree by different methods
#include <stdio.h>
#include<stdlib.h>

int main() {
    struct node{
        int data;
        struct node*left;
        struct node*right;
    };
    struct node*create(int val){
        struct node*p=(struct node*)malloc(sizeof(struct node));
        p->data=val;
        p->left=NULL;
        p->right=NULL;
        return(p);
    };
    struct node*left(int val,struct node*root){
        struct node*p=create(val);
        root->left=p;
        
    };
    struct node*right(int val,struct node*root){
        struct node*p=create(val);
        root->right=p;
    };
    void preorder(struct node*root){
        if (root==NULL)
        return;
        printf("%d->",root->data);
        preorder(root->left);
        preorder(root->right);
        
    }
    void inorder(struct node*root){
        if (root==NULL)
        return;
        inorder(root->left);
        printf("%d->",root->data);
        inorder(root->right);
    }
     void postorder(struct node*root){
        if (root==NULL)
        return;

        postorder(root->left);
        postorder(root->right);
     printf("%d->",root->data);
    }
    struct node*root=create(1);
    left(2,root);
    right(6,root);
    preorder(root);
    inorder(root);
    postorder(root);
    
    
    
    
    
    

    return 0;
