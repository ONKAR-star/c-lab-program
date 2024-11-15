 #include<iostream>
 using namespace std;
 
  int main ()
  {
   int a,b,c,d;
   cin>> a>>b>>c>>d;
   
   int z = (a*d) - (c*b);
   cout<< "determinant of matrix = " << z <<endl;
   
   int m11 = d;
   int m12 = c;
   int m21 = b;
   int m22 = a;
   
   int c11 =    d;
   int c12 = -1*c;
   int c21 = -1*b;
   int c22 =    a;
   
   cout<< " m11 =  "<< m11 << "    !    "<< "c11 =  " <<c11 <<endl;
   cout<< " m12 =  "<< m12 << "    !    "<< "c12 =  " <<c12 <<endl;
   cout<< " m21 =  "<< m21 << "    !    "<< "c21 =  " <<c21 <<endl;
   cout<< " m22 =  "<< m22 << "    !    "<< "c22 =  " <<c22 <<endl;
   
   cout<< "cofator matrix =  " <<endl;
   cout<< " " << c11 <<c12  <<endl;
   cout<< c21 << " " <<c22  <<endl;
   
   cout<< " adjoin matrix =  " <<endl;
   cout<< " " << c11 <<c21  <<endl;
   cout<< c12 << " " <<c22  <<endl;
   
   cout<< "invers of matrix =  " <<endl;
   cout<<  1/ (float) z <<  "  X   " << c11 << "  " <<c21 << endl;
   cout<< "        "<<c12 << " " <<c22  <<endl;
   
   return 0;
  }