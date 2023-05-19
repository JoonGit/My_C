using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ex17
{
    public class Goods
    {
        public string name;
        int price;
        int count;

        public Goods(string name, int price, int count)
        {
            this.name = name;
            this.price = price;
            this.count = count;
        }

        public bool Sell(int sellGoodsCount)
        {
            if (count > sellGoodsCount)
            {
                Console.WriteLine("상품이 {0}개 판매 되었습니다", sellGoodsCount);
                count -= sellGoodsCount;
                Console.WriteLine("남은 상품 갯수 {0}", count);
                return true;
            }
            else
            {
                Console.WriteLine("주문한 상품이 남은 수량보다 많아주문의 실패하였습니다\n 남은수량 :{0}", count);
                return false;
            }

        }
    }
}
