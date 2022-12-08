#include <iostream>
using namespace std;

class CTest
{
public:
    CTest()
    {
        m_nData = 10;
    }

    int m_nData;

    void PrintData(void);
};

void CTest::PrintData(void)
{
    cout << m_nData << endl;
}

class CMyData
{

    int m_nData;

public:
    CMyData() {};
    int GetData(void) { return m_nData; }
    void SetData(int nParam) { m_nData = nParam; }
};

class CRefTest
{
public:
    CRefTest(int &rParam) : m_nData(rParam) {};
    int GetData(void) { return m_nData; }

private:
    int &m_nData;
};

int main()
{
    int a = 10;
    CRefTest t(a);

    cout << t.GetData() << endl;

    a = 20;
    cout << t.GetData() << endl;

    return 0;
}

