#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
    int n, x, cnt=0;
    cin >> n >> x;
    for (int i = 1; (i<=sqrt(x) && i<=n); ++i) {
        if (x%i==0 && x/i<=n) {
            cnt += ((i==sqrt(x)) ? 1 : 2);
        }
    }
    cout << cnt;
    return 0;
}