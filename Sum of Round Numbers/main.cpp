#include <iostream>

using namespace std;

int main()
{
   int n, sum;
   string x;
   cin >> n;
   for (int i = 0; i < n; i++)
   {
      sum = 0;
      cin >> x;
      for (int j = 0; j < x.size(); j++)
      {
         if (x[j] != '0')
         {
            sum++;
         }
      }
      cout << sum << endl;
      for (int j = 0; j < x.size(); j++)
      {
         if (x[j] != '0')
         {
            cout << x[j];
            for (int k = x.size() - j - 1 ; k > 0; k--)
            {
               cout << 0;
            }
            cout << ' ';
         }
      }
      cout << endl;
   }
   return 0;
}