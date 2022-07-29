from collections import deque

from pkg_resources import resource_listdir


def evaluate(expr: str) -> int:
    """Dijkstra two-stack algorithm to expression evaluation"""
    operators_stack = deque()
    operands_stack = deque()
    expr = expr.replace(' ', '')

    for char in expr:
        if char in ('+', '-', '*', '/'):
            operators_stack.appendleft(char)
            continue
        if char not in ('(', ')'):
            operands_stack.appendleft(char)
            continue
        if char == ')':
            second_value = operands_stack.popleft()
            operation = operators_stack.popleft()

            first_value = operands_stack.popleft()

            result = eval(first_value + operation + second_value)
            operands_stack.appendleft(str(result))
    
    return int(operands_stack.pop())


if __name__ == '__main__':
    print(evaluate('(3 + (6 * 9))'))