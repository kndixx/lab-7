#include <iostream>
using namespace std;
int main(){
 double A1, A2, B1, B2, C1, C2, x, y, D;
 cin >> A1 >> x >> B1 >> y >> C1 >> A2 >> B2 >> C2;
 D = A1*B2 - A2*B1;
    if (D != 0){
        x = (C1*B2 - C2*B1) / D;
        y = (A1*C2 - A2*C1) / D;
        cout << "\n x= " << x << " y=" << y << endl;
    }
    else {
        cout << " A1*B2 - A2*B1 = 0" << endl;
    }
 return 0;
}
