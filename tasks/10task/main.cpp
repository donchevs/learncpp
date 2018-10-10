#include <iostream>
#include <string>

enum class MonsterType
{
	OGRE,
	DRAGON,
	ORC,
	SPIDER,
	SLIME
};

struct Monster
{
	MonsterType type;
	std::string name;
	unsigned int health;
};

std::string getMonsterType(Monster monst)
{
	if (monst.type == MonsterType::OGRE)
		return "Ogre";
	if (monst.type == MonsterType::DRAGON)
		return "Dragon";
	if (monst.type == MonsterType::ORC)
		return "Orc";
	if (monst.type == MonsterType::SPIDER)
		return "Giant Spider";
	if (monst.type == MonsterType::SLIME)
		return "Slime";
}

void printMonster(Monster monst)
{
	std::cout << "This " << getMonsterType(monst) << " is named " <<
		monst.name << " and has " << monst.health << " health.\n";
}

int main()
{
	Monster ogre = {MonsterType::OGRE, "Torg", 145};
	Monster slime = {MonsterType::SLIME, "Blurp", 23};

	printMonster(ogre);
	printMonster(slime);
	return 0;
}
