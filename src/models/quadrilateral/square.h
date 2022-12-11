#pragma once

#include <QBrush>
#include <QPainter>
#include <QPen>
#include <memory>
#include <vector>

#include "models/shape.h"

extern std::vector<std::unique_ptr<Shape>> shapes;

class Square : public Shape {
 public:
  Square();
  virtual ~Square() noexcept;

 public:
  void setLength(const int &length);
  int getLength() const;

 public:
  float area() const override;
  float perimeter() const override;
  void paint(QPainter* painter) override;

 private:
  int length_ = 0;
};
