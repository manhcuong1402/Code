#include <iostream>
#include <cstring>
#include <fstream>
 
using namespace std;

int nV, nE, matrix[10005][10005], count=0, mau[10005];
 
void docfile()  // Doc file sau do gán vào mang matrix[][]
{
    int x,y;
    ifstream dothi ("dothi.txt");
    if (dothi.is_open())
    {
        dothi >> nV;
        dothi >> nE;
        while (!dothi.eof()) // Doc file tu dau den cuoi file
        {
            dothi >> x;
            dothi >> y;
            matrix[x][y]=1;
            matrix[y][x]=1;
        }
        dothi.close();
    }
    else
		cout << "File khong ton tai!"<<endl;
}
 
void ToMau()  //Xu ly de cho ra ket qua vao mang somau[]
{ 
    int temp;
    for(int i=1;i<=nV;i++)
        if(!mau[i]) 
		{
            count++; //Dem so mau
            mau[i]=count;
            
            for(int j=i+1; j<=nV; j++) //Kiem tra xem nhung dinh nao co the gan bang mau nay nua ko ?
                if((matrix[i][j]==0)&&(mau[j]==0)){
                    temp=1;
                    for(int k=i+1;k<j;k++)
                        if((matrix[k][j]==1)&&(mau[i]==mau[k]))
						{
                            temp=0;
                            break;
                        }
                    if(temp==1) 
						mau[j]=count;
                }                   
        }
}
void Print()   //In ket qua ra man hinh
{
    for(int i=1;i<=count;i++){
        cout << "Mau " << i << ": ";
        for(int j=1;j<=nV;j++) if(mau[j]==i) cout << j << " ";
        cout << endl;
    }
}
int main()
{
    docfile();
    cout << nV << endl;
    for(int i=1;i<=nV;i++)   //In mang ra man hinh de theo doi
	{
        for(int j=1;j<=nV;j++) cout << matrix[i][j] << "  ";
        cout << endl;
    }
	cout<<endl;
    ToMau();
    Print();
    return 0;
}
