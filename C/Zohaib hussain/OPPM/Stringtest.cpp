#include<iostream>
#include<string>
#include<cStdio>
#include<cstring>
using namespace std;
// In c++ string is a special class that is created to make string handling easy.
//The memory where the cahracters of a string saved is a char star buffer which is dynamiclay allocated. 
//To optimize the memory the size of the buffer is expanded on the basisi of need .
//a cpp string when initialized Contains 15 memory locations at the beggning . 
//If a bigger string is saved in to this buffer the memory is reallocated to a bigger size.

//       *DECLARAION AND INITIALIZATION OF STRING*
class StringExample {
        int main(){
            string s; // Default initialization
            cout<<s.size()<<endl; // Output: 0
                  string s2(10,'a'); // Initialize with 10 'a' characters
            string s1(s);
            cout<<s2<<endl;       
            cout<<s2<<endl; 
            //user input string
            cin>>s;
            cout<<s<<endl;
            //full pharse input
            getline(cin,s);
            cout<<s<<endl;
            s1="Hello";
            s2="hell";
            cout<<s1>s2<<endl;
        cout<<s1.compare(s2)<<endl; //comparing two strings
        cout
        cout<<s1.find("a")<<endl; //finding a character in a string
        }
};
