
#include <string>
#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
    stack s;
    string op;
    create_empty(s);
    Elem x;
    while(true)
    {
        cout << "op (push,pop,top,exit):";
        cin >> op;
        if(op=="push")
        {
            cout << "Inserisci un elemento da mettere" << endl;
            cin >> x;
            push(s,x);
            cout << "Inserito!" << endl;
        }
        else if(op=="pop")
        {
            pop(s);
        }
        else if(op=="top")
        {
            cout << "Il primo elemento e' " << top(s);
        }
        else if(op == "exit")
            break;
        else
            cout << "Comando sconosciuto\n";
    }
    cout << "Fine \n";

}
