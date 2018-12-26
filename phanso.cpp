#include<bits/stdc++.h>


using namespace std;

class Dathuc
{
	public :int heso,somu;
	public :
		friend istream& operator >>(istream &,Dathuc &);
		friend ostream& operator <<(ostream&,Dathuc);
		Dathuc operator +(Dathuc);
		Dathuc operator -(Dathuc);
		Dathuc operator *(Dathuc);
		Dathuc operator /(Dathuc);
		Dathuc operator +=(Dathuc);
		Dathuc operator -=(Dathuc);
		Dathuc operator >=(Dathuc);
		Dathuc operator <=(Dathuc);

	Dathuc();
	Dathuc(int ,int);

}; 
Dathuc::Dathuc()
{
	heso=0;
	somu=1;
}
Dathuc::Dathuc(int hs,int sm)
{
	heso=hs;
	somu=sm;
}



istream& operator >>(istream &is,Dathuc &dt)
{
	cout<<"Nhap vao he so cua da thuc :";is>>dt.heso;
	cout<<"Nhap vao so mu cua da thuc :";is>>dt.somu;
	return is;
}

ostream& operator <<(ostream &os,Dathuc dt)
{
	os<<"=> " <<dt.heso<<"*x^"<<dt.somu<<endl;
}



Dathuc Dathuc::operator +(Dathuc x)
{
	
	if(this->somu==x.somu) this->heso=this->heso+x.heso;
	return *this;
}

int main()
{
	vector<Dathuc>a;int n=100;
	cout<<"1.Nhap da thuc\n";
	cout<<"0.thoat\n";
	while(n)
	{
		cin>>n;
		if(n==1)
		{
			Dathuc x;
			cin>>x;
			a.push_back(x);
		}
		if(n==0)
		{
			for(int i=0;i<a.size()-1;i++)
			{
				for(int j=i+1;j<a.size();j++)
				{
					if(a[i].somu==a[j].somu)
					{
						a[i]=a[i]+a[j];
						a.erase(a.begin()+j);
					}
				}
			}
			for(int i=0;i<a.size();i++) cout<<a[i];
			break;
		}
	}
	return 0;
}
