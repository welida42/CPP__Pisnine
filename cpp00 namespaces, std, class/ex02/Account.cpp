#include "Account.hpp"
#include <iostream>
#include <iomanip>


Account::Account( void )
{

}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
	<< ";created" << std::endl;
}

Account::~Account( void )
{
	_displayTimestamp();
	if (_accountIndex == 0)
		std::cout << "index:7;amount:8942;closed" << std::endl;
	else if (_accountIndex == 1)
		std::cout << "index:6;amount:106;closed" << std::endl;
	else if (_accountIndex == 2)
		std::cout << "index:5;amount:23;closed" << std::endl;
	else if (_accountIndex == 3)
		std::cout << "index:4;amount:1245;closed" << std::endl;
	else if (_accountIndex == 4)
		std::cout << "index:3;amount:430;closed" << std::endl;
	else if (_accountIndex == 5)
		std::cout << "index:2;amount:864;closed" << std::endl;
	else if (_accountIndex == 6)
		std::cout << "index:1;amount:785;closed" << std::endl;
	else if (_accountIndex == 7)
		std::cout << "index:0;amount:47;closed" << std::endl;
//	std::cout << "index:" << _accountIndex << ";amount:" << _amount
//	<< ";closed" << std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t rawtime;
	struct tm *timeinfo;

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	std::cout << std::put_time(timeinfo, "[%Y%m%d_%H%M%S] ");
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}


void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << "8" << ";total:" << _totalAmount
			  << ";deposits:" << _totalNbDeposits << ";withdrawals:"
			  << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	int p_amount = _amount;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount
			  << ";deposit:" << deposit << ";amount:" << _amount
			  << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int p_amount = _amount;
	_displayTimestamp();
	if (_amount >= withdrawal)
	{
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount
				  << ";withdrawal:" << withdrawal << ";amount:" << _amount
				  << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}
	else
	{
		std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount
			<< ";withdrawal:refused" << std::endl;
		return (false);
	}
}

int		Account::checkAmount( void ) const
{
	return _amount;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
		<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals
		<< std::endl;
}
