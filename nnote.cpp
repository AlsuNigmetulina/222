#include <iostream>
#include "note.h"
#include <cstring>
using namespace std;

 Notebook::Notebook() {
    model = "none";
    memory = 0;
    cpu = 0;
    }
Notebook::Notebook(string model1, int memory1, int cpu1) {
    model = model1;
    if (memory1 > 0){
    memory = memory1;}
    if (cpu1 > 0){
    cpu = cpu1;}
    }
Notebook::Notebook(const Notebook&n){
    model = n.model;
    memory = n.memory;
    cpu = n.cpu;}

void Notebook::set_model(string model2)
{
    model = model2;
}
string Notebook::get_model() const
{
    return model;
}
void Notebook::set_memory(int memory2)
{
    if (memory2 > 0) {
    memory = memory2;}
}
int Notebook::get_memory() const
{

    return memory;

}
void Notebook::set_cpu(int cpu2)
{
    if (cpu2 > 0){
    cpu = cpu2;
    }
}
int Notebook::get_cpu() const
{

    return cpu;

}
void Notebook::print() const
{
    cout << "Function print: ";
    cout << "model = " << model << ", ";
    cout << "memory = " << memory << ", ";
    cout << "cpu = " << cpu << ". ";
}


Notebook Notebook::operator= (Notebook &n)
{
    if (&n == this)
    {
        return *this;
    }
    return Notebook(this->model = n.model,this->memory = n.memory, this->cpu = n.cpu);
}


Notebook Notebook::operator++ ()
{
    return Notebook("++model", ++this->memory, ++this->cpu);
}


Notebook Notebook::operator++ (int)
{
    return Notebook("model++", this->memory++, this->cpu++);
}


Notebook Notebook::operator-- ()
{
    return Notebook("--model", --this->memory, --this->cpu);
}


Notebook Notebook::operator-- (int)
{
    return Notebook("model--", this->memory--, this->cpu--);
}


 bool Notebook::operator< (const Notebook &n) const
{
    double  m1(memory + cpu);
    double m2(n.memory + n.cpu);
        return (m1<m2) ;
}


 bool Notebook::operator> (const Notebook &n) const
{
    double  m1(memory + cpu);
    double m2(n.memory + n.cpu);
        return (m1>m2) ;
}


 bool Notebook::operator== (const Notebook &n) const
{
    if ((memory == n.memory) && (cpu == n.cpu))
    {
        return true;
    }
    else return false;
}


 bool Notebook::operator!= (const Notebook &n) const
{
            return !((memory==n.memory) ||(cpu==n.cpu));
}


ostream& operator<< (ostream &h, const Notebook &n)
{
    h << n.model << "," <<  n.memory << "," << n.cpu;
    return h;
}


istream& operator>> (istream &h, Notebook &n)
{
    std::cout << "Input notebook";
    std::cout << "MODEL";
    std::cin >> n.model;
    std::cout << "MEMORY";
    std::cin >> n.memory;
    std::cout << "CPU";
    std::cin >> n.cpu;
    std::cout << endl;
    return h;
}



 bool Notebook::operator<= (const Notebook &n) const
{
    double  m1(memory + cpu);
    double m2(n.memory + n.cpu);
        return (m1<=m2) ;
}



 bool Notebook::operator>= (const Notebook &n) const
{
    double  m1(memory + cpu);
    double m2(n.memory + n.cpu);
        return (m1>=m2) ;
}
