#include <bits/stdc++.h>
using namespace std;
class Vector{
    public :
        vector <int> v;
        int key , n , s;
        float avg;
        void initialize(vector <int> &v)
        {
            int c ;
            cout << "enter the number of values :";
            cin >> n;
            cout <<"--------------------------- \n";
            cout << "enter the elements in the given vector : \n";
            for (int i = 0 ; i < n; i++)
            {
                cin >> c ;
                v.push_back(c);
            }
        }
        void smallest()
        {
            for (int i = 0 ; i < v.size() ; i++)
            {
                if (v.at(i)<s)
                {
                    s = v[i];
                }
            }
            cout << "The smallest element in the vector is : \n"<<s<<endl;
        }
        void average(vector <int> &v)
        {
            for (int i = 0 ; i<v.size() ; i++)
            {
                avg = avg + v[i];
            }
            cout << "average :\n";
            cout << avg/v.size() << endl;
        }
        void searchelement()
        {
            int flag = 0;
            cout << "enter the element you want to search : \n";
            cin >> key;
            for (int i = 0 ; i < v.size() ; i++)
            {
                if (v.at(i) == key )
                {
                    cout << "element found at : "<<i<<endl;
                    flag = 1;
                    break ; 
                }
            }
            if (flag == 0)
            cout << "element not found";
        }
};
int main()
{
    Vector a;
    a.initialize(a.v);
    a.smallest();
    a.searchelement();
    a.average(a.v);
    return 0;
}