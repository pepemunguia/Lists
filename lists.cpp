#include <iostream>
#include <math.h>
using namespace std;


float suma(float array[],int size){
 float suma=0;
  for(int i=0;i<size;i++){
   suma=suma+array[i];
 }
 return suma;
}

float avg(float array[],int size){
 float avg=suma(array,size)/size;
  return avg;
}

float dev(float array[], int size){
  float dev1=0;
  float dev2=0;
 for(int i=0;i<size;i++){
  dev1=array[i]-avg(array,size);
  dev2=dev2+dev1*dev1;
 }
 float dev3=dev2/size;
 float total = sqrt(dev3);
 return total;
}


int main(){
  const int LONG=10;
  float x;
  float array[LONG]={x};
  cout<<"Please enter "<< LONG << " numbers."<< endl;
  for(int i=0;i<LONG;i++){
  cin>>x;
  array[i]=x;
}
  cout<<"Enought Numbers!"<< endl;

  cout<<"The sum of your 10 numbers is: "<< suma(array,LONG) << endl;
  cout<<"The average of your 10 numbers is: "<< avg(array,LONG) << endl;
  cout<<"The standar deviation of your 10 numbers is: "<< dev(array,LONG) << endl;
return 0;
}
