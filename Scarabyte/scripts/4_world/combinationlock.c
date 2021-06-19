modded class CombinationLock
{
	override void ShuffleLock()
	{
		string combination_text = m_Combination.ToString();
		string shuffled_text = "110";
		
		SetCombination( shuffled_text.ToInt() );
	}

	override void UnlockServer(EntityAI player, EntityAI parent)
	{
		GetGame().GetMission().OnEvent(ChatMessageEventTypeID, new ChatMessageEventParams(CCDirect, "", "Running custom UnlockServer...", ""));

		// run unlock
		super.UnlockServer(player, parent);

		// get player and try to place in hands
		PlayerBase m_player = GetGame().GetPlayer();
		m_player.PredictiveTakeEntityToHands(this);

		SetTakeable(false);
		//synchronize
		Synchronize();
	}
}