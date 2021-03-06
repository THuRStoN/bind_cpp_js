bind_cpp_js
=============
Testing how to bind C++ code from JavaScript code in browser using [nbind](https://github.com/charto/nbind).

Depends on [nbind](https://github.com/charto/nbind) to easily define addon's API and on [autogypi](https://github.com/charto/autogypi) to handle compiler & node-gyp options to compile native code. For a browser environment [emscripten](http://kripken.github.io/emscripten-site/) should be installed.

## Setup dependencies

```bash
  brew install emscriptem
```
LLVM_ROOT must be updated manually when installing using [Homebrew](http://brew.sh). You should edit ~/.emscripten
and change

```bash
LLVM_ROOT = os.path.expanduser(os.getenv('LLVM') or '/usr/bin') # directory
```
to

```bash
LLVM_ROOT = os.path.expanduser(os.getenv('LLVM') or '/usr/local/Cellar/llvm/3.2/bin') # directory
```

## Initialize (on project creation only)

Initialize it like this:

```bash
npm run -- autogypi --init-gyp -p nbind -s greeter.cxx
```


Your package should also include binding.gyp and autogypi.json files.

## Build

for node environment (server)

```bash
node-gyp configure build
```

for browser environment
```bash
node-gyp configure build --asmjs=1
```
