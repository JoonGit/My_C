using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ex17
{
    public class Student
    {
        Staff staff = new Staff();

        

        public string name;
        public int age;

        //public Student(int age, string name)
        //{
        //    this.age = age;
        //    this.name = name;
        //}

        public void SetName(string reName)
        {
            this.name = reName;
            staff.rank
        }

        public string GetName() { return name; }
    }
}
