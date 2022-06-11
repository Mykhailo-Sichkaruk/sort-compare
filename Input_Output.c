// Çàïîâíåííÿ òà âèâ³ä
#include "Header.h"

void input(int const p, int const m, int const n, int const mode)
{


 switch(mode)
 {
    case 1:
	{         // Âïîðÿäêîâàíå

    int q = 0;

    for(int i=0; i<p; i++)
	{
 	    for(int j=0; j<m; j++)
		{
		    for(int k=0; k<n; k++)
			{
			A[i][j][k]=q;
			q++;
			}
		}
	}

	}
	break;



     case 2:								// Âèïàäêîâ³ ÷èñëà

    for(int i=0; i<p; i++)
	{
 	    for(int j=0; j<m; j++)
		{
		    for(int k=0; k<n; k++)
			{
			A[i][j][k]=rand()%(2*p*m*n) - p*m*n;
			}
		}
	}

	break;


 	case 3:{								// Îáåðíåíîâïîðÿäêîâàí³

	int q = (p * m *n);

    for(int i=0; i<p; i++)
	{
 	    for(int j=0; j<m; j++)
		{
		    for(int k=0; k<n; k++)
			{
			A[i][j][k]=q;
			q--;
			}
		}
	}

	}
	break;
 }

}



void output(int const p, int const m, int const n)
{

    for(int i=0; i<p; i++)
	{
 	    for(int j=0; j<m; j++)
		{
		    for(int k=0; k<n; k++)
			{
			printf("\t%d ", A[i][j][k]);
			}

			printf("\n");
		}

		printf("\n");
		printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
		printf("\n");
	}

}
