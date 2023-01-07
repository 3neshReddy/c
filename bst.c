#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node* left;
  struct node* right;
};
struct node * root = NULL;
void inorderTraversal(struct node* root) {
  if (root == NULL) return;
  inorderTraversal(root->left);
  printf("%d ->", root->data);
  inorderTraversal(root->right);
}


void preorderTraversal(struct node* root) {
  if (root == NULL) return;
  printf("%d ->", root->data);
  preorderTraversal(root->left);
  preorderTraversal(root->right);
}

void postorderTraversal(struct node* root) {
  if (root == NULL) return;
  postorderTraversal(root->left);
  postorderTraversal(root->right);
  printf("%d ->", root->data);
}

void insert(int data) {
   struct node *i = malloc(sizeof(struct node));
   struct node *current;
   struct node *parent;

   i->data = data;
   i->left = NULL;
   i->right = NULL;

   //if tree is empty
   if(root == NULL) {
      root = i;
   }
   else {
      current = root;
      parent = NULL;

      while(1) {
         parent = current;

         if(data < parent->data) {
            current = current->left;
            //insert to the left

            if(current == NULL) {
               parent->left = i;
               return;
            }
         }  //go to right of the tree
         else {
            current = current->right;

            //insert to the right
            if(current == NULL) {
               parent->right = i;
               return;
            }
         }
      }
   }
}

struct node* search(int data){
   struct node *current = root;
   printf("Visiting elements: ");
   while(current->data != data){

      if(current != NULL) {
         printf("%d ",current->data);

         //go to left tree
         if(current->data > data){
            current = current->left;
         }  //else go to right tree
         else {
            current = current->right;
         }

         //not found
         if(current == NULL){
            return NULL;
         }
      }
   }

   return current->data;
}

int main() {


  insert(5);
  insert(10);
  insert(12);
  insert(6);
  insert(3);

  printf("Inorder traversal \n");
  inorderTraversal(root);

  printf("\nPreorder traversal \n");
  preorderTraversal(root);

  printf("\nPostorder traversal \n");
  postorderTraversal(root);

int x = search(3);
  printf("%d",x);
}
