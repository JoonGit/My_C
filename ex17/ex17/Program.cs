using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ex17
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // 객체 지향 프로그래밍
            Staff       staff       =   new Staff("최강금돈까스", 0, 5000);
            Character   ogre        =   new Character(100,0,0,0, new Weapon[10]);
            Weapon      weapon1     =   new Weapon("무기");
            Weapon      weapon2     =   new Weapon("방어구");
            Member      member      =   new Member("Kang", "kang", "최강금");
            Goods       goods       =   new Goods("돈까스", 10000, 10);
            Order[]     orders      =   new Order[10];
            Order       order1      =   new Order();
            Order       order2      =   new Order();
            int         orderCount  =   0;

            staff.RankUp();
            staff.Print();
            staff.RankUp();
            staff.Print();
            staff.SetNickName("돈까스");
            staff.Print();

            staff.rank;

            Console.WriteLine();
            ogre.AcquireAnItem(weapon1);
            ogre.Prient();
            ogre.AcquireAnItem(weapon1);
            ogre.Prient();
            ogre.AcquireAnItem(weapon2);
            ogre.Prient();
            ogre.ItemListPrint();
            Console.WriteLine();

            member.ChangePassword("Kang", "1ang");
            member.ChangePassword("kang", "1ang");
            Console.WriteLine();

            goods.Sell(3);
            Console.WriteLine();

            orders[orderCount] = order1;
            orders[orderCount].Buy(goods, member, 3);
            orderCount++;
            orders[orderCount] = order2;
            orders[orderCount].Buy(goods, member, 10);
        }
    }
}
