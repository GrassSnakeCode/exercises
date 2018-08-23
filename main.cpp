#include <iostream>
#define PI 3.14 // in this line I define what PI is
using namespace std;
// const double PI 3.14; this line is the same as the line
void InitMenuBox()
{
    cout << " Choice options : " << endl;
    cout<<endl;
    cout << " 1. circle field " << endl;
    cout << " 2. square field  " << endl;
    cout << " 3. rectangle field " << endl;
    cout << " 4. triangle field " << endl;
    cout << " 5. your mother field " << endl;
}
double circle_field(double a)
{
    double result = PI * a * a;

    cout << "the field of the circle is : " << result << endl << endl;

    return result;

}

double square_field(double a)
{
    double result = 2 * a;

    cout << "the field of the square is : " << result << endl << endl;

    return result;

}

double rectangle_field(double a,double b)
{
    double result = b * a;

    cout << "the field of the rectangle is : " << result << endl << endl;

    return result;

}

double triagnle_field(double a,double b)
{
    double result = a * b * 0.5;

    cout << "the field of the triangle is : " << result << endl << endl;

    return result;

}

/*void yourmother_field()
{

    cout << " the number is too big, buy a bigger monitor ";
}
*/
void InitDecysionMenu(int choice)
{
    int a,b;
    switch(choice)
    {
        case 1 :
            cout << " enter the radius of the circle " << endl;
            cin >> a;
            circle_field(a);
            break;
        case 2 :
            cout << " enter side of the square " <<endl;
            cin >> a;
            square_field(a);
            break;
        case 3 :
            cout << "enter sides of the rectangle " << endl;
            cin >> a >> b;
            rectangle_field(a,b);
            break;
        case 4 :
            cout << "enter side and hight of the triangle " << endl;
            cin >> a >> b;
            triagnle_field(a,b);
            break;
        case 5 :
            cout << " the number is too big, buy a bigger monitor " << endl;
            break;
        default :
            cout<<" You have to choose 1-5 numbers that should be simple, try again buddy ";


    }
}

int main()
{
 int choice;
 char ch;
 do
 {
    system(" cls ");
    InitMenuBox();
    cin >> choice;
    InitDecysionMenu(choice);
do
    {
        cout << " Do you want to continue the program ?  (Y/N) ";
        cin >> ch;
    }
while(ch != 'y' && ch != 'Y' && ch != 'n' && ch != 'N');

 }
 while(ch == 'y' || ch == 'Y');

    return 0;
}
