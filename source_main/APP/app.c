#include "app.h"



void GPIO_driver_ChannelGroupRead(void)
{
    uint8 data[NUM_CHANNEL_ID]={0};

    GPIO_Init(GPIO_ConfigPin);

    ChannelGroupType ChannelID ={NUM_CHANNEL_ID,{0,4,6,10}};
    ChannelGroupType ChannelID1 ={NUM_CHANNEL_ID,{16,18,23,26}};

	while(1)
	{

	GPIO_ChannelGroupRead(&ChannelID1, data);
	GPIO_ChannelGroupWrite(&ChannelID, data);

	_delay_ms((double)50);
	}
}


