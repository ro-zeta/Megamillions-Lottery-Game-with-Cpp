//
//  main.cpp
//  CS31_Project5
//
//  Created by rozeta on 2/23/20.
//  Copyright © 2020 rozeta. All rights reserved.
//

#include <iostream>
#include "RandomNumber.h"
#include "MegaMillionsTicket.h"
#include "MegaMillionsLottery.h"
#include <cassert>
#include <string>

using namespace std;

int main() {
//    test code
    MegaMillionsTicket ticket(1,2,3,4,5,6);
    assert(ticket.getBall1()==1);
    assert(ticket.getBall2()==2);
    assert(ticket.getBall3()==3);
    assert(ticket.getBall4()==4);
    assert(ticket.getBall5()==5);
    assert(ticket.getMegaBall()==6);
    MegaMillionsLottery lottery(1,2,3,4,5,6);
    assert(lottery.getBall1()==1);
    assert(lottery.getBall2()==2);
    assert(lottery.getBall3()==3);
    assert(lottery.getBall4()==4);
    assert(lottery.getBall5()==5);
    assert(lottery.getMegaBall()==6);
    
    cout<< lottery.checkTicket(ticket)<<endl;
    
    assert(lottery.checkTicket(ticket)==
    MegaMillionsLottery::WinningPossibility::FIVEPLUSMEGABALL);
    assert( lottery.whatHappened( ticket ) == "You matched 5 balls plus the megaball!" );
    ticket = MegaMillionsTicket( 1, 2, 3, 4, 5, 12 );
    assert( lottery.checkTicket(ticket) == MegaMillionsLottery::WinningPossibility::FIVE);
    assert( lottery.whatHappened( ticket ) == "You matched 5 balls!" );
    ticket = MegaMillionsTicket( 1, 2, 3, 4, 15, 12 );

    MegaMillionsTicket quickPickTicket( 1, 2, 3, 4, 5, 6);
    for (int i = 0; i < 20; i++)
    {

        quickPickTicket = lottery.quickPick();
         // all the ball numbers need to be different...
        assert(  quickPickTicket.getBall1() != quickPickTicket.getBall2());
        assert(  quickPickTicket.getBall1() != quickPickTicket.getBall3());
        assert(  quickPickTicket.getBall1() != quickPickTicket.getBall4());
        assert(  quickPickTicket.getBall1() != quickPickTicket.getBall5());
        assert(  quickPickTicket.getBall2() != quickPickTicket.getBall3());
        assert(  quickPickTicket.getBall2() != quickPickTicket.getBall4());
        assert(  quickPickTicket.getBall2() != quickPickTicket.getBall5());
        assert(  quickPickTicket.getBall3() != quickPickTicket.getBall4());
        assert(  quickPickTicket.getBall3() != quickPickTicket.getBall5());
        assert(  quickPickTicket.getBall4() != quickPickTicket.getBall5());
    }
    
    RandomNumber r(1, 75); // balls 1-5
    cout<< r.random() <<endl;
     cout<< r.random() <<endl;
     cout<< r.random() <<endl;
     cout<< r.random() <<endl;
     cout<< r.random() <<endl;
    RandomNumber mega(1, 25);
    
    MegaMillionsTicket m(1,77,3,4,5,2);
    cout<<m.getBall2();
    MegaMillionsTicket Winner(1,2,3,4,5,6);
    Winner.getBall2();
    MegaMillionsLottery LetUsWin;
//    cout<< LetUsWin.quickPick() <<endl;
    return 0;
}


