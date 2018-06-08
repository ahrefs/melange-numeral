# bs-recharts

This is [Bucklescript](https://bucklescript.github.io/) bindings for [numeral](http://numeraljs.com/).
🚧 It is not completed, we are adding bindings as we go. Doesn't follow semver at this point. 🚧

# Install, [npm](https://www.npmjs.com/package/@ahrefs/bs-numeral)

```
yarn add @ahrefs/bs-numeral
```

# Setup

Add bs-recharts to bs-depenencies in your bs-config. bs!

```js
{
  /* ... */
  "bs-dependencies": [
    "@ahrefs/bs-numeral"
  ],
  /* ... */
}
```

# Usage Example

```re
module N = BsNumeral;

let myValue = N.make(`Str("11110.49"));
myValue
|. N.add(`Float(123.5))
|. N.subtract(`Int(1234))
|. N.format(~format="0[.]00", ())
|. Js.log; /* 9999.99 */
```

# Docs

Check [Numeral documentation](http://numeraljs.com/)
