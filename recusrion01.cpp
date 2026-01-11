#include <iostream>
 using namespace std;
  void printsum(int  n ){
     if (n== 1){
         cout <<"1";
          return ;

     }

      cout <<n<<" ";
       printsum(n-1);

  }
  int main (){

    cout <<"enter the number"<<endl;
      int n;
       cin>> n;
        cout <<" the factorial is"<<endl;
         printsum (n);

     


     
  }