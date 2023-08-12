#include <stdio.h>

void printTree(int height) {
    if (height <= 0) {
        return;
    }
    
    for (int i = 0; i < height - 1; i++) {
        printf(" ");
    }
    
    for (int i = 0; i < (2 * height) - 1; i++) {
        printf("*");
    }
    
    printf("\n");
    
    printTree(height - 1);
}

int main() {
    int treeHeight = 5; // Adjust the tree height as per your requirement
    
    printTree(treeHeight);
    
    return 0;
}
