#include "alcohol.hpp"

Alcohol::Alcohol(const std::string& name, size_t amount, size_t basePrice, double alcoholPercentage)
    : Cargo(name, amount, basePrice)
    , alcoholPercentage_(alcoholPercentage) 
{}

// implementation of virtual classes from Cargo class
std::string Alcohol::getName() const { 
    return name_; 
}
size_t Alcohol::getAmount() const { 
    return amount_; 
}
size_t Alcohol::getBasePrice() const { 
    return basePrice_; 
}
size_t Alcohol::getPrice() const {
  double alcoholFactor = alcoholPercentage_ / 96.0;
  return static_cast<size_t>(basePrice_ * alcoholFactor * amount_);
}
void Alcohol::setAmount(size_t amount) {
  amount_ = amount;
}
void Alcohol::setBasePrice(size_t basePrice) {
  basePrice_ = basePrice;
}

double Alcohol::getAlcoholPercentage() const { 
    return alcoholPercentage_; 
}