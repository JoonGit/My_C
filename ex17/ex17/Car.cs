using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ex17
{
    public class Car
    {
        public int curSpeed;
        public int fuelGauge;
        public string color;
        public string maker;


        public void AddSpeed()
        {
            CheckFuel();
            curSpeed += 10;
            MinFuel();
        }
        public void MinSpeed()
        {
            CheckFuel();
            curSpeed -= 10;
        }
        public void AddFuel()
        {
            fuelGauge += 10;
        }
        public void MinFuel()
        {
            fuelGauge -= 10;
        }

        public void CheckFuel()
        {
            if (fuelGauge >= 100)
            {
                Console.WriteLine("가득참");
            }
            else if (fuelGauge <= 0)
            {
                Console.WriteLine("연료가 없습니다");
            }
        }
    }
}
