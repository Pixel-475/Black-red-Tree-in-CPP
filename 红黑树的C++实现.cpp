#include<iostream>
#include<memory>//智能指针简化操作
using namespace std;

/*RB树的性质*/
//1树中分红黑点
//2根为黑
//3叶(NIL)为黑
//4红节点的子节点为黑（红节点不连续）
//5任一节点到其所有叶节点，经过的黑节点相等

//新加的点为红
//不符合规则时，通过旋转保证规则

/*颜色枚举*/
enum class Color{red,black};

/*RB树*/
//数据类型为type
template <class type>
class BRTree
{
	//内部封装
	struct BRTNode
	{
		type _data;
		Color _color = Color::red;
		shared_ptr<BRTNode> _dad;
		shared_ptr<BRTNode> _lson;
		shared_ptr<BRTNode> _rson;

		BRTNode(type value,Color color=Color::red):_data(value),_color(color),_dad(nullptr),_lson(nullptr),_rson(nullptr){}//初始化列表
	};


};

int main()
{

}