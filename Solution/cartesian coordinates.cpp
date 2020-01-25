#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
    double n1,n2,m1,m2,distance,g;

    cin >> n1 >> m1 ;
    cin >> n2 >> m2 ;


    g=(n2-n1)*(n2-n1)+(m2-m1)*(m2-m1);
                              //x1 y1 x2 y2

    distance = sqrt(g);

    cout<<fixed<<setprecision(4) <<distance << endl;



    return 0;
}
