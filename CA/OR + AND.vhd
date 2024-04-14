

-- Import std_logic library

Library IEEE;
use IEEE.std_logic_1164.all;

--Entity
Entity ANDORGATE is
port(A:in std_logic;
B:in std_logic;
C:in std_logic;
Y:out std_logic
);
end ANDORGATE;

--Architecture
Architecture RTL of ANDORGATE is
Signal D:std_logic;
begin
D<=A or B;
Y<=C And D;
end RTL;
