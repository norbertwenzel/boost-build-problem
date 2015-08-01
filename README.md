A simple test setup to illustrate build problems.
=================================================

### Configuration

After checkout the Boost release archives need to be extracted into the `external/` folder. The project has been tested with the following versions of Boost:
  * [1.57.0](http://sourceforge.net/projects/boost/files/boost/1.57.0/)
  * [1.58.0](http://sourceforge.net/projects/boost/files/boost/1.58.0/)
  * [1.59.0.b1](http://sourceforge.net/projects/boost/files/boost/1.59.0.beta.1/)

The Boost version used can be changed by editing the paths in `Jamroot`. Currently the last release (1.58.0) is selected.

There are two different Jamfiles to build the project:
  * `test/Jamfile.good`  
    This configuration uses `std::cout` to write the results. This version builds with all tested versions of Boost.
  * `test/Jamfile.fail`  
    This configuration uses Boost.Log to write the results. This version only builds with Boost version 1.57.0. Both newer versions abort with a build failure.


  * `test/Jamfile` is a symlink, that currently points to `test/Jamfile.fail`. Change this symlink to build different setups.

