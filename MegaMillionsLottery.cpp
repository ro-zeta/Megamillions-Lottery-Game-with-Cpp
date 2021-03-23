//
//  MegaMillionsLottery.cpp
//  CS31_Project5
//
//  Created by rozeta on 2/24/20.
//  Copyright © 2020 rozeta. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
#include "MegaMillionsTicket.h"
#include "RandomNumber.h"
#include "MegaMillionsLottery.h"


//--constructors

MegaMillionsLottery::MegaMillionsLottery(){
    //initialize the megaMillTix obj trying to create
RandomNumber r(1,75);
  mBall1=r.random();
  mBall2=r.random();
    while(mBall2==mBall1){
        mBall2=r.random();
    }
  mBall3=r.random();
    while(mBall3==mBall1 || mBall3==mBall2){
        mBall3=r.random();
    }
  mBall4=r.random();
    while(mBall4==mBall3|| mBall4==mBall2||mBall4==mBall1){
        mBall4=r.random();
    }
  mBall5=r.random();
    while(mBall5==mBall4 ||mBall5==mBall3|| mBall5==mBall2||mBall5==mBall1){
           mBall5=r.random();
       }
    
 RandomNumber Mega(1,25);
  mMegaBall=Mega.random();
 
}

MegaMillionsLottery::MegaMillionsLottery(int Ball1, int Ball2, int Ball3, int Ball4, int Ball5, int MegaBall){
    mBall1=Ball1;
    mBall2=Ball2;
    mBall3=Ball3;
    mBall4=Ball4;
    mBall5=Ball5;
    mMegaBall=MegaBall;

}
//--accessors


int MegaMillionsLottery::getBall1() const {
    return(mBall1);
}
int MegaMillionsLottery::getBall2() const {
    return(mBall2);
}
int MegaMillionsLottery::getBall3() const {
    return(mBall3);
}
int MegaMillionsLottery::getBall4() const {
    return(mBall4);
}
int MegaMillionsLottery::getBall5() const {
    return(mBall5);
}
int MegaMillionsLottery::getMegaBall() const {
    return(mMegaBall);
}

//access to a random MegaMillTix
MegaMillionsTicket MegaMillionsLottery::quickPick() {
   RandomNumber r(1,75);
    int a[6]={0,0,0,0,0,0};
    int i=0;
    //a[0]=r.random();
    for(i=0; i<5; i++){
        a[i]=r.random();
        for(int j = 0;j<5;j++){
            if ((i!=j) && (a[j]==a[i]))
                a[i]=r.random();
        }
    }
    RandomNumber Mega(1,25);
    a[5]=Mega.random();
  MegaMillionsTicket m(a[0],a[1],a[2],a[3],a[4],a[5]);
    return(m);
};

 MegaMillionsLottery::WinningPossibility MegaMillionsLottery::checkTicket(MegaMillionsTicket ticket) {
     int ticketArray[6]={ticket.getBall1(), ticket.getBall2(), ticket.getBall3(), ticket.getBall4(), ticket.getBall5(), ticket.getMegaBall()};
     int lotteryArray[6]={mBall1, mBall2, mBall3, mBall4, mBall5, mMegaBall};
     int i=0;
     int counter=0;
     for(i=0;i<5;i++){
         int j=0;
         for(j=0; j<5; j++){
         if(ticketArray[i]==lotteryArray[j]) {
                 counter=counter+1;
                 }
         }
     }
         if(counter==1 && ticketArray[5]==lotteryArray[5]){
                        return(ONEPLUSMEGABALL);
         }
         else if(counter==2 && ticketArray[5]==lotteryArray[5]){
                        return(TWOPLUSMEGABALL);
                 }
         else if(counter==3){
                return(THREE);
         }
         else if(counter==3 && ticketArray[5]==lotteryArray[5]){
            return(THREEEPLUSMEGABALL);
        }
         else if(counter==4 && ticketArray[5]!=lotteryArray[5]){
            return(FOUR);
        }
        else if(counter==4 && ticketArray[5]==lotteryArray[5]){
         return(FOURPLUSMEGABALL);
        }
        else if(counter==5 && ticketArray[5]!=lotteryArray[5]){
            return(FIVE);
        }
        else if(counter==5 && ticketArray[5]==lotteryArray[5]){
            return(FIVEPLUSMEGABALL);
        }
       else if(counter==0 && ticketArray[5]==lotteryArray[5]){
                  return(MEGABALL);
              }
        else {
                        return(NOTWINNING);
        }

}


string MegaMillionsLottery::whatHappened(MegaMillionsTicket ticket){
    int ticketArray[6]={ticket.getBall1(), ticket.getBall2(), ticket.getBall3(), ticket.getBall4(), ticket.getBall5(), ticket.getMegaBall()};
    int lotteryArray[6]={mBall1, mBall2, mBall3, mBall4, mBall5, mMegaBall};
    int i=0;
    int counter=0;
    for(i=0;i<5;i++){
        int j=0;
        for(j=0; j<5; j++){
        if(ticketArray[i]==lotteryArray[j]) {
                counter=counter+1;
                }
        }
    }
    
        if(counter==1 && ticketArray[5]==lotteryArray[5]){
            return("You matched 1 ball plus the megaball!");
        }
        else if(counter==2 && ticketArray[5]==lotteryArray[5]){
            return("You matched 2 balls plus the megaball!");
                }
        else if(counter==3 && ticketArray[5]!=lotteryArray[5]){
            return("You matched 3 balls!");
        }
        else if(counter==3 && ticketArray[5]==lotteryArray[5]){
           return("You matched 3 balls plus the megaball!");
       }
        else if(counter==4 && ticketArray[5]!=lotteryArray[5]){
           return("You matched 4 balls!");
       }
       else if(counter==4 && ticketArray[5]==lotteryArray[5]){
        return("You matched 4 balls plus the megaball!");
       }
       else if(counter==5 && ticketArray[5]!=lotteryArray[5]){
           return("You matched 5 balls!");
       }
       else if(counter==5 && ticketArray[5]==lotteryArray[5]){
           return("You matched 5 balls plus the megaball!");
       }
    else if(counter==0 && ticketArray[5]==lotteryArray[5]){
                     return("You matched the megaball!");
                 }
       else {
            return("You didn't win anything at all!");
       }
    
}
