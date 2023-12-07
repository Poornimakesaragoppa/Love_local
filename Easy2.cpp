#include<iostream>
using namespace std;

void pascal(int num)
{
    int traingle [num][num];
    for(int i=0;i<num;++i){
        for(int j=0;j<=i;++j){
            if(j==0||j==i){
                traingle[i][j]=1;
            }
            else{
                traingle[i][j]=traingle[i-1][j-1]+traingle[i-1][j];
            }
            cout<<traingle[i][j]<<" ";
        }
        cout<<endl;
    }

}
int main()
{
    int num;
    cin>>num;
    cout << "pascel is ";
    pascal(num);

}