# melange-numeral

These are the [Melange](https://melange.re/) bindings for [numeral](http://numeraljs.com/).
🚧 It is not completed, we are adding bindings as we go. Doesn't follow semver at this point. 🚧

# Install

Install [opam](https://opam.ocaml.org/) package manager.

Then:

```sh
opam install melange-numeral
```

The bindings support the version 2.0.6 of `numeral` npm package, which should be installed separately:

```json
  "dependencies": {
    "numeral": "2.0.6"
  }
```

# Setup

Add `melange-numeral` to the `libraries` in your `dune` file:

```lisp
; ...
  (libraries melange-numeral)
; ...
```

# Usage Example

```reason
module N = Numeral;

let myValue = N.make(`Str("11110.49"));
myValue
|. N.add(`Float(123.5))
|. N.subtract(`Int(1234))
|. N.format(~format="0[.]00", ())
|. Js.log; /* 9999.99 */
```

# Docs

Check [Numeral documentation](http://numeraljs.com/)

# Alternatives

- [drwlrsn/bs-numeral](https://github.com/drwlrsn/bs-numeral)
