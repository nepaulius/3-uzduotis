#define CATCH_CONFIG_MAIN
#include "test.h"
#include <vector>

TEST_CASE( "Vidurkis blogas ", "vidurkis blogas" ){

   int laikinvid=10;
   int e=4;
    double vidurkis = double (laikinvid)/e;

    REQUIRE( vidurkis == 10 );

}
TEST_CASE( "Mediana blogas", "mediana blogas" ){

std::vector<int> balai{4,5,6,7};
int namsk=4;

    double median;
    std::sort(balai.begin(), balai.end());
    if( namsk%2==0 || namsk==2  )  median=(double)(balai[balai.size()/2]+balai[balai.size()/2-1])/2;
    else median=balai[balai.size()/2];

    REQUIRE(median==5);

}
TEST_CASE( "Ilgiausia pavarde blogas ", "ilgiausia" ){

std::vector<std::string>pavardes{"trumpas","ilgesnis","patsilgiausias"};

    std::string longest=pavardes[0];
    for(int i=0;i<pavardes.size();i++)
    {
        if(longest.size()<pavardes[i].size())
        {
            longest=pavardes[i];
        }
    }

    REQUIRE(longest.size()==13);
}


