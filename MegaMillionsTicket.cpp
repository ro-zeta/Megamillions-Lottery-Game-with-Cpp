//
//  MegaMillionsTicket.cpp
//  CS31_Project5
//
//  Created by rozeta on 2/24/20.
//  Copyright © 2020 rozeta. All rights reserved.
//
#include <iostream>
#include <string>
using namespace std;

#include "RandomNumber.h"
#include "MegaMillionsTicket.h"
#include "MegaMillionsLottery.h"


//--constructors

MegaMillionsTicket::MegaMillionsTicket(int Ball1, int Ball2, int Ball3, int Ball4, int Ball5, int MegaBall){
    mBall1=Ball1;
    mBall2=Ball2;
    mBall3=Ball3;
    mBall4=Ball4;
    mBall5=Ball5;
    mMegaBall=MegaBall;
}
//--accessors

//class MegaMillionsLottery::quickPic{
//    
//};
int MegaMillionsTicket::getBall1() const {
    return(mBall1);
}
int MegaMillionsTicket::getBall2() const {
    return(mBall2);
}
int MegaMillionsTicket::getBall3() const {
    return(mBall3);
}
int MegaMillionsTicket::getBall4() const {
    return(mBall4);
}
int MegaMillionsTicket::getBall5() const {
    return(mBall5);
}
int MegaMillionsTicket::getMegaBall() const {
    return(mMegaBall);
}
