#ifndef __HPP_MVC_EXAMPLE_MAIN_WINDOW
#define __HPP_MVC_EXAMPLE_MAIN_WINDOW

#include <gtkmm/window.h>
#include <gtkmm/label.h>

namespace MvcExample
{
  class MainWindow : public Gtk::Window
  {
    public:
      MainWindow();
      MainWindow(MainWindow&) = delete;
      virtual ~MainWindow() = default; 

    protected:
      Gtk::Label m_label;

  };
}

#endif