/*
 * Copyright (C) 2016, Michiel Sikma <michiel@sikma.org>
 * MIT License
 */

#include <allegro.h>

/**
 * Allegro example script. Switches to graphics mode to print "hello world",
 * then waits for a keypress and exits the program.
 * Taken from <https://wiki.allegro.cc/index.php?title=Example_ExHello>.
 */
int main(int argc, const char **argv)
{
    // Initializes the Allegro library.
    if (allegro_init() != 0) {
        return 1;
    }

    // Installs the Allegro keyboard interrupt handler.
    install_keyboard();

    // Switch to graphics mode, 320x200.
    if (set_gfx_mode(GFX_AUTODETECT, 320, 200, 0, 0) != 0) {
        set_gfx_mode(GFX_TEXT, 0, 0, 0, 0);
        allegro_message("Cannot set graphics mode:\r\n%s\r\n", allegro_error);
        return 1;
    }

    // Print a single line of "hello world" on a white screen.
    set_palette(desktop_palette);
    clear_to_color(screen, makecol(255, 255, 255));
    textout_centre_ex(screen, font, "Hello, world!", SCREEN_W / 2, SCREEN_H / 2, makecol(0,0,0), -1);

    // Wait for a keypress, then finish the program.
    readkey();

    return 0;
}

END_OF_MAIN()
