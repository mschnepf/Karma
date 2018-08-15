#pragma once

#include <vector>

#define UNDEFINED_DOUBLE -999;

namespace dijet {
    class NtupleEntry {
      public:
        // -- ntuple branches
        long run = -1;
        int lumi = -1;
        long event = -1;
        int bx = -1;
        // pileup density
        double rho = UNDEFINED_DOUBLE;
        // number of primary vertices
        int npv = -1;
        int npvGood = -1;
        // leading jet kinematics
        double jet1pt = UNDEFINED_DOUBLE;
        double jet1phi = UNDEFINED_DOUBLE;
        double jet1eta = UNDEFINED_DOUBLE;
        double jet1y = UNDEFINED_DOUBLE;
        // second-leading jet kinematics
        double jet2pt = UNDEFINED_DOUBLE;
        double jet2phi = UNDEFINED_DOUBLE;
        double jet2eta = UNDEFINED_DOUBLE;
        double jet2y = UNDEFINED_DOUBLE;
        // leading jet pair kinematics
        double jet12mass = UNDEFINED_DOUBLE;
        double jet12ptave = UNDEFINED_DOUBLE;
        double jet12ystar = UNDEFINED_DOUBLE;
        double jet12yboost = UNDEFINED_DOUBLE;

        // trigger result and prescale factor
        unsigned int hltNumBits = 0;
        int hltAssignedBit = -1;
        int hltAssignedPrescale = -1;

        // HLT objects
        double jet1HLTpt = UNDEFINED_DOUBLE;
        unsigned int jet1HLTNumMatchedTriggerObjects = 0;
        int jet1HLTAssignedPathIndex = -1;
        int jet1HLTAssignedPathPrescale = -1;
        double jet1HLTAssignedPathEfficiency = UNDEFINED_DOUBLE;

        double jet2HLTpt = UNDEFINED_DOUBLE;
        unsigned int jet2HLTNumMatchedTriggerObjects = 0;
        int jet2HLTAssignedPathIndex = -1;
        int jet2HLTAssignedPathPrescale = -1;
        double jet2HLTAssignedPathEfficiency = UNDEFINED_DOUBLE;
    };
    typedef std::vector<dijet::NtupleEntry> Ntuple;
}