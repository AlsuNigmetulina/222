#include <iostream>
#include "note.h"
#include <cstring>
using namespace std;

int main()
{
Notebook a;
a.get_model();
cout << a.get_model() << endl;
a.get_memory();
cout << a.get_memory() << endl;
a.get_cpu();
cout << a.get_cpu() << endl;
a.print();
Notebook b;
string model;
int memory;
int cpu;
cout << "\n";
cout << "INPUT MODEL:" << endl;
cin >> model;
cout << "INPUT MEMORY:" << endl;
cin >> memory;
cout << "INPUT CPU:" << endl;
cin >> cpu;
b.set_model(model);
b.set_memory(memory);
b.set_cpu(cpu);
b.print();
cout << "\n";
cout << "COPY\n";
Notebook bcopy(b);
bcopy.print();
cout << "\n";
cout << "The end of the program :)";
Notebook z("mem", 5, 6);
cout << "\n";
++z;
cout << z;
}

