#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;

int main() {
    string begin;
    cout<<"1 2 3 C 4 5 6 9"<<endl;
    cin>>begin;//confirm if the first input word is begin
    string headline,at;
    int time,mana,towerhp[7]= {0},friendhp[256],enemyhp[256],hpid,friendx[256],friendy[256],fc=0,enemyx[256],enemyy[256],ec=0,upenemy,downenemy,upfriend,downfriend;
    //the location of the soilders didn't define type
    char deck[4],my[256],enemy[256],comma,friendid[256],enemyid[256];
    while(begin=="BEGIN") {
        //cout<<"success"<<endl;
        for(int i=0; i<256; i++) {
            friendid[i]=friendx[i]=friendy[i]=friendhp[i]=enemyid[i]=enemyx[i]=enemyy[i]=enemyhp[i]=fc=ec=upenemy=downenemy=upfriend=downfriend=0;
        }
        do {
            cin>>headline;
            if(headline=="TIME") {
                cin>>time;
                if(time==0) {
                    break;
                }
            }
            if(headline=="MANA") {
                cin>>mana;
            }
            if(headline=="DECK") {
                for(int i=0; i<4; i++) {
                    cin>>deck[i];
                }
            }
            if(headline=="TOWER") {
                cin>>hpid;
                cin>>towerhp[hpid];
            }
            if(headline=="FRIEND") {
                fc++;
                cin>>friendid[fc]>>at>>friendx[fc]>>comma>>friendy[fc]>>at>>friendhp[fc];
                if(friendx[fc]<=10) {
                    upfriend++;
                } else {
                    downfriend++;
                }
//				cout<<fc<<" "<<friendid[fc]<<" "<<friendx[fc]<<","<<friendy[fc]<<" "<<friendhp[fc]<<endl;
            }
            if(headline=="ENEMY") {
                ec++;
                cin>>enemyid[ec]>>at>>enemyx[ec]>>comma>>enemyy[ec]>>at>>enemyhp[ec];
                if(enemyx[ec]<=10) {
                    upenemy++;
                } else {
                    downenemy++;
                }

//			cout<<ec<<" "<<enemyid[ec]<<" "<<enemyx[ec]<<","<<enemyy[ec]<<" "<<enemyhp[ec]<<endl;
            }


        } while(headline!="END");
//        if(mana>=3) {
        int x,y;
        /*        if(upenemy>downenemy || upenemy>upfriend) {
                    x=(rand()%6)+3;
                    y=(rand()%12)+11;
                } else if(downenemy>upenemy || downenemy>>downfriend) {
                    x=(rand()%6)+12;
                    y=(rand()%12)+11;
                } else {*/
        x=(rand()%12)+6;
        y=(rand()%4)+12;
        //}
        for(int i=0; i<4; i++) {
            cout<<"1"<<" "<<deck[i]<<" "<<x<<" "<<y<<endl;
        }
        //      }
        cout<<0<<endl;
        cin>>begin;
//		for(int i=0;i<4;i++){
//		cout<<towerid[i]<<" "<<towerhp[i]<<endl;}
    }
    return 0;
}
