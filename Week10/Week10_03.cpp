#include <iostream>
using namespace std;

class Circle {
public:
    int r;
    double getArea();
    Circle ();
    Circle (int r);
    ~Circle();
    double getArea ();
};

Circle::Circle():Circle(1){
    std::cout<<"Circle()"<<std::endl;
}
Circle:: Circle(int r) : r(r) {
    cout << "C(" << r << ")" << endl;
}
Circle::~Circle(){
    std::cout<<"~Circle(" << r << ")"<<std::endl;
}
double Circle::getArea(){return 3.14*r*r;}

int foo(){ 
    cout << "=> start foo()" << endl;
    Circle fooDonut(10);
    Circle fooPizza(20);
    hDonut = new Circle (30);
    cout << "=> end foo()" << endl;
    return 0;
}
int main(){
    Circle pizza(10);
    std::cout<<"---> start main() -----"<<std::endl;
    Circle mainDonut(1000);
   
    hPizza = new Circle();
    delete hPizza;

    Circle mainPizza(2000);
    foo();
    delete hDonut;
    std::cout<<"---> end main()------"<<endl;
}

Circle gooDonut(100);
Circle gooPizza(200);
Circle *hDonut;
Circle *hPizza;