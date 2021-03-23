//
//  MegaMillionsTicket.h
//  CS31_Project5
//
//  Created by rozeta on 2/24/20.
//  Copyright © 2020 rozeta. All rights reserved.
//

#ifndef MEGAMILLIONSTIX_h
#define MEGAMILLIONSTIX_h
#include <string>    // for class string
using namespace std;

class MegaMillionsTicket{
public:
  //--constructors
    MegaMillionsTicket(int Ball1, int Ball2, int Ball3, int Ball4, int Ball5, int MegaBall);
  //--modifiers

  //--accessors
    int getBall1() const;
    int getBall2() const;
    int getBall3() const;
    int getBall4() const;
    int getBall5() const;
    int getMegaBall() const;
private:
    int mBall1;
    int mBall2;
    int mBall3;
    int mBall4;
    int mBall5;
    int mMegaBall;
};

#endif   // end of #ifndef
