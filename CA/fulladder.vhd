Library IEEE;
use IEEE.std_logic_1164.all;

--Entity
Entity Fadder is
port(
A:in STD_LOGIC;
B:in STD_LOGIC;
Cin:in STD_LOGIC;
Cout,sum:out STD_LOGIC
);
END ENTITY Fadder;

ARCHITECTURE FULL OF Fadder IS

BEGIN
sum<=A xor B xor Cin;
Cout<=(A and B) or (A and Cin) or (B and Cin);
END FULL;