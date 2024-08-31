// #include<iostream>
// using namespace std;
// int main(){
//     int num, first = 0,last = 14,mid;
//     int a[15]={2,3,6,10,20,22,34,56,57,58,76,87,98,99,123};

//     cout<<"Enter the number find the location: "<<endl;
//     cin>>num;
//      do
//      {
//         mid=(first+last)/2;
//         if (a[mid]==num)
//         {
//             cout<<"Found at location = "<<mid+1<<endl;
//             break;
//         }
//         else if (a[mid]<num)
        
//             first = mid+1;
        
//         else
        
//             last = mid-1;
        
//      } while (first<=last);
     
//      if(first>last){
//         cout<<"Number not found."<<endl;
//      }
// return 0;
// }













// #include<iostream>
// using namespace std;
// int main(){
//    int a[5]={100,140,230,322,411};
//    int num,mid,first=0, last=4;

//    cout<<"Enter the number find the location: "<<endl;
//    cin>>num;

//    do
//    {
//     mid=(first+last)/2;
//     if (a[mid]==num)
//     {
//         cout<<"found at location = "<<mid+1<<endl;
//         break;
//     }
//        else if(a[mid]<=num)
//        first = mid+1;
//        else 
//        last = mid-1;

//    } while (first<=last);
    
//     if (first>last)
//     {
//         cout<<"Number are not found.."<<endl;
//     }
    
   
// return 0;
// }



















#include<iostream>
using namespace std;
int main(){
   int a[5]={23,45,12,1,30},i,j,cn,temp;

   for (i = 0; i < 4; i++)
   {
     cn=i;
       for(j=i+1; j<5; j++)
       if(a[cn]>a[j])
       cn=j;
       temp=a[cn];
       a[cn]=a[i];
       a[i]=temp;
   }
   
return 0;
}