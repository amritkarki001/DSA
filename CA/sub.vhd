LIBRARY IEEE;
use IEEE.std_logic_1164.all;

entity sub4 is
port(
	A,B:in STD_LOGIC_VECTOR(3 downto 0);
	Ci:in STD_LOGIC;
	s:STD_LOGIC_VECTOR(3 downto 0);
	Co: out STD_LOGIC);
end sub4;

architecture FA4 of sub4 is
complement Fadder
port(
	A,B,Cin:IN STD_LOGIC;
	Cout,sum:OUT STD_LOGIC);
end complement;
signal C:std_logic_vector(3 downto 1);
signal D:std_logic_vector(3 downto 0);
begin;
D<=not(B);
FA0:Fadder port map(A(0),D(0),'1',C(1),s(0));
FA1:Fadder port map(A(1),D(1),C(1),C(2),s(1));
FA2:Fadder port map(A(2),D(2),C(2),C(3),s(2));
FA3:Fadder port map(A(3),D(3),C(3),Co,s(3));
end FA4;	