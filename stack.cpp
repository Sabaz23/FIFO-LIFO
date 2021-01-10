/*
STACK e PILA
LIFO (Last in First out)
operazioni:
- create_empty (crea lista vuota)
- push (inserimento)
- pop (estrazione)
- top (accedo all'unico elem visibile)
- bool is_empty
opzionali:
- size
- is_member (check del membro)
--------------------------
QUEUE O CODA
FIFO (First in First Out)
-create_empty
-enqueue(inserisci in coda)
-dequeue(elimina testa della coda)
-front(prossimo elemento della coda)
-is_empty
opzionali:
- size
- is_member (check del membro)
*/
#include <iostream>
#include "stack.h"


//LIFO ---------------------------------------------

void create_empty(stack& s)
{
    s=nullptr;
}

bool is_empty(const stack& s)
{
    return (s==nullptr);
}

//Inserimento in testa
void push(stack& s, Elem e)
{
    cell *aux;
    aux = new cell;
    aux->head = e;
    aux->next = s; // la prima testa passa in seconda posizione
    s=aux;
}

void pop(stack& s)
{
    if(is_empty(s))
    {
        std::string st= "Pop: empty stack";
        throw st;
    }
    stack tmp = s; //Se non c'� temp = MEMORY LEAK
    s = s->next;
    delete tmp;
}

Elem top(const stack& s)
{
    if(is_empty(s))
    {
        std::string st = "Top: empty stack";
        throw s;
    }
    return(s->head);
}

//FIFO --------------------------------------------

void create_empty(queue &q)
{
    q.head = nullptr;
    q.tail = nullptr;
}


bool isEmpty(queue &q)
{
    return q.tail==nullptr; //oppure q.head
}


void enqueue(queue& q, Elem e){
    cell * aux;
    aux = new cell;
    aux->content = e;
    aux->next = nullptr;
    if(isEmpty(q)){ //Se la lista e' vuota
        q.head = aux;
        q.tail = aux;
    }
    else //inserisco in fondo
    {
        q.tail->next = aux;
        q.tail = aux;
    }
}

void dequeue(queue &q){
    if(isEmpty(q)){
        string st="errore empty queue";
        throw st;
    }
    cell *temp = q.head;
    q.head = q.head->next;
    delete temp;
    if(q.head == nullptr) q.tail = nullptr;
}

Elem front(queue& q)
{
    if(isEmpty(q)){
        string st="errore empty queue";
        throw st;
    }
    return q.head->content;
}

Elem back(queue& q)
{
    if(isEmpty(q)){
        string st="errore empty queue";
        throw st;
    }
    return q.tail->content;
}