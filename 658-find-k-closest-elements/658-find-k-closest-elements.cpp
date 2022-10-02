class Solution
{
public:
    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {

        deque<int> dq;
        int size = arr.size();

        int idx = -1;
        bool match = false;
        int diff = INT_MAX;

        for (int i = 0; i < size; i++)
        {
            if (abs(arr[i] - x) < diff )
            {
                diff = abs(arr[i] - x);
                idx = i;
                if (diff == 0)
                {
                    match = true;
                    break;
                }
            }
        }

        dq.push_back(arr[idx]);
        k--;

        int a_ptr = idx - 1, b_ptr = idx + 1;
        while (k > 0)
        {
            if (a_ptr >= 0 && b_ptr < size)
            {
                if (abs(arr[a_ptr] - x) <= abs(arr[b_ptr] - x))
                    dq.push_front(arr[a_ptr--]);
                else
                    dq.push_back(arr[b_ptr++]);
            }
            else if (a_ptr >= 0 && b_ptr == size)
                dq.push_front(arr[a_ptr--]);
            else
                dq.push_back(arr[b_ptr++]);

            k--;
        }
        vector<int> output;
        while (!dq.empty())
        {
            output.push_back(dq.front());
            dq.pop_front();
        }

        return output;
    }
};