# Basic Types

    null
    enum
    bool
    int # The default number type
    uint
    long
    ulong
    double
    string
    array
    map (hash table)
    list (doubly linked)
    tuple
    vector2
    vector3
    vector4
    matrix22
    matrix23
    matrix33
    matrix34
    matrix44
    quaternion
    object # Can be defined from C API or Vent
    function # Can be defined from C API or Vent


# Example Config

    SomeNamespace
        // Some comment
        SomeConfigId
            _abstract
            _inherits: SomeOtherNameSpace.SomeOtherConfigId, OptionalOtherConfigId
            testArray: [1, true, "string", [1, 2, 3], null]
            testMap: {k:hello, a:true}
        
        /*
            Some Multiline comment
            If we really need it!
        */
        AnotherId
            _inherits: SomeConfigId
            x: 10
            y: 11


## The above is converted to the following array of maps
    [
        {
            _namespace: "SomeNamespace",
            SomeConfigId: {
                _abstract: true,
                _inherits : ["SomeOtherNameSpace.SomeOtherConfigId", "OptionalOtherConfigId"],
                testArray: [1. true. "string", [1,2,3, null],
                testMap: {
                    k:"hello",
                    a:true
                }
            },
            AnotherId: {
                _inherits: "SomeConfigId",
                x: 10
                y: 11        
            }
        }
    }

# Limited preprocessor
    #ifdef SOMETHING
        #def SOMETHING ELSE
        #ifndef THING
        #end
    #end
    
# Serialization support
- Full state serialization
- Controlled serialization / integrated loading/saving

# Object event handling / registering and efficient filtering

# Dynamic components that will add named interfaces to object instances

# Bitwise operations on integers

# Statically typed methods

# For each iterators on list, array, map

# For loops, while loops, repeat until loops, support for continue and break statements

# Goto label support

# Scenarios
- Run on same thread but interleaved

# Threads
- Support multiple threads
- May be a Version2 thing 

# Interned strings

# Exception Raising and handling

# Garbage Collection
- Incremental
- Generational if possible

# C API
- Access to objects
- Define new methods
- Controll how long to update the VM for

# Handy library functions
- Logging
- Math
- String Manipulation (assumes utf8)
- Debug library with support for conditional breakpoints, stepping, resume
- Unique int id generators (64 bit)

# Class system with inheritence and casting
- Casting using 'as' expression
