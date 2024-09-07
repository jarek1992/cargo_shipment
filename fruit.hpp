#pragma once

#include "cargo.hpp"
#include <string>

class Fruit : public Cargo {
public:
  Fruit(const std::string &name, size_t amount, size_t basePrice, size_t expiryDays);

  std::string getName() const override { return name_; }
  size_t getAmount() const override { return amount_; }
  size_t getBasePrice() const override { return basePrice_; }
  // price according to expiry date
  size_t getPrice() const override {}

  // additional methods specific for class Fruit
  size_t getExpiryDays() const;
  Fruit &operator--();

  void setAmount(size_t amount) override;
  void setBasePrice(size_t price) override;

private:
  void decreaseExpiryDays();

  size_t expiryDays_;          // days until expiry (variable)
  const size_t maxExpiryDays_; // max amount of days untill expiry (const)
};