#include <iostream>
#include "human.h"
#include <string>
using  namespace std;

int main() {
    int lhand=1;
    int rhand=2;
    string name1;
    string name2;
    string id="21se068";

    human person1(lhand, rhand, name1, name2, id);
    person1.display();

    string name="Bobir";
    person1.setFirstName(name);
    cout << "\n"<< "After name was set"<< "\n";
    person1.display();


    return 0;
}
