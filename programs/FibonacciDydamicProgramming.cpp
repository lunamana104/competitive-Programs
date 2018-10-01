//Calculate nth fibonacci number, started from 1 and 1. n is up to 100000

#include <bits/stdc++.h>
using namespace std;

int main () {

   int fib[100005], n;
   string suffix;
   fib[0]=1;
   fib[1]=1;

   // init fibonacci array
   for ( int i = 2; i < 100000; i++ ) {

      fib[i] = fib[i-1] + fib[i-2]; 

   }

   cin>>n; //input n
   
   if(n % 10 == 1) suffix = "st";
   else if(n % 10 == 2) suffix = "st";
   else if(n % 10 == 3) suffix = "rd";
   else suffix = "th";

   cout << "The " << n << suffix << " fibonacci number is "<< fib[n-1] << endl;
 
   return 0;
}