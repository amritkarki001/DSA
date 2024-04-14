

-- Import std_logic library

Library IEEE;
use IEEE.std_logic_1164.all;

--Entity
Entity ORGATE is
port(A:in std_logic;
B:in std_logic;
Y:out std_logic
);
end ORGATE;

--Architecture
Architecture RTL of ORGATE is
begin
Y<=A or B;
end RTL;