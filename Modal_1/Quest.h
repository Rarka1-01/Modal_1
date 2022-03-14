#pragma once

class ReQuest
{
public: 

	ReQuest(int i, int t_obrab)
	{
		this->t_prih = i;
		this->t_obrab = t_obrab;
	}

	int t_interv;
	int t_obrab;
	int t_prih;
	int t_start_obr;
	int t_okon_obr;
	int t_oz;
	int t_prost;
};