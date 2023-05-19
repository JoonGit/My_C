using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ex17
{
    public class Order
    {
        public Goods goods;
        public Member member;
        int buyCount;

        public void Buy(Goods item, Member customer, int num)
        {
            bool check = item.Sell(num);
            if (check)
            {
                goods = item;
                member = customer;
                buyCount = num;
                Console.WriteLine();
                Console.WriteLine("주문 목록\n구매상품 : {0}\n구매자 : {1}\n구매갯수 : {2}\n", item.name, customer.name, num);
            }
            else
            {
                Console.WriteLine("실패");
            }
        }
    }
}
