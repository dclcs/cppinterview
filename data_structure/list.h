//
// Created by dcl_1 on 2020-8-22.
//

#ifndef CPPINTERVIEW_LIST_H
#define CPPINTERVIEW_LIST_H
#include <memory>
typedef struct node {
    int data;
    node* next;
}node;


/**
 * init list
 */
node* create(){
    int i = 0;
    node *head, *p, *q;
    int x = 0;
    head = (node*) malloc (sizeof(node));

    while (1){
        cout << "Please input the data: " ;
        scanf("%d", &x);
        if(x == 0) break;
        p = (node*) malloc(sizeof(node));
        p->data = x;
        if(++i == 1){
            head->next = p;
        }else{
            q->next = p;
        }
        q = p;
    }
    q->next = nullptr;
    return head;
}


int length(node *head){
    int len = 0;
    node *p;
    p = head->next;
    while(p){
        len ++;
        p = p->next;
    }
    return len;
}

node* search_node(node* head, int pos){
    node *p = head->next;
    if(pos < 0){
        cout << "incorrect position to search node!" << endl;
        return nullptr;
    }
    if(pos == 0){
        return head;
    }
    if(p == nullptr){
        cout << "link is empty" << endl;
        return nullptr;
    }

    while(--pos){
        if((p = p->next) == nullptr){
            cout << "incorrect position to search node!" << endl;
            break;
        }
    }
    return p;
}

node* insert_node(node* head, int pos, int data){
    node *item = nullptr;
    node *p;
    item = (node*) malloc(sizeof(node));
    item->data = data;
    if(pos == 0){
        head->next = item;
        return head;
    }
    p = search_node(head, pos);
    if(p != nullptr){
        item->next = p->next;
        p->next = item;
    }
    return head;
}


node* delete_node(node *head, int pos){
    node *item = NULL;
    node *p = head->next;
    if(p == nullptr){
        cout << "link is empty!" << endl;
        return nullptr;
    }

    p = search_node(head, pos - 1);
    if(p != nullptr && p->next != nullptr){
        item = p->next;
        p->next = item->next;
        delete item;
    }
    return head;
}
void print(node *head){
    node *p;
    int index = 0;
    if(head->next == nullptr){
        cout << "link is empty" << endl;
        return;
    }
    p = head->next;
    while(p != nullptr){
        printf("The %dthj node is : %d\n", ++index, p->data);
        p = p->next;
    }
}


node *reverse(node *head){
    node* p, *q, *r;
    if(head->next == nullptr) return head;
    p = head->next;
    q = p->next;
    p->next = nullptr;
    while(q != nullptr){
        r = q->next;
        q->next = p;
        p = q;
        q = r;
    }
    head->next = p;
    return head;
}



void test_list_opeartions(){
    node *head = create();
    cout << "Length: " << length(head) << endl;
    head = insert_node(head, 2, 5);
    cout << "insert 5 after 2th node : \n";
    print(head);
    head = delete_node(head, 2);
    printf("delete the 3th node: \n");
    print(head);
}
#endif //CPPINTERVIEW_LIST_H
