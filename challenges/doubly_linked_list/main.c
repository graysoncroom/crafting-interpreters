#include <stdio.h>
#include "doubly_linked_list.h"

int main(int argc, char **argv) {
	insert("Primero");
	insert("Segundo");
	insert("Tercero");
	insert("Cuarto");
	insert("Quinto");
	insert("Sexto");
	insert("Séptimo");
	insert("Noveno");
	insert("Décimo");

	for (struct DoublyLinkedList *cnode = head; cnode != NULL; cnode = cnode->next) {
		printf("Node's data: %s\n", cnode->data);
	}
}

