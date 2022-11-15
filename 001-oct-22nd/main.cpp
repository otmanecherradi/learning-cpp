#include <iostream>

using namespace std;

int sum(int nbr) {
  int idx, _sum = 0;
  for (int idx = 0; idx < nbr; idx++) {
    _sum += (idx + 1);
  }
  return _sum;
}

void show_sum(int nbr) {
  cout << "the sum is " << sum(nbr) << endl;
}

void increment_by_value(int nbr1, int nbr2) {
  cout << "before: nbr1 = " << nbr1 << "; nbr2 = " << nbr2 << endl;
  nbr1 += 1;
  nbr2 += 1;
  cout << "after: nbr1 = " << nbr1 << "; nbr2 = " << nbr2 << endl;
}

void increment_by_reference(int &nbr1, int &nbr2) {
  cout << "before: nbr1 = " << nbr1 << "; nbr2 = " << nbr2 << endl;
  nbr1 += 1;
  nbr2 += 1;
  cout << "after: nbr1 = " << nbr1 << "; nbr2 = " << nbr2 << endl;
}

void increment_by_pointers(int *nbr1) {
  cout << "before: nbr1 = " << *nbr1 << endl;
  *nbr1 += 1;
  cout << "after: nbr1 = " << *nbr1 << endl;
}

void swap_by_reference(int &nbr1, int &nbr2) {
  int nbr = nbr1;
  nbr1 = nbr2;
  nbr2 = nbr;
}

void swap_by_pointers(int *nbr1, int *nbr2) {
  int nbr = *nbr1;
  *nbr1 = *nbr2;
  *nbr2 = nbr;
}

int main(int argc, const char * argv[]) {

    {
        // loops
        
        int nbr, sum = 0;

        cout << "the number ?";
        cin >> nbr;

        for (int idx = 0; idx < nbr; idx++) {
            sum += (idx + 1);
        }

        cout << "the sum is " << sum << endl;
    }
    
    {
        // functions
        
        show_sum(10);
    }
    
    {
        // functions - biz
        
        int x = 10, y = 20;
        
        cout << "PASS BY VALUE" << endl;

        cout << "before: x = " << x << "; y = " << y << endl;
        increment_by_value(x, y);
        cout << "after: x = " << x << "; y = " << y << endl;

        cout << "PASS BY REFERENCE" << endl;

        x = 10;
        y = 20;

        cout << "before: x = " << x << "; y = " << y << endl;
        increment_by_reference(x, y);
        cout << "after: x = " << x << "; y = " << y << endl;
    }
    
    {
        // pointers
        
        int nbr = 10;
        int *nbr_pointer = &nbr;

        cout << "before: nbr = " << nbr << endl;

        *nbr_pointer = 20;

        cout << "after: nbr = " << nbr << endl;

        cout << "INFO" << endl;

        cout << "nbr: " << nbr << endl;
        cout << "&nbr: " << &nbr << endl;
        cout << "nbr_pointer: " << nbr_pointer << endl;
        cout << "*nbr_pointer: " << *nbr_pointer << endl;
    }
    
    {
        // pointers - biz

        int nbr = 10;
        int *nbr_pointer = &nbr;

        cout << "before: nbr = " << nbr << endl;

        increment_by_pointers(nbr_pointer);

        cout << "after: nbr = " << nbr << endl;

        cout << "INFO" << endl;

        cout << "nbr: " << nbr << endl;
        cout << "&nbr: " << &nbr << endl;
        cout << "nbr_pointer: " << nbr_pointer << endl;
        cout << "*nbr_pointer: " << *nbr_pointer << endl;
        cout << "*(&nbr): " << *(&nbr) << endl;
        cout << "&(*nbr_pointer): " << &(*nbr_pointer) << endl;
    }
    
    {
        // pointers - exercice
        
        int x = 10;
        int y = 30;

        cout << "PASS BY REFERENCE" << endl;

        cout << "before: x = " << x << "; y = " << y << endl;

        swap_by_reference(x, y);

        cout << "after: x = " << x << "; y = " << y << endl;

        cout << "PASS BY POINTERS" << endl;

        cout << "before: x = " << x << "; y = " << y << endl;

        swap_by_pointers(&x, &y);

        cout << "after: x = " << x << "; y = " << y << endl;
    }
    
    return 0;
}
