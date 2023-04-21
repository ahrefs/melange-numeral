type t;

[@bs.module "numeral"]
external make:
  (
  [@bs.unwrap]
  [ | `Str(string) | `Int(int) | `Float(float) | `Numeral(t)]
  ) =>
  t =
  "default";

[@bs.module "numeral"] external makeEmpty: unit => t = "default";

[@bs.send] external value: t => Js.nullable(float) = "value";

let value = n => n->value->Js.toOption;

[@bs.send] external format: (t, ~format: string=?, unit) => string = "format";

[@bs.send] external clone: t => t = "clone";

[@bs.send]
external addMutable:
  (t, [@bs.unwrap] [ | `Str(string) | `Int(int) | `Float(float)]) => t =
  "add";

let add = (numeral, value) => numeral->clone->(addMutable(value));

[@bs.send]
external subtractMutable:
  (t, [@bs.unwrap] [ | `Str(string) | `Int(int) | `Float(float)]) => t =
  "subtract";

let subtract = (numeral, value) => numeral->clone->(subtractMutable(value));

[@bs.send]
external multiplyMutable:
  (t, [@bs.unwrap] [ | `Str(string) | `Int(int) | `Float(float)]) => t =
  "multiply";

let multiply = (numeral, value) => numeral->clone->(multiplyMutable(value));

[@bs.send]
external divideMutable:
  (t, [@bs.unwrap] [ | `Str(string) | `Int(int) | `Float(float)]) => t =
  "divide";

let divide = (numeral, value) => numeral->clone->(divideMutable(value));

[@bs.send]
external difference:
  (t, [@bs.unwrap] [ | `Str(string) | `Int(int) | `Float(float)]) => t =
  "add";
