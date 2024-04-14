
-- Import std_logic library

Library IEEE;
use IEEE.std_logic_1164.all;

--Entity
Entity ANDGATE is
port(A:in std_logic;
B:in std_logic;
Y:out std_logic
);
end ANDGATE;

--Architecture
Architecture RTL of ANDGATE is
begin
Y<=A and B;
end RTL;