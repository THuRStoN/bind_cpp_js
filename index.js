'use strict';
var nb = require( 'nbind' );
var lib = nb.init().lib;
var names = [ 'World', 'Alex', 'Javier', 'José Elías' ];

for ( var name of names) {
  lib.Greeter.say_hello( name );
}
