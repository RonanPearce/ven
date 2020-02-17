# Basic Types

    null
    bool
    int # The default number type
    uint
    long
    ulong
    double
    string
    array
    map
    object # Can be defined from C API or Vent
    function # Can be defined from C API or Vent


# Example Config

    SomeNamespace
        # Some comment
        SomeConfigId
            _abstract
            _inherits: SomeOtherNameSpace.SomeOtherConfigId, OptionalOtherConfigId
            testArray: [1, true, "string", [1, 2, 3], null]
            testMap: {k:hello, a:true}
        
        ###
            Some Multiline comment
            If we really need it!
        ###
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
