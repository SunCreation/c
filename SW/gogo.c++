
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>

#define CMD_INIT 1
#define CMD_BUY 2
#define CMD_SELL 3
#define CMD_CANCEL 4
#define CMD_BEST_PROFIT 5

extern void init();
extern int buy(int mNumber, int mStock, int mQuantity, int mPrice);
extern int sell(int mNumber, int mStock, int mQuantity, int mPrice);
extern void cancel(int mNumber);
extern int bestProfit(int mStock);

/////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////

static bool run()
{
    int numQuery;

    int mNumber, mStock, mQuantity, mPrice;

    int userAns, ans;

    bool isCorrect = false;

    scanf("%d", &numQuery);

    for (int i = 0; i < numQuery; ++i)
    {
        int cmd;
        scanf("%d", &cmd);
        switch (cmd)
        {
        case CMD_INIT:
            init();
            isCorrect = true;
            break;
        case CMD_BUY:
            scanf("%d %d %d %d", &mNumber, &mStock, &mQuantity, &mPrice);
            userAns = buy(mNumber, mStock, mQuantity, mPrice);
            scanf("%d", &ans);
            if (userAns != ans)
            {
                // printf("buying%d \t %d \t %d\n", userAns, ans,mNumber);
                isCorrect = false;

            }
            break;
        case CMD_SELL:
            scanf("%d %d %d %d", &mNumber, &mStock, &mQuantity, &mPrice);
            userAns = sell(mNumber, mStock, mQuantity, mPrice);
            scanf("%d", &ans);
            if (userAns != ans)
            {
                // printf("selling%d \t %d\n", userAns, ans);
               isCorrect = false;
               
            }
            break;
        case CMD_CANCEL:
            scanf("%d", &mNumber);
            cancel(mNumber);
            break;
        case CMD_BEST_PROFIT:
            scanf("%d", &mStock);
            userAns = bestProfit(mStock);
            scanf("%d", &ans);
            if (userAns != ans)
            {
               isCorrect = false;
               
            }
            break;
        default:
            isCorrect = false;
            break;
        }
    }

    return isCorrect;
}

int main()
{
    setbuf(stdout, NULL);
    freopen("../inputs/sample_input.txt", "r", stdin);

    int T, MARK;
    scanf("%d %d", &T, &MARK);

    for (int tc = 1; tc <= T; tc++)
    {
        int score = run() ? MARK : 0;
        printf("#%d %d\n", tc, score);
    }

    return 0;
}


#include <vector>
#include <stdlib.h>
#include <string.h>
#include <bits/stdc++.h>
#include <utility>

using namespace std;
// vector<가격,-주문번호,수량>
// vector<가격,주문번호,수량>
using triev = vector<vector<vector<int>>>;
using twinv = vector<vector<int>>;
triev buycall;
triev sellcall;
twinv price;
vector<pair<int,bool>> is_sell;

void init()
{
    // buycall = 
    triev(6,twinv()).swap(buycall);
    // sellcall = 
    triev(6,twinv()).swap(sellcall);
    // price = 
    vector<vector<int>>(6,vector<int>()).swap(price);
    // is_sell = 
    vector<pair<int,bool>>(200001).swap(is_sell);
}

int buy(int mNumber, int mStock, int mQuantity, int mPrice)
{   
    is_sell[mNumber]=make_pair(mStock,false);
    if(!sellcall[mStock].empty()){
        for(vector<vector<int>>::iterator it=sellcall[mStock].begin();it!=sellcall[mStock].end();){
            if(mPrice>=(*it)[0]){
                price[mStock].push_back((*it)[0]);
                if(mQuantity>=(*it)[2]){
                    mQuantity-=(*it)[2];
                    it = sellcall[mStock].erase(it);
                }
                else {
                    (*it)[2]-=mQuantity;
                    mQuantity=0;
                    break;
                }
            }
            else break; 
        }
    }
    if(mQuantity>0){
        vector<int> val = {mPrice,-mNumber,0};
        vector<vector<int>>::reverse_iterator it =upper_bound(buycall[mStock].rbegin(),buycall[mStock].rend(),val);
        buycall[mStock].insert(it.base(),vector<int>{mPrice,mNumber,mQuantity});
    }
    // printf("%d\n",mQuantity);
    return mQuantity;
}

int sell(int mNumber, int mStock, int mQuantity, int mPrice)
{
    is_sell[mNumber]=make_pair(mStock,true);
    if(!buycall[mStock].empty()){
        for(vector<vector<int>>::iterator it=buycall[mStock].begin();it!=buycall[mStock].end();){
            if(mPrice<=(*it)[0]){
                price[mStock].push_back((*it)[0]);
                if(mQuantity>=(*it)[2]){
                    mQuantity-=(*it)[2];
                    it = buycall[mStock].erase(it);
                }
                else {
                    (*it)[2]-=mQuantity;
                    mQuantity=0;
                    break;
                }
            }
            else break; 
        }
    }
    if(mQuantity>0){
        vector<int> val = {mPrice,mNumber,0};
        vector<vector<int>>::iterator it =upper_bound(sellcall[mStock].begin(),sellcall[mStock].end(),val);
        sellcall[mStock].insert(it,vector<int>{mPrice,mNumber,mQuantity});
    }
    // printf("%d\n",mQuantity);
    return mQuantity;
}

void cancel(int mNumber)
{
    int mStock = is_sell[mNumber].first;
    if(is_sell[mNumber].second){
        for(vector<vector<int>>::iterator it = sellcall[mStock].begin();it!=sellcall[mStock].end();it++){
            if((*it)[1]==mNumber){
                sellcall[mStock].erase(it);
                break;
            }
        }
    }
    else{
        for(vector<vector<int>>::iterator it = buycall[mStock].begin();it!=buycall[mStock].end();it++){
            if((*it)[1]==mNumber){
                buycall[mStock].erase(it);
                break;
            }
        }
    }
    /*
    for(vector<int> i : buycall[mStock]){
        printf("%d",i[1]);
    }
    printf("\n");
    */
}

int bestProfit(int mStock)
{
    /*
    for(int i : price){
        printf("%d",i);
    }
    printf("\n");
    */
   int min_stock=20000000;
   int max_benefit=0;
   for(int value :price[mStock]){
       min_stock = min(min_stock,value);
       max_benefit = max(max_benefit,value-min_stock);
   }

    return max_benefit;
}