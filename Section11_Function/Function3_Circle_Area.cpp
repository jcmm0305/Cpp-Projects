 #include<iostream>
 using namespace std;

 const double pi {3.1416};
 

 double calc_area_circle(double r){
    return pi*r*r;
 }

 double calc_volume_cylinder(double r,double h){
    //return pi*r*r*h;
    return calc_area_circle(r)*h;
 }
 

 void area_circle(){
    double radius {};
    cout<<"\nEnter the radius of a circle: ";
    cin>>radius;

    cout<<"The area of a circle withh radius "<<radius<<" is "<<calc_area_circle(radius)<<endl;
 }

 void volume_cylinder(){
    double radius {};
    double height {};
    cout<<"\nEnter the radius of the cylinder: ";
    cin>>radius;
    cout<<"\nEnter the height of the cylinder: ";
    cin>>height;

    cout<<"The volume of a cylinder with radius "<<radius<<" and height "<<height<<" is "<<calc_volume_cylinder(radius,height)<<endl;
 }
 
 int main (){
    area_circle();
    volume_cylinder();
    return 0;


 }