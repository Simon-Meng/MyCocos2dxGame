//
//  GameFormula.cpp
//  Voxel_Explorer
//
//  Created by wang haibo on 15/10/20.
//
//

#include "GameFormula.hpp"
USING_NS_CC;
int GameFormula::getLevelMonsterCount(int standardAreaNum)
{
    return 2 + standardAreaNum*2 + cocos2d::random(0, 5);
}

int GameFormula::getNextLevelExp(int currentLevel)
{
    int exp = floor((pow((currentLevel-1), 3)+60)/5*((currentLevel-1)*2+60)+60);
    int mod = exp%50;
    return exp - mod;
}
int GameFormula::getKillNormalMonsterExp(int currentLevel, int monsterLevel)
{
    int monsterExp = (monsterLevel-1)*2+60;
    int diff = monsterLevel - currentLevel;
    if(diff>=0)
    {
        if(diff>=5)
            monsterExp = monsterExp*2;
        else
            monsterExp = monsterExp*pow(1.15f, diff);
    }
    else
    {
        if(diff<=-5)
            monsterExp = 0;
        else
            monsterExp = monsterExp*pow(0.8f, diff);
    }
    return monsterExp;
}
int GameFormula::getKillEliteMonsterExp(int currentLevel, int monsterLevel)
{
    int monsterExp = (monsterLevel-1)*2+60;
    int diff =  monsterLevel - currentLevel;
    if(diff>=0)
    {
        if(diff>=5)
            monsterExp = monsterExp*6;
        else
            monsterExp = monsterExp*pow(1.5f, diff);
    }
    else
    {
        if(diff<=-8)
            monsterExp = 0;
        else
            monsterExp = monsterExp*pow(0.85f, diff);
    }
    return monsterExp;
}
int GameFormula::getKillBossExp(int currentLevel, int bossLevel)
{
    return (bossLevel-1)*20+100;
}