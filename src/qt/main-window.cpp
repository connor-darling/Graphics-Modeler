#include "main-window.h"

MainWindow::MainWindow() : login_(new LoginWidget()), demo_(new MainWidget()) {
  this->setFixedSize(QSize(GM::Window::WIDTH, GM::Window::HEIGHT));

  login_->setFixedSize(QSize(GM::Window::WIDTH, GM::Window::HEIGHT));
  demo_->setFixedSize(QSize(GM::Window::WIDTH, GM::Window::HEIGHT));

  this->setCentralWidget(login_);
}

MainWindow::~MainWindow() noexcept {
  delete demo_;
}

void MainWindow::closeEvent(QCloseEvent* event) {}

void MainWindow::commitData(QSessionManager &) {}

MainWidget* MainWindow::getMainWidget() {
  return demo_;
}