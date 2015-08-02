A simple test setup to illustrate build problems.
=================================================

### Configuration

After checkout the Boost release archives need to be extracted into the `external/` folder. The project has been tested with the following versions of Boost:
  * [1.57.0](http://sourceforge.net/projects/boost/files/boost/1.57.0/)
  * [1.58.0](http://sourceforge.net/projects/boost/files/boost/1.58.0/)
  * [1.59.0.b1](http://sourceforge.net/projects/boost/files/boost/1.59.0.beta.1/)

The Boost version used can be changed by editing the paths in `Jamroot`. Currently the last release (1.58.0) is selected.

There are two projects that can be built in `test/Jamfile`:
  * test:  
    This project builds with all Boost versions tested and works as expected.
  * fail:  
    This configuration fails to build with Boost 1.58 or newer. The only change is the order of the project dependencies.

### Changes in Boost.Log between 1.57 and 1.58

Andrey Semashev [pointed out](http://lists.boost.org/Archives/boost/2015/08/224438.php) that [between 1.57 and 1.58](https://github.com/boostorg/log/compare/boost-1.57.0...boost-1.58.0) the only change of the Boost.Log build system was the [switch to Boost.Config](https://github.com/boostorg/log/commit/27a822a6b82f8bf34cbc681ac6583412bdf27d85).
