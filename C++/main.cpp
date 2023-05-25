/*
 * Design Pattern - Interpreter 解譯器模式
 * 
 * 在這個範例中，我們實現了一個簡單的布林表達式解譯器。Context（上下文）類包含變量的映射，我們可以設置和獲取變量的值。
 * AbstractExpression（抽象表達式）定義了解譯方法Interpret()，每個具體表達式都需要實現這個方法。
 * TerminalExpression（終端表達式）表示單個變量，根據上下文返回變量的值。
 * NonterminalExpression（非終端表達式）對另一個表達式的結果進行邏輯取反。
 * 
 * 在客戶端，我們創建了一個上下文並設置變量的值。
 * 然後創建了一個終端表達式和一個非終端表達式，並將它們與上下文一起使用。
 */

#include <iostream>
#include <unordered_map>

// Context 上下文
class Context {
private:
    std::unordered_map<char, bool> variables;

public:
    void SetVariable(char name, bool value) {
        variables[name] = value;
    }

    bool GetVariable(char name) {
        return variables[name];
    }
};

// AbstractExpression 抽象表達式
class AbstractExpression {
public:
    virtual bool Interpret(Context& context) = 0;
};

// TerminalExpression 終端表達式
class TerminalExpression : public AbstractExpression {
private:
    char variable;

public:
    TerminalExpression(char variable) : variable(variable) {}

    bool Interpret(Context& context) override {
        return context.GetVariable(variable);
    }
};

// NonterminalExpression 非終端表達式
class NonterminalExpression : public AbstractExpression {
private:
    AbstractExpression* expression;

public:
    NonterminalExpression(AbstractExpression* expression) : expression(expression) {}

    bool Interpret(Context& context) override {
        return !expression->Interpret(context);
    }
};

int main() {
    // 創建上下文
    Context context;

    // 定義變量的值
    context.SetVariable('A', true);
    context.SetVariable('B', false);

    // 創建表達式
    AbstractExpression* expressionA = new TerminalExpression('A');
    AbstractExpression* expressionB = new TerminalExpression('B');
    AbstractExpression* expression = new NonterminalExpression(expressionA);

    // 解釋並輸出結果
    std::cout << "A = " << expressionA->Interpret(context) << std::endl;
    std::cout << "B = " << expressionB->Interpret(context) << std::endl;
    std::cout << "!A = " << expression->Interpret(context) << std::endl;

    // 釋放記憶體
    delete expressionA;
    delete expressionB;
    delete expression;

    return 0;
}
