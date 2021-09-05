#include "MvcExample/MainWindow.hpp"

using MvcExample::MainWindow;

MainWindow::MainWindow() : m_label("Hello, World")
{
  add(m_label);

  show_all_children();
}