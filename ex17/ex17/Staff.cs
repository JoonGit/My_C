using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ex17
{
    public class Staff
    {
        // public protected private

        string nickname;
        int rank;
        int salary;

        public Staff() { }

        public Staff(string nickname, int rank, int salary)
        {
            this.nickname = nickname;
            this.rank = rank;
            this.salary = salary;

            salary = 100;
        }

        public void RankUp()
        {
            Console.WriteLine("진급하셨습니다");
            rank += 1;
            salary += 1000;
        }

        public void SetNickName(string name)
        {
            Console.WriteLine("이름이 변경되었습니다");
            Console.WriteLine("이전 이름 : {0}", nickname);
            nickname = name;
            Console.WriteLine("현재 이름 : {0}", nickname);
        }

        public void Print()
        {
            Console.Write("이름 : " + nickname + " ");
            Console.Write("연봉 : " + salary + " ");
            Console.Write("직급 : " + rank + " ");
            Console.WriteLine();
        }
    }
}
