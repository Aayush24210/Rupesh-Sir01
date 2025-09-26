#include <iostream>
int main(){
 point p1,p2;
 cout<<"Enter the x & y of first point\n";
 cin>>p1.x>>p1.y;
 cout<<"Enter the x & y of secoond point\n";
 cin>>p2.x>>p2.y;
 float d;
 d=p1.distance(p2.x,p2.y);
 cout<<"distance between two points:"<<d;
}