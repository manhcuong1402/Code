#include <bits/stdc++.h>
using namespace std;

class Account
{
	private:
		string AccountNumber;
		string fullName;
		string password;
		float money;
	public:
		float getMoney();
		void signUP(string stk, string ten, string mk, float money);
		void addMoney(float a);
		void minosMoney(float b);
		void info();
};

class Bank
{
	private:
		Account BankAccount[10000];
		int pos;
	public:
		Bank();
		int getPos();
		void signUP(Account A);
		Account findTOPmoney();
		void negativeMoney();
		void allAccount();
};

int Menu();
int main()
{
	Bank myBank;
	int option;
	while((option=Menu())!=0){
		if(option==1){
			string AccountNumber, FullName, Password;
			float Money;
			cout<<"Nhap so tai khoan: ";
			cin>>AccountNumber;
			cout<<"Nhap ten day du: ";
			cin.ignore();
			getline(cin,FullName);
			cout<<"Nhap mat khau: ";
			cin>>Password;
			cout<<"Nhap so tien muon gui: ";
			cin>>Money;
			Account temp;
			temp.signUP(AccountNumber, FullName, Password, Money);
			myBank.signUP(temp);
		}
		else if (option==2){
			myBank.allAccount();
		}
		else if (option==3){
			myBank.findTOPmoney();
		}
		else if (option==4){
			myBank.negativeMoney();
		}
	}
	return 0;
}
// Account:
void Account::signUP(string stk, string ten, string mk, float money)
{
	this->AccountNumber=stk;
	this->fullName=ten;
	this->password=mk;
	this->money=money;
}
void Account::addMoney(float a)
{
	money=money+a;
}
void Account::minosMoney(float b)
{
	money=money-b;
}
void Account::info()
{
	cout<<"So tai khoan: "<<AccountNumber<<endl;
	cout<<"Chu so huu: "<<fullName<<endl;
	cout<<"So tien co trong tai khoan: "<<money<<endl;	
}
float Account::getMoney()
{
	return money;
}
// Bank:
Bank::Bank()
{
	pos=0;
}
void Bank::signUP(Account A){
	BankAccount[pos]=A;
	pos++;	
}
Account Bank::findTOPmoney(){
	int maxMoney=-99999, markUP;
	for (int i=0; i<pos; i++){
		if(BankAccount[i].getMoney()>maxMoney){
			maxMoney=BankAccount[i].getMoney();
				markUP=i;
		}
		
	}
	return BankAccount[markUP];
}
void Bank::negativeMoney(){
	for(int i=0; i<pos; i++){
		if(BankAccount[i].getMoney()<0){
			BankAccount[i].info();
		}
	}
}
void Bank::allAccount(){
	for(int i=0; i<pos; i++){
		cout<<endl;
		BankAccount[i].info();
	}
	cout<<endl;
}
int Bank::getPos(){
	return pos;
}
// Menu:
int Menu()
{
	int option;
	cout<<"1. Them tai khoan\n";
	cout<<"2. Hien thi thong tin ta cac tai khoan\n";
	cout<<"3. Hien thi thong tin tai khoan co so tien lon nhat\n";
	cout<<"4. Hien thi thong tin cac tai khoan dang am tien\n";
	cout<<"0. Thoat\n";
	cout<<"Nhap chuc nang: ";
	cin>>option;
	return option;
}
