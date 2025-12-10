//write a c++ program to demonstrate dynamic polymorphism and ydnamic dispatch
#include<iostream>
using namespace std;
 
class appliance {
    public:
        void start(){
            cout<<"Generic appliance\n";
        }
};

class Toaster :public appliance {
    public :
    void start(){
        cout<<"Toaster calls heating up\n";
    }
};

class Oven :public appliance{
    // void start(){
    //     cout<<"Oven !!";
    // }
    Oven(){
        cout<<"Oven created"; 
    }
    ~Oven(){
        cout<<"Oven Destroyed";
    }
};

int main(){

    
}



/*In c++ there is a table of pointer called (v) table.
This table is present in every generation of class to Implement dynamic polymophism.
Each table for each class contains the pointers to the relevent function which shoud be called during the dynamic dispatch.
*/


 