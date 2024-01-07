Instructions:

  You need to specify what web browser you are using
  on line 5 of 'main.c' before building. The variable
  'browser_new_tab' represents a command that:

    1. Opens a web browser
    2. Accepts URLs as arguments

  For example, if you use Chromium, the command would
  look like this:

    chromium --new-tab x

    or

    chromium --new-window x

  If you were typing this into a terminal, you would
  replace 'x' with the URL of the website you want to
  visit.

  First, find a similar command for the web browser
  you are using. Then open 'main.c' with a text editor
  of your choosing and paste the command on line 5. It
  should look like this:

    char *browser_new_tab = "command goes here";



Building:

  You need to have Make and GCC installed to build the
  executable.

    Debian/Ubuntu:

      sudo apt install make gcc

    Arch:

      sudo pacman -S make gcc

    Fedora:

      sudo dnf install make gcc

  Once you have that taken care of, open a terminal
  window, navigate to the 'twiki' directory and type
  'make' to build the executable.

  If you type 'make install', it will build the
  executable and then copy it into '/usr/bin/' by
  default. This will require root permissions.

  You can always type 'make uninstall' to remove
  the executable from '/usr/bin/' if you don't
  want to do so manually.

  You can change the default installation directory
  as well as the name of the executable on lines 3
  and 4 in the Makefile before building.



Usage:

  If no arguments are recieved, the Terraria wiki home
  page will appear:

    twiki.exe

  If you are looking for something specific, type your
  search query like this:

    twiki.exe skeletron

    or

    twiki.exe ichor bullet
