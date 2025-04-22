#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdint.h>
#include<malloc.h>
typedef struct {
	int value;
	void* previous_node;

}node_t;
typedef struct {
	int len;
	node_t* last_node;
}linked_list_t;
void add(linked_list_t* ll, int val) {
	node_t* new_node = malloc(sizeof(node_t));
	new_node->value = val;
	new_node->previous_node = ll->last_node;
	ll->last_node = new_node;
	ll->len++;
}
linked_list_t ll;
void main() {
	add(&ll, 1);
	add(&ll, 2);
	add(&ll, 3);
	add(&ll, 4);
	
}	