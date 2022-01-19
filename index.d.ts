interface Module {
  sayHi: (id: number) => void
}

declare module 'bindings' {
  export default function(string: 'hello'): Module;
}