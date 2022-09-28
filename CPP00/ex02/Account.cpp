//
// Created by Tile Tyuuki on 15.06.2022.
//

#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) :
_accountIndex( _nbAccounts ),
_amount( initial_deposit ),
_nbDeposits( 0 ),
_nbWithdrawals( 0 )
{
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;

	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';'
	          << "amount:" << this->_amount << ';'
			  << "created" << '\n';
}

Account::~Account()
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';'
			  << "amount:" << this->_amount << ';'
			  << "closed" << '\n';
}

int	Account::getNbAccounts( void )
{
	return ( Account::_nbAccounts );
}

int	Account::getTotalAmount( void )
{
	return ( Account::_totalAmount );
}

int	Account::getNbDeposits( void )
{
	return ( Account::_totalNbDeposits );
}

int	Account::getNbWithdrawals( void )
{
	return ( Account::_totalNbWithdrawals );
}

void	Account::displayStatus() const
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';'
			  << "amount:" << this->_amount << ';'
			  << "deposits:" << this->_nbDeposits << ';'
			  << "withdrawals:" << this->_nbWithdrawals << '\n';
}

void	Account::makeDeposit( int deposit )
{
	this->_totalNbDeposits++;
	this->_nbDeposits++;

	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';'
			  << "p_amount:" << this->_amount << ';'
			  << "deposit:" << deposit << ';'
			  << "amount:" << this->_amount + deposit << ';'
			  << "nb_deposits:" << this->_nbDeposits << '\n';
	this->_amount += deposit;
	this->_totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	this->_amount -= withdrawal;
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ';'
			  << "p_amount:" << this->_amount + withdrawal << ';';
	if( !this->checkAmount() )
	{
		std::cout << "withdrawal:" << "refused" << '\n';
		this->_amount += withdrawal;
	}
	else
	{
		this->_totalNbWithdrawals++;
		this->_nbWithdrawals++;
		this->_totalAmount -= withdrawal;
		std::cout << "withdrawal:" << withdrawal << ';'
				  << "amount:" << this->_amount<< ';'
				  << "nb_withdrawals:" << this->_nbWithdrawals << '\n';
		return ( true );
	}
	return ( false );
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ';'
			  << "total:" << Account::getTotalAmount() << ';'
			  << "deposits:" << Account::getNbDeposits() << ';'
			  << "withdrawals:" << Account::getNbWithdrawals() << '\n';
}

int		Account::checkAmount( void ) const
{
	return ( this->_amount < 0 ? 0 : 1 );
}

//Get today's time
void	Account::_displayTimestamp( void )
{
	std::time_t t = std::time( 0 );
	std::tm* now = std::localtime( &t );
	std::cout  << '[' << std::setfill( '0') << ( now->tm_year + 1900 )
			  << std::setw( 2 ) << ( now->tm_mon + 1 )
			  << std::setw( 2 ) <<  now->tm_mday << '_'
			  << std::setw( 2 ) << now->tm_hour
			  << std::setw( 2 ) << now->tm_min
			  << std::setw( 2 ) << now->tm_sec
			  << ']' << ' ';
}

Account::Account( void ) { }