  #include <iostream>
 using namespace std;
 int main(){
    int n=8;
    for(int i=0; i<n; i++){
        for (int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for( int j=1; j<=i+1; j++){
            cout<<j;
        }
        for(int j=1; j>0; j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
        }
    
            
        
//  int binToDecimal(int binNum){
//     int ans=0,pow=1;
//     while(binNum>0){
//         int rem=binNum%10;
//         ans+=rem*pow;
//         binNum/=10;
//         pow*=2;
//     }
//     return ans;
// }
// int main(){
//     cout<<binToDecimal(10101)<<endl;
//     return 0;
// }
    
 

//  int decToBinary(int decNum){
//     int ans=0, pow=1;
//     while(decNum>0){
//         int rem=decNum%2;
//         decNum/=2;
//         ans+=(rem*pow);
//         pow*=10;
//     }
//     return ans;
// }
// int main(){
//     int decNum=50;
//     for(int i=1; i<=10; i++){
//     cout<< decToBinary(i)<<endl;
// }
//        return 0;

// }
    
// int factorial(int n){
//     int fact=1;
//     for (int i=1; i<=n; i++){
//         fact*=i;
//     }
//     return fact;
// }
// int nCr(int n, int r){
//     int fact_n=factorial(n);
//     int fact_r=factorial(r);
//     int fact_nmr=factorial(n-r);
//     return fact_n/(fact_r*fact_nmr);
// }
// int main(){
//     int n=6, r=3;
//     cout<<nCr(n,r)<<endl;
//     return 0;
// }

// int SumOfDigits(int num){
//     int digSum=0;
//     while(num>0){
//         int lastDig=num%10;
//         num/=10;
//         digSum+=lastDig;
//     }
//     return digSum;
// }
// int main(){
//     cout<<"sum= "<<SumOfDigits(6579437)<<endl;
//     return 0;
// }
    

// int main(){
//     int n=4;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//          cout<<(i+1)<<" ";
//         }    
//         cout<<endl;
//     }
//     return 0;
// }


// int main(){
//     int n=3;
//     int num=1;
//     for(int i=1; i<=n; i++){
//          for(int j=0; j<=n; j++){
//         cout <<num<<" ";
//         num++;
//          }
//         cout<<endl;
//     }
//     return 0;
// }
// int main(){
//     int n=10;
//     for(int i=1; i<=n; i++){
//         int m=10;
//         for(int j=1; j<=m; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// int main(){
// int n=25;
// int i=1;
// do{
//     cout<<i<<" ";
//     i++;
// }while(i<=n);
//     cout<<endl;
// return 0;
// }
// int main(){
// int n=78;
// int oddsum=0;
// for(int i=1; i<=n; i++){
//     if(i%2!=0){
//         oddsum+=i;
//     }
// }
// cout<<"oddsum= "<<oddsum<<endl;
// return 0;
// }
// int main(){
// int n=78;
// int sum=0;
// for(int i=1; i<=n; i++){
//     sum+=i;
// }
// cout<<"sum= "<<sum<<endl;
// return 0;
// }
// int main(){
//     int count=1;
//     while(count<=10){
//         cout<<count<<" ";
//         count++;
//     }
//     cout<<endl;
//     return 0;

//     }
// int main(){
//     int marks;
//     cout<<"enter marks: ";
//     cin>>marks;
//     if(marks>=90){
//         cout<<"A\n";
//     }else if(marks>=80 && marks<=90){
//         cout<<"B\n";
//     }else{
//         cout<<"c\n";
//     }
//     return 0;
//     }
// int main(){
//     char ch;
//     cout<<"enter char: ";
//     cin>>ch;
//     if(ch>='a' && ch<='z'){
//         cout<<"lowercase\n";
//     }else{
//         cout<<"uppercase\n";
//     }
//     return 0;
//     }
// int main(){
//     int n;
//     cout<<"enter number: ";
//     cin>>n;
//     if(n%2==0){
//         cout<<"even\n";
//     }else{
//         cout<<"odd\n";
//     }
//     return 0;
//     }
// int main(){
//     int age;
//     cout<<"enter age: ";
//     cin>>age;
//     if(age>=18){
//         cout<<"you can vote\n";
//     }else{
//         cout<<"you can't vote\n";
//     }
//     return 0;
//     }

// int main(){
//     int a=10;
//     int b=--a;
//     cout<<"b= "<<b<<endl;
//     cout<<"a= "<<a<<endl;
//     return 0;
// }
// int main(){
//     int a=10;
//     int b=a--;
//     cout<<"b= "<<b<<endl;
//     cout<<"a= "<<a<<endl;
//     return 0;
// }
// int main(){
//     int a=10;
//     int b=++a;
//     cout<<"b= "<<b<<endl;
//     cout<<"a= "<<a<<endl;
//     return 0;
// }
// int main(){
//     int a=10;
//     int b=a++;
//     cout<<"b= "<<b<<endl;
//     cout<<"a= "<<a<<endl;
//     return 0;
// }
//  int main(){
//     int a,b;
//     cout<<"Enter a: ";
//     cin>>a;
//       cout<<"Enter b: ";
//     cin>>b;
//     int sum=a+b;
//     cout<<"sum= "<<sum<<endl;
//     return 0;

//  }
// int main(){
//     int a=10, b=5;
//     cout<<"sum= "<<(a+b)<<endl;
//     cout<<"difference= "<<(a-b)<<endl;
//     cout<<"product= "<<(a*b)<<endl;
//     cout<<"division= "<<(a/b)<<endl;
//     cout<<(5/2)<<endl;
//     return 0;
// }
//  int main(){
//     double price;
//     cout<<"Enter the price: ";
//     cin>>price;
//     cout<<"you entered price= "<<price<<endl;
//     return 0;
//  }
// int main(){
//     int age=25;
//     char grade='a';
//     float PI=3.14f;
//     bool isSafe=true;
//     double price=100.99;
//     cout<<isSafe<<endl;
//     return 0;
// }

