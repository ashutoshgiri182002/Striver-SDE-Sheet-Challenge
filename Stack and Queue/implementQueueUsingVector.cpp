class Queue {

	int front, rear;
	vector<int> arr;

public:
	Queue()
	{
		front = 0;
		rear = 0;
		arr.resize(100001);
	}

	// Enqueue (add) element 'e' at the end of the queue.
	void enqueue(int e)
	{
		// Write your code here.
		if(rear<arr.size()){
			arr[rear] = e;
			rear++;
		}
	}

	// Dequeue (retrieve) the element from the front of the queue.
	int dequeue()
	{
		// Write your code here.
		int ans = arr[front];
		if(front==rear) return -1;

		else{
			arr[front] = -1;
			front++;
			if(front==rear) front=rear=0;
		}

		return ans;
	}
};

