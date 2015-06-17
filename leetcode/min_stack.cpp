class MinStack {
public:
	void push(int x) {
		stkBuffer.push(x);
		if (stkMin.empty() || x <= stkMin.top())
		{
			stkMin.push(x);
		}
	}

	void pop() {

		if (stkBuffer.top() == stkMin.top())
		{
			stkMin.pop();
		}

		stkBuffer.pop();
	}

	int top() {
		return stkBuffer.top();
	}

	int getMin() {
		return stkMin.top();
	}
private:
	stack<int> stkBuffer;
	stack<int> stkMin;
};
