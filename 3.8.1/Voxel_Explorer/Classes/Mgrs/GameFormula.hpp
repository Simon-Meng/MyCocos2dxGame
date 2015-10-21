//
//  GameFormula.hpp
//  Voxel_Explorer
//
//  Created by wang haibo on 15/10/20.
//
//

#ifndef GameFormula_hpp
#define GameFormula_hpp

#include "ChaosNumber.h"
class GameFormula
{
public:
    static int getLevelMonsterCount(int standardAreaNum);
    
    static int getNextLevelExp(int currentLevel);
    static int getKillNormalMonsterExp(int currentLevel, int monsterLevel);
    static int getKillEliteMonsterExp(int currentLevel, int monsterLevel);
    static int getKillBossExp(int currentLevel, int bossLevel);
};

#endif /* GameFormula_hpp */