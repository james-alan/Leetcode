/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.  //定义一个单链表
 * 
 * //无头节点
 * struct ListNode {    //定义一个结构体
 *     int val; //节点值
 *     ListNode *next;  //指向下一个节点的指针
 *     ListNode() : val(0), next(nullptr) {} //构造函数
 *     //没见过的用法
 *     ListNode(int x) : val(x), next(nullptr) {}   //构造函数
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}  //构造函数
 * };
 */
/*
class Solution
{

public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        // 先判断是否为空
        if (list1 == NULL && list2 == NULL)
            return NULL;
        if (list1 == NULL)
            return list2; // 如果list1为空，则返回list2
        if (list2 == NULL)
            return list1; // 如果list2为空，则返回list1
        // 思路：分别把链表合并放入数组，然后排序，再把数组转回链表
        vector<int> arr;
        merge(arr, list1, list2);        // 合并
        quickSort(arr, 0, arr.size() - 1); // 快速排序

        // //去除重复的元素
        // vector<int> res;
        // for(int i=0,j=1;i<arr.size();i++,j++){
        //     if(arr[i]!=arr[j]){
        //         res.push_back(arr[i]);
        //     }
        // }

        // 新建一个链表
        ListNode *dumy = new ListNode(0);
        arrToList(arr, dumy); // 数组转回链表
        return dumy->next;
    }

    // 把两个链表合并成数组
    void merge(vector<int> &arr, ListNode *list1, ListNode *list2)
    {

        // 把链表1的元素放入数组
        for (ListNode *p1 = list1; p1 != NULL; p1 = p1->next)
        {
            arr.push_back(p1->val);
        }
        for (ListNode *p2 = list2; p2 != NULL; p2 = p2->next)
        {
            arr.push_back(p2->val);
        }

        
    }

    // 快速排序
    void quickSort(vector<int> &arr, int left, int right)
    {
        if (left < right)
        {
            int pivotpos = partition(arr, left, right);
            quickSort(arr, left, pivotpos - 1);
            quickSort(arr, pivotpos + 1, right);
        }
    }

    // 划分函数
    int partition(vector<int> &arr, int left, int right)
    {
   
        int pivot = arr[left]; // 选取中间元素元素作为基准
        while (left < right)
        {
            while (left < right && arr[right] >= pivot)
                --right;            // 从右边开始找小于基准的元素
            arr[left] = arr[right]; // 将小于基准的元素放到左边
            while (left < right && arr[left] <= pivot)
                ++left;             // 从左边开始找大于基准的元素
            arr[right] = arr[left]; // 将大于基准的元素放到右边
        }
        arr[left] = pivot; // 将基准元素放到中间
        return left;       // 返回基准元素的位置
    }



    // 数组转回链表
    void arrToList(vector<int> &arr, ListNode *dumy)
    {
        ListNode* p = dumy;
        for (int i = 0; i < arr.size(); i++)
        {
            p->next = new ListNode(arr[i]);
            p = p->next;
        }
    }
};
*/

/*
改进版 

*/
class Solution
{

public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {

        // 先判断是否为空
      if(list1==NULL && list2==NULL) return NULL;
      if(list1==NULL) return list2;
      if(list2==NULL) return list1;

      //新建一个链表
      ListNode* dumy = new ListNode();
      ListNode* p =dumy;

      ListNode* l1=list1;
      ListNode* l2=list2;

      // 合并两个链表 并比较两个指针的值 取最小的放入新链表
      while (l1!=NULL && l2!=NULL)  
      {
        /* code */
        if(l1->val<l2->val){
            p->next=l1;
            l1=l1->next;
            p=p->next;
        }
        else 
        {
            p->next=l2;
            l2=l2->next;
            p=p->next;
        }

      }
      //并没有完全合并  还需要把剩余的链表合并到新链表中
      if(l1==NULL){
        p->next=l2;
      }
      if(l2==NULL){
        p->next=l1;
      }

      return dumy->next;

    }

};
// @lc code=end

// @lc code=end
