#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// DataNode structure using typedef
typedef struct DataNode
{
  char*				data;
  struct DataNode*	next;
} DataNode;

typedef struct SinglyLinkedList
{
	unsigned int count;
	DataNode* head;
}	SinglyLinkedList; 

DataNode* createDataNode(char* data)
{
	// Allocate memory for the node
	DataNode* newNode = (DataNode*)malloc(sizeof(DataNode));

	// Allocate memory for the string and copy the data
	newNode->data = (char*)malloc(strlen(data) + 1);
	strcpy(newNode->data, data);

	newNode->next = NULL;
	return newNode;
}

// Create a new SinglyLinkedList
SinglyLinkedList* createSinglyLinkedList() {
    return calloc(1, sizeof(SinglyLinkedList));
}

// Traverse the list and print data
void traverse(SinglyLinkedList* list) {
    if (list->count == 0)
	{
        printf("This is an empty list.\n");
        return;
    }
    struct DataNode* pointer = list->head;
    while (pointer->next != NULL)
	{
		printf("%s -> ", pointer->data);
		pointer = pointer->next;
    }
    printf("%s\n", pointer->data);
}

// Insert a new node at the end of the list
void insert_last(SinglyLinkedList* list, char* data) {
    struct DataNode* pNew = createDataNode(data);
	DataNode	*cur = list->head;
    if (list->count == 0) {
        list->head = pNew;
    } else {
		while (cur->next != NULL)
			cur = cur->next;
		cur->next = pNew;
		cur->next->next = NULL;
    }
    list->count++;
}

int main() {
    SinglyLinkedList* mylist = createSinglyLinkedList();
    int n;
    char condition;
    char data[101];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf(" %c: %[^\n]s", &condition, data);

        if (condition == 'F') {
            ;
        } else if (condition == 'L') {
            insert_last(mylist, data);
        } else if (condition == 'D') {
            ;
        } else {
            printf("Invalid Condition!\n");
        }
    }

    traverse(mylist);
    DataNode	*current = mylist->head;
    while (current != NULL) {
        free(current->data);
        DataNode* temp = current;
        current = current->next;
        free(temp);
    }
    free(mylist);
    return 0;
}
