#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

bool valid_l(int l, int n) { return l >= 0 and l < n;}
bool valid_m(int m, int l) { return m >= -l and m <= l;}

bool valid_dell(int l1, int l2) { return l2 - l1 == 1 || l2 - l1 == -1;}
bool valid_delm(int m1, int m2) { return m2 - m1 == 1 || m2 - m1 == -1 || m2 - m1 ==0;}

int main()
{
  cout << setw(15) << "n2-->n1" << setw(13) << "Pathways" << setw(10) << "DelE" << setw(18) << "Wavelength" << endl;
    int num_pathways;
    double delE;
    double wavelength;

    for (int n2 = 1; n2 <= 20; ++n2)
    for (int n1 = 1; n1 < n2; ++n1)
        {
          delE = (-13.6)*(1.0/((double)(n2*n2)) - 1.0/((double)(n1*n1)));
          wavelength = 1240/delE;
          num_pathways =0;
          for (int l2 = 0; valid_l(l2,n2); ++l2)
          for (int l1 = 0; valid_l(l1,n1); ++l1)
            for (int m1 = -l1; valid_m(m1,l1); ++m1)
            for (int m2 = -l2; valid_m(m2,l2); ++m2)
            {
                if(valid_dell(l2,l1) && valid_delm(m2,m1))
                {
                    num_pathways++;
                }
            }
          cout << setw(10) << n2 << "-->" << n1;

          if (wavelength >= 380 && wavelength <= 750)
                cout << "v";
          cout << setw(10) << num_pathways
               << setw(15) << delE
               << setw(15) << wavelength << endl;
        }
    return 0;
}
