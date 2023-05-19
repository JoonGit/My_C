using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ex17
{
    public class Character
    {
        int hp;
        int attack;
        int defense;
        int item;
        int size;
        Weapon[] itemList;

        public Character(int hp, int attack, int defense, int item, Weapon[] weapons)
        {
            this.hp = hp;
            this.attack = attack;
            this.defense = defense;
            this.item = item;
            this.itemList = weapons;
        }

        public void AcquireAnItem(Weapon weapon)
        {

            itemList[item] = weapon;
            item++;
            if (weapon.type == "무기")
            {
                Console.WriteLine("무기를 획득했습니다");
                attack += 10;
            }
            else if (weapon.type == "방어구")
            {
                Console.WriteLine("방어구를 획득했습니다");
                defense += 10;
            }
        }
        public void Prient()
        {
            Console.Write("체력 : " + hp + " ");
            Console.Write("공격력 : " + attack + " ");
            Console.Write("방어력 : " + defense + " ");
            Console.WriteLine();
        }
        public void ItemListPrint()
        {
            Console.WriteLine("아이템 리스트");
            for (int i = 0; i < itemList.Length; i++)
            {
                if(itemList[i] == null)
                {
                    break;
                }
                Console.WriteLine(itemList[i].type);
            }
        }
    }
}
