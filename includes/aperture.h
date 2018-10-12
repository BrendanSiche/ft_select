/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aperture.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsiche <bsiche@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 17:46:07 by bsiche            #+#    #+#             */
/*   Updated: 2018/08/30 21:11:36 by bsiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef APERTURE_H
# define APERTURE_H

# define BORDER0 		  " ----------------------------------"
# define BORDER1  BORDER0 "---------------------------------"
# define BORDER2  "-----------------------------------------------------------"
# define BLANK0	  "|                             "
# define BLANK1   BLANK0 "                                       |"
# define PREL	  "||    "
# define LOGO1    PREL "               .,-:;//;:=,                         |"
# define LOGO2    PREL "           . :H@@@MM@M#H/.,+%;,                    |"
# define LOGO3    PREL "        ,/X+ +M@@M@MM%=,-%HMMM@X/,                 |"
# define LOGO4    PREL "      -+@MM; $M@@MH+-,;XMMMM@MMMM@+-               |"
# define LOGO5    PREL "     ;@M@@M- XM@X;. -+XXXXXHHH@M@M#@/.             |"
# define LOGO6    PREL "   ,%MM@@MH ,@%=             .---=-=:=,.           |"
# define LOGO7    PREL "   =@#@@@MX.,                -%HX$$%%%:;           |"
# define LOGO8    PREL "  =-./@M@M$                   .;@MMMM@MM:          |"
# define LOGO9    PREL "  X@/ -$MM/                    . +MM@@@M$          |"
# define LOGO10   PREL " ,@M@H: :@:                    . =X#@@@@-          |"
# define LOGO11   PREL " ,@@@MMX, .                    /H- ;@M@M=          |"
# define LOGO12   PREL " .H@@@@M@+,                    %MM+..%#$.          |"
# define LOGO13   PREL "  /MMMM@MMH/.                  XM@MH; =;           |"
# define LOGO14   PREL "   /%+%$XHH@$=              , .H@@@@MX,            |"
# define LOGO15   PREL "    .%MM@@@HHHXX$$$%+- .:$MMX =M@@MM%.             |"
# define LOGO16   PREL "      =XMMM@MM@MM#H;,-+HMM@M+ /MMMX=               |"
# define LOGO17   PREL "        =%@M@M#@$-.=$@MM@@@M; %M%=                 |"
# define LOGO18   PREL "          ,:+$+-,/H#MMMMMMM@= =,                   |"
# define LOGO19   PREL "                 =++%%%%+/:-.                      |"
# define INTR1         "|                   Welcome to the "
# define INTRO1  INTR1 "Aperture Science                  |"
# define INTR2         "|                 Over-Engineered"
# define INTRO2  INTR2 " Selection Terminal                 |"
# define USAG1         "|       - Press Spacebar to"
# define USAGE1  USAG1 " select a file                            |"
# define USAG2		   "|       - Press Return to send the"
# define USAGE2  USAG2 " result back to Shell              |"
# define USAG3		   "|       - Type the name of your"
# define USAGE3 USAG3  " file to reach it quickly             |"
# define FACT          "|     Fact of the day :                  "
# define FACT1  FACT   "                            |"

# define LINCOL1           "|     In 1862, Abraham Lincoln signed "
# define LINCOLN1 LINCOL1  "the Emancipation Proclamation, |"
# define LINCOL2           "|     freeing the slaves. Like everything "
# define LINCOLN2 LINCOL2  "he did, Lincoln freed      |"
# define LINCOL3           "|     the slaves while sleepwalking, "
# define LINCOLN3 LINCOL3  "and later had no memory         |"
# define LINCOL4           "|     of the event.                "
# define LINCOLN4 LINCOL4  "                                  |"

# define QUEE1           "|      In Victorian England, a commoner"
# define QUEEN1 QUEE1    " was not allowed to look      |"
# define QUEE2           "|      directly at the Queen, due to "
# define QUEEN2 QUEE2    "a belief at the time that the   |"
# define QUEE3           "|      poor had the ability to steal thoughts."
# define QUEEN3 QUEE3    " Science now believes  |"
# define QUEE4           "|      that less than 4% of poor people"
# define QUEEN4 QUEE4    " are able to do this.         |"

# define WILL1           "|      William Shakespeare did not exist"
# define WILLI1 WILL1    ". His plays were             |"
# define WILL2           "|      masterminded in 1589 by Francis "
# define WILLI2 WILL2    " Bacon, who used a            |"
# define WILL3           "|      Ouija board to enslave play-writing"
# define WILLI3 WILL3    " ghosts.                   |"
# define WILLI4 BLANK1

# define SCHR1           "|      The Schrodinger's cat paradox "
# define SCHRO1 SCHR1    "outlines a situation in which   |"
# define SCHR2           "|      a cat in a box must be considered"
# define SCHRO2 SCHR2    ", for all intents and        |"
# define SCHR3           "|      purposes, simultaneously alive and dead."
# define SCHRO3 SCHR3    " Schrodinger created  |"
# define SCHR4           "|      this paradox as a justification "
# define SCHRO4 SCHR4    "for killing cats.             |"

# define AUT1           "|      The automobile brake was not "
# define AUTO1 AUT1     "invented until 1895. Before      |"
# define AUT2           "|      this, someone had to remain in the car"
# define AUTO2 AUT2     " at all times,          |"
# define AUT3           "|      driving in circles until passengers"
# define AUTO3 AUT3     " returned                  |"
# define AUT4           "|      from their errands."
# define AUTO4 AUT4     "                                           |"

# define PAN1           "|      Pants were invented by sailors in "
# define PANT1 PAN1     "the sixteenth century to    |"
# define PAN2           "|      avoid Poseidon's wrath. It was believed"
# define PANT2 PAN2     " that the sight of     |"
# define PAN3           "|      naked sailors angered the "
# define PANT3 PAN3     "sea god.                            |"
# define PANT4 BLANK1

# define SU1           "|      While the submarine is vastly"
# define SUB1 SU1      " superior to the boat            |"
# define SU2           "|      in every way, over 97% of people"
# define SUB2 SU2      " still use boats for          |"
# define SU3           "|      aquatic transportation."
# define SUB3 SU3      "                                       |"
# define SUB4 BLANK1

# define MAGI1           "|      89% of magic tricks"
# define MAGIC1 MAGI1    " are not magic.                            |"
# define MAGI2           "|      Technically, they are "
# define MAGIC2 MAGI2    "sorcery.                                |"
# define MAGIC3 BLANK1
# define MAGIC4 BLANK1

# define MAR1           "|      Marie Curie invented the theory"
# define MARY1 MAR1     " of radioactivity,             |"
# define MAR2          "|      the treatment of radioactivity, "
# define MARY2 MAR2     "and dying of radioactivity.   |"
# define MARY3 BLANK1
# define MARY4 BLANK1

# define FAC1           "|      The Fact Sphere is not defective."
# define FACTS1 FAC1     " Its facts are wholly        |"
# define FAC2           "|      accurate and very"
# define FACTS2 FAC2     " interesting.                                |"
# define FACTS3 BLANK1
# define FACTS4 BLANK1

# define AVO1           "|      Avocados have the highest fiber"
# define AVOC1 AVO1     " and calories of any fruit.    |"
# define AVO2           "|      They are found in Australians."
# define AVOC2 AVO2     "                                |"
# define AVOC3 BLANK1
# define AVOC4 BLANK1

# define TWE1           "|      Twelve. Twelve. Twelve."
# define TWEL1 TWE1     " Twelve. Twelve. Twelve. Twelve.       |"
# define TWE2           "|      Twelve. Twelve. Twelve."
# define TWEL2 TWE2     "                                       |"
# define TWEL3 BLANK1
# define TWEL4 BLANK1

# define ROP1           "|      The square root of rope"
# define ROPE1 ROP1     " is string.                            |"
# define ROPE2 BLANK1
# define ROPE3 BLANK1
# define ROPE4 BLANK1

# define HUM1           "|      Humans can survive underwater."
# define HUMA1 HUM1     " But not for very long.         |"
# define HUMA2 BLANK1
# define HUMA3 BLANK1
# define HUMA4 BLANK1

# define CHECK1 "                                     :X-"
# define CHECK2 "                                  :X###"
# define CHECK3 "                                ;@####@"
# define CHECK4 "                              ;M######X"
# define CHECK5 "                            -@########$"
# define CHECK6 "                          .$##########@"
# define CHECK7 "                         =M############-"
# define CHECK8 "                        +##############$"
# define CHECK9 "                      .H############$=."
# define CHECK10 "         ,/:         ,M##########M;."
# define CHECK11 "      -+@###;       =##########M;"
# define CHECK12 "   =%M#######;     :#########M/"
# define CHECK13 "-$M###########;   :########/"
# define CHECK14 " ,;X###########; =#######$."
# define CHECK15 "     ;H#########+######M="
# define CHECK16 "       ,+#############+"
# define CHECK17 "          /M########@-"
# define CHECK18 "            ;M#####%"
# define CHECK19 "              +####:"
# define CHECK20 "               ,$M-"

# define HEART1 "                          .,---."
# define HEART2 "                        ,/XM#MMMX;,"
# define HEART3 "                      -%##########M%,"
# define HEART4 "                     -@######%  $###@="
# define HEART5 "      .,--,         -H#######$   $###M:"
# define HEART6 "   ,;$M###MMX;     .;##########$;HM###X="
# define HEART7 ",/@###########H=      ;################+"
# define HEART8 "-+#############M/,      %##############+"
# define HEART9 "%M###############=      /##############:"
# define HEART10 "H################      .M#############;."
# define HEART11 "@###############M      ,@###########M:."
# define HEART12 "X################,      -$=X#######@:"
# define HEART13 "/@##################%-     +######$-"
# define HEART14 ".;##################X     .X#####+,"
# define HEART15 " .;H################/     -X####+."
# define HEART16 "   ,;X##############,       .MM/"
# define HEART17 "      ,:+$H@M#######M#$-    .$$="
# define HEART18 "           .,-=;+$@###X:    ;/=."
# define HEART19 "                  .,/X$;   .::,"
# define HEART20 "                      .,    .."

# define ERROR  "Termsize too small ! No fancy graphics for you"

void	ft_willi(char *blank);
void	ft_auto(char *blank);
void	ft_schro(char *blank);
void	ft_humans(char *blank);
void	ft_rope(char *blank);
void	ft_magic(char *blank);
void	ft_mary(char *blank);
void	ft_pants(char *blank);
void	ft_sub(char *blank);
void	ft_factsphere(char *blank);
void	ft_avocado(char *blank);
void	ft_twelve(char *blank);
void	ft_queen(char *blank);
void	ft_lincoln(char *blank);
void	add_to_str(char c);

#endif
