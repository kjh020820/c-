#include"start.h"
#include"card_Character.h"
#include<iostream>
#include<cstdlib>
#include<ctime>

int year_of_accession = 2000;

using namespace std;

Player::Player() : military(50), economy(50), diplomacy(50), public_opinion(50) {}

string Player::createGauge(int value, int max_length) {
	int bars = value / 5;
	int spaces = max_length - bars;
	return "[" + string(bars, '|') + string(spaces, ' ') + "]";
}

void Player::showStatus() {
	cout << "□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□" << endl;
	cout << "□현재연도 : " << year_of_accession << endl;
	cout << "□재임연도 : " << year << endl;
	cout << "□군사력: " << " " << createGauge(military) << endl; // 군사력
	cout << "□경제력: " << " " << createGauge(economy) << endl; // 경제력
	cout << "□외교력: " << " " << createGauge(diplomacy) << endl; // 외교력
	cout << "□지지율: " << " " << createGauge(public_opinion) << endl; // 지지율
	cout << "□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□" << endl;
	year_of_accession++;
}
void Player::end() {
	if (diplomacy >= 100) {
		cout << "간단한 응답 : 국가의 전권을 넘기시오. 결국 대통령은 산채로 납치당해 사망했다." << endl;
		year = 0;
	}
	else if (diplomacy <= 0) {
		cout << "대통령은 도망가려 했으나, 외국 괴한에 의해 습격당해 사망했다." << endl;
		year = 0;
	}
	else if (economy >= 100) {
		cout << "대통령은 회식중 과음을 하여 사망했다. 보좌관들 모두가 만취하여 다음날까지 눈치채는 사람은 없었다.." << endl;
		year = 0;
	}
	else if (economy <= 0) {
		cout << "국가 경제가 붕괴하여 재벌들에게 나라 전권이 넘어갔다. 대통령은 강제로 탄핵된뒤 사망했다.." << endl;
		year = 0;
	}
	else if (military >= 100) {
		cout << "반란을 일으킨 군대는 대통령을 감금하고 죽을때까지 방치했다." << endl;
		year = 0;
	}
	else if (military <= 0) {
		cout << "대통령궁 마지막 경비대가 최후까지 항전했으나, 결국 외국군에 의해서 대통령은 사망했다." << endl;
		year = 0;
	}
	else if (public_opinion >= 100) {
		cout << "대통령은 퇴임하였고, 이후에도 대통령에게 해를 가하는 이는 없었다. 평온한 여생을 보내고 오랫동안 칭송받았다." << endl;
		year = 0;
	}
	else if (public_opinion <= 0) {
		cout << "대통령궁은 시위대에 점령당해 각료들도 뿔뿔이 흩어졌다. 남은건 아무것도 없었다." << endl;
		year = 0;
	}
	else {
		year++;
	}
}
