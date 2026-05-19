#pragma once
#include <stdexcept>
#include <string>
using namespace std;
class InsufficientBalanceException : public std::runtime_error{
    public:
        InsufficientBalanceException(const string& msg = "insufficient balance in account")
            : std::runtime_error(msg) {}
};
class InvalidPINException : public std::runtime_error{
    public:
    InvalidPINException(const string& msg = "Invalid pin entered")
        : std::runtime_error(msg) {}
};
class AccountBlockedException : public std::runtime_error{
    public:
        AccountBlockedException(const string& msg = "Account is blocked")
            : std::runtime_error(msg) {}
};
class LoanRejectedException : public std::runtime_error{
    public:
        LoanRejectedException (const string& msg = "Loan application has been rejectedd")
            : std::runtime_error(msg) {}
};