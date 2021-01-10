#ifndef stack_h
#define stack_h

typedef int Elem;

struct cell{
    Elem content;
    cell* next;
};

typedef cell* stack;

void create_empty(stack&);
void push(stack&, Elem);
void pop(stack&); //Si può fare anche Elem pop e restituire l'elemento trovato
Elem top(const stack&); //Sola lettura all'elemento in cima alla pila

bool is_empty(const stack&);


//FIFO ------------------

//DEFINIZIONE QUEUE

struct queue{
    cell *head;
    cell *tail;
}


void create_empty(queue&);
void enqueue(queue&, Elem);
void dequeue(queue&);
Elem front(queue&)
Elem back(queue&)

bool isEmpty(const queue&);


#endif // stack_h
