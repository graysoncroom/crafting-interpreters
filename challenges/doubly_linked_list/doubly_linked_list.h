struct DoublyLinkedList {
	char *data;
	struct DoublyLinkedList *prev;
	struct DoublyLinkedList *next;
} *head;

void insert(char*);
struct DoublyLinkedList* find(char*);
void delete(char*);
