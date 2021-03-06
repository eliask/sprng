/*******************************************************************************
   pmlcgPanel class
*******************************************************************************/


//******************************************************************************
// pmlcgPanel class defines a panel for entering and translating parameters of
// "Prime Modulus Linear Congruential Generator".
//******************************************************************************

public class pmlcgPanel
       extends ParmGrpPanel
{
   //---------------------------------------------------------------------------
   // Parameter field for number of logical streams.
   protected IntParmField  numLogicStrmField;
   // Parameter field for number of real streams per logical stream.
   protected IntParmField  numRealStrmField;
   // Parameter field for generator seed.
   protected IntParmField  seedField;
   // Parameter field for generator type.
   protected IntParmField  genTypeField;
   // Number of tests per logical stream
   protected IntParmField  ntestsField;
   // skip n random numbers between each test on the same stream.
   protected IntParmField  skipField;

   // The command line translation of the parameters.
   protected String  parmStr;
   // Owner of this panel.
   protected TestWizard  wiz;

   //***************************************************************************
   // The constructor constructs pmlcgPanel with owner <wizard>.
   //---------------------------------------------------------------------------
   public pmlcgPanel(TestWizard wizard) {
      // Set up a group panel that will contain six parameter fields.
      super("Prime Modulus Linear Congruential Generator (pmlcg)", 6);
      // Set the command line id.
      super.cmdId = "pmlcg";

      // Create the parameter fields.
      numLogicStrmField = new IntParmField(
                                 "Number of Logical Streams", 1,
                                 Integer.MAX_VALUE,1);
      numRealStrmField = new IntParmField(
                                 "Combine how many real streams to create a logical stream?", 1,
                                 Integer.MAX_VALUE,1);
      seedField = new IntParmField(
                                 "           Generator Seed", 0,
                                 Integer.MAX_VALUE);
      genTypeField = new IntParmField(
                                 "           Generator Parameter", 0, 7);
      ntestsField = new IntParmField("Tests per logical stream", 0,
                                 Integer.MAX_VALUE,1);
      skipField = new IntParmField("Skip ? random numbers each test.(Set this to 0.)", 0, 7,0);

      // Initialize internal variables.
      parmStr = "";
      wiz = wizard;

      // Add the components.
      addField(numLogicStrmField);
      addField(numRealStrmField);
      addField(seedField);
      addField(genTypeField);
      addField(ntestsField);
      addField(skipField);
   }

   //---------------------------------------------------------------------------
   // checkParms() checks the validity of the parameter values, and returns a
   // description of the error.
   //
   // No error: checkParms() returns empty string
   // Warning : checkParms() returns warning message (non-empty string)
   //           getParms() returns command line segment (non-empty string)
   // Error   : checkParms() returns error message (non-empty string)
   //           getParms() returns empty string
   //---------------------------------------------------------------------------
   public String checkParms() {
      String  errorMsg;

      // Check parameters for errors and concatenate error messages.
      errorMsg = numLogicStrmField.checkParm() +
                 numRealStrmField.checkParm() +
                 seedField.checkParm() +
                 genTypeField.checkParm() +
                 ntestsField.checkParm() +
                 skipField.checkParm();
      // If error exists, set command line translation to empty string and
      // return the error message.
      if (errorMsg.length() > 0) {
         parmStr = "";
         return errorMsg;
      }

      // Translate the parameters into command line segment and cache it.
      parmStr = numLogicStrmField.getParmString() + " " +
                numRealStrmField.getParmString() + " " +
                seedField.getParmString() + " " +
                genTypeField.getParmString() + " " +
                ntestsField.getParmString() + " " +
                skipField.getParmString();

      return errorMsg;
   }

   //---------------------------------------------------------------------------
   // getParms() translates the user-specified parameters into a command line
   // segment, and returns it in a string.
   // NOTE: Before calling getParms(), call checkParms() first.
   //---------------------------------------------------------------------------
   public String getParms() {
      // Return the cached translation.
      return parmStr;
   }
}
