#include <iostream>
#include <X11/Xlib.h>
#include <X11/XF86keysym.h>
#include <X11/keysym.h>
#include <signal.h>

bool isPressed(KeySym key) {
    Display *dpy = XOpenDisplay(NULL);                          /* Open the display */
    char keys[32];                                              /* Buffer for key info */

    XQueryKeymap(dpy, keys);                                    /* Put key information */
    KeyCode keycode = XKeysymToKeycode(dpy, key);               /* Get keycode of a key */
    bool pressed = keys[keycode >> 3] & (1 << (keycode & 7));   /* What the fuck */
    
    XCloseDisplay(dpy);                                         /* Close display */
    return pressed;
}

void sigint(int sigcode) {
    std::cout << "Interrupt signal handler called. CODE: " << sigcode << "\n";
    exit(0);
}

int main() {
    std::size_t times = 0;
    do {
        if (isPressed(XK_F)) {
            ++times;
            std::cout << "F detected " << times << " times" << "\n";
        }
        signal(SIGINT, *sigint);
    } while (true);

    return 0;
}
