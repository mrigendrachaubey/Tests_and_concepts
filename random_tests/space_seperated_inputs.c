#include <stdio.h>     // scanf(), fprintf(), stderr, printf()
#include <stdlib.h>    // exit(), EXIT_FAILURE


#define MAX_NUMS_PER_PERSON 3


int main( void )
{
    int alice[ MAX_NUMS_PER_PERSON ]={0};
    int bob[ MAX_NUMS_PER_PERSON ]={0};

    //enter alice
    for( int i=0; i< MAX_NUMS_PER_PERSON; i++ )
    {
        if( 3 != scanf("%d", &alice[i]) )
        {
            fprintf( stderr, "failed to input nums for Alice\n" );
            exit( EXIT_FAILURE );
        }

        // implied else, scanf successful
    }

    //enter bob
    for( int i=0; i< MAX_NUMS_PER_PERSON; i++ )
    {
        if( 1 != scanf("%d", &bob[i]) )
        {
            fprintf( stderr, "failed to input nums for Bob\n" );
            exit( EXIT_FAILURE );
        }

        // implied else, scanf successful
    }


    //print alice
    for( int i = 0; i < MAX_NUMS_PER_PERSON; i++)
    {
        printf("%d ", alice[i]);
    }

    //print bob
    for( int i = 0; i < MAX_NUMS_PER_PERSON; i++)
    {
        printf("%d ", bob[i]);
    }

    return 0;
}
