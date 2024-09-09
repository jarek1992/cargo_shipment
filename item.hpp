#pragma once

#include "cargo.hpp"

class Item : public Cargo {
public:
  Item(const std::string& name, size_t amount, size_t basePrice, Rarity rarity);

  std::string getName() const override;
  size_t getAmount() const override;
  size_t getBasePrice() const override;
  size_t getPrice() const override;

  Rarity getRarity() const;

private:
  Rarity rarity_;

  double rarityMultiplier(Rarity rarity) const;
};