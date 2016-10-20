
// IF YOU USE TABS:
// 1. Tabs are the first thing on a line
// 2. The only thing that can go in front of one tab is another tab
// 3. Tabs are for logical blocks, spaces are for alignment
//
// IF YOU USE SPACES
// 1. NEVER use tabs

int one_true_brace_style(int value)
{
	// BREAKING rule 1&2
	value	*= 35;
	if(value > 500) {
		// Valid way of following rule 3
		value       -= 500;
		val5        -= 500;
		valeris     -= 500;
		valuvillage -= 500;
		valvoline   -= 500;
		steve       -= 500;
	} else if(value > 100) {
		// BREAKING rule 3 for tabs
					 value += 10;
						val5 += 10;
				 valeris += 10;
		 valuvillage += 10;
			 valvoline += 10;
					 steve += 10;
	} else {
		// Valid way of following rule 3
		       value += 10;
		        val5 += 10;
		     valeris += 10;
		 valuvillage += 10;
		   valvoline += 10;
		       steve += 10;
	}
	return value;
}




int main(void)
{

}

int one_true_brace_style(int value)
{
	value *= 35;
	if(value > 500) {
		value -= 500;
	} else {
		value += 10;
	}
	return value;
}



int bsd(int value) {
	value *= 35;
	if(value > 500) {
		value -= 500;
	}
	else {
		value += 10;
	}
	return value;
}


int allman(int value)
{
	value *= 35;
	if(value > 500)
	{
		value -= 500;
	}
	else
	{
		value += 10;
	}
	return value;
}


int gnu(int value)
    {
	value *= 35;
	if(value > 500)
	    {
		value -= 500;
	    }
	else
	    {
		value += 10;
	    }
	return value;
    }

int one_true_brace_style_spaced_8(int value)
{
        value *= 35;
        if(value > 500) {
                value -= 500;
        } else {
                value += 10;
        }
        return value;
}



int one_true_brace_style_three_spaces(int value)
{
   value *= 35;
   if(value > 500) {
      value -= 500;
   } else {
      value += 10;
   }
   return value;
}

int one_true_brace_style_BAD_EXAMPLE_DONT_DEAD_OPEN_INSIDE(int value)
{
    value *= 35;
	if(value > 500) {
	   value -= 500;
	} else {
       	value += 10;
	}
	return value;
}





