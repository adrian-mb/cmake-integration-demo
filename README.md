# cmake-integration-demo
Basic skeleton of a C++ project integrated using CMake and GitHub submodules, Docker enabled for easier deployment.

## Building Project for Local Execution
1. Install required tooling: `$ sudo apt-get update && sudo apt-get install g++ make cmake`
2. Clone project: `$ git clone https://github.com/adrian-mb/cmake-integration-demo.git`
3. Change into the appserver directory: `$ cd cmake-integraiton-demo/appserver`
4. Run build script: `$ ./build.sh`

## Running the Application
Before running the application, the environment variable APPSERVER_CFG must be defined. This variable should give the absolute path to the directory where application configuration files are located. By default, `run.sh` defines it to be `<directory where run is executed>/cfg` before execution.

1. `$ cd cmake-integration-demo/appserver`
2. `$ ./clean.sh && ./build.sh && ./run.sh`

## Generating Eclipse Project Files
1. `$ cd cmake-integration-demo && ./generate-eclipse-project.sh`
2. Project files will be generated inside the eclipse-project directory; import these files into Eclipse as a project.

## Generating and Running Docker Image
1. `$ cd cmake-integration-demo/appserver`
2. `$ docker build -t <tagname> .`
3. `$ docker run -t -i <tagname>`
