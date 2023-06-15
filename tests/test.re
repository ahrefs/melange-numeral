module N = Numeral;

let myValue = N.make(`Str("11110.49"));
myValue
|. N.add(`Float(123.5))
|. N.subtract(`Int(1234))
|. N.format(~format="0[.]00", ())
|. Js.log; /* 9999.99 */
