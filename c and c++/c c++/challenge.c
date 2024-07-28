#include<stdio.h>
#include<stdlib.h>
 /*  tree node structure */
struct node
{
  int data;
  struct node *left;
  struct node *right;
};
 
/* function prints all key */
void Print(struct node *root, int k1, int k2)
{
   if ( NULL == root )
      return;
   if ( k1 < root->data )
     Print(root->left, k1, k2);
   if ( k1 <= root->data && k2 >= root->data )
     printf("%d ", root->data );

   Print(root->right, k1, k2);
}
 
/* function to create new binary tree node*/
struct node* newNode(int data)
{
  struct node *temp = malloc(sizeof(struct node));
  temp->data = data;
  temp->left = NULL;
  temp->right = NULL;
 
  return temp;
}
 
/* Driver function to test above  */
int main()
{
  struct node *root = malloc(sizeof(struct node));
  int k1 = 30, k2 = 45;
 
  /* Constructing tree  */
  root = newNode(35);
  root->left = newNode(15);
  root->right = newNode(38);
  root->left->left = newNode(18);
  root->left->right = newNode(40);
 
  Print(root, k1, k2);
 
  getchar();
  return 0;
}