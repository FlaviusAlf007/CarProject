                            /////////////////// Read Me \\\\\\\\\\\\\\\\\\\\\

# Herarhie proiect:

                                        -Vehicle_Utils

    Vehicle (Clasa Abstracta)
        - Engine (Interfata)
            - EV | Thermic (Engine Type)
                - Truck ()
                - SUV (Rule of tree)
                - Coupe ()
                - Sedan (Rule of five)
                - Cabrio (Singleton) 
                - ATV (Rule of five) (Limited to one object)
                - Motorcycle (Limited to one object from constructor)



# Steps of compiling and execution:
    cd /build
    cmake ..
    cmake --build .
    ./Test_car_executable.exe