TestCopy(CTestCopy & om);
	void setXY(int a, int b);
	void disPlay();
	~CTestCopy();
};
CTestCopy::CTestCopy()
{

	x = 0;
	y = 0;
	cout << "???????? x=" << x << " y=" << y << endl;
}
CTestCopy::~CTestCopy()
{
	cout << "????????   x=" << x << " y=" << y << endl;
}
CTestCopy::CTestCopy(int a, int b)
{
	x = a;
	y = b;
	cout << "?????? x=" << x << " y=" << y << endl;
}
CTestCopy::CTestCopy(CTestCopy & om)
{
	x = om.x * 2;
	y = om.y * 2;
	cout << "*******************************" << endl;
	cout << "????????? x=" << x << " y=" << y << endl;
}

void CTestCopy::setXY(int a, int b)
@ -38,17 +46,24 @@ void CTestCopy::setXY(int a, int b)
}
void CTestCopy::disPlay()
{
	cout << "x=" << x << "y=" << y << endl;
	cout << "display    x=  " << x << " y= " << y << endl;
}
CTestCopy myTest()
{
	CTestCopy om(600,700);
	om.disPlay();
	return om;
}
void myTest(CTestCopy temp)
int testtemp(int x)
{
	
	temp.disPlay();
	return x * 2;
}
int main()
{
	CTestCopy ot(100, 200);
	myTest(ot);
	CTestCopy ot;
	ot.disPlay();
	ot = myTest();
	ot.disPlay();
    return 0;
}

