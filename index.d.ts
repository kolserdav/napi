interface Module {
  sayHi: () => void
}

declare module 'bindings' {
  export default function(string: 'hello'): Module;
}