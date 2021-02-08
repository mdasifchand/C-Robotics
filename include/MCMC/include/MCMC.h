#ifndef _MCMC_H
#define _MCMC_H


Template <class T>
class MCMC{

MCMC( std::vector<T>&& someVector )noexcept {
    this._value(std::move(someVector));

}

constexpr int sampling(){
 //TODO: sample a function for realizations

}

explicit MCMC(){}
~MCMC(){}

private:
std::vector<T> _value;
};


#endif
