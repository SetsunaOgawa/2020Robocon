#include <iostream>

double vel=0;//速度
double rad=0;//旋回半径
double tang=0;//目標角
double width=147;//車幅(mm)
double cang=0;//中心角
double ave=0;//角速度
double vr=0;
double vl=0;
double dr=0;
double dl=0;
double pi = 3.14;

int main() {
    ave = vel/rad;
    cang = 2*tang*pi/180;
    if(cang < 0){
        vr = vel+( width / 2 )*ave;
        vl = vel-( width / 2 )*ave;
        cang = -cang;
    }
    else if(cang > 0){
        vr = vel-( width / 2 )*ave;
        vl = vel+( width / 2 )*ave;
    }
    else{
        vr = vel;
        vl = vel;
    }
    dr = vr * cang / ave;
    dl = vl * cang / ave;
}