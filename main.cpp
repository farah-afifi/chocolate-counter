#include <iostream>
using namespace std;
int NumOfChoco ( int dollars , int NumChocos=0 )
{
    if( dollars ==0 )///base case if we have no more money we'll return the no. of chocolates bought
        return ( NumChocos );
    if( NumChocos % 7 == 0 && NumChocos != 0 )
    {
        return NumOfChoco( dollars - 1 , NumChocos + 2 );///if we have 7 coupons we'll get 1 more chocolate
    }
    else
    {
        return NumOfChoco( dollars - 1 ,NumChocos + 1 );///for every dollar we get 1 chocolate
    }

}
int main()
{
    cout<<NumOfChoco(20);

    return 0;
}
