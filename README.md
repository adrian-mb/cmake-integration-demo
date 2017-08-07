# cmake-integration-demo
Basic skeleton of a C++ project integrated using CMake and GitHub submodules.

Run ./build.sh in the appserver directory to build project and submodules.
Remember to initialize submodules with `git submodule init` if not done on clone by default.

To generate project files for Eclipse, run ./generate-eclipse-project.sh in the root directory.
Project files will be generated on the eclipse-project directory; import these files into Eclipse as a project.

To generate Docker image, run `docker build -t <tag> .` inside appserver directory. Docker image is based on Ubuntu Xenial; only basic build tools for C++ are installed using apt-get.
