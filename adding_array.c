#include <stdlib.h>
#include <stdio.h>

struct node{
    int data;
    struct node *link;
};

int main() {
    struct node *head = NULL;
    struct node *temp = NULL;
    head = (struct node*) malloc(sizeof(struct node));
    temp = (struct node*) malloc(sizeof(struct node));
    
    int arr[] = {120,6,8,35,12,23,24,85,100,90};
    printf("List:" );
    for (int i = 0; i<(sizeof(arr)/sizeof(arr[0])); i++){
        temp->data = arr[i+1];
        temp->link = NULL;
        
        head->data = arr[i];
        printf("%d ", head->data);
        head->link = temp;
        head = temp;
    }
    
    return 0;
}
