#include <iostream>
 using namespace std;

    int  printsum (int n ){
         if (n ==1){
             cout<<"1";
              return 1 ;
         }
         else {
                            cout<<n << " ";

            
              return  n + printsum (n-1);

         }
        
        }
    
  int main (){



       cout  << " enter the number "<<endl;
        int n ;
         cin>> n ;
            int sum =   printsum (n ); 

             cout <<" the sum is "<< sum <<endl;
        

               return  0;

       
  }