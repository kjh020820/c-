#pragma once
#include "start.h"
#include <iostream>
#include <cstdlib>

using namespace std;

// 카드 기본 클래스
class Card {
public:
    virtual void applyEffect(Player& player, int choice) = 0;
    virtual void showCard() = 0;
    virtual void showEffectPreview() = 0;
};

//개(렉스) 카드
class Rex : public Card {
    int card_num = 0;
public:
    void applyEffect(Player& player, int choice) override;
    void showCard() override;
    void showEffectPreview() override;
};
//검은 새 카드
class black_bird : public Card {
    int card_num2 = 0;
public:
    void applyEffect(Player& player, int choice) override;
    void showCard() override;
    void showEffectPreview() override;
};
//국토부 장관 카드
class Minister_of_Land : public Card {
    int card_num3 = 0;
public:
    void applyEffect(Player& player, int choice) override;
    void showCard() override;
    void showEffectPreview() override;
};
//농림부 장관 카드
class Minister_of_Agriculture_and_Forest : public Card {
    int card_num4 = 0;
public:
    void applyEffect(Player& player, int choice) override;
    void showCard() override;
    void showEffectPreview() override;
};
//보좌관 카드
class an_aide : public Card {
    int card_num5 = 0;
public:
    void applyEffect(Player& player, int choice) override;
    void showCard() override;
    void showEffectPreview() override;
};

// 시장 카드
class mayor : public Card {
public:
    void applyEffect(Player& player, int choice) override;
    void showCard() override;
    void showEffectPreview() override;
};
//외교부 장관 카드
class Minister_of_Foreign_Affairs : public Card {
    int card_num6 = 0;
public:
    void applyEffect(Player& player, int choice) override;
    void showCard() override;
    void showEffectPreview() override;
};
//외국 스파이 카드
class Foreign_Spy : public Card {
    int card_num7 = 0;
public:
    void applyEffect(Player& player, int choice) override;
    void showCard() override;
    void showEffectPreview() override;
};
// 의사 카드
class doctor : public Card {
    int card_num10 = 0;
public:
    void applyEffect(Player& player, int choice) override;
    void showCard() override;
    void showEffectPreview() override;
};
//산업 장관 카드
class industry_of_Minister : public Card {
    int card_num11 = 0;
public:
    void applyEffect(Player& player, int choice) override;
    void showCard() override;
    void showEffectPreview() override;
};
//장군 카드
class General : public Card {
    int card_num12 = 0;
public:
    void applyEffect(Player& player, int choice) override;
    void showCard() override;
    void showEffectPreview() override;
};
//재벌 카드
class Rich : public Card {
    int card_num13 = 0;
public:
    void applyEffect(Player& player, int choice) override;
    void showCard() override;
    void showEffectPreview() override;
};
//재정부 장관 카드
class Minister_of_Finance : public Card {
public:
    void applyEffect(Player& player, int choice) override;
    void showCard() override;
    void showEffectPreview() override;
};

//점술사 카드
class Fortune_Teller : public Card {
public:
    void applyEffect(Player& player, int choice) override;
    void showCard() override;
    void showEffectPreview() override;
};
//하얀 새 카드
class White_bird : public Card {
    int card_num14 = 0;
public:
    void applyEffect(Player& player, int choice) override;
    void showCard() override;
    void showEffectPreview() override;
};
//행정부 장관 카드
class Minister_of_Government : public Card {
    int card_num15 = 0;
public:
    void applyEffect(Player& player, int choice) override;
    void showCard() override;
    void showEffectPreview() override;
};
//환경부 장관 카드
class Minister_of_Environment : public Card {
public:
    void applyEffect(Player& player, int choice) override;
    void showCard() override;
    void showEffectPreview() override;
};
