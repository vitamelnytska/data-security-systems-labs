# ServerStarterKit

## Framework for Node.JS, which has the following functionality:
- IoC Container (singleton/transient(ready), scoped(in developing))
- Router
- Basic transport(HTTP\WS) with the ability to connect custom adapters
- Controller service, that can automatically load controllers and monitor them
- Service virtualization and execution context constraints
- Sessions and session storage that can be extended with custom adapters

At the root of the repository and the directory "Controllers" are examples of using and configuring the environment.
The source directory is "Framework"!

In the plans:
- cover with tests
- move examples to a separate directory
- optimize work with custom interfaces(Symbols) and add validation for them
- add the ability to more conveniently add classes to the execution context avoiding dependencies on IoC Container
