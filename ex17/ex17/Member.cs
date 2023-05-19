using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ex17
{
    public class Member
    {
        string id;
        string password;
        public string name;

        public Member(string id, string password, string name)
        {
            this.id = id;
            this.password = password;
            this.name = name;
        }

        public bool ChangePassword(string inputPassword, string newPassword)
        {
            if (password != inputPassword)                                                                  
            {
                Console.WriteLine("비밀번호가 불일치합니다");
                return false;
            }
            else
            {
                password = newPassword;
                Console.WriteLine("비밀번호 변경에 성공하였습니다");
                return true;
            }
        }
    }
}
//////////////////////////////////////////////