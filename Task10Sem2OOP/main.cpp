#include "Classes.h"


int main()
{
    Student a("Bondar", "Fedor", "Alexeevich", 18, true);
    Student b("Mishin", "Alexandr", "Alexeevich", 19, false);
    Boss c("Zhdanov", "Maksim", "Mikhailovich", 34, 92);
    Student d("Petrov", "Alexey", "Platonovich", 22, false);
    a.print();
    b.print();
    c.print();
    d.print();

    return 0;
}