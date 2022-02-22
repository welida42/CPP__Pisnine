# include "Array.hpp"

int main()
{
	Array<int> A(10);
	std::cout << "--------int----size-" << A.size() << std::endl;
	for (unsigned int i = 0; i < A.size(); i++)
	{
		A[i] = i;
		std::cout << A[i] << " ";
	}
	std::cout << std::endl;

	Array<float> B(20);
	std::cout << "--------float----size-" << B.size() << std::endl;
	for (unsigned int i = 0; i < B.size(); i++)
	{
		B[i] =  i / 10.;
		std::cout << B[i] << " ";
	}
	std::cout << std::endl;

	Array<int> C;
	std::cout << "--------empty----size-" << C.size() << std::endl;
	try {
		std::cout << "try to array[0]: " << C[0] << std::endl;
		}
	catch (std::exception& exception)
	{
		std::cout << exception.what() << std::endl;
	}
	std::cout << std::endl;

	Array<std::string> peers(4);
	peers[0] = "welida";
	peers[1] = "dtawney";
	peers[2] = "lruthan";
	peers[3] = "bashleige";
	std::cout << "--------string----size-" << peers.size() << std::endl;
	for (unsigned int i = 0; i < peers.size(); i++)
		std::cout << peers[i] << " ";
	std::cout << std::endl;

	std::cout << "----------------------------------------" << std::endl;
	Array<int> D1(10);
	std::cout << "test array with default value-(0) and assignation" << std::endl;
	std::cout << "--------int----size-" << D1.size() << std::endl;
	std::cout << "D1 (default values): ";
	for (unsigned int i = 0; i < D1.size(); i++)
		std::cout << D1[i] << " ";
	std::cout << std::endl;
	std::cout << "fill D1 (0 to 9): ";
	for (unsigned int i = 0; i < D1.size(); i++)
	{
		D1[i] = i;
		std::cout << D1[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "assignation (D2 = D1); D2: ";
	Array<int> D2 = D1;
	for (unsigned int i = 0; i < D2.size(); i++)
		std::cout << D2[i] << " ";
	std::cout << std::endl;
	std::cout << "fill D2 with 42: ";
	for (unsigned int i = 0; i < D2.size(); i++)
	{
		D2[i] = 42;
		std::cout << D2[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "D1 did not change: ";
	for (unsigned int i = 0; i < D1.size(); i++)
		std::cout << D1[i] << " ";
	std::cout << std::endl;
	for (unsigned int i = 0; i < D2.size(); i++)
		std::cout << D2[i] << " ";
	std::cout << std::endl;

	std::cout << "----------------------------------------" << std::endl;

	std::cout << "D3(50) - filling with 8" << std::endl;
	Array<int> D3(50);
	for (unsigned int i = 0; i < D3.size(); i++)
	{
		D3[i] = 8;
		std::cout << D3[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "D3 = D2, but try to print 50 values: " << std::endl;
	D3 = D2;
	try {
		for (unsigned int i = 0; i < 50; i++)
			std::cout << D3[i] << " ";
	}
	catch (std::exception& exception)
	{
		std::cout << exception.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "------------Awesome Class array----------------------------"
	<< std::endl;

	Array<Awesome> A1(10);
	for (unsigned int i = 0; i < A1.size(); i++)
	{
		std::cout << A1[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}
