#include <iostream>

int main()
{
    int a,b,c,tokos;
    std::cout<<"nermucel  3 apranqneri gnery ev zexchi tokosy";
    std::cin>>a>>b>>c>>tokos;
    int ardyunq=a+b+c-(a+b+c)*tokos/100;
    std::cout<<ardyunq;

    return 0;
}
