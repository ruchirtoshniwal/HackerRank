#include<bits/stdc++.h>
using namespace std;

void mergearray(int a[],int l,int m,int r)
{
    int n1,n2;
    n1=m-l+1;
    n2=r-m;
    int L[n1];
    int R[n2];
    for(int i=0;i<n1;i++)
        L[i]=a[l+i];
    for(int j=0;j<n2;j++)
        R[j]=a[m+j+1];
    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {


        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;
        }
        else
        {
            a[k]=R[j];
            j++;
        }
        k++;
    }
     while (i < n1) {
        a[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        a[k] = R[j];
        j++;
        k++;
    }

}


void mergesort(int a[],int l,int r)
{
    int m;

    if(l<r)
    {
        m=l+(r-1)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        mergearray(a,l,m,r);
    }


}





int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    mergesort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
