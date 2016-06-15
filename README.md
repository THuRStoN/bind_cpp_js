bind_cpp_js
=============
Testing how to bind C++ code from JavaScript code in browser using [nbind](https://github.com/charto/nbind).

Depends on [nbind](https://github.com/charto/nbind) to easily define addon's API and on [autogypi](https://github.com/charto/autogypi) to handle compiler & node-gyp options to compile native code.

## Initialize (on project creation only)

Initialize it like this:

```bash
npm run -- autogypi --init-gyp -p nbind -s greeter.cxx
```


Your package should also include binding.gyp and autogypi.json files.

## build

for node environment (server)

```bash
node-gyp configure build
```

for browser environment
```bash
node-gyp configure build --asmjs=1
```
