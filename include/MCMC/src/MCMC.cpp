#IFNDEF _MCMC_H
#DEFINE _MCMC_H


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

