///week07-2.cpp ���e�P�P�@��
/// �e�X�W�j�������,�μƦr�]�_��
/// TAICA ��j��¦�{���]�p(c++) �������D ��6�D
#include <iostream>
#include <cmath> ///�N�Oc�� ,math.h �̭��� sin() cos()  abs() sqrt()
using namespace std;
int main()
{
    int n; ///Part1 : Input
    cin >> n;

    for (int i=1; i<n*2; i++){ ///part 2: output
        for (int j=1; j<n*2; j++){

                ///�L�X�Ӥ���,�o�{�����ߪ�1���N��!���I�F��!!
                int d = max(abs(i-n), abs(j-n));
                cout << d + 1; ///cout << n;

        }
           cout << endl;  ///cout << "�{�bi�O:" << i << endl;
    }
}
