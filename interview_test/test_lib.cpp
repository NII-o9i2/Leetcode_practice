
#include <iostream>
#include <vector>
#include <string>

template <class T1, class T2>
class TestProblem
{
public:
    TestProblem(){};
    virtual ~TestProblem() = default;
    virtual T2 solution(const T1 &a){ T2 d1_;return d1_;};
    // set test case:: input and right answeer
    void set_test_case(const T1 &a, const T2 &b){
        inputs_case_.emplace_back(a);
        outputs_case_.emplace_back(b);
    }
    double run_result(void){
        int sum = inputs_case_.size();
        int right_num = 0;
        for (int index = 0; index < inputs_case_.size(); index++){
            if (outputs_case_[index] == solution(inputs_case_[index])){
                right_num++;
            };
        }
        if (sum == 0) return 0;
        return double(right_num) / double(sum);
    };
private:
    std::vector<T1> inputs_case_;
    std::vector<T2> outputs_case_;
};

template <class T1, class T2>
class TestAdd: public TestProblem<T1,T2>
{
public:
    TestAdd(){};
    virtual ~TestAdd() = default;
    virtual T2 solution(const T1 &a) override{
        return a+1;
    }
};

// test case 01: leetcode 20
class BracketIsValid: public TestProblem<std::string,bool>
{
public:
    BracketIsValid(){};
    virtual ~BracketIsValid() = default;
    virtual bool solution(const std::string &a) override{

    }
};

int main(){
    std::cout<<"hello  world"<<std::endl;
    TestAdd<int,int> test;
    test.set_test_case(4,5);
    test.set_test_case(5,6);
    std::cout<<"solution pass rate is "<< test.run_result() * 100<< "%"<<std::endl;
    return 0;

}