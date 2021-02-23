//gcc 7.4.0


#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

//declares a struct type and related attributes
struct binaryTree{
    int data;
    struct binaryTree* left;
    struct binaryTree* right;
};

// specifies a type definition so we dont have to say struct binaryTree everytime
typedef struct binaryTree binaryTree;

//add data function
binaryTree* adddata(binaryTree* tree, int num){
    // checks to make sure the pointer that was passed is not NULL
    if(tree == NULL)
    {
        // creates a temp binaryTree pointer to set our allocated memory to and the returns it
        // also initializes the left and right binaryTree Pointers
        binaryTree* a;
        a = malloc(sizeof(binaryTree));
        a->data=num;
        a->left = NULL;
        a->right = NULL;
        return a;
    }
    //if there is data present in the current tree it access the next free spot based on numeric 
    //order. left being less than the current value and right being greater than the current value
    else if(num<tree->data){
        tree->left = adddata(tree->left,num);
    }else if(num>tree->data){
        tree->right = adddata(tree->right,num);
    }
    // if the original passed pointer was NULL and then was set it returns the location of the set
    // binaryTree value;
    return tree;
}

//print the tree in numerical order
bool treePrint(binaryTree* tree){
    //if the current pointer is not set to a binaryTree Struct it returns
    if(tree==NULL){
        return false;
    }
    //we now know there is data in the tree since tree was != NULL
    //the left most values are always less then current value or anything to the right
    //so we check to see if there's a value to the left
    //  -if there is we traverse left
    //  -if there is not then we print data because it's less then the tree to the right
    //  -then we traverse right and check and the value will be printed if there is nothing to the left of it's currant value
    if(tree->left!=NULL){
        treePrint(tree->left);        
    }
    printf("%d ",tree->data);
    if(tree->right!=NULL){
        treePrint(tree->right);
    }
    //returns true when a value has been printed and a base case is reached
    return true;
}

//prints out the tree by the order in which the functions are called 
bool accessOrder(binaryTree* tree){
    if(tree==NULL){
        return false;
    }
    printf("%d ",tree->data);    

    if(tree->left!=NULL){
        treePrint(tree->left);        
    }
    if(tree->right!=NULL){
        treePrint(tree->right);
    }
        return true;
}

//we will need a function to cleanup the memory we allocated but we are not told to do this.
bool freeTree(binaryTree* tree){

}


int main(){

//tree root has to be set to NULL or segfault will occur
binaryTree *tree = NULL;

        //      5
        //     / \
        //   3     7
        //  / \   / \
        // 2   4 6   8

//set root of tree to memory location and add value
tree = adddata(tree,5);

FILE* fp;
fp = fopen("INPUT.TXT","r");
if(fp == NULL){
    printf("the file could not open correctly.\n\r");
}
//create a cariable to be read from document into num variable
//then create the base tree and add the number to the tree
int num = 0;
fscanf(fp,"%d", &num);
tree = adddata(tree,num);

//check for EOF and scan in a value and the add it to the tree until EOF
while(!feof(fp)){
    fscanf(fp,"%d", &num);
    adddata(tree,num);
}//close the filestream
fclose(fp);

// printing the tree in numerical order and make sure it's on it's own line
treePrint(tree);
printf("\n\r");

return 0;
}
