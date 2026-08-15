modded class ACE_MetalClangingCommand
{
	override bool Execute(IEntity cursorTarget, IEntity groupEnt, vector targetPosition, int playerID, bool isClient)
	{
		return false;
	}
	
	override bool CanBePerformed(notnull SCR_ChimeraCharacter user)
	{
		return false;
	}
}
