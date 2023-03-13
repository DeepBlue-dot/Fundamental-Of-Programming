#include <iostream>
using namespace std;
int main ()
{
  float h,w;
  int Gen;
  int I;
  int B;
  cout<<"The number of people: ";
  cin>>B;
  float arr[B][5];
  
    for(I=0 ; I<B ; I++ )
    {
      cout<<"Select Gender: 1.Male 2.Female\n"<<"->";
      cin>>arr[I][0];
      cout<<"Enter Height: ";
      cin>>arr[I][1];
      cout<<"Enter Mass: ";
      cin>>arr[I][2];
      arr[I][3] = arr[I][2]/(arr[I][1]*arr[I][1]);
      if(arr[I][0] == 1)
      {
      if (arr[I][3]<=20)
      {
        arr[I][4] = 1;
      }
      else if (arr[I][3]>20 && arr[I][3]<25)
      {
        arr[I][4] = 2;
      }
      else if (arr[I][3]>=25)
      {
        arr[I][4] = 3;
      }
      else
      {
        cout<<"Select the appropriate numb\n";
      }
      }
      else if(arr[I][0] == 2)
      {
      if (arr[I][3]<=18)
      {
        arr[I][4] = 1;
      }
      else if (arr[I][3]>18 && arr[I][3]<23)
      {
        arr[I][4] = 2;
      }
      else if (arr[I][3]>=23)
      {
        arr[I][4] = 3;
      }
      else
      {
        cout<<"Select the appropriate number";
      }
      }
      }
      for(int q =0; q < B; q++)
      {
        for (int p = 0; p < 5; p++)
        {
          if(p == 0)
          {
              if(arr[q][0] == 1)
            {
              cout << "Male" <<"\t";
            }
            else if(arr[q][0] == 2)
            {
              cout << "Female" <<"\t";
            }
          }
          else if(p == 4)
          {
            if(arr[q][4] == 1)
            {
              cout << "under" <<"\t";
            }
            else if(arr[q][4] == 2)
            {
              cout << "healthy" <<"\t";
            }
            else if(arr[q][4] == 3)
            {
              cout << "over" <<"\t";
            }
          }
          else
          {
            cout << arr[q][p] <<"\t";
          }
           
        }
        cout << endl;
        
      }
  
}