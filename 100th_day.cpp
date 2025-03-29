#include<iostream>
#include<fstream>
#include<stdlib.h>
#define MAX 10
using namespace std;

int main(){
    int num[MAX],n;
    cout<<"Enter the Limit\n";
    cin>>n;
    cout<<"Enter the Elements\n";
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    ofstream fout1, fout2;
    fout1.open("even.txt", ios::out);
    fout2.open("odd.txt", ios::out);
    
    if(fout1.fail()){
        cout<<"Error in opening file\n";
        exit(1);
    }

    if(fout2.fail()){
        cout<<"Error in opening file\n";
        exit(1);
    }
for (int i = 0; i < n; i++)
{
    if(num[i]%2==0)
    fout1<<num[i]<<"";
    else
    fout2<<num[i]<<"";
}
fout1.close();
fout2.close();
ifstream fin1, fin2;
fin1.open("odd.txt", ios::in);
if(fin1.fail()){
    cout<<"Error in opening file\n";
    exit(1);
}
cout<<"Contents of odd.txt\n";
do{
    char ch;
    fin1.get(ch);
    cout<<ch<< "";
}
while(!fin1.eof());
fin1.close();
cout<<"\n Contents of even.txt\n";

do{
    char ch;
    fin2.get(ch);
    cout<<ch<<"";
}

while(!fin2.eof());
fin2.close();
cout<<"\n";
system("pause");
return 0;
}