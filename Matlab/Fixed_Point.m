%Ingredients
g = input ('Enter your function: ');
x0 = input ('Enter initial guess: ');
e = input ('Enter tolerance: ');
n = input ('Enter no of iteration: ');
for i=1:n
    x1 = g(x0);
    fprintf('x%d = %.4f\n',i, x1)
    if abs(x1 - x0)<e
        break
    end
    x0 = x1;
end