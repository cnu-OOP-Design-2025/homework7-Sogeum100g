#include "duck.h"

/* TODO */
void Duck::performFly(){
    flyBehavior->fly();
}
/* TODO */
void Duck::performQuack(){
    quackBehavior->quack();
}
/* TODO */
void Duck::setFlyBehavior(FlyBehavior* fb){
    flyBehavior = fb;
}
/* TODO */
void Duck::setQuackBehavior(QuackBehavior* qb){
    quackBehavior = qb;
}


/* TODO */
// 기본 행동: FlyWithWings, Quack
MallardDuck::MallardDuck() {
    setFlyBehavior(new FlyWithWings());
    setQuackBehavior(new Quack());
}
/* TODO */
// 기본 행동: FlyWithWings, Quack
RedheadDuck::RedheadDuck() {
    setFlyBehavior(new FlyWithWings());
    setQuackBehavior(new Quack());
}
/* TODO */
// 기본 행동: FlyNoWay, Squeak
RubberDuck::RubberDuck() {
    setFlyBehavior(new FlyNoWay());
    setQuackBehavior(new Squeak());
}
/* TODO */
// 기본 행동: FlyNoWay, MuteQuack
DecoyDuck::DecoyDuck() {
    setFlyBehavior(new FlyNoWay());
    setQuackBehavior(new MuteQuack());
}
/* TODO */
// 기본 행동: FlyNoWay, MuteQuack
// 동적으로 행동 변경 테스트
ModelDuck::ModelDuck() {
    setFlyBehavior(new FlyNoWay());
    setQuackBehavior(new MuteQuack());
}