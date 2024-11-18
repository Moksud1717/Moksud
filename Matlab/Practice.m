x0 = 2;
maxIter = 50;
tol = 1e-4;
x = x0;
xold = x0;
for i = 1:maxIter
    f = 2 - x+log(x);
    df = -1+1/x;
    x = x - f/df;
    err(i) = abs (x-xold);
    xold = x;
    if(err(i) <tol) || (i > maxIter)
        break;
    end
end
x = ['Value of x is ', ' ', num2str(x), ' after', ' ', num2str(i), 'iterations'];
disp(x)