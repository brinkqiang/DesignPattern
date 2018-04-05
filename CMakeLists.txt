cmake_minimum_required(VERSION 2.6)
project(DesignPattern)

set(CMAKE_CXX_STANDARD 11)


set(PATTERNS
        AbstractFactoryPattern
        AdapterPattern
        BridgePattern
        BuilderPattern
        ChainOfResponsibilityPattern
        CommandPattern
        CompositePattern
        DecoratorPattern
        FacadePattern
        FactoryPattern
        FlyweightPattern
        InterpreterPattern
        IteratorPattern
        MediatorPattern
        MementoPattern
        ObserverPattern
        PrototypePattern
        ProxyPattern
        SingletonPattern
        StatePattern
        StrategyPattern
        TemplatePattern
        VisitorPattern)

macro(add_pattern PATTERN)
    include_directories(${PATTERN})

    set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin/${CMAKE_SYSTEM_NAME})
    set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib/${CMAKE_SYSTEM_NAME})
    file(GLOB_RECURSE PATTERN_FILES "${PATTERN}/*.cpp")
    add_executable(${PATTERN} ${PATTERN_FILES})
endmacro(add_pattern)

foreach(PATTERN IN LISTS PATTERNS)
    message(STATUS "Found Pattern: ${PATTERN}")
    add_pattern(${PATTERN})
endforeach(PATTERN)

