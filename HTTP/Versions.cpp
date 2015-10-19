//
// Created by bulat on 19.10.15.
//

#include "Versions.h"
#include "utils.h"

Versions *Versions::self;
Versions::Version_t Versions::map;

Versions::Versions() {
    mapInit(map)
            (HTTP1_0, "HTTP/1.0")
            (HTTP1_1, "HTTP/1.1");
}

Versions *Versions::Instance() {
    if (!self) {
        self = new Versions();
    }
    return self;
}

bool Versions::DeleteInstance() {
    if (self) {
        delete self;
        self = NULL;
        return true;
    }
    return false;
}
