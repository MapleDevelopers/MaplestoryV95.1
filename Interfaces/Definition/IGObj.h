#pragma once

class IGObj {
public:
    struct IGObjVtbl {
        void(__thiscall* Update)(IGObj*);
    };

    IGObjVtbl* vfptr;

    void Update() {
        vfptr->Update(this);
    }
};