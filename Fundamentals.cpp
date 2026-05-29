// Program to claculate grade of a student using total marks
#include <iostream>
#include <math.h>  
using namespace std;
//int main() { 
//    int marks;
//    std::cout<<"enter marks of student: ";
//    std::cin>>marks;
//    if(marks<=100 && marks>90){
//        std::cout<<"students grade is A"<<endl;
//    }else if(marks<=90 && marks>80){
//        std::cout<<"students grade is B"<<endl;    
//    }else if(marks<=80 && marks>70){
//        std::cout<<"students grade is C "<<endl;   
//    }else if(marks<=70 && marks>60){
//        std::cout<<"students grade is D "<<endl;   
//    }else if(marks<=60 && marks>50){
//        std::cout<<"students grade is E "<<endl;
//    }else{
//        std::cout<<"student has failed "; 
//    }
//    return 0;
//}


// Program to fing character is lowercase or upper case or lowercase
//#include <iostream>
//using namespace std;
//int main(){
//    char ch;
//    std::cout<<"enter the character which u want to check";
//    std::cin>>ch;
//    int value=ch;
//    if(value>=65 && value<=90){
//        std::cout<<"character is uppercase";
//    }else if(value>=97 && value<=122){
//        std::cout<<"character is lowercase";
//    }else{
//        std::cout<<"character is not a alpabet";
//    }
//    return 0;
//}


//Program to print sum of numbers from 1 to n
//int main() {
//     int n = 6;
//    int sum = 0;
//    for(int i=1; i<=n; i++){
//        sum = sum+i;
//    }
//    std::cout << "the sum of the numbers is: " << sum;
//    return 0;
//}


//Program to check if the number is prime or not
// int main(){
//     int n, count=0;
//     std::cout<<"enter the number you want to check";
//     std::cin>>n;
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             count++;
//         }
//     }
//     if(count>0){
//         std::cout<<"entered number is composite";
//     }else{
//         std::cout<<"entered number is prime";
//     }
//     return 0;
// }


//Program to find sum of all numbers from 1 to n which are divisible bt 3
// 


//Program to print the factorial od a number n
// int main(){
//     int n, fac=1;
//     std::cout<<"enter the number till which the factorial must be calculated ";
//     std::cin>>n;
//     for(int i=1;i<=n;i++){
//         fac=fac*i;
//     }
//     std::cout<<"the factorial of the given number is "<<fac;
//     return 0;
// }


//Program to print square pattern for numbers for n=4
// 1 2 3 4 
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4 
// int main(){
//     n=4
//     m=4
//     for(int i=1;i<=n;i++){
//         std::cout << std::endl;
//         for(int j=1;j<=m;j++){
//             std::cout<<j<<" ";
//         }
//     }
//     return 0;
// }
//Program to print square pattern for numbers
// 1 2 3 
// 4 5 6 
// 7 8 9 
// int main(){
//     int n = 3;
//     int m = 3;
//     int num=1;
//     for(int i=1; i<=n; i++){
//         std::cout << std::endl;
//         for(int j=1;j<=m;j++,num++){
//             std::cout<<num<<" ";
//         }
//     }
//     return 0;
// }
//Program to print triangle pattern
// *
// **
// ***
// ****
// int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){
//         std::cout << std::endl;
//         for(int j=1;j<=i;j++){  
//             std::cout<<"*"<<" ";
//         }
//     }
//     return 0;
// }
//Program to print triangle pattern 
// 1
// 2 2
// 3 3 3 
// 4 4 4 4 
// int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){
//         std::cout << std::endl;
//         for(int j=1;j<=i;j++){
//             std::cout<<i<<" ";
//         }
//     }
//     return 0;
// }


//Program to print triangle pattern
// 1
// 1 2 
// 1 2 3 
// 1 2 3 4 
// int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){
//         std::cout << std::endl;
//         for(int j=1;j<=i;j++){
//             std::cout<<j<<" ";
//         }
//     }
//     return 0;
// }

//Program to print reverse number triangle pattern
// 1
// 2 1
// 3 2 1
// 4 3 2 1 
// int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){
//         std::cout << std::endl;
//         for(int j=i;j>=1;j--){
//             std::cout<<j<<" ";
//         }
//     }
//     return 0;
// }

//Program to print Floyds triangle pattern 
// 1
// 2 3 
// 4 5 6 
// 7 8 9 10
// int main(){
//     int n=4;
//     int count=1;
//     for(int i=1;i<=n;i++){
//         std::cout << std::endl;
//         for(int j=i;j>=1;j++,count++){
//             std::cout<<count<<" ";
//         }
//     }
//     return 0;
// }


//Program to print the triangle pattern
// 1 1 1 1 
//   2 2 2  
//     3 3 
//       4  
// int main(){
//     int n=4;
//     int count=1;
//     for(int i=1; i<=n; i++,count++){
//         std::cout << std::endl;
//          for(int a=1; a<=i;a++){
//             std::cout<<" "<<" ";
//         }
//         for(int j=n-i+1; j>=1; j--){
//             std::cout <<count <<" ";
//         }
//     }
//     return 0;
// }

// Program to print pramid pattern
// 1 1 1 1
//  2 2 2
//   3 3 
//    4
// int main(){
//     int n=4;
//     int count=1;
//     for(int i=1; i<=n; i++,count++){
//         std::cout << std::endl;
//          for(int a=1; a<=i;a++){
//             std::cout<<" ";
//         }
//         for(int j=n-i+1; j>=1; j--){
//             std::cout <<count <<" ";
//         }
//     }
//     return 0;
// }


//Program to print pyramid pattern
//       1
//     1 2 1
//   1 2 3 2 1 
// 1 2 3 4 3 2 1
// int main(){
//     int n=4;
//     int count=1;
//     for(int i=1;i<=n;i++){
//         std::cout<< std::endl;
//         for(int j=1;j<=i;i++){
//             std::cout<<" ";

//         }
//     }
//     return 0;
// }

//Program to print Hollow diamond pattern
//       *
//     *   *
//   *       *
// *           *
//   *       *
//     *   *
//       *
// int main(){
//     return 0;
// }


//Program to print Butterfly pattern
// *             *
// * *         * *
// * * *     * * *
// * * * * * * * *
// * * * * * * * * 
// * * *     * * *
// * *         * *
// *             *
// int main(){
//     return 0;
// }


// Program to print a function that reverses a given number 
// int reverse(int n){
//     int digit=n;
//     int r=0;
//     for(int i=1;digit!=0;i++){
//         int d=digit%10;
//         r=(r*10)+(d*10);
//         digit=digit/10;
//     }
//     return r;
// }
// int main(){
//     std::cout<<(reverse(4758)/10);
//     return 0;
// }


//Program to print a function to calculate sum of numbers from 1 to N
// int sum(int n){
//     int s=0;
//     for(int i=1;i<=n;i++){
//         s+=i;
//     }
//     return s;
// }
// int main(){
//     int N;
//     std::cout<<"Enter the number till which u want the sum : ";
//     std::cin>>N;
//     std::cout<<sum(N); 
//     return 0;
// }


//Program to print a function to calculate N factorial
// int fact(int n){
//     int fac=1;
//     for(int i=1;i<=n;i++){
//         fac=fac*i;
//     }
//     return fac;
// }
// int main(){
//     int n;
//     std::cout<<"Enter the number till whuch u want to calculate the factorial :";
//     std::cin>>n;
//     std::cout<<fact(n);
//     return 0;
// }


//Program to print a fuction to calculate sum of the digits of a number 
// int sumdigits(int n){
//     int digit=n;
//     int sum=0;
//     for(int i=0;i<=10;i++){
//         sum+=(digit%10);
//         digit=digit/10;
//     }
//     return sum;
// }
// int main(){
//     int n;
//     std::cout<<"Enter the number to find the sum of its digits :";
//     std::cin>>n;
//     std::cout<<sumdigits(n);
//     return 0;
// }


//program to print a finction that prints nCr binomial coefficient for n and r
// int nCr(int n, int r){
//     if(r<=n){
//         int nfac=1,rfac=1,nrfac=1;
//         for(int i=1;i<=n;i++){
//             nfac=nfac*i;
//         }
//         for(int j=1;j<=r;j++){
//             rfac=rfac*j;
//         }
//         for(int a=1;a<=(n-r);a++){
//             nrfac=nrfac*a;
//         }
//         return nfac/(rfac*nrfac);
//     }
//     else{
//         std::cout<<"invalid values are entered";
//         return 0;
//     }
// }
// int main(){
//     int n,r;
//     std::cout<<"Enter value for n :";
//     std::cin>>n;
//     std::cout<<"Enter value for r :";
//     std::cin>>r;
//     std::cout<<nCr(n,r);
//     return 0;
// }

//Program to print a function to check if a number is prime or not
// void prime(int n){
//     int count=0;
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             count+=1;
//         }

//     }
//     if(count>=1){
//         std::cout<<"entered number is composit";
//     }else{
//         std::cout<<"entered number is prime";
//     }
// }
// int main(){
//     int n;
//     std::cout<<"Enter the number you want to check";
//     std::cin>>n;
//     prime(n);
//     return 0;
// }


//program to print a function to print all prime numbers from 2 to N
// void prime(int n){
//     for(int i=2;i<=n;i++){
//         int count=0;
//         for(int j=2;j<i;j++){
//             if(i%j==0){
//                 count=count+1;
//             }
//         }
//         if(count==0){
//             std::cout<<i<<" ";
//         }
//     }
// }
// int main(){
//     int n;
//     std::cout<<"Enter the number till which you want prime number :";
//     std::cin>>n;
//     prime(n);
//     return 0;
// }


//Program to print nth Fibonacci
// void fibonacci(int n){
//     int a=1;
//     int b=1;
//     std::cout<<a<<","<<b;
//     for(int i=0;i<n-2;i++){
//         int c=a+b;
//         std::cout<<","<<c;
//         a=b;
//         b=c;        
//     }
// }
// int main(){
//     int n;
//     std::cout<<"Enter n to print nth fibonacci :";
//     std::cin>>n;
//     fibonacci(n);
//     return 0;
// }


// Program to print a function that converts decimal number to binary number 
// int dectobi(int n){
//     int a=0;
//     for(int i=0;n!=0;i++){
//         int s=0;
//         s=n%2;
//         n=n/2;
//         a=(a*10)+(s*10);
//     }
//     return a;
// }
// int reverse(int n){
//     int r=0;
//     for(int i=1;n!=0;i++){
//         int d=n%10;
//         r=(r*10)+(d*10);
//         n=n/10;
//     }
//     return r;
// }
// int main(){
//     int n;
//     std::cout<<"Enter the number which u want to convert :";
//     std::cin>>n;
//     std::cout<<reverse(dectobi(n));
//     return 0;
// }


// Program to print a function that converts binary number to decimal number
// int bitodec(int n){
//     int a=0;
//     for(int i=0;n!=0;i++){
//         int e=n%10;
//         a=a+(e*(pow(2,i)));
//         n=n/10;
//     }
//     return a;
// }
// int main(){
//     int n;
//     std::cout<<"Enter the binary number which you want to convert :";
//     std::cin>>n;
//     std::cout<<bitodec(n);
//     return 0;
// }


//Print a program that finds the smallest number of the array 
// int main() {
//     int size=6;
//     int array[size]={12,53,56,43,-48,2};
//     int first=array[0];
//     for(int i=1;i<size;i++){
//         if(array[i]<first){
//             first=array[i];
//         }
//     }
//     std::cout<<std::endl<<first<<std::endl;
//     return 0;
// }


//print a Program that finds the largest number in the array
// int main() {
//     int size=6;
//     int array[size]={12,53,56,43,-48,2};
//     int first=array[0];
//     for(int i=1;i<size;i++){
//         if(array[i]>first){
//             first=array[i];
//         }
//     }
//     std::cout<<std::endl<<first<<std::endl;
//     return 0;
// }


//Program to find the index for the value which is smallest in array 4
//LINEAR SEARCH ALGORITHM 
// int main() {
//     int size=6;
//     int array[size]={12,53,56,43,-48,2};
//     int first=array[0];
//     for(int i=1;i<size;i++){
//         if(array[i]<first){
//             first=array[i];
//         }
//     }
//     for(int j=0;j<size;j++){
//         if(array[j]==first){
//             std::cout<<j;
//         }
//     }
//     return 0;
// }


//Program to find the index for the value which is largest in array 
// int main() {
//     int size=6;
//     int array[size]={12,53,56,43,-48,2};
//     int first=array[0];
//     for(int i=1;i<size;i++){
//         if(array[i]>first){
//             first=array[i];
//         }
//     }
//     for(int j=0;j<size;j++){
//         if(array[j]==first){
//             std::cout<<j;
//         }
//     }
//     return 0;
// }


//WAF to print the reverse of the given array 
// void reverse(int arr[],int size){
//     for(int start=0,end=size-1; start<=end;start++,end--){
//         std::swap(arr[start],arr[end]);
//     }
// }
// int main(){
//     int arr[]={2,5,3,7,1,7,3};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     reverse(arr,size);
//     for(int j=0;j<size;j++){
//         std::cout<<arr[j]<<"  ";
//     }
//     return 0;
// }


//WAF to calculate sum and product of all numbers in array
// #include <iostream>

// int sum(int arr[],int size){
//     int sum=0;
//     for(int i=0;i<size;i++){
//         sum+=arr[i];
//     }
//     return sum;
// }
// int product(int arr[],int size){
//     int product=1;
//     for(int j=0;j<size;j++){
//         product*=arr[j];
//     }
//     return product;
// }
// int main(){
//     int arr[]={1,2,5,3,5,2,7};
//     int size=sizeof(arr)/sizeof arr[0];
//     std::cout<<"Sum: "<<sum(arr,size)<<std::endl;
//     std::cout<<"Product: "<<product(arr,size)<<std::endl;
// }


//WAF to swap the max and min number of an array
// int max(int arr[],int size){
//     int first=arr[0];
//     int index;
//     for(int i=1;i<size;i++){
//         if(first<arr[i]){
//             first=arr[i];
//             index=i;
//         }
//     }
//     return index;
// }
// int min(int arr[],int size){
//     int first=arr[0];
//     int index;
//     for(int i=1;i<size;i++){
//         if(first>arr[i]){
//             first=arr[i];
//             index=i;
//         }
//     }
//     return index;
// }
// int main(){
//     int arr[]={2,4,9,5,7,1,8};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     int maxindex=max(arr,size);
//     int minindex=min(arr,size);
//     std::swap(arr(maxindex),arr(minindex);
//     for(int j=0;j<size;j++){
//         std::cout<<arr[j];


//WAF to print all the unique value in an array
void unique(int arr[],int size){
    for(int i=1;i<size;i++){
        for(int j=0;j<size;j++){
            if(i!=j && arr[i]==arr[j]){
                break;
            }
        }for()
}

int main() {
    int arr[]={10,5,8,9,3,6,9,2,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    unique(arr,size);
    return 0;
}



// WAF to print intersection of 2 arrays(print common values in 2 given array)
