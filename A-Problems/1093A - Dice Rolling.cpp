    #include <iostream>
     
    using namespace std;
     
    int main() {
        int q;
        cin >> q;
        
        while (q--) {
            int x;
            cin >> x;
            cout << (x >> 1) << endl;
        }
        
        return 0;
    }