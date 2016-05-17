Allegro 4.2.2 example for MS-DOS
================================

This is a short example, designed to be used with [allegro-4.2.2-xc](https://github.com/msikma/allegro-4.2.2-xc). It's for people who want to develop DOS games on a modern operating system, through the use of [andrewwutw's DJGPP build](https://github.com/andrewwutw/build-djgpp).

Usage
-----

Ensure that you've checked out a copy of [allegro-4.2.2-xc](https://github.com/msikma/allegro-4.2.2-xc) in the `vendor` directory. Compile it as specified in the readme. There should be a `lib/djgpp/liballeg.a` file.

If all is set up correctly, you should be able to just compile this example by running `make`. This will make a `main.exe` file in the `dist` directory.

This example can be tested in [DOSBox](http://www.dosbox.com/).

<p align="center">
  <img src="http://i.imgur.com/he4IihL.png" alt="Example in DOSBox" />
</p>

If you're experiencing problems or getting compile errors, feel free to raise an issue so we can figure out the problem and perfect the setup process.

Copyright
---------

Copyright © 2016, Michiel Sikma <michiel@sikma.org>

MIT License
