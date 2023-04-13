# gnuradio_tagged_file_sink
A refactor of the gnuradio tagged file sink block to add custom paths


## Build and installation instructions.

```sh
$ cd gr-customModule
```

If the build/ directory already exists, remove it:
```sh
rm -rf build/
```

Create the build directory:
``sh
$ mkdir build
```

Move into the build directory:
```sh
cd build
```

Run cmake to build the makefiles.
In this case we are using the homebrew prefix since the homebrew installed gnuradio uses homebrew python.
If you want to install to a different location, you can specify it with the -DCMAKE_INSTALL_PREFIX option or exclude it to install to the default location "/usr/local".
```sh
cmake -DCMAKE_INSTALL_PREFIX=$(brew --prefix) ../
```

Compile the module:
```sh
make
```

Install the module:
```sh
sudo make install
```


