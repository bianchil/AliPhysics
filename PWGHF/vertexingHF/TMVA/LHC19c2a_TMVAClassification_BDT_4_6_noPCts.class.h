// Class: ReadBDT
// Automatically generated by MethodBase::MakeClass
//

/* configuration options =====================================================

#GEN -*-*-*-*-*-*-*-*-*-*-*- general info -*-*-*-*-*-*-*-*-*-*-*-

Method         : BDT::BDT
TMVA Release   : 4.2.1         [262657]
ROOT Release   : 6.16/00       [397312]
Creator        : andreaalici
Date           : Mon May 20 14:03:16 2019
Host           : Darwin dhcp29.bo.infn.it 17.7.0 Darwin Kernel Version 17.7.0: Thu Jun 21 22:53:14 PDT 2018; root:xnu-4570.71.2~1/RELEASE_X86_64 x86_64
Dir            : /Users/andreaalici/analisi/lambdaC/2019/Central_noPCts
Training events: 1250957
Analysis type  : [Classification]


#OPT -*-*-*-*-*-*-*-*-*-*-*-*- options -*-*-*-*-*-*-*-*-*-*-*-*-

# Set by User:
V: "False" [Verbose output (short form of "VerbosityLevel" below - overrides the latter one)]
H: "False" [Print method-specific help message]
NTrees: "850" [Number of trees in the forest]
MaxDepth: "3" [Max depth of the decision tree allowed]
MinNodeSize: "2.5%" [Minimum percentage of training events required in a leaf node (default: Classification: 5%, Regression: 0.2%)]
nCuts: "20" [Number of grid points in variable range used in finding optimal cut in node splitting]
BoostType: "AdaBoost" [Boosting type for the trees in the forest (note: AdaCost is still experimental)]
UseBaggedBoost: "True" [Use only a random subsample of all events for growing the trees in each boost iteration.]
AdaBoostBeta: "5.000000e-01" [Learning rate  for AdaBoost algorithm]
BaggedSampleFraction: "5.000000e-01" [Relative size of bagged event sample to original size of the data sample (used whenever bagging is used (i.e. UseBaggedBoost, Bagging,)]
SeparationType: "giniindex" [Separation criterion for node splitting]
# Default:
VerbosityLevel: "Default" [Verbosity level]
VarTransform: "None" [List of variable transformations performed before training, e.g., "D_Background,P_Signal,G,N_AllClasses" for: "Decorrelation, PCA-transformation, Gaussianisation, Normalisation, each for the given class of events ('AllClasses' denotes all events of all classes, if no class indication is given, 'All' is assumed)"]
CreateMVAPdfs: "False" [Create PDFs for classifier outputs (signal and background)]
IgnoreNegWeightsInTraining: "False" [Events with negative weights are ignored in the training (but are included for testing and performance evaluation)]
AdaBoostR2Loss: "quadratic" [Type of Loss function in AdaBoostR2]
Shrinkage: "1.000000e+00" [Learning rate for BoostType=Grad algorithm]
UseRandomisedTrees: "False" [Determine at each node splitting the cut variable only as the best out of a random subset of variables (like in RandomForests)]
UseNvars: "3" [Size of the subset of variables used with RandomisedTree option]
UsePoissonNvars: "True" [Interpret "UseNvars" not as fixed number but as mean of a Poisson distribution in each split with RandomisedTree option]
UseYesNoLeaf: "True" [Use Sig or Bkg categories, or the purity=S/(S+B) as classification of the leaf node -> Real-AdaBoost]
NegWeightTreatment: "inverseboostnegweights" [How to treat events with negative weights in the BDT training (particular the boosting) : IgnoreInTraining;  Boost With inverse boostweight; Pair events with negative and positive weights in training sample and *annihilate* them (experimental!)]
Css: "1.000000e+00" [AdaCost: cost of true signal selected signal]
Cts_sb: "1.000000e+00" [AdaCost: cost of true signal selected bkg]
Ctb_ss: "1.000000e+00" [AdaCost: cost of true bkg    selected signal]
Cbb: "1.000000e+00" [AdaCost: cost of true bkg    selected bkg ]
NodePurityLimit: "5.000000e-01" [In boosting/pruning, nodes with purity > NodePurityLimit are signal; background otherwise.]
RegressionLossFunctionBDTG: "huber" [Loss function for BDTG regression.]
HuberQuantile: "7.000000e-01" [In the Huber loss function this is the quantile that separates the core from the tails in the residuals distribution.]
DoBoostMonitor: "False" [Create control plot with ROC integral vs tree number]
UseFisherCuts: "False" [Use multivariate splits using the Fisher criterion]
MinLinCorrForFisher: "8.000000e-01" [The minimum linear correlation between two variables demanded for use in Fisher criterion in node splitting]
UseExclusiveVars: "False" [Variables already used in fisher criterion are not anymore analysed individually for node splitting]
DoPreselection: "False" [and and apply automatic pre-selection for 100% efficient signal (bkg) cuts prior to training]
SigToBkgFraction: "1.000000e+00" [Sig to Bkg ratio used in Training (similar to NodePurityLimit, which cannot be used in real adaboost]
PruneMethod: "nopruning" [Note: for BDTs use small trees (e.g.MaxDepth=3) and NoPruning:  Pruning: Method used for pruning (removal) of statistically insignificant branches ]
PruneStrength: "0.000000e+00" [Pruning strength]
PruningValFraction: "5.000000e-01" [Fraction of events to use for optimizing automatic pruning.]
SkipNormalization: "False" [Skip normalization at initialization, to keep expectation value of BDT output according to the fraction of events]
nEventsMin: "0" [deprecated: Use MinNodeSize (in % of training events) instead]
UseBaggedGrad: "False" [deprecated: Use *UseBaggedBoost* instead:  Use only a random subsample of all events for growing the trees in each iteration.]
GradBaggingFraction: "5.000000e-01" [deprecated: Use *BaggedSampleFraction* instead: Defines the fraction of events to be used in each iteration, e.g. when UseBaggedGrad=kTRUE. ]
UseNTrainEvents: "0" [deprecated: Use *BaggedSampleFraction* instead: Number of randomly picked training events used in randomised (and bagged) trees]
NNodesMax: "0" [deprecated: Use MaxDepth instead to limit the tree size]
##


#VAR -*-*-*-*-*-*-*-*-*-*-*-* variables *-*-*-*-*-*-*-*-*-*-*-*-

NVar 10
massK0S                       massK0S                       massK0S                       massK0S                                                         'F'    [0.487614035606,0.507613956928]
tImpParBach                   tImpParBach                   tImpParBach                   tImpParBach                                                     'F'    [-0.499959766865,0.499570667744]
tImpParV0                     tImpParV0                     tImpParV0                     tImpParV0                                                       'F'    [-1.49994027615,1.49994325638]
DecayLengthK0S*0.497/v0P      CtK0S                         CtK0S                         CtK0S                                                           'F'    [0.0870367884636,97.8341674805]
cosPAK0S                      cosPAK0S                      cosPAK0S                      cosPAK0S                                                        'F'    [0.990000188351,1]
signd0                        signd0                        signd0                        signd0                                                          'F'    [2.6137568554e-08,0.499959766865]
nSigmaTOFpr                   nSigmaTOFpr                   nSigmaTOFpr                   nSigmaTOFpr                                                     'F'    [-999,53.7240142822]
nSigmaTPCpr                   nSigmaTPCpr                   nSigmaTPCpr                   nSigmaTPCpr                                                     'F'    [-2.99999403954,2.9999935627]
nSigmaTPCpi                   nSigmaTPCpi                   nSigmaTPCpi                   nSigmaTPCpi                                                     'F'    [-6.4945936203,69.3731307983]
nSigmaTPCka                   nSigmaTPCka                   nSigmaTPCka                   nSigmaTPCka                                                     'F'    [-4.05195045471,32.1674880981]
NSpec 15
massLc2K0Sp                   massLc2K0Sp                   massLc2K0Sp                   mass Lc-->K0S+p               units                             'F'    [2.08646059036,2.48645997047]
LcPt                          LcPt                          LcPt                          Lc Pt                         units                             'F'    [4.00000095367,5.99999189377]
massLc2Lambdapi               massLc2Lambdapi               massLc2Lambdapi               mass Lc -->L(1520)+pi         units                             'F'    [1.25557470322,3.66969132423]
massLambda                    massLambda                    massLambda                    mass V0 = Lambda              units                             'F'    [1.1206805706,2.30273652077]
massLambdaBar                 massLambdaBar                 massLambdaBar                 mass V0 = LambdaBar           units                             'F'    [1.12068152428,2.28734850883]
cosPAK0S                      cosPAK0S                      cosPAK0S                      cosPointingAngle K0S          units                             'F'    [0.990000188351,1]
V0positivePt                  V0positivePt                  V0positivePt                  V0 positive Pt                units                             'F'    [0.113546654582,4.32192707062]
V0negativePt                  V0negativePt                  V0negativePt                  V0 negative Pt                units                             'F'    [0.10291082412,4.36875629425]
dcaV0pos                      dcaV0pos                      dcaV0pos                      dca V0 positive               units                             'F'    [0.10000077635,89.2118530273]
dcaV0neg                      dcaV0neg                      dcaV0neg                      dca V0 negative               units                             'F'    [0.10000333935,78.9956741333]
v0Pt                          v0Pt                          v0Pt                          K0S Pt                        units                             'F'    [0.500034630299,5.2233300209]
dcaV0                         dcaV0                         dcaV0                         dca V0                        units                             'F'    [1.88170474757e-08,0.399996370077]
V0positiveEta                 V0positiveEta                 V0positiveEta                 V0pos Eta                     units                             'F'    [-0.799999952316,0.799992024899]
bachelorEta                   bachelorEta                   bachelorEta                   eta bachelor                  units                             'F'    [-0.799998700619,0.799999475479]
centrality                    centrality                    centrality                    centrality                    units                             'F'    [0.15000000596,9.94999980927]


============================================================================ */

#ifndef ReadBDT_LHC19c2a_4_6_noPCts_H
#define ReadBDT_LHC19c2a_4_6_noPCts_H

#include <vector>
#include <cmath>
#include <string>
#include <iostream>
#include "IClassifierReader.h"
#include "BDTNode.h"

class ReadBDT_LHC19c2a_4_6_noPCts : public IClassifierReader
{
 public:
  // Deafult constructor added by ALICE user
  ReadBDT_LHC19c2a_4_6_noPCts()
      : IClassifierReader(),
        fClassName("ReadBDT_LHC19c2a_4_6_noPCts"),
        fNvars(10),
        fIsNormalised(false)
  {
    for (int i = 10; i--;)
    {
      fVmin[i] = fVmax[i] = 0;
      fType[i] = 0;
    }
    fForest.clear();
    fBoostWeights.clear();
  }

  // constructor
 ReadBDT_LHC19c2a_4_6_noPCts( std::vector<std::string>& theInputVars )
   : IClassifierReader(),
    fClassName( "ReadBDT_LHC19c2a_4_6_noPCts" ),
    fNvars( 10 ),
    fIsNormalised(false)
      {
	// the training input variables
	const char* inputVars[] = { "massK0S", "tImpParBach", "tImpParV0", "DecayLengthK0S*0.497/v0P", "cosPAK0S", "signd0", "nSigmaTOFpr", "nSigmaTPCpr", "nSigmaTPCpi", "nSigmaTPCka" };

      // sanity checks
	if (theInputVars.size() <= 0) {
	  std::cout << "Problem in class \"" << fClassName << "\": empty input vector" << std::endl;
	  fStatusIsClean = false;
	}

	if (theInputVars.size() != fNvars) {
	  std::cout << "Problem in class \"" << fClassName << "\": mismatch in number of input values: "
                   << theInputVars.size() << " != " << fNvars << std::endl;
	  fStatusIsClean = false;
	}

	// validate input variables
	for (size_t ivar = 0; ivar < theInputVars.size(); ivar++) {
	  if (theInputVars[ivar] != inputVars[ivar]) {
            std::cout << "Problem in class \"" << fClassName << "\": mismatch in input variable names" << std::endl
                      << " for variable [" << ivar << "]: " << theInputVars[ivar].c_str() << " != " << inputVars[ivar] << std::endl;
            fStatusIsClean = false;
	  }
	}
	
	
	// initialize min and max vectors (for normalisation)
	fVmin[0] = 0;
	fVmax[0] = 0;
	fVmin[1] = 0;
	fVmax[1] = 0;
	fVmin[2] = 0;
	fVmax[2] = 0;
	fVmin[3] = 0;
	fVmax[3] = 0;
	fVmin[4] = 0;
	fVmax[4] = 0;
	fVmin[5] = 0;
	fVmax[5] = 0;
	fVmin[6] = 0;
	fVmax[6] = 0;
	fVmin[7] = 0;
	fVmax[7] = 0;
	fVmin[8] = 0;
	fVmax[8] = 0;
	fVmin[9] = 0;
	fVmax[9] = 0;
	
	// initialize input variable types
	fType[0] = 'F';
	fType[1] = 'F';
	fType[2] = 'F';
	fType[3] = 'F';
	fType[4] = 'F';
	fType[5] = 'F';
	fType[6] = 'F';
	fType[7] = 'F';
	fType[8] = 'F';
	fType[9] = 'F';
	
	// initialize constants
	Initialize();
	
      }

   // destructor
   virtual ~ReadBDT_LHC19c2a_4_6_noPCts() {
      Clear(); // method-specific
   }  

  // the classifier response
  // "inputValues" is a vector of input values in the same order as the
  // variables given to the constructor
  double GetMvaValue(const std::vector<double> &inputValues) const;

 private:

   // method-specific destructor
  void Clear();
  
  // common member variables
  std::string fClassName; // changed to "std::string" from "const char*" by ALICE analyzers

   const size_t fNvars;
   size_t GetNvar()           const { return fNvars; }
   char   GetType( int ivar ) const { return fType[ivar]; }

   // normalisation of input variables
   const bool fIsNormalised;
   bool IsNormalised() const { return fIsNormalised; }
   double fVmin[10];
   double fVmax[10];
   double NormVariable( double x, double xmin, double xmax ) const {
      // normalise to output range: [-1, 1]
      return 2*(x - xmin)/(xmax - xmin) - 1.0;
   }

   // type of input variable: 'F' or 'I'
   char   fType[10];

   // initialize internal variables
   void Initialize();
   double GetMvaValue__( const std::vector<double>& inputValues ) const;

  // private members (method specific)
  std::vector<BDTNode *> fForest; // i.e. root nodes of decision trees
  std::vector<double> fBoostWeights;      // the weights applied in the individual boosts
};

#endif