#include <string.h>
#include <stdlib.h>

#include "doubly_linked_list.h"

void insert(char *str) {
	struct DoublyLinkedList *nodeWrapperForStr = (struct DoublyLinkedList*)malloc(sizeof(struct DoublyLinkedList));
	//copy str into nodeWrapperForStr->data
	nodeWrapperForStr->data = (char*)malloc(sizeof(char)*strlen(str));
	for (int i = 0; (nodeWrapperForStr->data[i] = str[i]) != '\0'; i++); 

	if (!head) {
		head = nodeWrapperForStr;
		head->prev = NULL;
		head->next = NULL;
	} else {
		struct DoublyLinkedList *cnode = head;
		while (cnode->next != NULL) cnode = cnode->next;
		cnode->next = nodeWrapperForStr;
		nodeWrapperForStr->prev = cnode;
	}
}

struct DoublyLinkedList* find(char *str) {
	
}

void delete(char *str) {
	
}
