#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
  int a[n];
  double s=0;
  for(int i=0;i<n;i++)cin>>a[i];
  sort(a,a+n);
  for(int i=n-m;i<n;i++){
    s=(s+a[i])/2;
  }
  printf("%.11f\n",s);
}