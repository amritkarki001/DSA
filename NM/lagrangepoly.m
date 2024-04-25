x = [0 20 40 60 80 100];
y = [26.0 48.6 61.6 71.2 74.8 75.2];
sum = 0;
a = 55;
for i = 1:length(x)
 u = 1;
 l = 1;
 for j = 1:length(x)
 if j ~= i
 u = u * (a - x(j));
 l = l * (x(i) - x(j));
 end
 end
 sum= sum + u / l * y(i);
end
disp(sum);