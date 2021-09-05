#include <iostream>
#include "gtkmm/application.h"
#include "MvcExample/MainWindow.hpp"

using MvcExample::MainWindow;

int main(int argc, char *argv[])
{
  auto app = Gtk::Application::create(argc, argv, "shakedcohen.mvcexample");

  MainWindow mainWindow;

  return app->run(mainWindow);
}