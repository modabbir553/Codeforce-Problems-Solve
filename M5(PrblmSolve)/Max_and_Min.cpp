#include <iostream>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    
    if(a<=b && a<=c)
    {
        printf("%d ",a);
    }
    else if(b<=a && b<=c)
    {
        printf("%d ",b);
    }
    else 
    {
        printf("%d ",c);
    }


    if(a>=b && a>=c)
    {
        printf("%d\n",a);
    }
    else if(b>=a && b>=c)
    {
        printf("%d\n",b);
    }
    else 
    {
        printf("%d\n",c);
    }
    return 0;
}