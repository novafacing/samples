/*
 * Copyright (c) 2015 Kaprica Security, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */
#include "data_gen.h"

#include "course.h"
#include "department.h"
#include "professor.h"

void add_all_professors() {
  create_professor("Adena Garrard");
  create_professor("Alfreda Kotter");
  create_professor("Ali Forst");
  create_professor("Alphonso Lowenstein");
  create_professor("Amiee Broadfoot");
  create_professor("Angelic Sane");
  create_professor("Angelica Licata");
  create_professor("Anton Zahler");
  create_professor("Ashely Tellis");
  create_professor("Ashlyn Deville");
  create_professor("Audra Spradley");
  create_professor("Augustina Amann");
  create_professor("Augustus Zito");
  create_professor("Aurea Peavey");
  create_professor("Bernarda Burgess");
  create_professor("Bianca Rosenfeld");
  create_professor("Billie Darrigo");
  create_professor("Burt Aquino");
  create_professor("Carolina Plantz");
  create_professor("Celestine Mcnaught");
  create_professor("Christinia Lorenzana");
  create_professor("Columbus Knighton");
  create_professor("Conception Templeman");
  create_professor("Coretta Himes");
  create_professor("Corey Teets");
  create_professor("Danyel Mickle");
  create_professor("Deirdre Aylesworth");
  create_professor("Deloris Conroy");
  create_professor("Delorse Serrao");
  create_professor("Desirae Domer");
  create_professor("Diamond Macias");
  create_professor("Dick Strahl");
  create_professor("Dylan Schneiderman");
  create_professor("Edwardo Pokorny");
  create_professor("Estefana Thrift");
  create_professor("Faustino Mailloux");
  create_professor("Gale Roosa");
  create_professor("Gertrude Schulte");
  create_professor("Glennis Coons");
  create_professor("Gregory Garretson");
  create_professor("Hassan Stoke");
  create_professor("Henry Sandor");
  create_professor("Herbert Myhre");
  create_professor("Hollie Hamada");
  create_professor("Jannie Pastor");
  create_professor("Jeane Guyer");
  create_professor("Jesica Cryer");
  create_professor("Jordon Fiorillo");
  create_professor("Joy Greenley");
  create_professor("Julius Anding");
  create_professor("Kami Hansen");
  create_professor("Katharyn Armbruster");
  create_professor("Keshia Creswell");
  create_professor("Kia Kurland");
  create_professor("Krista Blanks");
  create_professor("Lashaun Pasha");
  create_professor("Laura Scannell");
  create_professor("Laverne Conely");
  create_professor("Laveta Pea");
  create_professor("Lavina Wurster");
  create_professor("Leatrice Walck");
  create_professor("Leida Chadwick");
  create_professor("Leticia Hedin");
  create_professor("Linsey Khalil");
  create_professor("Lois Hansell");
  create_professor("Loralee Penman");
  create_professor("Lovie Lubin");
  create_professor("Melia Ruge");
  create_professor("Melita Crafford");
  create_professor("Mica Dildine");
  create_professor("Milton Brekke");
  create_professor("Mireille Jain");
  create_professor("Nellie Borja");
  create_professor("Nisha Pegues");
  create_professor("Nova Christon");
  create_professor("Odell Ostrowski");
  create_professor("Oneida Selvy");
  create_professor("Quincy Modlin");
  create_professor("Ranee Boeck");
  create_professor("Robert Hetrick");
  create_professor("Roman Saddler");
  create_professor("Roselia Whisnant");
  create_professor("Rosetta Harker");
  create_professor("Shirly Bensley");
  create_professor("Steve Arzola");
  create_professor("Sunny Tien");
  create_professor("Tawna Bradstreet");
  create_professor("Teressa Marshburn");
  create_professor("Todd Holsinger");
  create_professor("Tomas Jiang");
  create_professor("Tracey Sherrard");
  create_professor("Una Worster");
  create_professor("Veola Wootton");
  create_professor("Verona Tenney");
  create_professor("Viola Grayer");
  create_professor("Warner Maggart");
  create_professor("Winfred Rowse");
  create_professor("Yon Seidel");
}

void add_all_departments() {
  create_department("ACC");
  create_department("ART");
  create_department("ASL");
  create_department("BIO");
  create_department("BUS");
  create_department("CHE");
  create_department("COM");
  create_department("COU");
  create_department("DST");
  create_department("ECO");
  create_department("EDU");
  create_department("ELI");
  create_department("ENG");
  create_department("FCS");
  create_department("FRE");
  create_department("FYE");
  create_department("GOV");
  create_department("GSR");
  create_department("HIS");
  create_department("HON");
  create_department("HSL");
  create_department("IDP");
  create_department("INT");
  create_department("IST");
  create_department("ITF");
  create_department("ITS");
  create_department("LIN");
  create_department("MAT");
  create_department("MPA");
  create_department("PEN");
  create_department("PER");
  create_department("PHI");
  create_department("PHY");
  create_department("PST");
  create_department("PSY");
  create_department("REL");
  create_department("SOC");
  create_department("SPA");
  create_department("SWK");
  create_department("THE");
  create_department("WLC");
}

void add_all_courses() {
  create_course(210369, "Roselia Whisnant", "ACC", 201, 3, 14, 15, T | R,
                time(18, 0), time(19, 20), "Financial Accounting");
  create_course(210369, "Christinia Lorenzana", "ACC", 201, 3, 14, 15, T | R,
                time(18, 0), time(19, 20), "Financial Accounting");
  create_course(210369, "Jesica Cryer", "ACC", 201, 3, 16, 15, M | W | F,
                time(11, 0), time(11, 50), "Financial Accounting");
  create_course(52056, "Jesica Cryer", "ACC", 202, 3, 12, 15, M | W | F,
                time(9, 0), time(9, 50), "Managerial Accounting");
  create_course(52056, "Faustino Mailloux", "ACC", 202, 3, 16, 15, T | R,
                time(8, 0), time(9, 20), "Managerial Accounting");
  create_course(361526, "Jesica Cryer", "ACC", 301, 3, 15, 15, M | W | F,
                time(9, 0), time(9, 50), "Intermediate Accounting I");
  create_course(160779, "Jesica Cryer", "ACC", 302, 3, 14, 15, M | W,
                time(11, 0), time(12, 20), "Intermediate Accounting II");
  create_course(83919, "Jesica Cryer", "ACC", 303, 3, 3, 15, M | W, time(15, 0),
                time(16, 20), "Intermediate Accounting III");
  create_course(346288, "Christinia Lorenzana", "ACC", 321, 3, 13, 15, M | W,
                time(12, 30), time(13, 50), "Managerial Cost Accounting");
  create_course(380760, "Christinia Lorenzana", "ACC", 331, 3, 14, 15, M | W,
                time(12, 30), time(13, 50), "Income Tax Accounting");
  create_course(843194, "Jesica Cryer", "ACC", 441, 3, 7, 15, M | W,
                time(15, 0), time(16, 20), "Auditing");
  create_course(675398, "Faustino Mailloux", "ACC", 442, 3, 7, 15, T | R,
                time(8, 0), time(9, 20), "Accounting Info Systems");
  create_course(723054, "Christinia Lorenzana", "ACC", 461, 3, 10, 15, T | R,
                time(14, 0), time(15, 20), "International Accounting");
  create_course(200060, "Christinia Lorenzana", "ACC", 499, 1, 1, 1, H,
                time(0, 0), time(0, 0), "Independent Study");
  create_course(158849, "Laveta Pea", "ART", 131, 3, 12, 12, T | R, time(9, 30),
                time(10, 50), "Beginning Photography");
  create_course(158849, "Laveta Pea", "ART", 131, 3, 10, 12, T | R, time(11, 0),
                time(12, 20), "Beginning Photography");
  create_course(834730, "Melia Ruge", "ART", 135, 3, 11, 12, M, time(15, 0),
                time(17, 50), "Digital Media I");
  create_course(834730, "Melia Ruge", "ART", 135, 3, 12, 12, W, time(16, 0),
                time(18, 50), "Digital Media I");
  create_course(316827, "Gregory Garretson", "ART", 140, 3, 14, 15, T | R,
                time(11, 0), time(12, 20), "Art History");
  create_course(316827, "Gregory Garretson", "ART", 140, 3, 15, 15, T | R,
                time(11, 0), time(12, 20), "Art History");
  create_course(316827, "Gregory Garretson", "ART", 140, 3, 14, 15, T | R,
                time(9, 30), time(10, 50), "Art History");
  create_course(263984, "Melita Crafford", "ART", 150, 3, 11, 12, T | R,
                time(14, 0), time(15, 20), "Fundamentals of Design in Art");
  create_course(263984, "Herbert Myhre", "ART", 150, 3, 12, 12, F, time(9, 30),
                time(12, 20), "Fundamentals of Design in Art");
  create_course(863991, "Yon Seidel", "ART", 160, 3, 12, 12, M | W, time(9, 30),
                time(10, 50), "Design I");
  create_course(863991, "Yon Seidel", "ART", 160, 3, 12, 12, M | W, time(11, 0),
                time(12, 20), "Design I");
  create_course(206728, "Melita Crafford", "ART", 170, 3, 12, 12, T,
                time(15, 30), time(18, 20), "Intro to Drawing");
  create_course(206728, "Melita Crafford", "ART", 170, 3, 13, 15, F, time(9, 0),
                time(11, 50), "Intro to Drawing");
  create_course(206728, "Melita Crafford", "ART", 170, 3, 12, 12, T | R,
                time(11, 0), time(12, 20), "Intro to Drawing");
  create_course(206728, "Teressa Marshburn", "ART", 170, 3, 13, 15, M | W,
                time(15, 0), time(16, 20), "Intro to Drawing");
  create_course(202972, "Yon Seidel", "ART", 195, 1, 6, 12, M | W, time(8, 30),
                time(9, 50), "Special Topics");
  create_course(202972, "Herbert Myhre", "ART", 195, 1, 8, 12, R, time(17, 0),
                time(19, 50), "Special Topics");
  create_course(834389, "Gregory Garretson", "ART", 219, 3, 12, 12, T | R,
                time(9, 30), time(10, 50), "Modern Art");
  create_course(40290, "Desirae Domer", "ART", 224, 3, 14, 12, M | W,
                time(13, 0), time(14, 20), "Digital Media II");
  create_course(952421, "Desirae Domer", "ART", 236, 3, 10, 12, T, time(15, 30),
                time(18, 20), "Digital Video Production");
  create_course(589630, "Laveta Pea", "ART", 255, 3, 13, 12, T | R, time(9, 30),
                time(10, 50), "Digital Photography");
  create_course(589630, "Melia Ruge", "ART", 255, 3, 13, 12, M, time(17, 0),
                time(19, 50), "Digital Photography");
  create_course(176931, "Melita Crafford", "ART", 260, 3, 6, 12, T | R,
                time(9, 30), time(10, 50), "Design II");
  create_course(240517, "Melia Ruge", "ART", 270, 3, 10, 12, M | W, time(11, 0),
                time(12, 20), "Typography");
  create_course(957073, "Katharyn Armbruster", "ART", 290, 3, 8, 12, T | R,
                time(15, 30), time(16, 50), "Web Design I");
  create_course(824185, "Desirae Domer", "ART", 342, 3, 12, 15, M, time(15, 30),
                time(18, 20), "Advanced Digital Media");
  create_course(759196, "Melita Crafford", "ART", 350, 3, 8, 12, T | R,
                time(14, 0), time(15, 20), "Studies in Drawing");
  create_course(669677, "Yon Seidel", "ART", 361, 3, 13, 12, M | W,
                time(15, 30), time(16, 50), "Advanced Design");
  create_course(467125, "Laveta Pea", "ART", 363, 3, 11, 12, T | R, time(11, 0),
                time(12, 20), "Photojournalism");
  create_course(263794, "Desirae Domer", "ART", 390, 3, 13, 12, T | R,
                time(14, 0), time(15, 20), "Web Design II");
  create_course(227814, "Yon Seidel", "ART", 392, 3, 6, 12, F, time(12, 30),
                time(15, 20), "Studies Graphic Design");
  create_course(262846, "Yon Seidel", "ART", 440, 3, 6, 12, M | W, time(14, 0),
                time(15, 20), "Production Design");
  create_course(558906, "Laveta Pea", "ART", 460, 3, 7, 15, T | R, time(15, 30),
                time(16, 50), "Studies in Photography:");
  create_course(558906, "Laveta Pea", "ART", 460, 3, 4, 12, T | R, time(14, 0),
                time(15, 20), "Studies in Photography:");
  create_course(619304, "Herbert Myhre", "ART", 470, 3, 8, 12, F, time(13, 0),
                time(15, 50), "Studies in Painting");
  create_course(571649, "Melia Ruge", "ART", 490, 3, 18, 12, M | W, time(11, 0),
                time(12, 20), "Senior Studio");
  create_course(900646, "Melia Ruge", "ART", 491, 3, 19, 22, W, time(15, 30),
                time(18, 20), "Portfolio/Senior Exhibit");
  create_course(738173, "Laveta Pea", "ART", 492, 3, 1, 1, H, time(0, 0),
                time(0, 0), "Internship");
  create_course(738173, "Desirae Domer", "ART", 492, 3, 1, 1, H, time(0, 0),
                time(0, 0), "Internship");
  create_course(738173, "Desirae Domer", "ART", 492, 3, 1, 1, H, time(0, 0),
                time(0, 0), "Internship");
  create_course(738173, "Desirae Domer", "ART", 492, 3, 1, 1, H, time(0, 0),
                time(0, 0), "Internship");
  create_course(738173, "Desirae Domer", "ART", 492, 3, 1, 1, H, time(0, 0),
                time(0, 0), "Internship");
  create_course(738173, "Desirae Domer", "ART", 492, 3, 1, 1, H, time(0, 0),
                time(0, 0), "Internship");
  create_course(738173, "Herbert Myhre", "ART", 492, 3, 2, 1, H, time(0, 0),
                time(0, 0), "Internship");
  create_course(501417, "Desirae Domer", "ART", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(501417, "Desirae Domer", "ART", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(501417, "Desirae Domer", "ART", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(501417, "Desirae Domer", "ART", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(501417, "Desirae Domer", "ART", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(501417, "Melia Ruge", "ART", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(501417, "Herbert Myhre", "ART", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(532648, "Verona Tenney", "ASL", 111, 4, 8, 12, M | W | F,
                time(11, 0), time(12, 50), "American Sign Language I & II");
  create_course(532648, "Verona Tenney", "ASL", 111, 4, 14, 14, M | W | F,
                time(11, 0), time(12, 50), "American Sign Language I & II");
  create_course(532648, "Verona Tenney", "ASL", 111, 4, 14, 14, M | W | F,
                time(13, 0), time(14, 50), "American Sign Language I & II");
  create_course(532648, "Hassan Stoke", "ASL", 111, 4, 11, 12, M | W | F,
                time(9, 0), time(10, 50), "American Sign Language I & II");
  create_course(532648, "Coretta Himes", "ASL", 111, 4, 15, 14, M | W | F,
                time(9, 0), time(10, 50), "American Sign Language I & II");
  create_course(532648, "Coretta Himes", "ASL", 111, 4, 11, 14, M | W | F,
                time(15, 0), time(16, 50), "American Sign Language I & II");
  create_course(648886, "Jordon Fiorillo", "ASL", 211, 4, 14, 12, M | W | F,
                time(9, 0), time(10, 50), "American Sign Language 3 & 4");
  create_course(648886, "Jordon Fiorillo", "ASL", 211, 4, 12, 14, M | W | F,
                time(13, 0), time(14, 50), "American Sign Language 3 & 4");
  create_course(648886, "Jordon Fiorillo", "ASL", 211, 4, 7, 14, M | W | F,
                time(15, 0), time(16, 50), "American Sign Language 3 & 4");
  create_course(648886, "Coretta Himes", "ASL", 211, 4, 11, 12, M | W | F,
                time(13, 0), time(14, 50), "American Sign Language 3 & 4");
  create_course(648886, "Burt Aquino", "ASL", 211, 4, 12, 12, M | W | F,
                time(11, 0), time(12, 50), "American Sign Language 3 & 4");
  create_course(648886, "Burt Aquino", "ASL", 211, 4, 9, 14, M | W | F,
                time(9, 0), time(10, 50), "American Sign Language 3 & 4");
  create_course(648886, "Burt Aquino", "ASL", 211, 4, 5, 14, M | W | F,
                time(11, 0), time(12, 50), "American Sign Language 3 & 4");
  create_course(142719, "Alfreda Kotter", "ASL", 212, 3, 15, 15, M, time(9, 0),
                time(11, 50), "Conversational ASL I");
  create_course(142719, "Herbert Myhre", "ASL", 212, 3, 15, 15, M, time(9, 0),
                time(11, 50), "Conversational ASL I");
  create_course(986032, "Herbert Myhre", "ASL", 213, 3, 4, 12, M, time(9, 0),
                time(11, 50), "Conversational ASL II");
  create_course(258935, "Ranee Boeck", "ASL", 270, 3, 15, 15, T | R,
                time(11, 0), time(12, 20), "ASL & English:Cmprtve Analysis");
  create_course(258935, "Ranee Boeck", "ASL", 270, 3, 15, 15, H, time(0, 0),
                time(0, 0), "ASL & English:Cmprtve Analysis");
  create_course(258935, "Ranee Boeck", "ASL", 270, 3, 3, 15, H, time(0, 0),
                time(0, 0), "ASL & English:Cmprtve Analysis");
  create_course(375865, "Laveta Pea", "ASL", 302, 3, 7, 15, F, time(9, 0),
                time(11, 50), "Visual Language Resource Dev");
  create_course(558975, "Linsey Khalil", "ASL", 304, 3, 13, 15, T, time(9, 30),
                time(10, 50), "ASL Data Analysis and App I");
  create_course(558975, "Linsey Khalil", "ASL", 304, 3, 13, 15, R, time(9, 30),
                time(10, 50), "ASL Data Analysis and App I");
  create_course(251670, "Linsey Khalil", "ASL", 305, 3, 5, 15, M | W,
                time(11, 0), time(12, 20), "ASL Data Analysis and App II");
  create_course(535961, "Aurea Peavey", "ASL", 314, 3, 7, 15, M | W,
                time(8, 30), time(9, 50), "ASL Literature: Narratives");
  create_course(920676, "Aurea Peavey", "ASL", 315, 3, 7, 15, M | W,
                time(8, 30), time(9, 50), "ASL Literature: Poetry");
  create_course(956598, "Linsey Khalil", "ASL", 380, 3, 10, 15, T | R,
                time(9, 30), time(10, 50), "ASL Elocution: Applications");
  create_course(39943, "Ranee Boeck", "ASL", 405, 3, 6, 15, M, time(17, 0),
                time(19, 50), "Discourse Features in ASL");
  create_course(219436, "Deirdre Aylesworth", "ASL", 410, 3, 5, 15, T | R,
                time(15, 30), time(16, 50), "Fund/Pract in ASL Analy & Crit");
  create_course(781415, "Linsey Khalil", "ASL", 421, 3, 4, 15, M | W,
                time(12, 30), time(13, 50), "Intro to ASL Instruction");
  create_course(688527, "Linsey Khalil", "ASL", 490, 1, 1, 15, H, time(0, 0),
                time(0, 0), "ASL Internship");
  create_course(688527, "Linsey Khalil", "ASL", 490, 1, 1, 1, H, time(0, 0),
                time(0, 0), "ASL Internship");
  create_course(545227, "Ranee Boeck", "ASL", 494, 3, 3, 15, M, time(15, 0),
                time(17, 50), "Senior Seminar");
  create_course(577436, "Linsey Khalil", "ASL", 495, 1, 4, 15, M | W,
                time(11, 0), time(12, 20), "Special Topics");
  create_course(971480, "Laveta Pea", "ASL", 709, 3, 6, 15, T, time(9, 0),
                time(11, 50), "Sign Lang Media Production");
  create_course(524175, "Lois Hansell", "ASL", 745, 3, 15, 16, H, time(0, 0),
                time(0, 0), "Sign Lang Teach, Cult and Hist");
  create_course(524175, "Lois Hansell", "ASL", 745, 3, 14, 14, H, time(0, 0),
                time(0, 0), "Sign Lang Teach, Cult and Hist");
  create_course(705018, "Burt Aquino", "ASL", 752, 3, 11, 10, H, time(0, 0),
                time(0, 0), "Sign Language Practicum");
  create_course(705018, "Steve Arzola", "ASL", 752, 3, 11, 10, H, time(0, 0),
                time(0, 0), "Sign Language Practicum");
  create_course(821835, "Hollie Hamada", "ASL", 760, 3, 8, 15, H, time(0, 0),
                time(0, 0), "Connect Sign Lang Rsrch Prac");
  create_course(821835, "Sunny Tien", "ASL", 760, 3, 13, 12, H, time(0, 0),
                time(0, 0), "Connect Sign Lang Rsrch Prac");
  create_course(16665, "Burt Aquino", "ASL", 762, 3, 8, 15, H, time(0, 0),
                time(0, 0), "Seminar in Sign Language Edu");
  create_course(16665, "Burt Aquino", "ASL", 762, 3, 11, 12, H, time(0, 0),
                time(0, 0), "Seminar in Sign Language Edu");
  create_course(16665, "Burt Aquino", "ASL", 762, 3, 13, 12, H, time(0, 0),
                time(0, 0), "Seminar in Sign Language Edu");
  create_course(256610, "Ashlyn Deville", "ASL", 770, 3, 16, 15, H, time(0, 0),
                time(0, 0), "Sign Lang Planning & Advocacy");
  create_course(256610, "Ashlyn Deville", "ASL", 770, 3, 16, 15, H, time(0, 0),
                time(0, 0), "Sign Lang Planning & Advocacy");
  create_course(139098, "Deirdre Aylesworth", "ASL", 790, 3, 5, 6, H,
                time(0, 0), time(0, 0), "Sign Language Internship");
  create_course(139098, "Hollie Hamada", "ASL", 790, 3, 2, 6, H, time(0, 0),
                time(0, 0), "Sign Language Internship");
  create_course(139098, "Laura Scannell", "ASL", 790, 3, 6, 6, H, time(0, 0),
                time(0, 0), "Sign Language Internship");
  create_course(139098, "Laura Scannell", "ASL", 790, 3, 6, 6, H, time(0, 0),
                time(0, 0), "Sign Language Internship");
  create_course(139098, "Laura Scannell", "ASL", 790, 3, 5, 6, H, time(0, 0),
                time(0, 0), "Sign Language Internship");
  create_course(793506, "Roselia Whisnant", "BIO", 105, 4, 23, 25, T | R,
                time(9, 30), time(10, 50), "Introduction to Human Biology");
  create_course(793506, "Roselia Whisnant", "BIO", 105, 4, 21, 25, M | W,
                time(8, 30), time(9, 50), "Introduction to Human Biology");
  create_course(793506, "Roselia Whisnant", "BIO", 105, 4, 14, 20, M,
                time(15, 0), time(16, 50), "Introduction to Human Biology");
  create_course(793506, "Roselia Whisnant", "BIO", 105, 4, 16, 20, R,
                time(15, 30), time(17, 20), "Introduction to Human Biology");
  create_course(793506, "Laura Scannell", "BIO", 105, 4, 18, 20, T | R,
                time(15, 30), time(16, 50), "Introduction to Human Biology");
  create_course(793506, "Jesica Cryer", "BIO", 105, 4, 16, 20, T | R,
                time(9, 30), time(10, 50), "Introduction to Human Biology");
  create_course(793506, "Jesica Cryer", "BIO", 105, 4, 8, 12, R, time(15, 30),
                time(17, 20), "Introduction to Human Biology");
  create_course(793506, "Jesica Cryer", "BIO", 105, 4, 20, 20, T | R,
                time(14, 0), time(15, 20), "Introduction to Human Biology");
  create_course(793506, "Corey Teets", "BIO", 105, 4, 19, 20, T | R,
                time(11, 0), time(12, 20), "Introduction to Human Biology");
  create_course(793506, "Corey Teets", "BIO", 105, 4, 11, 12, W, time(15, 0),
                time(16, 50), "Introduction to Human Biology");
  create_course(793506, "Audra Spradley", "BIO", 105, 4, 12, 12, F, time(10, 0),
                time(11, 50), "Introduction to Human Biology");
  create_course(793506, "Audra Spradley", "BIO", 105, 4, 11, 12, F, time(13, 0),
                time(14, 50), "Introduction to Human Biology");
  create_course(793506, "Audra Spradley", "BIO", 105, 4, 10, 12, W, time(8, 0),
                time(9, 50), "Introduction to Human Biology");
  create_course(793506, "Audra Spradley", "BIO", 105, 4, 18, 20, F, time(9, 0),
                time(10, 50), "Introduction to Human Biology");
  create_course(793506, "Audra Spradley", "BIO", 105, 4, 16, 16, F, time(13, 0),
                time(14, 50), "Introduction to Human Biology");
  create_course(862003, "Milton Brekke", "BIO", 106, 3, 6, 20, T | R,
                time(11, 0), time(12, 20), "Medical Terminology");
  create_course(203916, "Milton Brekke", "BIO", 107, 4, 14, 20, F, time(13, 0),
                time(14, 50), "Prin of Bio for Sci Majors I");
  create_course(203916, "Corey Teets", "BIO", 107, 4, 14, 20, T | R,
                time(9, 30), time(10, 50), "Prin of Bio for Sci Majors I");
  create_course(203916, "Corey Teets", "BIO", 107, 4, 14, 20, F, time(13, 0),
                time(14, 50), "Prin of Bio for Sci Majors I");
  create_course(711177, "Milton Brekke", "BIO", 108, 4, 18, 20, T, time(15, 30),
                time(17, 20), "Prin of Bio for Sci Majors II");
  create_course(711177, "Corey Teets", "BIO", 108, 4, 18, 20, T | R,
                time(9, 30), time(10, 50), "Prin of Bio for Sci Majors II");
  create_course(259054, "Estefana Thrift", "BIO", 201, 4, 17, 20, M | W,
                time(8, 0), time(9, 50), "Rsrch Mthds in the Sciences");
  create_course(816269, "Corey Teets", "BIO", 202, 3, 5, 20, H, time(0, 0),
                time(0, 0), "Internship in Biology");
  create_course(693338, "Roselia Whisnant", "BIO", 203, 4, 18, 15, R,
                time(14, 0), time(15, 50), "A&P for Human Service");
  create_course(693338, "Roselia Whisnant", "BIO", 203, 4, 24, 20, T,
                time(14, 0), time(15, 50), "A&P for Human Service");
  create_course(693338, "Kami Hansen", "BIO", 203, 4, 24, 20, T | R, time(8, 0),
                time(9, 20), "A&P for Human Service");
  create_course(693338, "Jannie Pastor", "BIO", 203, 4, 18, 15, T | R,
                time(8, 0), time(9, 20), "A&P for Human Service");
  create_course(11160, "Tracey Sherrard", "BIO", 211, 4, 9, 15, T | R,
                time(14, 0), time(15, 20), "Genetics");
  create_course(11160, "Tracey Sherrard", "BIO", 211, 4, 9, 15, M, time(13, 0),
                time(14, 50), "Genetics");
  create_course(325511, "Tracey Sherrard", "BIO", 221, 5, 11, 15, T | R,
                time(14, 0), time(15, 20), "Microbiology");
  create_course(325511, "Tracey Sherrard", "BIO", 221, 5, 11, 15, T | R,
                time(15, 30), time(17, 20), "Microbiology");
  create_course(718725, "Roselia Whisnant", "BIO", 232, 4, 12, 15, T | R,
                time(11, 0), time(12, 20), "Vertebrate Zoology");
  create_course(718725, "Roselia Whisnant", "BIO", 232, 4, 12, 15, M,
                time(15, 0), time(16, 50), "Vertebrate Zoology");
  create_course(508985, "Jesica Cryer", "BIO", 243, 4, 12, 16, T | R,
                time(9, 30), time(10, 50), "Botany");
  create_course(508985, "Jesica Cryer", "BIO", 243, 4, 12, 16, T | R,
                time(11, 0), time(11, 50), "Botany");
  create_course(527743, "Jannie Pastor", "BIO", 251, 3, 7, 20, M | W,
                time(8, 30), time(9, 50), "Nutrition");
  create_course(334746, "Corey Teets", "BIO", 296, 1, 1, 5, H, time(0, 0),
                time(0, 0), "Research Experience I");
  create_course(334746, "Tracey Sherrard", "BIO", 296, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Research Experience I");
  create_course(921799, "Corey Teets", "BIO", 396, 1, 1, 2, H, time(0, 0),
                time(0, 0), "Research Experience II");
  create_course(769655, "Corey Teets", "BIO", 403, 3, 9, 15, M | W, time(17, 0),
                time(18, 20), "Senior Capstone I");
  create_course(679489, "Estefana Thrift", "BIO", 411, 3, 4, 10, M | W,
                time(8, 30), time(9, 50), "Human Genetics");
  create_course(528534, "Corey Teets", "BIO", 496, 1, 1, 5, H, time(0, 0),
                time(0, 0), "Research Experience III");
  create_course(679489, "Estefana Thrift", "BIO", 711, 3, 11, 15, M | W,
                time(8, 30), time(9, 50), "Human Genetics");
  create_course(80170, "Linsey Khalil", "BUS", 101, 3, 19, 20, T | R,
                time(14, 0), time(15, 20), "Intro to Business");
  create_course(80170, "Kia Kurland", "BUS", 101, 3, 16, 20, M | W | F,
                time(9, 0), time(9, 50), "Intro to Business");
  create_course(80170, "Kia Kurland", "BUS", 101, 3, 17, 20, M | F, time(11, 0),
                time(12, 20), "Intro to Business");
  create_course(80170, "Gregory Garretson", "BUS", 101, 3, 20, 20, T | R,
                time(9, 30), time(10, 50), "Intro to Business");
  create_course(80170, "Gregory Garretson", "BUS", 101, 3, 20, 20, T | R,
                time(9, 30), time(10, 50), "Intro to Business");
  create_course(432718, "Dylan Schneiderman", "BUS", 151, 3, 12, 20, M | W,
                time(16, 30), time(17, 50), "Personal Finance");
  create_course(469121, "Edwardo Pokorny", "BUS", 181, 3, 15, 15, T | R,
                time(18, 30), time(19, 50), "Business Computer Applications");
  create_course(469121, "Deloris Conroy", "BUS", 181, 3, 13, 15, M | W,
                time(15, 0), time(16, 20), "Business Computer Applications");
  create_course(469121, "Deloris Conroy", "BUS", 181, 3, 8, 15, M | W,
                time(11, 0), time(12, 20), "Business Computer Applications");
  create_course(469121, "Nisha Pegues", "BUS", 181, 3, 16, 20, T | R,
                time(11, 0), time(12, 20), "Business Computer Applications");
  create_course(159023, "Mireille Jain", "BUS", 211, 3, 16, 15, M | W | F,
                time(14, 0), time(14, 50), "Management & Organization Beha");
  create_course(159023, "Kia Kurland", "BUS", 211, 3, 19, 20, T | R,
                time(11, 0), time(12, 20), "Management & Organization Beha");
  create_course(665784, "Kia Kurland", "BUS", 221, 3, 20, 20, M | W | F,
                time(11, 0), time(11, 50), "Marketing");
  create_course(665784, "Gregory Garretson", "BUS", 221, 3, 20, 20, T | R,
                time(11, 0), time(12, 20), "Marketing");
  create_course(925363, "Edwardo Pokorny", "BUS", 281, 3, 10, 15, T | R,
                time(18, 30), time(19, 50), "Management Information Systems");
  create_course(925363, "Herbert Myhre", "BUS", 281, 3, 16, 15, M | W,
                time(12, 30), time(13, 50), "Management Information Systems");
  create_course(925363, "Herbert Myhre", "BUS", 281, 3, 11, 15, M | W,
                time(11, 0), time(12, 20), "Management Information Systems");
  create_course(555172, "Adena Garrard", "BUS", 295, 1, 6, 20, T | R,
                time(17, 30), time(19, 20), "Special Topics");
  create_course(555172, "Linsey Khalil", "BUS", 295, 1, 1, 15, T | R,
                time(10, 0), time(11, 50), "Special Topics");
  create_course(555172, "Aurea Peavey", "BUS", 295, 1, 1, 15, T | R,
                time(10, 0), time(11, 50), "Special Topics");
  create_course(159171, "Gregory Garretson", "BUS", 321, 3, 12, 20, T | R,
                time(14, 0), time(15, 20), "Advertising & Branding");
  create_course(829547, "Linsey Khalil", "BUS", 331, 3, 18, 20, T | R,
                time(15, 30), time(16, 50), "Business Statistics");
  create_course(829547, "Linsey Khalil", "BUS", 331, 3, 14, 15, M | W,
                time(15, 0), time(16, 20), "Business Statistics");
  create_course(247820, "Augustus Zito", "BUS", 341, 3, 17, 15, T | R,
                time(8, 0), time(9, 20), "Business Ethics");
  create_course(343188, "Adena Garrard", "BUS", 351, 3, 19, 20, T | R,
                time(11, 0), time(12, 20), "Business Finance");
  create_course(588053, "Adena Garrard", "BUS", 353, 3, 6, 20, T | R,
                time(11, 0), time(12, 20), "Investments");
  create_course(588053, "Adena Garrard", "BUS", 353, 3, 11, 20, T | R,
                time(14, 0), time(15, 20), "Investments");
  create_course(276969, "Kami Hansen", "BUS", 371, 3, 10, 20, T | R,
                time(17, 0), time(18, 20), "Business Law I");
  create_course(276969, "Kami Hansen", "BUS", 371, 3, 25, 20, T | R,
                time(17, 0), time(18, 20), "Business Law I");
  create_course(765933, "Gregory Garretson", "BUS", 395, 1, 7, 20, T | R,
                time(15, 30), time(16, 50), "Special Topics");
  create_course(765933, "Deloris Conroy", "BUS", 395, 1, 8, 15, M | W,
                time(8, 0), time(9, 20), "Special Topics");
  create_course(809751, "Laura Scannell", "BUS", 414, 3, 9, 20, M | W,
                time(17, 0), time(18, 20), "Human Resources Mgmnt");
  create_course(242574, "Linsey Khalil", "BUS", 421, 3, 11, 20, M | W,
                time(11, 0), time(12, 20), "Marketing Research");
  create_course(681197, "Linsey Khalil", "BUS", 431, 3, 24, 20, M | W,
                time(11, 0), time(12, 20), "Production & Operations Manage");
  create_course(296855, "Augustus Zito", "BUS", 461, 3, 27, 20, T | R,
                time(9, 30), time(10, 50), "Global Business");
  create_course(92156, "Mireille Jain", "BUS", 491, 3, 16, 20, M | W | F,
                time(8, 0), time(8, 50), "Senior Seminar");
  create_course(92156, "Kia Kurland", "BUS", 491, 3, 16, 20, M | W | F,
                time(8, 0), time(8, 50), "Senior Seminar");
  create_course(92156, "Kia Kurland", "BUS", 491, 3, 9, 20, M | F, time(8, 30),
                time(9, 50), "Senior Seminar");
  create_course(342937, "Edwardo Pokorny", "BUS", 493, 3, 0, 15, M | W,
                time(16, 0), time(17, 50), "Entrepreneurship");
  create_course(342937, "Augustus Zito", "BUS", 493, 3, 0, 15, M | W,
                time(16, 0), time(17, 50), "Entrepreneurship");
  create_course(143100, "Corey Teets", "BUS", 495, 1, 1, 15, T | R, time(8, 0),
                time(9, 20), "Special Topics");
  create_course(143100, "Adena Garrard", "BUS", 495, 1, 5, 20, T | R,
                time(15, 30), time(16, 50), "Special Topics");
  create_course(143100, "Gregory Garretson", "BUS", 495, 1, 8, 20, W,
                time(17, 0), time(19, 50), "Special Topics");
  create_course(143100, "Augustus Zito", "BUS", 495, 1, 1, 15, T | R,
                time(8, 0), time(9, 20), "Special Topics");
  create_course(750551, "Christinia Lorenzana", "BUS", 499, 1, 1, 1, H,
                time(0, 0), time(0, 0), "Independent Study");
  create_course(750551, "Gregory Garretson", "BUS", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(112331, "Mica Dildine", "CHE", 107, 3, 17, 30, M | W | F,
                time(10, 0), time(10, 50), "General Chemistry I");
  create_course(735590, "Estefana Thrift", "CHE", 108, 3, 16, 30, M | W | F,
                time(10, 0), time(10, 50), "General Chemistry II");
  create_course(708999, "Leatrice Walck", "CHE", 109, 1, 12, 16, W, time(13, 0),
                time(15, 50), "General Chem Lab I");
  create_course(708999, "Tracey Sherrard", "CHE", 109, 1, 12, 16, W,
                time(13, 0), time(15, 50), "General Chem Lab I");
  create_course(708999, "Tracey Sherrard", "CHE", 109, 1, 3, 16, R, time(9, 0),
                time(11, 50), "General Chem Lab I");
  create_course(708999, "Dick Strahl", "CHE", 109, 1, 3, 16, R, time(9, 0),
                time(11, 50), "General Chem Lab I");
  create_course(723922, "Leatrice Walck", "CHE", 110, 1, 7, 16, R, time(9, 0),
                time(11, 50), "General Chem Lab II");
  create_course(723922, "Aurea Peavey", "CHE", 110, 1, 9, 16, F, time(13, 0),
                time(15, 50), "General Chem Lab II");
  create_course(750569, "Leatrice Walck", "CHE", 201, 3, 2, 2, H, time(0, 0),
                time(0, 0), "Internship in Chemistry I");
  create_course(750569, "Dick Strahl", "CHE", 201, 3, 1, 1, H, time(0, 0),
                time(0, 0), "Internship in Chemistry I");
  create_course(815128, "Dick Strahl", "CHE", 211, 3, 8, 16, M | W | F,
                time(10, 0), time(10, 50), "Organic Chemistry Lecture I");
  create_course(727703, "Dick Strahl", "CHE", 212, 3, 9, 16, M | W | F,
                time(10, 0), time(10, 50), "Organic Chemistry Lecture II");
  create_course(41152, "Dick Strahl", "CHE", 213, 1, 8, 16, W, time(13, 0),
                time(15, 50), "Organic Chemistry Laboratory I");
  create_course(938387, "Dick Strahl", "CHE", 214, 1, 9, 30, W, time(13, 0),
                time(15, 50), "Organic Chem Laboratory II");
  create_course(210990, "Dick Strahl", "CHE", 307, 3, 5, 16, M, time(13, 0),
                time(14, 50), "Analytical Chemistry I");
  create_course(210990, "Dick Strahl", "CHE", 307, 3, 5, 16, T, time(11, 0),
                time(11, 50), "Analytical Chemistry I");
  create_course(491568, "Dick Strahl", "CHE", 308, 3, 3, 7, M | W | F,
                time(9, 0), time(9, 50), "Analytical Chemistry II");
  create_course(255970, "Leatrice Walck", "CHE", 309, 2, 5, 16, T | R,
                time(8, 0), time(10, 50), "Analytical Chemistry Lab I");
  create_course(110421, "Leatrice Walck", "CHE", 310, 2, 2, 7, T | R,
                time(8, 0), time(10, 50), "Analytical Chemistry Lab II");
  create_course(858026, "Leatrice Walck", "CHE", 325, 3, 11, 15, M | W,
                time(15, 0), time(16, 20), "Biochemistry: Proteins and DNA");
  create_course(858026, "Leatrice Walck", "CHE", 325, 3, 11, 15, W, time(16, 0),
                time(17, 20), "Biochemistry: Proteins and DNA");
  create_course(452035, "Leatrice Walck", "CHE", 327, 1, 4, 12, T, time(14, 0),
                time(16, 50), "Biochemistry Laboratory I");
  create_course(818063, "Leatrice Walck", "CHE", 420, 3, 8, 10, T | R,
                time(16, 0), time(17, 20), "Pharmacology");
  create_course(655217, "Coretta Himes", "COM", 150, 3, 16, 15, T | R,
                time(11, 0), time(12, 20), "Introduction to Communication");
  create_course(655217, "Laveta Pea", "COM", 150, 3, 18, 15, M | W, time(15, 0),
                time(16, 20), "Introduction to Communication");
  create_course(655217, "Laveta Pea", "COM", 150, 3, 16, 15, M | W, time(11, 0),
                time(12, 20), "Introduction to Communication");
  create_course(655217, "Lashaun Pasha", "COM", 150, 3, 15, 15, T | R,
                time(14, 0), time(15, 20), "Introduction to Communication");
  create_course(317140, "Tomas Jiang", "COM", 235, 1, 10, 15, T, time(16, 30),
                time(18, 20), "Intergroup Dialogue");
  create_course(317140, "Laveta Pea", "COM", 235, 1, 13, 15, W, time(16, 30),
                time(18, 20), "Intergroup Dialogue");
  create_course(317140, "Lashaun Pasha", "COM", 235, 1, 6, 15, W, time(16, 30),
                time(18, 20), "Intergroup Dialogue");
  create_course(823272, "Nellie Borja", "COM", 270, 3, 9, 15, M | W | F,
                time(9, 0), time(9, 50), "Parliamentary Procedure");
  create_course(658478, "Laura Scannell", "COM", 280, 3, 16, 16, T | R,
                time(11, 0), time(12, 20), "Group Communication");
  create_course(658478, "Laura Scannell", "COM", 280, 3, 16, 16, T | R,
                time(11, 0), time(12, 20), "Group Communication");
  create_course(433535, "Lashaun Pasha", "COM", 290, 3, 12, 15, T | R,
                time(9, 30), time(10, 50), "Public Presentations");
  create_course(433535, "Lashaun Pasha", "COM", 290, 3, 14, 15, T | R,
                time(14, 0), time(15, 20), "Public Presentations");
  create_course(433535, "Nellie Borja", "COM", 290, 3, 14, 15, T | R,
                time(17, 0), time(18, 20), "Public Presentations");
  create_course(433535, "Nellie Borja", "COM", 290, 3, 14, 15, T | R,
                time(17, 0), time(18, 20), "Public Presentations");
  create_course(454102, "Kami Hansen", "COM", 320, 1, 21, 15, W, time(14, 0),
                time(15, 20), "Internship Seminar");
  create_course(454102, "Katharyn Armbruster", "COM", 320, 1, 21, 15, W,
                time(14, 0), time(15, 20), "Internship Seminar");
  create_course(415991, "Katharyn Armbruster", "COM", 321, 1, 1, 1, H,
                time(0, 0), time(0, 0), "Internship");
  create_course(415991, "Katharyn Armbruster", "COM", 321, 1, 1, 1, H,
                time(0, 0), time(0, 0), "Internship");
  create_course(415991, "Katharyn Armbruster", "COM", 321, 1, 1, 1, H,
                time(0, 0), time(0, 0), "Internship");
  create_course(415991, "Katharyn Armbruster", "COM", 321, 1, 1, 1, H,
                time(0, 0), time(0, 0), "Internship");
  create_course(415991, "Katharyn Armbruster", "COM", 321, 1, 1, 1, H,
                time(0, 0), time(0, 0), "Internship");
  create_course(415991, "Katharyn Armbruster", "COM", 321, 1, 1, 1, H,
                time(0, 0), time(0, 0), "Internship");
  create_course(415991, "Katharyn Armbruster", "COM", 321, 1, 1, 1, H,
                time(0, 0), time(0, 0), "Internship");
  create_course(415991, "Katharyn Armbruster", "COM", 321, 1, 1, 1, H,
                time(0, 0), time(0, 0), "Internship");
  create_course(415991, "Katharyn Armbruster", "COM", 321, 1, 1, 1, H,
                time(0, 0), time(0, 0), "Internship");
  create_course(415991, "Katharyn Armbruster", "COM", 321, 1, 1, 1, H,
                time(0, 0), time(0, 0), "Internship");
  create_course(415991, "Katharyn Armbruster", "COM", 321, 1, 1, 20, H,
                time(0, 0), time(0, 0), "Internship");
  create_course(415991, "Katharyn Armbruster", "COM", 321, 1, 1, 1, H,
                time(0, 0), time(0, 0), "Internship");
  create_course(415991, "Katharyn Armbruster", "COM", 321, 1, 1, 1, H,
                time(0, 0), time(0, 0), "Internship");
  create_course(415991, "Katharyn Armbruster", "COM", 321, 1, 1, 1, H,
                time(0, 0), time(0, 0), "Internship");
  create_course(178562, "Laveta Pea", "COM", 330, 3, 15, 15, M | W,
                time(12, 30), time(13, 50), "Interpersonal & Group Conflict");
  create_course(169242, "Katharyn Armbruster", "COM", 340, 3, 16, 15, M | W | F,
                time(9, 0), time(9, 50), "Business & Prof Communication");
  create_course(169242, "Katharyn Armbruster", "COM", 340, 3, 17, 15, M | W | F,
                time(9, 0), time(9, 50), "Business & Prof Communication");
  create_course(257698, "Mireille Jain", "COM", 350, 3, 9, 15, M | W,
                time(13, 0), time(14, 50), "Intro to Mass Communication");
  create_course(257698, "Mireille Jain", "COM", 350, 3, 15, 15, T | R,
                time(9, 30), time(10, 50), "Intro to Mass Communication");
  create_course(159350, "Lashaun Pasha", "COM", 380, 3, 11, 15, H, time(0, 0),
                time(0, 0), "Theories of Human Com.");
  create_course(159350, "Laveta Pea", "COM", 380, 3, 15, 15, M | W, time(10, 0),
                time(11, 20), "Theories of Human Com.");
  create_course(714023, "Lovie Lubin", "COM", 390, 3, 17, 15, T | R,
                time(15, 30), time(16, 50), "Communication Accessibility");
  create_course(438456, "Coretta Himes", "COM", 410, 3, 12, 15, T | R,
                time(14, 0), time(15, 20), "Advanced Public Presentations");
  create_course(227514, "Coretta Himes", "COM", 420, 3, 18, 15, T | R,
                time(9, 30), time(10, 50), "Nonverbal Communication");
  create_course(709133, "Lashaun Pasha", "COM", 430, 3, 12, 15, T | R,
                time(14, 0), time(15, 20), "Gender and Communication");
  create_course(605399, "Lashaun Pasha", "COM", 440, 3, 16, 15, T | R,
                time(11, 0), time(12, 20), "Intercultural Communication");
  create_course(605399, "Laveta Pea", "COM", 440, 3, 17, 15, M | W,
                time(12, 30), time(13, 50), "Intercultural Communication");
  create_course(810064, "Coretta Himes", "COM", 470, 3, 18, 15, T | R,
                time(11, 0), time(12, 20), "Family Communication");
  create_course(810064, "Coretta Himes", "COM", 470, 3, 16, 15, T | R,
                time(9, 30), time(10, 50), "Family Communication");
  create_course(844399, "Edwardo Pokorny", "COM", 495, 1, 10, 15, H, time(0, 0),
                time(0, 0), "Special Topics");
  create_course(844399, "Edwardo Pokorny", "COM", 495, 1, 12, 15, H, time(0, 0),
                time(0, 0), "Special Topics");
  create_course(844399, "Nova Christon", "COM", 495, 1, 10, 15, W, time(17, 0),
                time(19, 50), "Special Topics");
  create_course(844399, "Laveta Pea", "COM", 495, 1, 17, 15, T | R,
                time(15, 30), time(16, 50), "Special Topics");
  create_course(844399, "Lashaun Pasha", "COM", 495, 1, 5, 18, T, time(17, 0),
                time(19, 50), "Special Topics");
  create_course(323155, "Coretta Himes", "COM", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(323155, "Coretta Himes", "COM", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(323155, "Mireille Jain", "COM", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(323155, "Laveta Pea", "COM", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(323155, "Laveta Pea", "COM", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(323155, "Katharyn Armbruster", "COM", 499, 1, 1, 1, H,
                time(0, 0), time(0, 0), "Independent Study");
  create_course(323155, "Katharyn Armbruster", "COM", 499, 1, 1, 1, H,
                time(0, 0), time(0, 0), "Independent Study");
  create_course(323155, "Katharyn Armbruster", "COM", 499, 1, 1, 1, H,
                time(0, 0), time(0, 0), "Independent Study");
  create_course(323155, "Katharyn Armbruster", "COM", 499, 1, 1, 1, H,
                time(0, 0), time(0, 0), "Independent Study");
  create_course(323155, "Katharyn Armbruster", "COM", 499, 1, 1, 1, H,
                time(0, 0), time(0, 0), "Independent Study");
  create_course(323155, "Katharyn Armbruster", "COM", 499, 1, 1, 1, H,
                time(0, 0), time(0, 0), "Independent Study");
  create_course(104913, "Nova Christon", "COM", 795, 1, 1, 1, W, time(17, 0),
                time(19, 50), "Special Topics");
  create_course(163764, "Linsey Khalil", "COU", 351, 1, 33, 15, W, time(19, 0),
                time(21, 0), "Techn of Std Dev:Resident I");
  create_course(163764, "Linsey Khalil", "COU", 351, 1, 33, 15, W, time(19, 0),
                time(21, 0), "Techn of Std Dev:Resident I");
  create_course(163764, "Linsey Khalil", "COU", 351, 1, 33, 15, W, time(19, 0),
                time(21, 0), "Techn of Std Dev:Resident I");
  create_course(163764, "Linsey Khalil", "COU", 351, 1, 33, 15, W, time(19, 0),
                time(21, 0), "Techn of Std Dev:Resident I");
  create_course(163764, "Linsey Khalil", "COU", 351, 1, 33, 15, W, time(19, 0),
                time(21, 0), "Techn of Std Dev:Resident I");
  create_course(163764, "Linsey Khalil", "COU", 351, 1, 33, 15, W, time(19, 0),
                time(21, 0), "Techn of Std Dev:Resident I");
  create_course(163764, "Linsey Khalil", "COU", 351, 1, 33, 15, W, time(19, 0),
                time(21, 50), "Techn of Std Dev:Resident I");
  create_course(873059, "Linsey Khalil", "COU", 352, 1, 31, 33, W, time(19, 0),
                time(21, 0), "Techn of Std Dev:Resident II");
  create_course(385641, "Nellie Borja", "COU", 395, 1, 4, 5, T | R, time(10, 0),
                time(11, 50), "Special Topics");
  create_course(385641, "Billie Darrigo", "COU", 395, 1, 6, 15, W, time(19, 0),
                time(21, 0), "Special Topics");
  create_course(385641, "Billie Darrigo", "COU", 395, 1, 6, 15, W, time(19, 0),
                time(21, 0), "Special Topics");
  create_course(385641, "Burt Aquino", "COU", 395, 1, 4, 5, T | R, time(10, 0),
                time(11, 50), "Special Topics");
  create_course(385641, "Tomas Jiang", "COU", 395, 1, 6, 15, W, time(19, 0),
                time(21, 0), "Special Topics");
  create_course(385641, "Tomas Jiang", "COU", 395, 1, 6, 15, W, time(19, 0),
                time(21, 0), "Special Topics");
  create_course(808786, "Bianca Rosenfeld", "COU", 708, 3, 6, 8, M | W,
                time(9, 0), time(10, 20), "Counseling for Wellness");
  create_course(530418, "Nellie Borja", "COU", 709, 3, 7, 12, F, time(9, 0),
                time(11, 50), "Counseling Deaf People");
  create_course(530418, "Ashely Tellis", "COU", 709, 3, 7, 12, F, time(9, 0),
                time(11, 50), "Counseling Deaf People");
  create_course(651804, "Ashely Tellis", "COU", 710, 3, 8, 8, M | W,
                time(10, 30), time(11, 50), "Orient to Prof MH");
  create_course(770887, "Nellie Borja", "COU", 715, 3, 9, 16, M, time(13, 30),
                time(16, 20), "Family Therapy");
  create_course(453575, "Loralee Penman", "COU", 717, 3, 10, 10, H, time(0, 0),
                time(0, 0), "Lifespan Development");
  create_course(453575, "Ashely Tellis", "COU", 717, 3, 7, 16, M | W,
                time(13, 30), time(14, 50), "Lifespan Development");
  create_course(671737, "Estefana Thrift", "COU", 720, 3, 8, 12, M | W,
                time(10, 30), time(11, 50), "Intro to Rsrch for Counselors");
  create_course(671737, "Estefana Thrift", "COU", 720, 3, 10, 12, H, time(0, 0),
                time(0, 0), "Intro to Rsrch for Counselors");
  create_course(969530, "Burt Aquino", "COU", 721, 4, 4, 8, T, time(9, 0),
                time(11, 50), "Foundation Help Skills I");
  create_course(969530, "Katharyn Armbruster", "COU", 721, 4, 4, 8, T,
                time(9, 0), time(11, 50), "Foundation Help Skills I");
  create_course(969530, "Ashely Tellis", "COU", 721, 4, 2, 15, T | R,
                time(10, 0), time(11, 20), "Foundation Help Skills I");
  create_course(969530, "Ashely Tellis", "COU", 721, 4, 3, 8, T, time(9, 0),
                time(11, 50), "Foundation Help Skills I");
  create_course(627176, "Melita Crafford", "COU", 730, 3, 7, 16, R, time(9, 30),
                time(12, 20), "Soc&Cltrl Div Fdtns & MC Cnslg");
  create_course(627176, "Laveta Pea", "COU", 730, 3, 7, 16, R, time(9, 30),
                time(12, 20), "Soc&Cltrl Div Fdtns & MC Cnslg");
  create_course(351545, "Bianca Rosenfeld", "COU", 732, 3, 6, 16, M | W,
                time(9, 0), time(10, 20), "Theories & App Couns");
  create_course(151474, "Nova Christon", "COU", 734, 3, 5, 10, H, time(0, 0),
                time(0, 0), "Lifestyles & Career Dev");
  create_course(593754, "Melita Crafford", "COU", 737, 3, 3, 8, F, time(9, 30),
                time(12, 20), "Org/Adm Sch Guidance Prgms");
  create_course(192863, "Melita Crafford", "COU", 740, 4, 1, 15, T | R,
                time(8, 0), time(16, 0), "Practicum in School Counseling");
  create_course(192863, "Melita Crafford", "COU", 740, 4, 1, 15, W, time(12, 0),
                time(13, 30), "Practicum in School Counseling");
  create_course(522176, "Melita Crafford", "COU", 741, 4, 2, 6, W, time(12, 0),
                time(13, 30), "Internship I in School Cnslg");
  create_course(522176, "Melita Crafford", "COU", 741, 4, 2, 6, T | R,
                time(8, 0), time(16, 0), "Internship I in School Cnslg");
  create_course(522176, "Nellie Borja", "COU", 741, 4, 1, 6, M, time(12, 0),
                time(13, 0), "Internship I in School Cnslg");
  create_course(522176, "Nellie Borja", "COU", 741, 4, 1, 6, T | R, time(8, 0),
                time(15, 50), "Internship I in School Cnslg");
  create_course(522176, "Nellie Borja", "COU", 741, 4, 1, 6, M, time(12, 0),
                time(13, 0), "Internship I in School Cnslg");
  create_course(522176, "Nellie Borja", "COU", 741, 4, 1, 6, T | R, time(8, 0),
                time(15, 50), "Internship I in School Cnslg");
  create_course(498391, "Burt Aquino", "COU", 742, 4, 4, 15, T | R, time(8, 0),
                time(17, 0), "Practicum in Mental Health Cou");
  create_course(898616, "Nellie Borja", "COU", 748, 3, 5, 10, M | W,
                time(10, 30), time(11, 50), "Princ of Assessment in Couns");
  create_course(389143, "Burt Aquino", "COU", 753, 4, 6, 6, M | W, time(9, 0),
                time(10, 20), "Group Psychotherapy");
  create_course(958763, "Katharyn Armbruster", "COU", 792, 4, 4, 6, M,
                time(12, 0), time(13, 30), "Internship I in Mental Health");
  create_course(958763, "Katharyn Armbruster", "COU", 792, 4, 4, 6, T | R,
                time(8, 0), time(16, 0), "Internship I in Mental Health");
  create_course(30292, "Nellie Borja", "COU", 795, 1, 4, 12, M | W, time(14, 0),
                time(15, 50), "Special Topics");
  create_course(30292, "Bianca Rosenfeld", "COU", 795, 1, 4, 12, M | W,
                time(14, 0), time(15, 50), "Special Topics");
  create_course(532688, "Veola Wootton", "DST", 101, 3, 15, 15, T | R,
                time(14, 0), time(15, 20), "Intro to Deaf Studies");
  create_course(532688, "Lovie Lubin", "DST", 101, 3, 16, 15, H, time(0, 0),
                time(0, 0), "Intro to Deaf Studies");
  create_course(532688, "Ashlyn Deville", "DST", 101, 3, 15, 15, H, time(0, 0),
                time(0, 0), "Intro to Deaf Studies");
  create_course(537440, "Lovie Lubin", "DST", 201, 3, 17, 15, M | W,
                time(11, 0), time(12, 20), "Deaf Culture");
  create_course(537440, "Lovie Lubin", "DST", 201, 3, 13, 15, M | W,
                time(11, 0), time(12, 20), "Deaf Culture");
  create_course(537440, "Teressa Marshburn", "DST", 201, 3, 14, 15, H,
                time(0, 0), time(0, 0), "Deaf Culture");
  create_course(537440, "Teressa Marshburn", "DST", 201, 3, 13, 15, H,
                time(0, 0), time(0, 0), "Deaf Culture");
  create_course(748857, "Tomas Jiang", "DST", 202, 3, 7, 15, M | W, time(11, 0),
                time(12, 20), "Intro to Cultural Studies");
  create_course(748857, "Ashlyn Deville", "DST", 202, 3, 14, 15, H, time(0, 0),
                time(0, 0), "Intro to Cultural Studies");
  create_course(748857, "Krista Blanks", "DST", 202, 3, 12, 15, H, time(0, 0),
                time(0, 0), "Intro to Cultural Studies");
  create_course(353012, "Audra Spradley", "DST", 305, 3, 13, 15, T | R,
                time(15, 30), time(16, 50), "Deaf Space Cncpt & Method");
  create_course(131018, "Lovie Lubin", "DST", 311, 3, 17, 15, T | R,
                time(15, 30), time(16, 50), "Dynamics of Oppression");
  create_course(131018, "Lovie Lubin", "DST", 311, 3, 13, 15, T | R,
                time(14, 0), time(15, 20), "Dynamics of Oppression");
  create_course(131018, "Tomas Jiang", "DST", 311, 3, 15, 15, H, time(0, 0),
                time(0, 0), "Dynamics of Oppression");
  create_course(131018, "Tomas Jiang", "DST", 311, 3, 14, 15, H, time(0, 0),
                time(0, 0), "Dynamics of Oppression");
  create_course(131018, "Odell Ostrowski", "DST", 311, 3, 15, 15, M | W,
                time(15, 0), time(16, 20), "Dynamics of Oppression");
  create_course(131018, "Odell Ostrowski", "DST", 311, 3, 13, 15, M | W,
                time(15, 0), time(16, 20), "Dynamics of Oppression");
  create_course(352193, "Lois Hansell", "DST", 314, 3, 10, 15, H, time(0, 0),
                time(0, 0), "Oral Traditions Deaf Community");
  create_course(352193, "Lois Hansell", "DST", 314, 3, 12, 15, H, time(0, 0),
                time(0, 0), "Oral Traditions Deaf Community");
  create_course(13067, "Nova Christon", "DST", 316, 3, 15, 15, H, time(0, 0),
                time(0, 0), "Disability Studies");
  create_course(13067, "Nova Christon", "DST", 316, 3, 13, 15, H, time(0, 0),
                time(0, 0), "Disability Studies");
  create_course(562452, "Veola Wootton", "DST", 320, 3, 5, 5, H, time(0, 0),
                time(0, 0), "Internship I");
  create_course(562452, "Veola Wootton", "DST", 320, 3, 1, 1, H, time(0, 0),
                time(0, 0), "Internship I");
  create_course(562452, "Veola Wootton", "DST", 320, 3, 2, 2, H, time(0, 0),
                time(0, 0), "Internship I");
  create_course(562452, "Coretta Himes", "DST", 320, 3, 1, 1, H, time(0, 0),
                time(0, 0), "Internship I");
  create_course(562452, "Lovie Lubin", "DST", 320, 3, 1, 1, H, time(0, 0),
                time(0, 0), "Internship I");
  create_course(562452, "Lovie Lubin", "DST", 320, 3, 1, 1, H, time(0, 0),
                time(0, 0), "Internship I");
  create_course(562452, "Angelica Licata", "DST", 320, 3, 5, 5, H, time(0, 0),
                time(0, 0), "Internship I");
  create_course(562452, "Angelica Licata", "DST", 320, 3, 1, 1, H, time(0, 0),
                time(0, 0), "Internship I");
  create_course(562452, "Danyel Mickle", "DST", 320, 3, 5, 5, H, time(0, 0),
                time(0, 0), "Internship I");
  create_course(428157, "Lovie Lubin", "DST", 401, 3, 16, 15, M | W,
                time(15, 0), time(16, 20), "Black Deaf People's Studies");
  create_course(68322, "Veola Wootton", "DST", 402, 3, 10, 15, T | R,
                time(14, 0), time(15, 20), "Deaf Women's Studies");
  create_course(68322, "Diamond Macias", "DST", 402, 3, 12, 15, H, time(0, 0),
                time(0, 0), "Deaf Women's Studies");
  create_course(68322, "Diamond Macias", "DST", 402, 3, 5, 15, H, time(0, 0),
                time(0, 0), "Deaf Women's Studies");
  create_course(364101, "Tomas Jiang", "DST", 410, 3, 8, 15, H, time(0, 0),
                time(0, 0), "Multicultural Deaf Lives (Tpc)");
  create_course(469942, "Lovie Lubin", "DST", 495, 1, 8, 15, M | W, time(15, 0),
                time(16, 20), "Special Topics");
  create_course(305441, "Veola Wootton", "DST", 497, 3, 7, 15, T | R,
                time(11, 0), time(12, 20), "Deaf Studies Senior Thesis I");
  create_course(305441, "Amiee Broadfoot", "DST", 497, 3, 3, 15, H, time(0, 0),
                time(0, 0), "Deaf Studies Senior Thesis I");
  create_course(876766, "Veola Wootton", "DST", 498, 3, 10, 15, T | R,
                time(11, 0), time(12, 20), "Deaf Studies Senior Thesis II");
  create_course(876766, "Corey Teets", "DST", 498, 3, 4, 15, H, time(0, 0),
                time(0, 0), "Deaf Studies Senior Thesis II");
  create_course(876766, "Corey Teets", "DST", 498, 3, 5, 15, H, time(0, 0),
                time(0, 0), "Deaf Studies Senior Thesis II");
  create_course(595904, "Veola Wootton", "DST", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(595904, "Aurea Peavey", "DST", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(595904, "Lovie Lubin", "DST", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(595904, "Lovie Lubin", "DST", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(595904, "Ranee Boeck", "DST", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(634216, "Tomas Jiang", "DST", 595, 3, 5, 10, M, time(13, 0),
                time(15, 50), "Special Topics");
  create_course(634216, "Tomas Jiang", "DST", 595, 3, 7, 10, M, time(13, 0),
                time(15, 50), "Special Topics");
  create_course(634216, "Audra Spradley", "DST", 595, 3, 3, 15, R, time(17, 0),
                time(20, 0), "Special Topics");
  create_course(634216, "Audra Spradley", "DST", 595, 3, 6, 15, R, time(17, 0),
                time(20, 0), "Special Topics");
  create_course(987924, "Aurea Peavey", "DST", 699, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(987924, "Ranee Boeck", "DST", 699, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(644185, "Tomas Jiang", "DST", 700, 1, 5, 15, W, time(13, 0),
                time(14, 50), "Proseminar I");
  create_course(98191, "Tomas Jiang", "DST", 701, 1, 5, 15, R, time(14, 0),
                time(15, 50), "Proseminar II");
  create_course(708450, "Tomas Jiang", "DST", 703, 3, 8, 15, R, time(9, 0),
                time(11, 50), "Deaf Cultural Studies");
  create_course(395363, "Hollie Hamada", "DST", 705, 3, 9, 15, M, time(13, 0),
                time(15, 50), "Sign & the Philosophy of Lang");
  create_course(490712, "Aurea Peavey", "DST", 710, 3, 9, 15, R, time(9, 30),
                time(12, 20), "Litry Trdtns in the Df Commnty");
  create_course(868754, "Ashlyn Deville", "DST", 712, 3, 8, 15, W, time(13, 0),
                time(15, 50), "Enfrcng Nrmlcy:Df & Disab Stdi");
  create_course(468426, "Deirdre Aylesworth", "DST", 714, 3, 13, 15, M,
                time(13, 0), time(15, 50), "Critical Pedagogy");
  create_course(330347, "Ashlyn Deville", "DST", 733, 3, 5, 15, T, time(13, 0),
                time(15, 30), "Theory & Identity in Df Studie");
  create_course(823789, "Aurea Peavey", "DST", 735, 3, 9, 15, R, time(9, 30),
                time(12, 30), "Visual Studies");
  create_course(850942, "Laverne Conely", "DST", 737, 3, 6, 15, T, time(16, 0),
                time(18, 50), "Pblc Plcy, Advoc, & Deaf Com");
  create_course(240203, "Lovie Lubin", "DST", 780, 3, 1, 15, H, time(0, 0),
                time(0, 0), "Cultural Stds Master's Proj I");
  create_course(240203, "Tomas Jiang", "DST", 780, 3, 2, 3, H, time(0, 0),
                time(0, 0), "Cultural Stds Master's Proj I");
  create_course(240203, "Augustina Amann", "DST", 780, 3, 2, 3, H, time(0, 0),
                time(0, 0), "Cultural Stds Master's Proj I");
  create_course(877274, "Lovie Lubin", "DST", 781, 1, 1, 15, H, time(0, 0),
                time(0, 0), "Cult Stds Master's Prj II");
  create_course(877274, "Tomas Jiang", "DST", 781, 1, 3, 15, H, time(0, 0),
                time(0, 0), "Cult Stds Master's Prj II");
  create_course(877274, "Tomas Jiang", "DST", 781, 1, 1, 3, H, time(0, 0),
                time(0, 0), "Cult Stds Master's Prj II");
  create_course(877274, "Augustina Amann", "DST", 781, 1, 2, 15, H, time(0, 0),
                time(0, 0), "Cult Stds Master's Prj II");
  create_course(877274, "Augustina Amann", "DST", 781, 1, 1, 15, H, time(0, 0),
                time(0, 0), "Cult Stds Master's Prj II");
  create_course(877274, "Augustina Amann", "DST", 781, 1, 1, 15, H, time(0, 0),
                time(0, 0), "Cult Stds Master's Prj II");
  create_course(664749, "Odell Ostrowski", "DST", 790, 3, 6, 15, H, time(0, 0),
                time(0, 0), "Deaf Studies Internship");
  create_course(664749, "Odell Ostrowski", "DST", 790, 3, 1, 1, H, time(0, 0),
                time(0, 0), "Deaf Studies Internship");
  create_course(914539, "Tomas Jiang", "ECO", 201, 3, 8, 20, M | W | F,
                time(11, 0), time(11, 50), "Introduction to Economics I");
  create_course(914539, "Melita Crafford", "ECO", 201, 3, 13, 20, T | R,
                time(11, 0), time(12, 20), "Introduction to Economics I");
  create_course(914539, "Columbus Knighton", "ECO", 201, 3, 14, 20, T | R,
                time(17, 30), time(18, 50), "Introduction to Economics I");
  create_course(324024, "Gertrude Schulte", "ECO", 202, 3, 9, 20, T | R,
                time(11, 0), time(12, 20), "Intro to Economics II");
  create_course(324024, "Columbus Knighton", "ECO", 202, 3, 18, 20, T | R,
                time(17, 30), time(18, 50), "Intro to Economics II");
  create_course(970018, "Gertrude Schulte", "ECO", 205, 3, 20, 20, T | R,
                time(8, 0), time(9, 20), "Economics for Social Workers");
  create_course(923115, "Melita Crafford", "ECO", 341, 3, 5, 20, T | R,
                time(9, 30), time(10, 50), "History of Economic Thought");
  create_course(972636, "Columbus Knighton", "ECO", 351, 3, 10, 20, M | W,
                time(17, 30), time(18, 50), "Money and Banking");
  create_course(668266, "Gertrude Schulte", "ECO", 411, 3, 4, 15, T | R,
                time(14, 0), time(15, 20), "Business & Managerial Economic");
  create_course(881137, "Gertrude Schulte", "ECO", 714, 3, 7, 15, T | R,
                time(14, 0), time(15, 20), "Economic Development");
  create_course(438584, "Amiee Broadfoot", "ECO", 725, 3, 4, 20, R, time(13, 0),
                time(15, 50), "Micropolitics of Development");
  create_course(694459, "Laura Scannell", "EDU", 250, 3, 14, 20, T | R,
                time(15, 30), time(16, 50), "Intro to Education");
  create_course(694459, "Jesica Cryer", "EDU", 250, 3, 2, 10, W, time(16, 30),
                time(19, 20), "Intro to Education");
  create_course(694459, "Estefana Thrift", "EDU", 250, 3, 10, 20, T | R,
                time(17, 0), time(18, 20), "Intro to Education");
  create_course(694459, "Deirdre Aylesworth", "EDU", 250, 3, 15, 20, M | W,
                time(12, 30), time(13, 50), "Intro to Education");
  create_course(694459, "Tomas Jiang", "EDU", 250, 3, 19, 20, T | R,
                time(14, 0), time(15, 20), "Intro to Education");
  create_course(694459, "Faustino Mailloux", "EDU", 250, 3, 8, 20, M | W,
                time(14, 0), time(15, 20), "Intro to Education");
  create_course(312790, "Laveta Pea", "EDU", 311, 3, 11, 15, M | W, time(15, 0),
                time(16, 20), "Fndtn of Ltrcy Tchng & Lrng");
  create_course(312790, "Deirdre Aylesworth", "EDU", 311, 3, 8, 15, T | R,
                time(15, 30), time(16, 50), "Fndtn of Ltrcy Tchng & Lrng");
  create_course(757139, "Coretta Himes", "EDU", 320, 3, 13, 15, M, time(8, 30),
                time(11, 20), "Early Childhood Environments");
  create_course(11977, "Steve Arzola", "EDU", 323, 3, 14, 20, W, time(16, 0),
                time(18, 50), "Educational Psychology");
  create_course(11977, "Deirdre Aylesworth", "EDU", 323, 3, 18, 15, T | R,
                time(9, 30), time(10, 50), "Educational Psychology");
  create_course(264050, "Ashely Tellis", "EDU", 493, 3, 3, 5, F, time(8, 0),
                time(11, 50), "Intgrv Prctum & Smnr in Tchng");
  create_course(264050, "Faustino Mailloux", "EDU", 493, 3, 1, 5, F, time(9, 0),
                time(11, 50), "Intgrv Prctum & Smnr in Tchng");
  create_course(137113, "Steve Arzola", "EDU", 495, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Special Topics");
  create_course(162057, "Steve Arzola", "EDU", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(162057, "Leida Chadwick", "EDU", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(483788, "Steve Arzola", "EDU", 600, 3, 11, 15, R, time(16, 30),
                time(19, 20), "K-12 Crrclm & Instr'l Tech");
  create_course(483788, "Celestine Mcnaught", "EDU", 600, 3, 12, 15, T,
                time(13, 0), time(15, 50), "K-12 Crrclm & Instr'l Tech");
  create_course(672862, "Faustino Mailloux", "EDU", 601, 3, 5, 15, W,
                time(13, 0), time(15, 50), "Rdg & Wrtg for Teachers K-12");
  create_course(550246, "Julius Anding", "EDU", 609, 3, 7, 15, W, time(13, 0),
                time(15, 50), "Hme,Sch & Community Prtnrshps");
  create_course(889669, "Audra Spradley", "EDU", 620, 2, 9, 10, T, time(13, 0),
                time(14, 50), "Hist & Curr. Fdntns of ECE");
  create_course(549849, "Coretta Himes", "EDU", 621, 3, 7, 15, M, time(13, 0),
                time(15, 50), "Lit Tchg & Lrng: ECE");
  create_course(486303, "Audra Spradley", "EDU", 622, 3, 9, 15, T, time(16, 30),
                time(19, 20), "Obsrv,Doc&Assng Yng Chlrn Dev");
  create_course(729565, "Audra Spradley", "EDU", 624, 3, 5, 10, M, time(16, 30),
                time(19, 20), "Intgrtve Mthd ECE:Preprim");
  create_course(555160, "Columbus Knighton", "EDU", 626, 3, 4, 5, M,
                time(16, 30), time(19, 20), "Intgrtve Mthd ECE: K-3");
  create_course(267279, "Steve Arzola", "EDU", 628, 9, 1, 5, H, time(0, 0),
                time(0, 0), "Student Teaching Early Edu");
  create_course(267279, "Steve Arzola", "EDU", 628, 9, 1, 1, H, time(0, 0),
                time(0, 0), "Student Teaching Early Edu");
  create_course(890571, "Laura Scannell", "EDU", 631, 3, 6, 15, R, time(16, 30),
                time(19, 20), "Lit Tchg & Lrng: Elem Grades");
  create_course(890571, "Faustino Mailloux", "EDU", 631, 3, 8, 15, T,
                time(13, 0), time(15, 50), "Lit Tchg & Lrng: Elem Grades");
  create_course(674220, "Laveta Pea", "EDU", 633, 3, 7, 15, T, time(16, 30),
                time(19, 20), "Lang Arts in Elementary Edu");
  create_course(706712, "Julius Anding", "EDU", 635, 3, 11, 15, W, time(13, 0),
                time(15, 50), "Elem Sch Tchg Mthds in SS");
  create_course(848110, "Steve Arzola", "EDU", 637, 3, 8, 15, M, time(16, 30),
                time(19, 20), "Elem Sch Tchg Mthds in Science");
  create_course(572546, "Steve Arzola", "EDU", 638, 9, 5, 5, H, time(0, 0),
                time(0, 0), "Student Teaching: Elem Ed");
  create_course(572546, "Steve Arzola", "EDU", 638, 9, 1, 1, H, time(0, 0),
                time(0, 0), "Student Teaching: Elem Ed");
  create_course(881694, "Steve Arzola", "EDU", 639, 3, 14, 15, T, time(16, 30),
                time(19, 20), "Elem Sch Tchg Mthds in Math");
  create_course(881694, "Katharyn Armbruster", "EDU", 639, 3, 14, 15, T,
                time(16, 30), time(19, 20), "Elem Sch Tchg Mthds in Math");
  create_course(222916, "Laura Scannell", "EDU", 641, 3, 3, 15, W, time(13, 0),
                time(15, 50), "Lit Tchg & Lrng: Scdnry Grades");
  create_course(700124, "Steve Arzola", "EDU", 648, 9, 2, 5, H, time(0, 0),
                time(0, 0), "Student Teach: Second Edu");
  create_course(700124, "Steve Arzola", "EDU", 648, 9, 1, 1, H, time(0, 0),
                time(0, 0), "Student Teach: Second Edu");
  create_course(662059, "Columbus Knighton", "EDU", 665, 3, 10, 15, T,
                time(13, 0), time(15, 50), "Children's Literature");
  create_course(662059, "Columbus Knighton", "EDU", 665, 3, 11, 15, M,
                time(13, 0), time(15, 50), "Children's Literature");
  create_course(402141, "Ashely Tellis", "EDU", 670, 3, 28, 20, W, time(16, 30),
                time(19, 20), "Tchg Stdnts with Disabilities");
  create_course(141227, "Ashely Tellis", "EDU", 694, 3, 6, 10, F, time(16, 30),
                time(19, 20), "Student Teaching Seminar");
  create_course(141227, "Deirdre Aylesworth", "EDU", 694, 3, 2, 10, F,
                time(16, 30), time(19, 20), "Student Teaching Seminar");
  create_course(141227, "Faustino Mailloux", "EDU", 694, 3, 3, 3, R,
                time(16, 30), time(19, 20), "Student Teaching Seminar");
  create_course(875981, "Deirdre Aylesworth", "EDU", 701, 3, 12, 15, M,
                time(16, 30), time(19, 20), "Deaf Lrnrs & Edu in Biling Com");
  create_course(103561, "Keshia Creswell", "EDU", 707, 4, 14, 15, T,
                time(16, 0), time(19, 50), "Strc & Appl of ASL & English");
  create_course(747819, "Jesica Cryer", "EDU", 711, 3, 9, 15, R, time(14, 30),
                time(17, 20), "Ltcy Apl ASL/Eng Bilg ClrmK-12");
  create_course(747819, "Keshia Creswell", "EDU", 711, 3, 2, 15, T,
                time(14, 30), time(17, 20), "Ltcy Apl ASL/Eng Bilg ClrmK-12");
  create_course(677650, "Laveta Pea", "EDU", 713, 3, 8, 20, M, time(16, 30),
                time(19, 20), "Lang Acquis & Cognitive Dev");
  create_course(709245, "Celestine Mcnaught", "EDU", 719, 3, 2, 15, W,
                time(14, 0), time(16, 50), "K-12 Classroom-Based Assmnt");
  create_course(709245, "Deirdre Aylesworth", "EDU", 719, 3, 12, 15, M,
                time(13, 0), time(15, 50), "K-12 Classroom-Based Assmnt");
  create_course(944658, "Ali Forst", "EDU", 720, 3, 13, 15, W, time(13, 0),
                time(15, 50), "Intro to Research");
  create_course(920970, "Julius Anding", "EDU", 731, 3, 11, 15, R, time(13, 0),
                time(15, 50), "Home Sch Cmty Coll.-Div.Lrnrs");
  create_course(920970, "Julius Anding", "EDU", 731, 3, 4, 15, R, time(16, 30),
                time(19, 20), "Home Sch Cmty Coll.-Div.Lrnrs");
  create_course(601736, "Ashely Tellis", "EDU", 735, 2, 8, 15, W, time(16, 30),
                time(19, 20), "Intro to Spec.Edu Law&IEP Proc");
  create_course(730599, "Viola Grayer", "EDU", 762, 3, 3, 10, H, time(0, 0),
                time(0, 0), "Erly Lang Acq&Cog Dev of Bilng");
  create_course(778655, "Audra Spradley", "EDU", 763, 3, 5, 15, H, time(0, 0),
                time(0, 0), "Assmt&Indv Plng in ASL/ENG Bi");
  create_course(14779, "Lois Hansell", "EDU", 765, 3, 5, 15, H, time(0, 0),
                time(0, 0), "Fmly Clbrtn&Prtnrshp:ASL/ENG");
  create_course(102561, "Columbus Knighton", "EDU", 767, 1, 2, 10, H,
                time(0, 0), time(0, 0), "Capstone I: ASL/ENGBil ECE 0-5");
  create_course(352972, "Columbus Knighton", "EDU", 769, 1, 1, 15, H,
                time(0, 0), time(0, 0), "Capstne III:ASL/EngBil ECE 0-5");
  create_course(171686, "Estefana Thrift", "EDU", 772, 3, 5, 15, H, time(0, 0),
                time(0, 0), "Classroom Management");
  create_course(687463, "Amiee Broadfoot", "EDU", 776, 3, 8, 15, H, time(0, 0),
                time(0, 0), "Teaching Functional Curriculum");
  create_course(559477, "Celestine Mcnaught", "EDU", 779, 3, 3, 15, H,
                time(0, 0), time(0, 0), "Ass'ment of Deaf Stdts with DA");
  create_course(879950, "Coretta Himes", "EDU", 785, 1, 7, 15, R, time(9, 0),
                time(12, 50), "Field Exp & Seminar:  Deaf Ed");
  create_course(306733, "Celestine Mcnaught", "EDU", 787, 1, 5, 6, F,
                time(8, 0), time(11, 50), "Practicum I/Seminar: Deaf Ed");
  create_course(306733, "Celestine Mcnaught", "EDU", 787, 1, 5, 6,
                M | T | W | R, time(8, 0), time(11, 50),
                "Practicum I/Seminar: Deaf Ed");
  create_course(354291, "Carolina Plantz", "EDU", 789, 2, 3, 5, F, time(8, 0),
                time(11, 50), "Practicum II/Seminar: Deaf Ed");
  create_course(354291, "Carolina Plantz", "EDU", 789, 2, 3, 5, M | T | W | R,
                time(8, 0), time(11, 50), "Practicum II/Seminar: Deaf Ed");
  create_course(586133, "Laveta Pea", "EDU", 792, 2, 1, 15, H, time(0, 0),
                time(0, 0), "Student Teaching Seminar");
  create_course(586133, "Coretta Himes", "EDU", 792, 2, 5, 10, H, time(0, 0),
                time(0, 0), "Student Teaching Seminar");
  create_course(586133, "Keshia Creswell", "EDU", 792, 2, 1, 5, H, time(0, 0),
                time(0, 0), "Student Teaching Seminar");
  create_course(312988, "Audra Spradley", "EDU", 793, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Field Experience in Edu: Deaf");
  create_course(312988, "Coretta Himes", "EDU", 793, 1, 3, 5, H, time(0, 0),
                time(0, 0), "Field Experience in Edu: Deaf");
  create_course(936256, "Laveta Pea", "EDU", 797, 7, 4, 5, H, time(0, 0),
                time(0, 0), "Student Teaching in Deaf Edu");
  create_course(936256, "Coretta Himes", "EDU", 797, 7, 3, 5, H, time(0, 0),
                time(0, 0), "Student Teaching in Deaf Edu");
  create_course(936256, "Keshia Creswell", "EDU", 797, 7, 1, 5, H, time(0, 0),
                time(0, 0), "Student Teaching in Deaf Edu");
  create_course(336715, "Audra Spradley", "EDU", 799, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(336715, "Leatrice Walck", "EDU", 799, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(336715, "Leatrice Walck", "EDU", 799, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(746777, "Diamond Macias", "EDU", 802, 3, 1, 10, W, time(16, 0),
                time(18, 50), "Principles of Statistics II");
  create_course(126384, "Leatrice Walck", "EDU", 810, 3, 4, 15, W, time(9, 0),
                time(11, 50), "Advanced Research Design I");
  create_course(32132, "Leatrice Walck", "EDU", 812, 3, 4, 15, T, time(9, 0),
                time(11, 50), "Qualitative Research Methods");
  create_course(229706, "Columbus Knighton", "EDU", 821, 2, 1, 10, W,
                time(13, 0), time(15, 50), "Prosem II: Crtcl Pedagogy- Edu");
  create_course(226460, "Corey Teets", "EDU", 834, 3, 4, 15, W, time(13, 0),
                time(15, 50), "Prg Dev & Evl in Spc Edu and H");
  create_course(794470, "Amiee Broadfoot", "EDU", 835, 3, 5, 10, M, time(13, 0),
                time(15, 50), "Project Design and Implmntn");
  create_course(306027, "Ashely Tellis", "EDU", 860, 3, 8, 10, R, time(13, 0),
                time(15, 50), "Education Policy & Politics");
  create_course(776725, "Ashely Tellis", "EDU", 889, 3, 9, 15, R, time(17, 0),
                time(19, 50), "Seminar in Crit Curr Stds");
  create_course(166470, "Steve Arzola", "EDU", 893, 2, 1, 1, H, time(0, 0),
                time(0, 0), "Practicum in Univ Instruction");
  create_course(387644, "Leatrice Walck", "EDU", 895, 1, 3, 15, M, time(14, 0),
                time(15, 50), "Special Topics");
  create_course(387644, "Leatrice Walck", "EDU", 895, 1, 5, 10, T, time(13, 0),
                time(13, 50), "Special Topics");
  create_course(387644, "Leatrice Walck", "EDU", 895, 1, 5, 10, M, time(9, 0),
                time(11, 50), "Special Topics");
  create_course(826765, "Leatrice Walck", "EDU", 899, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(210911, "Ashely Tellis", "EDU", 900, 1, 2, 3, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(210911, "Ashely Tellis", "EDU", 900, 1, 2, 5, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(210911, "Steve Arzola", "EDU", 900, 1, 1, 3, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(210911, "Steve Arzola", "EDU", 900, 1, 1, 5, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(210911, "Keshia Creswell", "EDU", 900, 1, 1, 3, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(210911, "Keshia Creswell", "EDU", 900, 1, 1, 5, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(210911, "Leatrice Walck", "EDU", 900, 1, 1, 3, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(210911, "Leatrice Walck", "EDU", 900, 1, 1, 5, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(210911, "Tracey Sherrard", "EDU", 900, 1, 3, 3, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(210911, "Tracey Sherrard", "EDU", 900, 1, 3, 5, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(311131, "Milton Brekke", "ELI", 100, 23, 12, 15, M | T | W | R,
                time(13, 0), time(14, 20), "Dev. English");
  create_course(311131, "Milton Brekke", "ELI", 100, 23, 9, 12, T | R,
                time(14, 30), time(15, 50), "Dev. English");
  create_course(311131, "Dylan Schneiderman", "ELI", 100, 23, 12, 15,
                M | T | W | R, time(10, 30), time(11, 50), "Dev. English");
  create_course(311131, "Dylan Schneiderman", "ELI", 100, 23, 12, 15,
                M | T | W | R, time(13, 0), time(14, 20), "Dev. English");
  create_course(311131, "Veola Wootton", "ELI", 100, 23, 12, 15, M | T | W | R,
                time(10, 30), time(11, 50), "Dev. English");
  create_course(461250, "Dick Strahl", "ELI", 101, 7, 7, 15, M | W | F,
                time(9, 0), time(11, 50), "Reading and Vocabulary Level I");
  create_course(256134, "Edwardo Pokorny", "ELI", 102, 7, 7, 15, M | W | F,
                time(9, 0), time(11, 50), "Reading & Vocab Level II");
  create_course(233619, "Anton Zahler", "ELI", 103, 7, 10, 15, M | W | F,
                time(13, 0), time(15, 50), "Reading & Vocab Level III");
  create_course(233619, "Laverne Conely", "ELI", 103, 7, 11, 15, F, time(13, 0),
                time(14, 0), "Reading & Vocab Level III");
  create_course(233619, "Laverne Conely", "ELI", 103, 7, 11, 15, M | W,
                time(13, 0), time(15, 50), "Reading & Vocab Level III");
  create_course(485935, "Desirae Domer", "ELI", 104, 7, 11, 15, M | W | F,
                time(13, 0), time(15, 50), "Reading & Vocab Level IV");
  create_course(485935, "Faustino Mailloux", "ELI", 104, 7, 8, 15, M | W | F,
                time(13, 0), time(15, 50), "Reading & Vocab Level IV");
  create_course(797289, "Kia Kurland", "ELI", 105, 7, 8, 15, M | W | F,
                time(13, 0), time(15, 50), "Reading & Vocab Level V");
  create_course(806089, "Sunny Tien", "ELI", 106, 7, 5, 30, F, time(13, 0),
                time(15, 50), "College Test Preparation VI");
  create_course(806089, "Sunny Tien", "ELI", 106, 7, 5, 30, M | W, time(13, 0),
                time(15, 50), "College Test Preparation VI");
  create_course(836114, "Dylan Schneiderman", "ELI", 111, 3, 4, 15, M | W,
                time(16, 0), time(17, 20), "American Sign Language I");
  create_course(836114, "Dylan Schneiderman", "ELI", 111, 3, 8, 12, M | W | F,
                time(10, 0), time(10, 50), "American Sign Language I");
  create_course(194474, "Dylan Schneiderman", "ELI", 112, 3, 5, 15, T | R,
                time(14, 30), time(15, 50), "American Sign Language II");
  create_course(194474, "Dylan Schneiderman", "ELI", 112, 3, 9, 12, T | R,
                time(13, 0), time(14, 20), "American Sign Language II");
  create_course(194474, "Dylan Schneiderman", "ELI", 112, 3, 14, 12, M | W,
                time(13, 0), time(14, 20), "American Sign Language II");
  create_course(194474, "Tawna Bradstreet", "ELI", 112, 3, 10, 15, T | R,
                time(16, 0), time(17, 20), "American Sign Language II");
  create_course(985437, "Tawna Bradstreet", "ELI", 115, 3, 13, 15, M | W,
                time(14, 30), time(15, 50), "Cross-Cultural Communication I");
  create_course(985437, "Tawna Bradstreet", "ELI", 115, 3, 13, 15, M | W,
                time(9, 0), time(10, 20), "Cross-Cultural Communication I");
  create_course(985437, "Tawna Bradstreet", "ELI", 115, 3, 7, 15, M | W,
                time(16, 0), time(17, 20), "Cross-Cultural Communication I");
  create_course(985437, "Veola Wootton", "ELI", 115, 3, 13, 12, M | W,
                time(13, 0), time(14, 20), "Cross-Cultural Communication I");
  create_course(985437, "Veola Wootton", "ELI", 115, 3, 17, 12, T | R,
                time(13, 0), time(14, 20), "Cross-Cultural Communication I");
  create_course(985437, "Veola Wootton", "ELI", 115, 3, 7, 12, M | W,
                time(14, 30), time(15, 50), "Cross-Cultural Communication I");
  create_course(800980, "Tawna Bradstreet", "ELI", 116, 3, 6, 15, M | W,
                time(10, 30), time(11, 50), "CrossCultural Communication II");
  create_course(800980, "Veola Wootton", "ELI", 116, 3, 13, 12, M | W,
                time(16, 0), time(17, 20), "CrossCultural Communication II");
  create_course(559125, "Adena Garrard", "ELI", 134, 4, 6, 12, M | T | W | R,
                time(10, 0), time(10, 50), "Numerical Language I");
  create_course(43386, "Adena Garrard", "ELI", 135, 4, 7, 15, M | T | W | R,
                time(8, 30), time(9, 20), "Numerical Language II");
  create_course(43386, "Adena Garrard", "ELI", 135, 4, 8, 12, M | W,
                time(13, 0), time(14, 50), "Numerical Language II");
  create_course(97592, "Adena Garrard", "ELI", 136, 4, 7, 15, M | T | W | R,
                time(9, 30), time(10, 20), "Numerical Language III");
  create_course(435698, "Dick Strahl", "ELI", 201, 8, 7, 15, T | R | F,
                time(9, 0), time(11, 50), "Writing and Grammar Level I");
  create_course(552808, "Edwardo Pokorny", "ELI", 202, 8, 7, 15, F, time(9, 0),
                time(11, 50), "Writing and Grammar Level II");
  create_course(552808, "Edwardo Pokorny", "ELI", 202, 8, 7, 15, T | R,
                time(9, 0), time(11, 50), "Writing and Grammar Level II");
  create_course(661303, "Jesica Cryer", "ELI", 203, 8, 11, 15, T | R | F,
                time(13, 0), time(15, 50), "Writing and Grammar Level III");
  create_course(661303, "Anton Zahler", "ELI", 203, 8, 10, 15, F, time(13, 0),
                time(15, 50), "Writing and Grammar Level III");
  create_course(661303, "Anton Zahler", "ELI", 203, 8, 10, 15, T | R,
                time(13, 0), time(15, 50), "Writing and Grammar Level III");
  create_course(661303, "Anton Zahler", "ELI", 203, 8, 12, 12, F, time(11, 0),
                time(11, 50), "Writing and Grammar Level III");
  create_course(661303, "Anton Zahler", "ELI", 203, 8, 12, 12, M | T | W | R,
                time(11, 0), time(11, 50), "Writing and Grammar Level III");
  create_course(311341, "Desirae Domer", "ELI", 204, 8, 11, 15, T | R,
                time(13, 0), time(15, 50), "Writing and Grammar Level IV");
  create_course(311341, "Desirae Domer", "ELI", 204, 8, 11, 15, F, time(13, 0),
                time(15, 50), "Writing and Grammar Level IV");
  create_course(311341, "Desirae Domer", "ELI", 204, 8, 14, 12, T | R,
                time(11, 0), time(12, 20), "Writing and Grammar Level IV");
  create_course(311341, "Desirae Domer", "ELI", 204, 8, 14, 12, M | W | F,
                time(11, 0), time(12, 20), "Writing and Grammar Level IV");
  create_course(311341, "Faustino Mailloux", "ELI", 204, 8, 8, 15, F,
                time(13, 0), time(15, 50), "Writing and Grammar Level IV");
  create_course(311341, "Faustino Mailloux", "ELI", 204, 8, 8, 15, T | R,
                time(13, 0), time(15, 50), "Writing and Grammar Level IV");
  create_course(152631, "Kia Kurland", "ELI", 205, 8, 8, 15, F, time(13, 0),
                time(15, 50), "Writing and Grammar Level V");
  create_course(152631, "Kia Kurland", "ELI", 205, 8, 8, 15, T | R, time(13, 0),
                time(15, 50), "Writing and Grammar Level V");
  create_course(275942, "Sunny Tien", "ELI", 206, 8, 5, 30, F, time(13, 0),
                time(15, 50), "College Test Preparation VI");
  create_course(275942, "Sunny Tien", "ELI", 206, 8, 5, 30, T | R, time(13, 0),
                time(14, 20), "College Test Preparation VI");
  create_course(693778, "Dick Strahl", "ELI", 301, 3, 7, 15, T | R, time(13, 0),
                time(14, 20), "Applied English Level I");
  create_course(71320, "Kia Kurland", "ELI", 302, 3, 7, 12, T | R, time(14, 30),
                time(15, 50), "Applied English Level II");
  create_course(71320, "Edwardo Pokorny", "ELI", 302, 3, 7, 15, T | R,
                time(13, 0), time(14, 20), "Applied English Level II");
  create_course(71320, "Edwardo Pokorny", "ELI", 302, 3, 10, 12, T | R,
                time(14, 30), time(15, 50), "Applied English Level II");
  create_course(386786, "Jesica Cryer", "ELI", 303, 3, 11, 15, T | R,
                time(10, 30), time(11, 50), "Applied English Level III");
  create_course(386786, "Jesica Cryer", "ELI", 303, 3, 10, 12, T | R,
                time(14, 30), time(15, 50), "Applied English Level III");
  create_course(386786, "Anton Zahler", "ELI", 303, 3, 10, 15, T | R,
                time(10, 30), time(11, 50), "Applied English Level III");
  create_course(386786, "Anton Zahler", "ELI", 303, 3, 12, 12, T | R,
                time(14, 30), time(15, 50), "Applied English Level III");
  create_course(386786, "Oneida Selvy", "ELI", 303, 3, 11, 12, T | R,
                time(14, 30), time(15, 50), "Applied English Level III");
  create_course(879805, "Desirae Domer", "ELI", 304, 3, 11, 15, T | R,
                time(10, 30), time(11, 50), "Applied English Level IV");
  create_course(879805, "Desirae Domer", "ELI", 304, 3, 14, 12, T | R,
                time(14, 30), time(15, 50), "Applied English Level IV");
  create_course(879805, "Faustino Mailloux", "ELI", 304, 3, 8, 15, T | R,
                time(10, 30), time(11, 50), "Applied English Level IV");
  create_course(42847, "Kia Kurland", "ELI", 305, 3, 8, 15, T | R, time(10, 30),
                time(11, 50), "Applied English Level V");
  create_course(42847, "Sunny Tien", "ELI", 305, 3, 8, 12, T | R, time(14, 30),
                time(15, 50), "Applied English Level V");
  create_course(500945, "Sunny Tien", "ELI", 306, 3, 5, 30, T | R, time(10, 30),
                time(11, 50), "College Test Preparation VI");
  create_course(709708, "Roman Saddler", "ENG", 60, 12, 8, 12, M | W | F,
                time(9, 0), time(10, 50), "Intensive Eng Lang Study I");
  create_course(709708, "Roman Saddler", "ENG", 60, 12, 8, 12, M | W,
                time(14, 0), time(15, 50), "Intensive Eng Lang Study I");
  create_course(709708, "Roman Saddler", "ENG", 60, 12, 12, 12, M | T | W | R,
                time(14, 0), time(16, 50), "Intensive Eng Lang Study I");
  create_course(391140, "Carolina Plantz", "ENG", 70, 6, 6, 12, M | W | F,
                time(9, 0), time(10, 50), "Eng Lng Study:Reading and Writ");
  create_course(391140, "Carolina Plantz", "ENG", 70, 6, 9, 14, M | W | F,
                time(12, 0), time(13, 50), "Eng Lng Study:Reading and Writ");
  create_course(747220, "Carolina Plantz", "ENG", 80, 6, 8, 12, M | W | F,
                time(13, 0), time(14, 50), "Eng Lng Study:Writing Emphasis");
  create_course(747220, "Carolina Plantz", "ENG", 80, 6, 15, 14, M | W | F,
                time(8, 0), time(9, 50), "Eng Lng Study:Writing Emphasis");
  create_course(786994, "Henry Sandor", "ENG", 100, 1, 12, 12, M | W | F,
                time(13, 0), time(13, 50), "English Language Skills");
  create_course(786994, "Henry Sandor", "ENG", 100, 1, 8, 12, M | W | F,
                time(10, 0), time(10, 50), "English Language Skills");
  create_course(117899, "Roman Saddler", "ENG", 208, 3, 10, 12, M | W | F,
                time(12, 0), time(12, 50), "Intro to Literature Studies");
  create_course(9221, "Todd Holsinger", "ENG", 250, 3, 12, 12, T | R,
                time(14, 0), time(15, 20), "Intro Public Prof Writing");
  create_course(51970, "Ranee Boeck", "ENG", 260, 3, 8, 12, M | W, time(15, 0),
                time(16, 20), "Introduction to Desktop Publis");
  create_course(559353, "Roman Saddler", "ENG", 295, 1, 0, 15, M | W,
                time(10, 0), time(11, 50), "Special Topics [Tpc to be spc]");
  create_course(925481, "Roman Saddler", "ENG", 320, 3, 1, 1, H, time(0, 0),
                time(0, 0), "Field Experience");
  create_course(925481, "Roman Saddler", "ENG", 320, 3, 1, 1, H, time(0, 0),
                time(0, 0), "Field Experience");
  create_course(925481, "Roman Saddler", "ENG", 320, 3, 1, 1, H, time(0, 0),
                time(0, 0), "Field Experience");
  create_course(925481, "Roselia Whisnant", "ENG", 320, 3, 2, 12, M,
                time(17, 0), time(19, 50), "Field Experience");
  create_course(599688, "Rosetta Harker", "ENG", 325, 3, 1, 15, T | R,
                time(14, 0), time(15, 50), "Introduction to Deaf Literatur");
  create_course(314697, "Henry Sandor", "ENG", 345, 3, 1, 15, M | W | F,
                time(8, 0), time(9, 20), "Business and Technical Writing");
  create_course(209972, "Gertrude Schulte", "ENG", 355, 3, 1, 15, T | R,
                time(17, 0), time(18, 50), "Literature by Women");
  create_course(645873, "Mireille Jain", "ENG", 365, 3, 7, 12, M | W | F,
                time(13, 0), time(13, 50), "Writing for Social Media");
  create_course(602538, "Ranee Boeck", "ENG", 385, 3, 12, 12, T | R,
                time(9, 30), time(10, 50), "Fund of Journalism");
  create_course(315357, "Una Worster", "ENG", 392, 3, 12, 12, W, time(16, 0),
                time(18, 50), "Creative Writing [Tpc to be s]");
  create_course(315357, "Gertrude Schulte", "ENG", 392, 3, 8, 12, T | R,
                time(15, 30), time(16, 50), "Creative Writing [Tpc to be s]");
  create_course(802783, "Rosetta Harker", "ENG", 395, 1, 1, 15, T | R,
                time(14, 0), time(15, 50), "Special Topics");
  create_course(802783, "Gertrude Schulte", "ENG", 395, 1, 0, 15, T | R,
                time(17, 0), time(18, 50), "Special Topics");
  create_course(802783, "Roman Saddler", "ENG", 395, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Special Topics");
  create_course(802783, "Roselia Whisnant", "ENG", 395, 1, 4, 12, M,
                time(17, 0), time(19, 50), "Special Topics");
  create_course(396196, "Oneida Selvy", "ENG", 399, 3, 8, 12, M | W, time(9, 0),
                time(10, 20), "Intro Methods Literary Study");
  create_course(457184, "Gertrude Schulte", "ENG", 403, 3, 8, 12, T | R,
                time(14, 0), time(15, 20), "British Literary Foundations");
  create_course(618250, "Gertrude Schulte", "ENG", 405, 3, 12, 12, T | R,
                time(14, 0), time(15, 20), "American Literary Foundations");
  create_course(185502, "Tomas Jiang", "ENG", 433, 3, 13, 12, T | R,
                time(11, 0), time(12, 20), "Seminar in Pre-1800 Lit");
  create_course(304569, "Mireille Jain", "ENG", 435, 3, 11, 12, M | W | F,
                time(12, 0), time(12, 50), "Seminar in Post-1800 Lit");
  create_course(958058, "Rosetta Harker", "ENG", 493, 3, 7, 12, W, time(16, 0),
                time(18, 50), "Senior Thesis Pjct  [Tpc spc]");
  create_course(482673, "Una Worster", "ENG", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(482673, "Tomas Jiang", "ENG", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(624024, "Loralee Penman", "FCS", 333, 3, 23, 25, T | R,
                time(11, 0), time(12, 20), "Child, Family, and Community");
  create_course(624024, "Loralee Penman", "FCS", 333, 3, 7, 20, T | R,
                time(14, 0), time(15, 20), "Child, Family, and Community");
  create_course(294488, "Loralee Penman", "FCS", 334, 3, 17, 25, T | R,
                time(14, 0), time(15, 20), "Parent-Child Interactions");
  create_course(294488, "Loralee Penman", "FCS", 334, 3, 6, 20, T | R,
                time(11, 0), time(12, 20), "Parent-Child Interactions");
  create_course(101756, "Loralee Penman", "FCS", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(101756, "Loralee Penman", "FCS", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(966973, "Dick Strahl", "FRE", 111, 4, 7, 15, T | R, time(14, 0),
                time(15, 20), "Basic French I");
  create_course(966973, "Dick Strahl", "FRE", 111, 4, 7, 15, T | R, time(14, 0),
                time(15, 20), "Basic French I");
  create_course(966973, "Dick Strahl", "FRE", 111, 4, 10, 15, H, time(0, 0),
                time(0, 0), "Basic French I");
  create_course(22505, "Veola Wootton", "FRE", 112, 4, 5, 15, H, time(0, 0),
                time(0, 0), "Basic French II");
  create_course(22505, "Veola Wootton", "FRE", 112, 4, 6, 15, H, time(0, 0),
                time(0, 0), "Basic French II");
  create_course(186029, "Edwardo Pokorny", "FYE", 310, 3, 17, 15, T,
                time(19, 0), time(20, 50), "Seminar-GSR101 Peer Leaders");
  create_course(83643, "Audra Spradley", "GOV", 110, 3, 15, 18, M | W | F,
                time(9, 0), time(9, 50), "Basic American Government");
  create_course(83643, "Audra Spradley", "GOV", 110, 3, 18, 18, M | W | F,
                time(10, 0), time(10, 50), "Basic American Government");
  create_course(83643, "Rosetta Harker", "GOV", 110, 3, 17, 18, T | R,
                time(11, 0), time(12, 20), "Basic American Government");
  create_course(83643, "Oneida Selvy", "GOV", 110, 3, 18, 18, M | W | F,
                time(10, 0), time(10, 50), "Basic American Government");
  create_course(356875, "Teressa Marshburn", "GOV", 301, 3, 14, 18, M | W | F,
                time(12, 0), time(12, 50), "Political Theory I");
  create_course(824128, "Teressa Marshburn", "GOV", 328, 3, 11, 18, M | W,
                time(15, 0), time(16, 20), "Comparative European Gov");
  create_course(110626, "Teressa Marshburn", "GOV", 330, 3, 18, 18, M | W | F,
                time(13, 0), time(13, 50), "Intro to the European Union");
  create_course(692840, "Teressa Marshburn", "GOV", 335, 3, 17, 18, T | R,
                time(11, 0), time(12, 20), "Amer State and Local Politics");
  create_course(872980, "Lovie Lubin", "GOV", 353, 3, 19, 18, T | R,
                time(9, 30), time(10, 50), "Civil Rghts & Civil Rghts Mvmt");
  create_course(208470, "Todd Holsinger", "GOV", 370, 3, 33, 18, T | R,
                time(8, 0), time(9, 20), "Human Rights");
  create_course(208470, "Teressa Marshburn", "GOV", 370, 3, 33, 18, T | R,
                time(8, 0), time(9, 20), "Human Rights");
  create_course(748786, "Teressa Marshburn", "GOV", 387, 3, 11, 18, M | W | F,
                time(11, 0), time(11, 50), "Nationalism and Developing Nat");
  create_course(92429, "Teressa Marshburn", "GOV", 391, 3, 21, 18, T | R,
                time(8, 0), time(9, 20), "Interntl Relations");
  create_course(45891, "Rosetta Harker", "GOV", 401, 3, 10, 18, T | R,
                time(9, 30), time(10, 50), "The Presidency");
  create_course(926198, "Todd Holsinger", "GOV", 410, 3, 12, 18, M | W | F,
                time(11, 0), time(11, 50), "Intro to Rsch Mthd");
  create_course(549848, "Teressa Marshburn", "GOV", 493, 3, 21, 18, T | R,
                time(11, 0), time(12, 20), "Senior Seminar");
  create_course(144918, "Teressa Marshburn", "GOV", 499, 1, 2, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(144918, "Teressa Marshburn", "GOV", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(144918, "Teressa Marshburn", "GOV", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(144918, "Teressa Marshburn", "GOV", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(144918, "Teressa Marshburn", "GOV", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(144918, "Teressa Marshburn", "GOV", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(144918, "Teressa Marshburn", "GOV", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(144918, "Teressa Marshburn", "GOV", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(144918, "Teressa Marshburn", "GOV", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(144918, "Teressa Marshburn", "GOV", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(599988, "Lashaun Pasha", "GOV", 595, 3, 2, 18, T, time(17, 0),
                time(19, 50), "Special Topics");
  create_course(599988, "Lashaun Pasha", "GOV", 595, 3, 6, 18, T, time(17, 0),
                time(19, 50), "Special Topics");
  create_course(623322, "Teressa Marshburn", "GOV", 791, 3, 5, 18, T,
                time(15, 0), time(17, 50), "Intl Relations and Development");
  create_course(767835, "Edwardo Pokorny", "GSR", 101, 3, 7, 13, T | R,
                time(11, 0), time(12, 20), "First Year Seminar");
  create_course(767835, "Edwardo Pokorny", "GSR", 101, 3, 15, 15, T | R,
                time(11, 0), time(12, 20), "First Year Seminar");
  create_course(767835, "Odell Ostrowski", "GSR", 101, 3, 15, 15, M | W,
                time(12, 30), time(13, 50), "First Year Seminar");
  create_course(767835, "Odell Ostrowski", "GSR", 101, 3, 15, 15, M | W,
                time(15, 0), time(16, 20), "First Year Seminar");
  create_course(767835, "Odell Ostrowski", "GSR", 101, 3, 15, 15, T | R,
                time(8, 0), time(9, 20), "First Year Seminar");
  create_course(767835, "Odell Ostrowski", "GSR", 101, 3, 15, 15, T | R,
                time(15, 30), time(16, 50), "First Year Seminar");
  create_course(767835, "Mica Dildine", "GSR", 101, 3, 15, 15, M | W,
                time(12, 30), time(13, 50), "First Year Seminar");
  create_course(767835, "Laverne Conely", "GSR", 101, 3, 11, 15, M | W,
                time(8, 0), time(9, 20), "First Year Seminar");
  create_course(767835, "Laverne Conely", "GSR", 101, 3, 15, 15, T | R,
                time(15, 30), time(16, 50), "First Year Seminar");
  create_course(767835, "Todd Holsinger", "GSR", 101, 3, 10, 13, M | W,
                time(14, 0), time(15, 20), "First Year Seminar");
  create_course(767835, "Todd Holsinger", "GSR", 101, 3, 12, 13, T | R,
                time(14, 0), time(15, 20), "First Year Seminar");
  create_course(767835, "Edwardo Pokorny", "GSR", 101, 3, 14, 15, M | W,
                time(15, 0), time(16, 20), "First Year Seminar");
  create_course(767835, "Yon Seidel", "GSR", 101, 3, 11, 15, M | W,
                time(12, 30), time(13, 50), "First Year Seminar");
  create_course(767835, "Leticia Hedin", "GSR", 101, 3, 15, 15, M | W,
                time(12, 30), time(13, 50), "First Year Seminar");
  create_course(767835, "Leticia Hedin", "GSR", 101, 3, 10, 15, T | R,
                time(11, 0), time(12, 20), "First Year Seminar");
  create_course(767835, "Jeane Guyer", "GSR", 101, 3, 8, 15, M | W, time(15, 0),
                time(16, 20), "First Year Seminar");
  create_course(767835, "Loralee Penman", "GSR", 101, 3, 9, 15, M | W,
                time(11, 0), time(12, 20), "First Year Seminar");
  create_course(767835, "Edwardo Pokorny", "GSR", 101, 3, 10, 15, M | W,
                time(15, 0), time(16, 20), "First Year Seminar");
  create_course(767835, "Edwardo Pokorny", "GSR", 101, 3, 8, 15, M | W,
                time(8, 0), time(9, 20), "First Year Seminar");
  create_course(529300, "Una Worster", "GSR", 102, 3, 10, 12, M | W | F,
                time(12, 0), time(12, 50), "Critical Reading and Writing");
  create_course(529300, "Una Worster", "GSR", 102, 3, 14, 15, M | W,
                time(16, 0), time(18, 50), "Critical Reading and Writing");
  create_course(529300, "Una Worster", "GSR", 102, 3, 16, 15, T | R,
                time(14, 0), time(16, 50), "Critical Reading and Writing");
  create_course(529300, "Henry Sandor", "GSR", 102, 3, 12, 12, M | W | F,
                time(9, 0), time(10, 50), "Critical Reading and Writing");
  create_course(529300, "Henry Sandor", "GSR", 102, 3, 12, 12, M | W | F,
                time(12, 0), time(13, 50), "Critical Reading and Writing");
  create_course(529300, "Shirly Bensley", "GSR", 102, 3, 10, 12, T | R,
                time(8, 0), time(10, 50), "Critical Reading and Writing");
  create_course(529300, "Shirly Bensley", "GSR", 102, 3, 12, 12, T | R,
                time(14, 0), time(16, 50), "Critical Reading and Writing");
  create_course(529300, "Shirly Bensley", "GSR", 102, 3, 13, 13, T | R,
                time(8, 0), time(10, 50), "Critical Reading and Writing");
  create_course(529300, "Shirly Bensley", "GSR", 102, 3, 14, 13, T | R,
                time(14, 0), time(16, 50), "Critical Reading and Writing");
  create_course(529300, "Rosetta Harker", "GSR", 102, 3, 6, 12, T | R,
                time(8, 0), time(9, 20), "Critical Reading and Writing");
  create_course(529300, "Rosetta Harker", "GSR", 102, 3, 9, 12, T | R,
                time(11, 0), time(12, 20), "Critical Reading and Writing");
  create_course(529300, "Mireille Jain", "GSR", 102, 3, 11, 12, M | W | F,
                time(11, 0), time(11, 50), "Critical Reading and Writing");
  create_course(529300, "Laverne Conely", "GSR", 102, 3, 16, 16, M | W | F,
                time(9, 0), time(9, 50), "Critical Reading and Writing");
  create_course(529300, "Gertrude Schulte", "GSR", 102, 3, 8, 12, T | R,
                time(11, 0), time(12, 20), "Critical Reading and Writing");
  create_course(529300, "Gertrude Schulte", "GSR", 102, 3, 10, 12, T | R,
                time(11, 0), time(12, 20), "Critical Reading and Writing");
  create_course(529300, "Ranee Boeck", "GSR", 102, 3, 12, 12, M | W | F,
                time(11, 0), time(11, 50), "Critical Reading and Writing");
  create_course(529300, "Ranee Boeck", "GSR", 102, 3, 12, 15, M | W | F,
                time(12, 0), time(12, 50), "Critical Reading and Writing");
  create_course(529300, "Roselia Whisnant", "GSR", 102, 3, 13, 13, T | R,
                time(8, 0), time(9, 20), "Critical Reading and Writing");
  create_course(529300, "Roselia Whisnant", "GSR", 102, 3, 13, 15, T | R,
                time(11, 0), time(12, 20), "Critical Reading and Writing");
  create_course(876413, "Laverne Conely", "GSR", 103, 3, 12, 12, T | R,
                time(11, 0), time(12, 20), "Ameri Sign Lang & Deaf Studies");
  create_course(876413, "Laverne Conely", "GSR", 103, 3, 14, 15, T | R,
                time(14, 0), time(15, 20), "Ameri Sign Lang & Deaf Studies");
  create_course(876413, "Laverne Conely", "GSR", 103, 3, 10, 12, T | R,
                time(9, 30), time(10, 50), "Ameri Sign Lang & Deaf Studies");
  create_course(876413, "Ranee Boeck", "GSR", 103, 3, 15, 15, T | R,
                time(15, 30), time(16, 50), "Ameri Sign Lang & Deaf Studies");
  create_course(876413, "Hassan Stoke", "GSR", 103, 3, 13, 15, M | W,
                time(12, 30), time(13, 50), "Ameri Sign Lang & Deaf Studies");
  create_course(876413, "Hassan Stoke", "GSR", 103, 3, 6, 15, T | R, time(8, 0),
                time(9, 20), "Ameri Sign Lang & Deaf Studies");
  create_course(876413, "Hassan Stoke", "GSR", 103, 3, 15, 15, M | W,
                time(11, 0), time(12, 20), "Ameri Sign Lang & Deaf Studies");
  create_course(876413, "Hassan Stoke", "GSR", 103, 3, 16, 15, M | W,
                time(12, 30), time(13, 50), "Ameri Sign Lang & Deaf Studies");
  create_course(876413, "Hassan Stoke", "GSR", 103, 3, 15, 15, T | R,
                time(9, 30), time(10, 50), "Ameri Sign Lang & Deaf Studies");
  create_course(876413, "Hassan Stoke", "GSR", 103, 3, 15, 15, T | R,
                time(11, 0), time(12, 20), "Ameri Sign Lang & Deaf Studies");
  create_course(876413, "Mica Dildine", "GSR", 103, 3, 11, 15, M | W,
                time(8, 30), time(9, 50), "Ameri Sign Lang & Deaf Studies");
  create_course(876413, "Mica Dildine", "GSR", 103, 3, 13, 12, M | W,
                time(8, 30), time(9, 50), "Ameri Sign Lang & Deaf Studies");
  create_course(876413, "Mica Dildine", "GSR", 103, 3, 16, 15, M | W,
                time(11, 0), time(12, 20), "Ameri Sign Lang & Deaf Studies");
  create_course(876413, "Mica Dildine", "GSR", 103, 3, 7, 8, H, time(0, 0),
                time(0, 0), "Ameri Sign Lang & Deaf Studies");
  create_course(876413, "Hollie Hamada", "GSR", 103, 3, 12, 12, M | W,
                time(11, 0), time(12, 20), "Ameri Sign Lang & Deaf Studies");
  create_course(876413, "Hollie Hamada", "GSR", 103, 3, 17, 15, M | W,
                time(15, 0), time(16, 20), "Ameri Sign Lang & Deaf Studies");
  create_course(876413, "Hollie Hamada", "GSR", 103, 3, 8, 15, T | R,
                time(14, 0), time(15, 20), "Ameri Sign Lang & Deaf Studies");
  create_course(876413, "Hollie Hamada", "GSR", 103, 3, 12, 12, M | W,
                time(12, 30), time(13, 50), "Ameri Sign Lang & Deaf Studies");
  create_course(876413, "Hollie Hamada", "GSR", 103, 3, 16, 15, M | W,
                time(15, 0), time(16, 20), "Ameri Sign Lang & Deaf Studies");
  create_course(876413, "Hollie Hamada", "GSR", 103, 3, 15, 15, M | W,
                time(16, 30), time(17, 50), "Ameri Sign Lang & Deaf Studies");
  create_course(876413, "Hollie Hamada", "GSR", 103, 3, 16, 15, T | R,
                time(9, 30), time(10, 50), "Ameri Sign Lang & Deaf Studies");
  create_course(876413, "Linsey Khalil", "GSR", 103, 3, 15, 15, M | W,
                time(8, 30), time(9, 50), "Ameri Sign Lang & Deaf Studies");
  create_course(876413, "Linsey Khalil", "GSR", 103, 3, 15, 15, T | R,
                time(11, 0), time(12, 20), "Ameri Sign Lang & Deaf Studies");
  create_course(309816, "Lashaun Pasha", "GSR", 104, 3, 15, 15, M | W,
                time(12, 30), time(13, 50), "Quantitative Reasoning Apprch");
  create_course(309816, "Hollie Hamada", "GSR", 104, 3, 15, 15, M | W,
                time(12, 30), time(13, 50), "Quantitative Reasoning Apprch");
  create_course(309816, "Keshia Creswell", "GSR", 104, 3, 15, 15, M | W,
                time(12, 30), time(13, 50), "Quantitative Reasoning Apprch");
  create_course(309816, "Leticia Hedin", "GSR", 104, 3, 19, 19, T | R,
                time(9, 30), time(10, 50), "Quantitative Reasoning Apprch");
  create_course(309816, "Leticia Hedin", "GSR", 104, 3, 14, 19, T | R,
                time(11, 0), time(12, 20), "Quantitative Reasoning Apprch");
  create_course(309816, "Leticia Hedin", "GSR", 104, 3, 18, 18, M | W,
                time(8, 30), time(9, 50), "Quantitative Reasoning Apprch");
  create_course(309816, "Shirly Bensley", "GSR", 104, 3, 15, 15, M | W,
                time(12, 30), time(13, 50), "Quantitative Reasoning Apprch");
  create_course(309816, "Melita Crafford", "GSR", 104, 3, 14, 15, M | W,
                time(8, 30), time(9, 50), "Quantitative Reasoning Apprch");
  create_course(309816, "Melita Crafford", "GSR", 104, 3, 15, 15, M | W,
                time(11, 0), time(12, 20), "Quantitative Reasoning Apprch");
  create_course(309816, "Melita Crafford", "GSR", 104, 3, 16, 15, T | R,
                time(9, 30), time(10, 50), "Quantitative Reasoning Apprch");
  create_course(309816, "Melita Crafford", "GSR", 104, 3, 15, 15, T | R,
                time(14, 0), time(15, 20), "Quantitative Reasoning Apprch");
  create_course(309816, "Melita Crafford", "GSR", 104, 3, 16, 18, M | W,
                time(12, 30), time(13, 50), "Quantitative Reasoning Apprch");
  create_course(309816, "Melita Crafford", "GSR", 104, 3, 15, 19, M | W,
                time(15, 0), time(16, 20), "Quantitative Reasoning Apprch");
  create_course(309816, "Melita Crafford", "GSR", 104, 3, 18, 19, T | R,
                time(14, 0), time(15, 20), "Quantitative Reasoning Apprch");
  create_course(309816, "Hassan Stoke", "GSR", 104, 3, 15, 15, M | W,
                time(12, 30), time(13, 50), "Quantitative Reasoning Apprch");
  create_course(309816, "Burt Aquino", "GSR", 104, 3, 15, 15, M | W,
                time(12, 30), time(13, 50), "Quantitative Reasoning Apprch");
  create_course(309816, "Jordon Fiorillo", "GSR", 104, 3, 15, 15, M | W,
                time(12, 30), time(13, 50), "Quantitative Reasoning Apprch");
  create_course(309816, "Jordon Fiorillo", "GSR", 104, 3, 16, 18, M | W,
                time(11, 0), time(12, 20), "Quantitative Reasoning Apprch");
  create_course(309816, "Jordon Fiorillo", "GSR", 104, 3, 18, 19, T | R,
                time(8, 0), time(9, 20), "Quantitative Reasoning Apprch");
  create_course(309816, "Glennis Coons", "GSR", 104, 3, 15, 15, M | W,
                time(12, 30), time(13, 50), "Quantitative Reasoning Apprch");
  create_course(309816, "Carolina Plantz", "GSR", 104, 3, 15, 15, M | W,
                time(12, 30), time(13, 50), "Quantitative Reasoning Apprch");
  create_course(309816, "Gertrude Schulte", "GSR", 104, 3, 15, 15, M | W,
                time(12, 30), time(13, 50), "Quantitative Reasoning Apprch");
  create_course(309816, "Verona Tenney", "GSR", 104, 3, 15, 15, M | W,
                time(12, 30), time(13, 50), "Quantitative Reasoning Apprch");
  create_course(657265, "Julius Anding", "GSR", 110, 1, 18, 18, R, time(9, 30),
                time(10, 50), "Career Development");
  create_course(657265, "Julius Anding", "GSR", 110, 1, 17, 18, R, time(9, 30),
                time(10, 50), "Career Development");
  create_course(657265, "Julius Anding", "GSR", 110, 1, 19, 18, R, time(9, 30),
                time(10, 50), "Career Development");
  create_course(657265, "Alphonso Lowenstein", "GSR", 110, 1, 18, 18, T,
                time(14, 0), time(15, 20), "Career Development");
  create_course(657265, "Alphonso Lowenstein", "GSR", 110, 1, 16, 18, T,
                time(14, 30), time(15, 50), "Career Development");
  create_course(657265, "Alphonso Lowenstein", "GSR", 110, 1, 17, 18, T,
                time(14, 30), time(15, 50), "Career Development");
  create_course(657265, "Angelica Licata", "GSR", 110, 1, 16, 18, M,
                time(15, 0), time(16, 20), "Career Development");
  create_course(657265, "Angelica Licata", "GSR", 110, 1, 18, 18, M,
                time(15, 0), time(16, 20), "Career Development");
  create_course(657265, "Angelica Licata", "GSR", 110, 1, 16, 18, T,
                time(14, 30), time(15, 50), "Career Development");
  create_course(657265, "Angelica Licata", "GSR", 110, 1, 16, 18, W,
                time(15, 0), time(16, 20), "Career Development");
  create_course(657265, "Angelica Licata", "GSR", 110, 1, 17, 18, R,
                time(9, 30), time(10, 50), "Career Development");
  create_course(657265, "Angelica Licata", "GSR", 110, 1, 19, 18, F,
                time(11, 0), time(12, 20), "Career Development");
  create_course(657265, "Angelica Licata", "GSR", 110, 1, 19, 18, M,
                time(15, 0), time(16, 20), "Career Development");
  create_course(657265, "Angelica Licata", "GSR", 110, 1, 17, 18, T,
                time(14, 30), time(15, 50), "Career Development");
  create_course(657265, "Angelica Licata", "GSR", 110, 1, 19, 18, W,
                time(15, 0), time(16, 20), "Career Development");
  create_course(657265, "Angelica Licata", "GSR", 110, 1, 19, 18, R,
                time(9, 30), time(10, 50), "Career Development");
  create_course(657265, "Angelica Licata", "GSR", 110, 1, 18, 18, F,
                time(11, 0), time(12, 20), "Career Development");
  create_course(657265, "Kami Hansen", "GSR", 110, 1, 19, 18, W, time(8, 0),
                time(9, 20), "Career Development");
  create_course(657265, "Kami Hansen", "GSR", 110, 1, 16, 18, F, time(11, 0),
                time(12, 20), "Career Development");
  create_course(657265, "Kami Hansen", "GSR", 110, 1, 16, 18, W, time(15, 0),
                time(16, 20), "Career Development");
  create_course(657265, "Kami Hansen", "GSR", 110, 1, 19, 18, F, time(11, 0),
                time(12, 20), "Career Development");
  create_course(657265, "Kami Hansen", "GSR", 110, 1, 19, 18, W, time(15, 0),
                time(16, 20), "Career Development");
  create_course(657265, "Kami Hansen", "GSR", 110, 1, 18, 18, F, time(11, 0),
                time(12, 20), "Career Development");
  create_course(398565, "Odell Ostrowski", "GSR", 150, 4, 15, 10, T | R,
                time(8, 0), time(9, 50), "Intro to Integrated Learning");
  create_course(398565, "Odell Ostrowski", "GSR", 150, 4, 14, 10, T | R,
                time(16, 0), time(17, 50), "Intro to Integrated Learning");
  create_course(398565, "Odell Ostrowski", "GSR", 150, 4, 15, 15, T | R,
                time(14, 0), time(15, 50), "Intro to Integrated Learning");
  create_course(398565, "Una Worster", "GSR", 150, 4, 15, 10, M | W,
                time(14, 0), time(15, 50), "Intro to Integrated Learning");
  create_course(398565, "Todd Holsinger", "GSR", 150, 4, 13, 15, M | W,
                time(11, 0), time(12, 50), "Intro to Integrated Learning");
  create_course(398565, "Todd Holsinger", "GSR", 150, 4, 14, 15, M | W,
                time(13, 0), time(14, 50), "Intro to Integrated Learning");
  create_course(398565, "Rosetta Harker", "GSR", 150, 4, 9, 15, M | W,
                time(13, 0), time(14, 50), "Intro to Integrated Learning");
  create_course(398565, "Leticia Hedin", "GSR", 150, 4, 11, 10, T | R,
                time(14, 0), time(15, 50), "Intro to Integrated Learning");
  create_course(398565, "Leticia Hedin", "GSR", 150, 4, 10, 10, T | R,
                time(10, 0), time(11, 50), "Intro to Integrated Learning");
  create_course(398565, "Mireille Jain", "GSR", 150, 4, 6, 15, M | W,
                time(10, 0), time(11, 50), "Intro to Integrated Learning");
  create_course(398565, "Ranee Boeck", "GSR", 150, 4, 8, 10, M | W, time(8, 0),
                time(9, 50), "Intro to Integrated Learning");
  create_course(398565, "Ranee Boeck", "GSR", 150, 4, 15, 10, M | W,
                time(10, 0), time(11, 50), "Intro to Integrated Learning");
  create_course(398565, "Ranee Boeck", "GSR", 150, 4, 12, 10, M | W,
                time(14, 0), time(15, 50), "Intro to Integrated Learning");
  create_course(398565, "Ranee Boeck", "GSR", 150, 4, 6, 15, T | R, time(15, 0),
                time(16, 50), "Intro to Integrated Learning");
  create_course(763843, "Laverne Conely", "GSR", 210, 4, 1, 8, W, time(16, 30),
                time(19, 20), "Comparing Multicult Perspectiv");
  create_course(763843, "Lovie Lubin", "GSR", 210, 4, 3, 15, M | W, time(15, 0),
                time(16, 20), "Comparing Multicult Perspectiv");
  create_course(763843, "Tomas Jiang", "GSR", 210, 4, 15, 15, M | W,
                time(15, 0), time(16, 50), "Comparing Multicult Perspectiv");
  create_course(763843, "Rosetta Harker", "GSR", 210, 4, 11, 15, T | R,
                time(14, 0), time(15, 50), "Comparing Multicult Perspectiv");
  create_course(763843, "Jesica Cryer", "GSR", 210, 4, 13, 10, W, time(16, 30),
                time(19, 20), "Comparing Multicult Perspectiv");
  create_course(763843, "Jeane Guyer", "GSR", 210, 4, 15, 15, T | R,
                time(10, 0), time(11, 50), "Comparing Multicult Perspectiv");
  create_course(763843, "Jeane Guyer", "GSR", 210, 4, 15, 15, T | R,
                time(14, 0), time(15, 50), "Comparing Multicult Perspectiv");
  create_course(763843, "Gertrude Schulte", "GSR", 210, 4, 5, 15, T | R,
                time(17, 0), time(18, 50), "Comparing Multicult Perspectiv");
  create_course(763843, "Jeane Guyer", "GSR", 210, 4, 9, 8, T | R, time(11, 0),
                time(12, 20), "Comparing Multicult Perspectiv");
  create_course(763843, "Estefana Thrift", "GSR", 210, 4, 16, 15, M | W,
                time(13, 0), time(14, 50), "Comparing Multicult Perspectiv");
  create_course(763843, "Estefana Thrift", "GSR", 210, 4, 9, 15, T | R,
                time(10, 0), time(11, 50), "Comparing Multicult Perspectiv");
  create_course(763843, "Estefana Thrift", "GSR", 210, 4, 15, 15, M | W,
                time(10, 0), time(11, 50), "Comparing Multicult Perspectiv");
  create_course(763843, "Estefana Thrift", "GSR", 210, 4, 15, 15, M | W,
                time(13, 0), time(14, 50), "Comparing Multicult Perspectiv");
  create_course(763843, "Loralee Penman", "GSR", 210, 4, 10, 15, W | F,
                time(9, 0), time(10, 50), "Comparing Multicult Perspectiv");
  create_course(763843, "Roman Saddler", "GSR", 210, 4, 14, 15, M | W,
                time(10, 0), time(11, 50), "Comparing Multicult Perspectiv");
  create_course(763843, "Kami Hansen", "GSR", 210, 4, 15, 15, T | R, time(8, 0),
                time(9, 50), "Comparing Multicult Perspectiv");
  create_course(347223, "Tawna Bradstreet", "GSR", 220, 4, 7, 15, T | R,
                time(16, 0), time(17, 50), "Methods of Multiples Disciplin");
  create_course(347223, "Mireille Jain", "GSR", 220, 4, 7, 15, M | W,
                time(13, 0), time(14, 50), "Methods of Multiples Disciplin");
  create_course(347223, "Mireille Jain", "GSR", 220, 4, 14, 15, M | W,
                time(15, 0), time(16, 50), "Methods of Multiples Disciplin");
  create_course(347223, "Mireille Jain", "GSR", 220, 4, 15, 15, M | W,
                time(10, 0), time(11, 50), "Methods of Multiples Disciplin");
  create_course(347223, "Mireille Jain", "GSR", 220, 4, 15, 15, M | W,
                time(13, 0), time(14, 50), "Methods of Multiples Disciplin");
  create_course(347223, "Laura Scannell", "GSR", 220, 4, 7, 15, W | F,
                time(8, 0), time(9, 50), "Methods of Multiples Disciplin");
  create_course(347223, "Laura Scannell", "GSR", 220, 4, 8, 15, W | F,
                time(10, 0), time(11, 50), "Methods of Multiples Disciplin");
  create_course(347223, "Estefana Thrift", "GSR", 220, 4, 14, 15, M | W,
                time(10, 0), time(11, 50), "Methods of Multiples Disciplin");
  create_course(347223, "Estefana Thrift", "GSR", 220, 4, 15, 15, T | R,
                time(10, 0), time(11, 50), "Methods of Multiples Disciplin");
  create_course(347223, "Estefana Thrift", "GSR", 220, 4, 14, 15, T | R,
                time(14, 0), time(15, 50), "Methods of Multiples Disciplin");
  create_course(347223, "Columbus Knighton", "GSR", 220, 4, 7, 15, T | R,
                time(10, 0), time(11, 50), "Methods of Multiples Disciplin");
  create_course(347223, "Roselia Whisnant", "GSR", 220, 4, 13, 15, T | R,
                time(8, 0), time(9, 50), "Methods of Multiples Disciplin");
  create_course(202540, "Jesica Cryer", "GSR", 230, 4, 15, 15, M | W,
                time(8, 0), time(9, 50), "Scientific and Quantitative Re");
  create_course(202540, "Quincy Modlin", "GSR", 230, 4, 14, 15, M | W,
                time(10, 0), time(11, 50), "Scientific and Quantitative Re");
  create_course(202540, "Danyel Mickle", "GSR", 230, 4, 11, 15, W | F,
                time(10, 0), time(11, 50), "Scientific and Quantitative Re");
  create_course(202540, "Adena Garrard", "GSR", 230, 4, 4, 20, T | R,
                time(17, 30), time(19, 20), "Scientific and Quantitative Re");
  create_course(202540, "Ali Forst", "GSR", 230, 4, 10, 15, M | W, time(10, 0),
                time(11, 50), "Scientific and Quantitative Re");
  create_course(202540, "Ali Forst", "GSR", 230, 4, 14, 15, M | W, time(10, 0),
                time(11, 50), "Scientific and Quantitative Re");
  create_course(202540, "Linsey Khalil", "GSR", 230, 4, 13, 15, T | R,
                time(10, 0), time(11, 50), "Scientific and Quantitative Re");
  create_course(202540, "Columbus Knighton", "GSR", 230, 4, 16, 15, S,
                time(9, 0), time(13, 0), "Scientific and Quantitative Re");
  create_course(202540, "Julius Anding", "GSR", 230, 4, 15, 15, T | R,
                time(8, 0), time(9, 50), "Scientific and Quantitative Re");
  create_course(202540, "Julius Anding", "GSR", 230, 4, 13, 15, T | R,
                time(8, 0), time(9, 50), "Scientific and Quantitative Re");
  create_course(202540, "Jeane Guyer", "GSR", 230, 4, 10, 15, M | W, time(8, 0),
                time(9, 50), "Scientific and Quantitative Re");
  create_course(202540, "Jeane Guyer", "GSR", 230, 4, 13, 15, M | W,
                time(13, 0), time(14, 50), "Scientific and Quantitative Re");
  create_course(202540, "Jeane Guyer", "GSR", 230, 4, 15, 15, M | W,
                time(15, 0), time(16, 50), "Scientific and Quantitative Re");
  create_course(202540, "Jeane Guyer", "GSR", 230, 4, 14, 15, M | W,
                time(10, 0), time(11, 50), "Scientific and Quantitative Re");
  create_course(202540, "Aurea Peavey", "GSR", 230, 4, 13, 15, T | R,
                time(10, 0), time(11, 50), "Scientific and Quantitative Re");
  create_course(202540, "Loralee Penman", "GSR", 230, 4, 16, 15, T | R,
                time(14, 0), time(15, 50), "Scientific and Quantitative Re");
  create_course(202540, "Loralee Penman", "GSR", 230, 4, 15, 15, T | R,
                time(16, 0), time(17, 50), "Scientific and Quantitative Re");
  create_course(202540, "Loralee Penman", "GSR", 230, 4, 14, 15, M | W,
                time(15, 0), time(16, 50), "Scientific and Quantitative Re");
  create_course(53120, "Edwardo Pokorny", "GSR", 240, 4, 15, 15, M | W,
                time(16, 0), time(17, 50), "Ethical Evaluations and Action");
  create_course(53120, "Warner Maggart", "GSR", 240, 4, 15, 15, M | W,
                time(15, 0), time(16, 50), "Ethical Evaluations and Action");
  create_course(53120, "Warner Maggart", "GSR", 240, 4, 0, 15, T | R,
                time(16, 0), time(17, 50), "Ethical Evaluations and Action");
  create_course(53120, "Warner Maggart", "GSR", 240, 4, 17, 15, M | W,
                time(10, 0), time(11, 50), "Ethical Evaluations and Action");
  create_course(53120, "Warner Maggart", "GSR", 240, 4, 16, 15, M | W,
                time(15, 0), time(16, 50), "Ethical Evaluations and Action");
  create_course(53120, "Warner Maggart", "GSR", 240, 4, 14, 15, T | R,
                time(14, 0), time(15, 50), "Ethical Evaluations and Action");
  create_course(53120, "Quincy Modlin", "GSR", 240, 4, 15, 15, T | R,
                time(14, 0), time(15, 50), "Ethical Evaluations and Action");
  create_course(53120, "Odell Ostrowski", "GSR", 240, 4, 16, 15, T | R,
                time(16, 30), time(18, 20), "Ethical Evaluations and Action");
  create_course(53120, "Coretta Himes", "GSR", 240, 4, 7, 8, M, time(8, 30),
                time(11, 20), "Ethical Evaluations and Action");
  create_course(53120, "Todd Holsinger", "GSR", 240, 4, 11, 15, M | W,
                time(10, 0), time(11, 50), "Ethical Evaluations and Action");
  create_course(53120, "Todd Holsinger", "GSR", 240, 4, 12, 15, T | R,
                time(10, 0), time(11, 50), "Ethical Evaluations and Action");
  create_course(53120, "Henry Sandor", "GSR", 240, 4, 8, 8, M | W | F,
                time(8, 0), time(9, 20), "Ethical Evaluations and Action");
  create_course(53120, "Nellie Borja", "GSR", 240, 4, 13, 12, T | R,
                time(10, 0), time(11, 50), "Ethical Evaluations and Action");
  create_course(53120, "Burt Aquino", "GSR", 240, 4, 11, 15, M | W, time(8, 0),
                time(9, 50), "Ethical Evaluations and Action");
  create_course(53120, "Burt Aquino", "GSR", 240, 4, 13, 12, T | R, time(10, 0),
                time(11, 50), "Ethical Evaluations and Action");
  create_course(53120, "Billie Darrigo", "GSR", 240, 4, 4, 8, T | R,
                time(10, 0), time(11, 50), "Ethical Evaluations and Action");
  create_course(53120, "Laveta Pea", "GSR", 240, 4, 15, 15, T | R, time(10, 0),
                time(11, 50), "Ethical Evaluations and Action");
  create_course(53120, "Laveta Pea", "GSR", 240, 4, 16, 15, T | R, time(16, 30),
                time(18, 20), "Ethical Evaluations and Action");
  create_course(53120, "Angelica Licata", "GSR", 240, 4, 15, 15, M | W,
                time(13, 0), time(14, 50), "Ethical Evaluations and Action");
  create_course(53120, "Deirdre Aylesworth", "GSR", 240, 4, 15, 15, T | R,
                time(8, 0), time(9, 50), "Ethical Evaluations and Action");
  create_course(53120, "Deirdre Aylesworth", "GSR", 240, 4, 14, 15, T | R,
                time(8, 0), time(9, 50), "Ethical Evaluations and Action");
  create_course(53120, "Augustus Zito", "GSR", 240, 4, 15, 15, M | W,
                time(16, 0), time(17, 50), "Ethical Evaluations and Action");
  create_course(678932, "Edwardo Pokorny", "GSR", 300, 4, 16, 15, T | R,
                time(16, 30), time(18, 20), "General Studies Capstone");
  create_course(678932, "Corey Teets", "GSR", 300, 4, 6, 15, T | R, time(8, 0),
                time(9, 20), "General Studies Capstone");
  create_course(678932, "Todd Holsinger", "GSR", 300, 4, 15, 15, M | W,
                time(9, 0), time(10, 50), "General Studies Capstone");
  create_course(678932, "Todd Holsinger", "GSR", 300, 4, 18, 15, M | W,
                time(11, 0), time(12, 50), "General Studies Capstone");
  create_course(678932, "Todd Holsinger", "GSR", 300, 4, 15, 15, M | W,
                time(9, 0), time(10, 50), "General Studies Capstone");
  create_course(678932, "Todd Holsinger", "GSR", 300, 4, 16, 15, T | R,
                time(9, 0), time(10, 50), "General Studies Capstone");
  create_course(678932, "Amiee Broadfoot", "GSR", 300, 4, 15, 15, M | W,
                time(16, 0), time(17, 50), "General Studies Capstone");
  create_course(678932, "Amiee Broadfoot", "GSR", 300, 4, 10, 15, M | W,
                time(16, 0), time(17, 50), "General Studies Capstone");
  create_course(678932, "Keshia Creswell", "GSR", 300, 4, 16, 15, M | W,
                time(13, 0), time(14, 50), "General Studies Capstone");
  create_course(678932, "Keshia Creswell", "GSR", 300, 4, 15, 15, M | W,
                time(13, 0), time(14, 50), "General Studies Capstone");
  create_course(678932, "Laveta Pea", "GSR", 300, 4, 10, 15, T | R, time(15, 0),
                time(16, 50), "General Studies Capstone");
  create_course(678932, "Laveta Pea", "GSR", 300, 4, 7, 15, M | W, time(10, 0),
                time(11, 50), "General Studies Capstone");
  create_course(678932, "Gregory Garretson", "GSR", 300, 4, 11, 15, T | R,
                time(14, 0), time(15, 50), "General Studies Capstone");
  create_course(678932, "Gregory Garretson", "GSR", 300, 4, 14, 15, T | R,
                time(14, 0), time(15, 50), "General Studies Capstone");
  create_course(678932, "Augustus Zito", "GSR", 300, 4, 6, 15, T | R,
                time(8, 0), time(9, 20), "General Studies Capstone");
  create_course(683773, "Todd Holsinger", "HIS", 101, 3, 11, 18, M | W | F,
                time(8, 0), time(8, 50), "World Civilization I");
  create_course(652288, "Todd Holsinger", "HIS", 102, 3, 16, 18, M | W | F,
                time(10, 0), time(10, 50), "World Civilization II");
  create_course(177990, "Veola Wootton", "HIS", 111, 3, 15, 15, M | W | F,
                time(10, 0), time(10, 50), "American History I");
  create_course(177990, "Kami Hansen", "HIS", 111, 3, 18, 18, M | W,
                time(11, 0), time(12, 20), "American History I");
  create_course(419092, "Tawna Bradstreet", "HIS", 112, 3, 7, 15, T | R,
                time(14, 0), time(15, 20), "American History II");
  create_course(419092, "Tawna Bradstreet", "HIS", 112, 3, 15, 18, T | R,
                time(14, 0), time(15, 20), "American History II");
  create_course(419092, "Kami Hansen", "HIS", 112, 3, 11, 15, M | W,
                time(8, 30), time(9, 50), "American History II");
  create_course(565402, "Tawna Bradstreet", "HIS", 287, 3, 4, 18, W,
                time(16, 0), time(18, 50), "Research Methods in History");
  create_course(953961, "Jannie Pastor", "HIS", 322, 3, 14, 15, T | R,
                time(18, 0), time(19, 20), "Cultural Geography");
  create_course(350164, "Kami Hansen", "HIS", 331, 3, 17, 15, M | W,
                time(10, 0), time(11, 20), "His of Am Deaf Comm");
  create_course(134557, "Kami Hansen", "HIS", 332, 3, 8, 18, M | W, time(8, 30),
                time(9, 50), "Mass Media & Deaf Community");
  create_course(557890, "Tracey Sherrard", "HIS", 380, 3, 9, 15, T | R,
                time(15, 30), time(16, 50), "The History of Sexuality");
  create_course(600639, "Tawna Bradstreet", "HIS", 460, 3, 5, 18, T | R,
                time(16, 0), time(17, 20), "American Colonial History");
  create_course(403688, "Tawna Bradstreet", "HIS", 493, 3, 3, 15, W,
                time(16, 0), time(18, 50), "Senior Seminar II");
  create_course(682939, "Nova Christon", "HIS", 495, 1, 1, 15, W, time(17, 0),
                time(19, 50), "Special Topics");
  create_course(90206, "Todd Holsinger", "HIS", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(761234, "Henry Sandor", "HIS", 731, 3, 9, 15, T, time(14, 0),
                time(16, 50), "Hist. of the American Deaf Com");
  create_course(424077, "Yon Seidel", "HON", 487, 3, 11, 12, M | W, time(10, 0),
                time(11, 0), "Prep for Senior Honors Project");
  create_course(424077, "Yon Seidel", "HON", 487, 3, 11, 12, F, time(11, 0),
                time(13, 0), "Prep for Senior Honors Project");
  create_course(424077, "Rosetta Harker", "HON", 487, 3, 11, 12, M | W,
                time(10, 0), time(11, 0), "Prep for Senior Honors Project");
  create_course(424077, "Rosetta Harker", "HON", 487, 3, 11, 12, F, time(11, 0),
                time(13, 0), "Prep for Senior Honors Project");
  create_course(281363, "Yon Seidel", "HON", 488, 1, 4, 15, H, time(0, 0),
                time(0, 0), "Honors Capstone Seminar");
  create_course(32309, "Oneida Selvy", "HON", 489, 2, 4, 12, F, time(10, 0),
                time(12, 0), "Honors Capstone Completion");
  create_course(659967, "Christinia Lorenzana", "HSL", 101, 3, 5, 17, T | R,
                time(14, 0), time(15, 20), "Comm, Culture & Consumerism");
  create_course(705239, "Anton Zahler", "HSL", 210, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Speechreading and Comm Str");
  create_course(882885, "Rosetta Harker", "HSL", 211, 1, 2, 8, T | R,
                time(13, 0), time(13, 50), "Pronunciation Skills");
  create_course(486846, "Tracey Sherrard", "HSL", 707, 3, 15, 17, M | W,
                time(9, 0), time(10, 20), "Aud & Hrng Tech for Educ and C");
  create_course(486846, "Tracey Sherrard", "HSL", 707, 3, 13, 15, M | W,
                time(9, 0), time(10, 20), "Aud & Hrng Tech for Educ and C");
  create_course(486846, "Diamond Macias", "HSL", 707, 3, 15, 17, M | W,
                time(9, 0), time(10, 20), "Aud & Hrng Tech for Educ and C");
  create_course(486846, "Diamond Macias", "HSL", 707, 3, 13, 15, M | W,
                time(9, 0), time(10, 20), "Aud & Hrng Tech for Educ and C");
  create_course(73449, "Milton Brekke", "HSL", 711, 2, 14, 20, F | S,
                time(8, 0), time(16, 50), "Cued Speech & Cued AmEng I");
  create_course(73449, "Milton Brekke", "HSL", 711, 2, 1, 20, F | S, time(8, 0),
                time(16, 50), "Cued Speech & Cued AmEng I");
  create_course(616794, "Burt Aquino", "HSL", 713, 3, 19, 15, M | W,
                time(11, 0), time(12, 20), "Language Dev. & Disorders I");
  create_course(964401, "Tomas Jiang", "HSL", 714, 3, 19, 17, R, time(16, 0),
                time(17, 20), "Speech Science");
  create_course(964401, "Tomas Jiang", "HSL", 714, 3, 19, 17, T, time(9, 0),
                time(10, 20), "Speech Science");
  create_course(143545, "Tracey Sherrard", "HSL", 719, 3, 14, 25, M,
                time(18, 0), time(20, 50), "Aural Rehabilitation II");
  create_course(143545, "Tracey Sherrard", "HSL", 719, 3, 14, 25, R,
                time(18, 0), time(20, 50), "Aural Rehabilitation II");
  create_course(143545, "Corey Teets", "HSL", 719, 3, 14, 25, M, time(18, 0),
                time(20, 50), "Aural Rehabilitation II");
  create_course(143545, "Corey Teets", "HSL", 719, 3, 14, 25, R, time(18, 0),
                time(20, 50), "Aural Rehabilitation II");
  create_course(812361, "Burt Aquino", "HSL", 723, 3, 18, 20, T | R,
                time(11, 0), time(12, 15), "Language Dev & Disorders II");
  create_course(765359, "Christinia Lorenzana", "HSL", 746, 1, 19, 22, T,
                time(11, 0), time(12, 15), "Clinical Appl of Sign Comm");
  create_course(89823, "Tomas Jiang", "HSL", 750, 3, 14, 15, M | W, time(18, 0),
                time(19, 20), "Voice & Resonance Disorders");
  create_course(731703, "Warner Maggart", "HSL", 751, 2, 13, 15, T, time(18, 0),
                time(20, 50), "Stuttering");
  create_course(368752, "Burt Aquino", "HSL", 754, 3, 14, 15, T, time(18, 0),
                time(20, 50), "Speech Sound Disorders");
  create_course(622739, "Glennis Coons", "HSL", 755, 3, 18, 20, W, time(18, 0),
                time(20, 50), "Neurogenic Speech &Lang Disord");
  create_course(770795, "Tomas Jiang", "HSL", 760, 3, 14, 17, W, time(18, 0),
                time(20, 50), "Swallowing Disorders");
  create_course(516883, "Anton Zahler", "HSL", 771, 1, 19, 25, H, time(0, 0),
                time(0, 0), "Clinical Prac: Aural Rehab");
  create_course(246666, "Anton Zahler", "HSL", 774, 1, 11, 20, H, time(0, 0),
                time(0, 0), "Clinical Prac:Speech-Lang Path");
  create_course(246666, "Shirly Bensley", "HSL", 774, 1, 7, 25, H, time(0, 0),
                time(0, 0), "Clinical Prac:Speech-Lang Path");
  create_course(29970, "Rosetta Harker", "HSL", 784, 3, 17, 20, M | W,
                time(16, 0), time(17, 20), "Research Methodology in HSLS");
  create_course(29970, "Rosetta Harker", "HSL", 784, 3, 13, 20, M | W,
                time(16, 0), time(17, 20), "Research Methodology in HSLS");
  create_course(29970, "Glennis Coons", "HSL", 784, 3, 17, 20, M | W,
                time(16, 0), time(17, 20), "Research Methodology in HSLS");
  create_course(29970, "Glennis Coons", "HSL", 784, 3, 13, 20, M | W,
                time(16, 0), time(17, 20), "Research Methodology in HSLS");
  create_course(943235, "Leatrice Walck", "HSL", 785, 3, 11, 10, T | R,
                time(16, 0), time(17, 20), "Pharmacology");
  create_course(638941, "Ashely Tellis", "HSL", 791, 4, 14, 15, H, time(0, 0),
                time(0, 0), "Internship in Speech-Lang Path");
  create_course(638941, "Ashely Tellis", "HSL", 791, 4, 14, 15, H, time(0, 0),
                time(0, 0), "Internship in Speech-Lang Path");
  create_course(853179, "Burt Aquino", "HSL", 794, 1, 3, 25, F, time(13, 30),
                time(14, 20), "Preparing a Resrch Proposal");
  create_course(480375, "Shirly Bensley", "HSL", 795, 1, 20, 22, R, time(17, 0),
                time(17, 50), "Special Topics");
  create_course(480375, "Shirly Bensley", "HSL", 795, 1, 19, 17, T | R,
                time(11, 0), time(12, 20), "Special Topics");
  create_course(480375, "Glennis Coons", "HSL", 795, 1, 19, 17, R, time(11, 0),
                time(13, 50), "Special Topics");
  create_course(355491, "Rosetta Harker", "HSL", 797, 3, 1, 15, H, time(0, 0),
                time(0, 0), "Thesis");
  create_course(499574, "Diamond Macias", "HSL", 814, 1, 12, 15, F, time(8, 30),
                time(9, 20), "Instrumentation Lab");
  create_course(773528, "Una Worster", "HSL", 815, 3, 12, 15, R, time(17, 0),
                time(19, 50), "Acoustics and Psychoacoustics");
  create_course(559171, "Alphonso Lowenstein", "HSL", 817, 3, 12, 15, T,
                time(17, 0), time(19, 50), "Antmy/Physiology/Audtry/Vstblr");
  create_course(54449, "Una Worster", "HSL", 818, 3, 12, 15, R, time(17, 30),
                time(20, 0), "Acoustic Phonetics");
  create_course(970951, "Roselia Whisnant", "HSL", 821, 3, 14, 15, R,
                time(18, 0), time(20, 50), "Infrmtnl COU & Mltcltrl Issues");
  create_course(973, "Rosetta Harker", "HSL", 824, 3, 19, 28, T, time(16, 0),
                time(18, 50), "Aural Rehabilitation: Adults");
  create_course(973, "Rosetta Harker", "HSL", 824, 3, 12, 15, T, time(16, 0),
                time(18, 50), "Aural Rehabilitation: Adults");
  create_course(973, "Diamond Macias", "HSL", 824, 3, 19, 28, T, time(16, 0),
                time(18, 50), "Aural Rehabilitation: Adults");
  create_course(973, "Diamond Macias", "HSL", 824, 3, 12, 15, T, time(16, 0),
                time(18, 50), "Aural Rehabilitation: Adults");
  create_course(535607, "Gertrude Schulte", "HSL", 826, 3, 12, 15, R,
                time(17, 30), time(20, 20), "Aural Rehabilitation:Pediatric");
  create_course(966938, "Gertrude Schulte", "HSL", 834, 4, 12, 15, M | W,
                time(16, 0), time(17, 50), "Diagnostic Audiology");
  create_course(81098, "Jeane Guyer", "HSL", 835, 3, 12, 15, M, time(18, 0),
                time(20, 50), "Vestibular Assmt & Mgmt");
  create_course(76459, "Jeane Guyer", "HSL", 840, 1, 12, 12, H, time(0, 0),
                time(0, 0), "Introduction to Practicum");
  create_course(76459, "Corey Teets", "HSL", 840, 1, 12, 12, H, time(0, 0),
                time(0, 0), "Introduction to Practicum");
  create_course(129665, "Gertrude Schulte", "HSL", 841, 2, 12, 15, H,
                time(0, 0), time(0, 0), "Clinical Prac: Diag: Audiology");
  create_course(129665, "Corey Teets", "HSL", 841, 2, 12, 15, T, time(0, 0),
                time(0, 0), "Clinical Prac: Diag: Audiology");
  create_course(363547, "Diamond Macias", "HSL", 842, 1, 6, 25, H, time(0, 0),
                time(0, 0), "Clin Pract: Aural Rehab");
  create_course(363547, "Ashely Tellis", "HSL", 842, 1, 6, 12, W, time(0, 0),
                time(0, 0), "Clin Pract: Aural Rehab");
  create_course(47763, "Christinia Lorenzana", "HSL", 846, 1, 12, 14, F,
                time(16, 0), time(16, 50), "Clinical App of Sign Comm I");
  create_course(239073, "Christinia Lorenzana", "HSL", 847, 1, 12, 14, F,
                time(16, 0), time(16, 50), "Clinical App of Sign Comm II");
  create_course(844055, "Leticia Hedin", "HSL", 850, 3, 12, 15, T, time(18, 0),
                time(20, 50), "Amplification I");
  create_course(794931, "Lashaun Pasha", "HSL", 852, 3, 12, 20, W, time(17, 0),
                time(19, 50), "Amplification II");
  create_course(426332, "Gertrude Schulte", "HSL", 855, 3, 12, 15, T,
                time(18, 0), time(20, 50), "Communication Technology");
  create_course(792250, "Diamond Macias", "HSL", 858, 3, 12, 15, W,
                time(17, 30), time(20, 20), "Cochlear Implants");
  create_course(871037, "Viola Grayer", "HSL", 861, 3, 12, 15, W, time(18, 0),
                time(20, 50), "Pediatric & Educational Aud");
  create_course(847740, "Gertrude Schulte", "HSL", 862, 3, 12, 15, W,
                time(18, 0), time(20, 50), "Central Auditory Processing");
  create_course(379911, "Glennis Coons", "HSL", 863, 2, 12, 15, M, time(18, 0),
                time(19, 50), "Community and Industrial Aud");
  create_course(605196, "Laverne Conely", "HSL", 866, 3, 12, 24, T,
                time(17, 30), time(20, 20), "Elctrphysiolgcl Msures in Aud.");
  create_course(498065, "Lavina Wurster", "HSL", 870, 2, 12, 15, M,
                time(17, 30), time(20, 0), "Smnr in Medical Audiology");
  create_course(200240, "Laverne Conely", "HSL", 873, 3, 12, 15, T, time(18, 0),
                time(20, 50), "Private Pract Dev/Clinic Mgmt");
  create_course(717131, "Jeane Guyer", "HSL", 880, 2, 12, 15, H, time(0, 0),
                time(0, 0), "Internship in Audiology");
  create_course(717131, "Jeane Guyer", "HSL", 880, 2, 12, 15, H, time(0, 0),
                time(0, 0), "Internship in Audiology");
  create_course(717131, "Roselia Whisnant", "HSL", 880, 2, 12, 15, H,
                time(0, 0), time(0, 0), "Internship in Audiology");
  create_course(124427, "Una Worster", "HSL", 883, 1, 5, 10, H, time(0, 0),
                time(0, 0), "Research Project in Audiology");
  create_course(124427, "Una Worster", "HSL", 883, 1, 2, 15, F, time(13, 0),
                time(15, 50), "Research Project in Audiology");
  create_course(124427, "Rosetta Harker", "HSL", 883, 1, 3, 10, H, time(0, 0),
                time(0, 0), "Research Project in Audiology");
  create_course(124427, "Jeane Guyer", "HSL", 883, 1, 7, 10, H, time(0, 0),
                time(0, 0), "Research Project in Audiology");
  create_course(124427, "Jeane Guyer", "HSL", 883, 1, 8, 15, F, time(13, 0),
                time(13, 50), "Research Project in Audiology");
  create_course(124427, "Jordon Fiorillo", "HSL", 883, 1, 1, 10, H, time(0, 0),
                time(0, 0), "Research Project in Audiology");
  create_course(124427, "Jordon Fiorillo", "HSL", 883, 1, 1, 15, F, time(13, 0),
                time(13, 50), "Research Project in Audiology");
  create_course(124427, "Gertrude Schulte", "HSL", 883, 1, 4, 10, H, time(0, 0),
                time(0, 0), "Research Project in Audiology");
  create_course(124427, "Gertrude Schulte", "HSL", 883, 1, 5, 15, F,
                time(13, 0), time(13, 50), "Research Project in Audiology");
  create_course(124427, "Diamond Macias", "HSL", 883, 1, 10, 10, H, time(0, 0),
                time(0, 0), "Research Project in Audiology");
  create_course(124427, "Diamond Macias", "HSL", 883, 1, 15, 15, F, time(13, 0),
                time(13, 50), "Research Project in Audiology");
  create_course(432848, "Jeane Guyer", "HSL", 890, 1, 8, 12, H, time(0, 0),
                time(0, 0), "Externship");
  create_course(432848, "Jeane Guyer", "HSL", 890, 1, 9, 12, H, time(0, 0),
                time(0, 0), "Externship");
  create_course(432848, "Lashaun Pasha", "HSL", 890, 1, 8, 12, H, time(0, 0),
                time(0, 0), "Externship");
  create_course(978048, "Glennis Coons", "HSL", 894, 3, 5, 10, H, time(0, 0),
                time(0, 0), "Pblshng,Grnt,Wrtng & Prstn Skl");
  create_course(797443, "Jordon Fiorillo", "HSL", 895, 1, 2, 10, H, time(0, 0),
                time(0, 0), "Special Topics");
  create_course(797443, "Jordon Fiorillo", "HSL", 895, 1, 2, 10, H, time(0, 0),
                time(0, 0), "Special Topics");
  create_course(467630, "Diamond Macias", "HSL", 896, 2, 1, 15, H, time(0, 0),
                time(0, 0), "Practicum in Univ Instruction");
  create_course(266323, "Rosetta Harker", "HSL", 899, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(266323, "Jeane Guyer", "HSL", 899, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(266323, "Jordon Fiorillo", "HSL", 899, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(266323, "Diamond Macias", "HSL", 899, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(266323, "Tomas Jiang", "HSL", 899, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(955660, "Jordon Fiorillo", "HSL", 900, 1, 2, 10, H, time(0, 0),
                time(0, 0), "Dissertation");
  create_course(955660, "Jordon Fiorillo", "HSL", 900, 1, 3, 15, H, time(0, 0),
                time(0, 0), "Dissertation");
  create_course(955660, "Diamond Macias", "HSL", 900, 1, 2, 10, H, time(0, 0),
                time(0, 0), "Dissertation");
  create_course(955660, "Diamond Macias", "HSL", 900, 1, 1, 10, H, time(0, 0),
                time(0, 0), "Dissertation");
  create_course(638912, "Amiee Broadfoot", "IDP", 770, 3, 5, 15, M, time(13, 0),
                time(15, 50), "Intro to Intl Development");
  create_course(851930, "Amiee Broadfoot", "IDP", 772, 3, 5, 15, M, time(9, 0),
                time(11, 50), "Intl Dev w/People w/Disab");
  create_course(752196, "Corey Teets", "IDP", 773, 3, 6, 15, H, time(0, 0),
                time(0, 0), "Gender, Disability & Dvlpmt");
  create_course(306914, "Corey Teets", "IDP", 780, 3, 3, 15, H, time(0, 0),
                time(0, 0), "Spv Prc for MA Dgr in Intl Dev");
  create_course(333514, "Corey Teets", "IDP", 781, 6, 4, 10, H, time(0, 0),
                time(0, 0), "Spv Intrshp fr MA in Intl Devl");
  create_course(333514, "Corey Teets", "IDP", 781, 6, 1, 15, H, time(0, 0),
                time(0, 0), "Spv Intrshp fr MA in Intl Devl");
  create_course(303081, "Keshia Creswell", "INT", 101, 3, 7, 15, H, time(0, 0),
                time(0, 0), "Intro to Interpreting");
  create_course(303081, "Keshia Creswell", "INT", 101, 3, 7, 15, H, time(0, 0),
                time(0, 0), "Intro to Interpreting");
  create_course(303081, "Todd Holsinger", "INT", 101, 3, 8, 15, T | R,
                time(9, 30), time(10, 50), "Intro to Interpreting");
  create_course(303081, "Todd Holsinger", "INT", 101, 3, 15, 15, T | R,
                time(9, 30), time(10, 50), "Intro to Interpreting");
  create_course(159909, "Todd Holsinger", "INT", 223, 3, 7, 15, T | R,
                time(14, 0), time(15, 20), "Interactive Discourse Analysis");
  create_course(159909, "Todd Holsinger", "INT", 223, 3, 13, 15, T | R,
                time(14, 0), time(15, 20), "Interactive Discourse Analysis");
  create_course(671035, "Kami Hansen", "INT", 325, 3, 13, 13, W, time(14, 0),
                time(16, 50), "Fundamentals of Interpreting");
  create_course(671035, "Estefana Thrift", "INT", 325, 3, 13, 13, W,
                time(14, 0), time(16, 50), "Fundamentals of Interpreting");
  create_course(780441, "Roselia Whisnant", "INT", 340, 3, 14, 9, R,
                time(17, 30), time(20, 20), "Interpreting Interaction");
  create_course(780441, "Nova Christon", "INT", 340, 3, 14, 9, R, time(17, 30),
                time(20, 20), "Interpreting Interaction");
  create_course(388873, "Tracey Sherrard", "INT", 344, 3, 15, 15, T,
                time(17, 30), time(20, 20), "Intrprtng Intraction: Medical");
  create_course(568152, "Warner Maggart", "INT", 346, 3, 7, 15, M, time(13, 0),
                time(15, 50), "Discourse & Field Application");
  create_course(568152, "Bernarda Burgess", "INT", 346, 3, 8, 15, M,
                time(13, 0), time(15, 50), "Discourse & Field Application");
  create_course(816947, "Mica Dildine", "INT", 443, 3, 7, 9, W, time(13, 0),
                time(15, 50), "Interpreting Interaction: Edu");
  create_course(816947, "Warner Maggart", "INT", 443, 3, 7, 9, W, time(13, 0),
                time(15, 50), "Interpreting Interaction: Edu");
  create_course(174340, "Nova Christon", "INT", 453, 3, 10, 9, T, time(16, 30),
                time(19, 20), "Interpreting Intrctn:Busn-Gov");
  create_course(174340, "Alfreda Kotter", "INT", 453, 3, 9, 9, T, time(17, 30),
                time(20, 20), "Interpreting Intrctn:Busn-Gov");
  create_course(196984, "Bernarda Burgess", "INT", 455, 3, 7, 9, M, time(13, 0),
                time(15, 50), "Discourse & Field Observations");
  create_course(196984, "Jeane Guyer", "INT", 455, 3, 7, 9, M, time(13, 0),
                time(15, 50), "Discourse & Field Observations");
  create_course(274626, "Odell Ostrowski", "INT", 492, 3, 15, 15, T,
                time(18, 0), time(20, 50), "Senior Seminar Prjct & Portf");
  create_course(274626, "Christinia Lorenzana", "INT", 492, 3, 15, 15, T,
                time(18, 0), time(20, 50), "Senior Seminar Prjct & Portf");
  create_course(431590, "Jeane Guyer", "INT", 494, 9, 15, 15, T, time(14, 0),
                time(16, 50), "Senior Internship");
  create_course(96711, "Warner Maggart", "INT", 595, 1, 3, 15, W, time(13, 0),
                time(15, 50), "Special Topics");
  create_course(96711, "Warner Maggart", "INT", 595, 1, 10, 15, W, time(13, 0),
                time(15, 50), "Special Topics");
  create_course(96711, "Dick Strahl", "INT", 595, 1, 1, 15, T | R, time(8, 0),
                time(9, 20), "Special Topics");
  create_course(96711, "Dick Strahl", "INT", 595, 1, 7, 15, T | R, time(8, 0),
                time(9, 20), "Special Topics");
  create_course(96711, "Dick Strahl", "INT", 595, 1, 2, 15, T | R, time(8, 0),
                time(9, 20), "Special Topics");
  create_course(96711, "Dick Strahl", "INT", 595, 1, 3, 15, T | R, time(8, 0),
                time(9, 20), "Special Topics");
  create_course(83206, "Melita Crafford", "INT", 701, 3, 11, 15, M, time(17, 0),
                time(19, 50), "History of Interpreting");
  create_course(325325, "Odell Ostrowski", "INT", 707, 3, 12, 15, R,
                time(17, 0), time(19, 50), "Structure of Language");
  create_course(396753, "Lavina Wurster", "INT", 720, 3, 11, 15, T,
                time(13, 30), time(16, 20), "Discourse Analysis Interpreter");
  create_course(222750, "Melita Crafford", "INT", 726, 3, 12, 12, W,
                time(17, 0), time(19, 50), "Fundamentals of Interpreting");
  create_course(498156, "Lovie Lubin", "INT", 734, 3, 10, 15, T, time(14, 0),
                time(16, 50), "Interpreting Legal Discourse");
  create_course(498156, "Dick Strahl", "INT", 734, 3, 10, 15, T, time(14, 0),
                time(16, 50), "Interpreting Legal Discourse");
  create_course(563096, "Melita Crafford", "INT", 735, 3, 10, 15, W,
                time(14, 0), time(16, 50), "Interpreting Mental Health");
  create_course(941151, "Lovie Lubin", "INT", 736, 3, 8, 15, M, time(14, 0),
                time(16, 50), "Professional Practice I");
  create_course(310250, "Lovie Lubin", "INT", 744, 3, 5, 12, M, time(17, 0),
                time(19, 50), "Interpting Discourse Education");
  create_course(362678, "Jeane Guyer", "INT", 746, 3, 6, 12, R, time(14, 0),
                time(16, 50), "Interpreting Business and Gove");
  create_course(925925, "Lovie Lubin", "INT", 749, 3, 5, 15, W, time(14, 0),
                time(16, 50), "Professional Practice II");
  create_course(328846, "Melita Crafford", "INT", 750, 3, 22, 25, R,
                time(17, 0), time(19, 50), "Rsrch Mthds in Interpretation");
  create_course(328846, "Lovie Lubin", "INT", 750, 3, 22, 25, R, time(17, 0),
                time(19, 50), "Rsrch Mthds in Interpretation");
  create_course(776643, "Diamond Macias", "INT", 754, 3, 4, 15, R, time(14, 0),
                time(16, 50), "Interpreting Medical Discourse");
  create_course(33083, "Lovie Lubin", "INT", 777, 3, 7, 15, T, time(17, 0),
                time(19, 50), "Guided Research Project I");
  create_course(113204, "Lovie Lubin", "INT", 778, 3, 7, 15, T, time(17, 0),
                time(19, 50), "Guided Research Project II");
  create_course(433413, "Warner Maggart", "INT", 781, 3, 4, 15, W, time(17, 0),
                time(19, 50), "Field Rotation");
  create_course(937304, "Dick Strahl", "INT", 785, 3, 1, 15, H, time(0, 0),
                time(0, 0), "Internship");
  create_course(865388, "Laura Scannell", "INT", 795, 1, 1, 15, H, time(10, 0),
                time(12, 50), "Special Topics");
  create_course(865388, "Laura Scannell", "INT", 795, 1, 1, 15, H, time(14, 0),
                time(16, 0), "Special Topics");
  create_course(865388, "Laura Scannell", "INT", 795, 1, 1, 15, F | S,
                time(10, 0), time(12, 50), "Special Topics");
  create_course(865388, "Laura Scannell", "INT", 795, 1, 1, 15, F | S,
                time(14, 0), time(15, 20), "Special Topics");
  create_course(865388, "Laura Scannell", "INT", 795, 1, 1, 15, F | S | U,
                time(10, 0), time(12, 50), "Special Topics");
  create_course(865388, "Laura Scannell", "INT", 795, 1, 1, 15, F | S | U,
                time(14, 0), time(16, 0), "Special Topics");
  create_course(865388, "Laura Scannell", "INT", 795, 1, 1, 15, M, time(10, 0),
                time(12, 50), "Special Topics");
  create_course(865388, "Laura Scannell", "INT", 795, 1, 1, 15, M, time(14, 0),
                time(16, 50), "Special Topics");
  create_course(865388, "Dick Strahl", "INT", 795, 1, 1, 15, H, time(10, 0),
                time(12, 50), "Special Topics");
  create_course(865388, "Dick Strahl", "INT", 795, 1, 1, 15, H, time(14, 0),
                time(16, 0), "Special Topics");
  create_course(865388, "Dick Strahl", "INT", 795, 1, 1, 15, F | S, time(10, 0),
                time(12, 50), "Special Topics");
  create_course(865388, "Dick Strahl", "INT", 795, 1, 1, 15, F | S, time(14, 0),
                time(15, 20), "Special Topics");
  create_course(865388, "Dick Strahl", "INT", 795, 1, 1, 15, F | S | U,
                time(10, 0), time(12, 50), "Special Topics");
  create_course(865388, "Dick Strahl", "INT", 795, 1, 1, 15, F | S | U,
                time(14, 0), time(16, 0), "Special Topics");
  create_course(865388, "Dick Strahl", "INT", 795, 1, 1, 15, M, time(10, 0),
                time(12, 50), "Special Topics");
  create_course(865388, "Dick Strahl", "INT", 795, 1, 1, 15, M, time(14, 0),
                time(16, 50), "Special Topics");
  create_course(907437, "Lavina Wurster", "INT", 810, 3, 8, 8, W, time(17, 0),
                time(19, 50), "Intrpg Sds: Ling & Trnsl Dimns");
  create_course(775652, "Lavina Wurster", "INT", 812, 1, 8, 8, M, time(17, 0),
                time(17, 50), "Research Internship I");
  create_course(775652, "Lovie Lubin", "INT", 812, 1, 8, 8, M, time(17, 0),
                time(17, 50), "Research Internship I");
  create_course(250515, "Lavina Wurster", "INT", 813, 1, 8, 15, M, time(16, 0),
                time(16, 50), "Research Internship II");
  create_course(751153, "Melita Crafford", "INT", 820, 3, 8, 15, W, time(17, 0),
                time(19, 50), "Intpg Stds: Socio-Cult Dmnsns");
  create_course(751153, "Lovie Lubin", "INT", 820, 3, 8, 15, W, time(17, 0),
                time(19, 50), "Intpg Stds: Socio-Cult Dmnsns");
  create_course(946593, "Lavina Wurster", "INT", 821, 3, 8, 15, T, time(17, 0),
                time(19, 50), "Interpreting Pedagogy I");
  create_course(986742, "Diamond Macias", "INT", 830, 3, 4, 8, R, time(17, 0),
                time(19, 50), "Intpg Stds: Cog & Psych Dmnsns");
  create_course(204573, "Odell Ostrowski", "INT", 831, 3, 2, 8, T, time(17, 0),
                time(19, 50), "Interpreting Pedagogy II");
  create_course(819610, "Dick Strahl", "INT", 832, 1, 7, 8, M, time(18, 0),
                time(18, 50), "Research Internship III");
  create_course(722302, "Dick Strahl", "INT", 833, 1, 5, 15, M, time(16, 0),
                time(16, 50), "Research Internship IV");
  create_course(763166, "Odell Ostrowski", "INT", 841, 3, 2, 15, R, time(17, 0),
                time(19, 50), "Doctoral Teaching Intrshp I");
  create_course(457179, "Dick Strahl", "INT", 842, 3, 3, 8, W, time(17, 0),
                time(19, 50), "Doctoral Teaching Intrshp II");
  create_course(850461, "Lavina Wurster", "INT", 845, 3, 3, 15, R, time(14, 0),
                time(16, 50), "Guided Research Project");
  create_course(837555, "Lovie Lubin", "INT", 850, 3, 5, 8, R, time(17, 0),
                time(19, 50), "Dissertation Proposal");
  create_course(826149, "Tracey Sherrard", "INT", 895, 1, 8, 10, H, time(0, 0),
                time(0, 0), "Special Topics");
  create_course(419741, "Diamond Macias", "INT", 899, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(419741, "Oneida Selvy", "INT", 899, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(68377, "Diamond Macias", "INT", 900, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(68377, "Diamond Macias", "INT", 900, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(68377, "Diamond Macias", "INT", 900, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(68377, "Diamond Macias", "INT", 900, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(68377, "Diamond Macias", "INT", 900, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(68377, "Diamond Macias", "INT", 900, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(68377, "Diamond Macias", "INT", 900, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(68377, "Melita Crafford", "INT", 900, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(68377, "Lavina Wurster", "INT", 900, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(68377, "Lavina Wurster", "INT", 900, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(68377, "Lavina Wurster", "INT", 900, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(68377, "Lavina Wurster", "INT", 900, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(68377, "Lovie Lubin", "INT", 900, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(68377, "Lovie Lubin", "INT", 900, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(68377, "Lovie Lubin", "INT", 900, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(68377, "Lovie Lubin", "INT", 900, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(68377, "Lovie Lubin", "INT", 900, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(68377, "Lovie Lubin", "INT", 900, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(68377, "Gregory Garretson", "INT", 900, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(68377, "Gregory Garretson", "INT", 900, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(68377, "Gregory Garretson", "INT", 900, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(68377, "Gregory Garretson", "INT", 900, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(68377, "Gregory Garretson", "INT", 900, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(68377, "Gregory Garretson", "INT", 900, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(68377, "Gregory Garretson", "INT", 900, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(992055, "Todd Holsinger", "IST", 300, 4, 9, 15, H, time(0, 0),
                time(0, 0), "International Internship");
  create_course(665237, "Warner Maggart", "ITF", 702, 3, 11, 15, H, time(0, 0),
                time(0, 0), "Ldrsp Persp on Families DHH");
  create_course(665237, "Coretta Himes", "ITF", 702, 3, 11, 15, H, time(0, 0),
                time(0, 0), "Ldrsp Persp on Families DHH");
  create_course(665237, "Dick Strahl", "ITF", 702, 3, 11, 15, H, time(0, 0),
                time(0, 0), "Ldrsp Persp on Families DHH");
  create_course(466280, "Coretta Himes", "ITF", 703, 3, 10, 15, H, time(0, 0),
                time(0, 0), "Str for Dev Com, Lang&Cog DHH");
  create_course(466280, "Rosetta Harker", "ITF", 703, 3, 10, 15, H, time(0, 0),
                time(0, 0), "Str for Dev Com, Lang&Cog DHH");
  create_course(576579, "Coretta Himes", "ITF", 705, 1, 8, 15, H, time(0, 0),
                time(0, 0), "DHH ITF Capstone Project Pt 1");
  create_course(576579, "Dick Strahl", "ITF", 705, 1, 8, 15, H, time(0, 0),
                time(0, 0), "DHH ITF Capstone Project Pt 1");
  create_course(720369, "Coretta Himes", "ITF", 706, 2, 7, 15, H, time(0, 0),
                time(0, 0), "DHH ITF Capstone Project Pt II");
  create_course(720369, "Dick Strahl", "ITF", 706, 2, 7, 15, H, time(0, 0),
                time(0, 0), "DHH ITF Capstone Project Pt II");
  create_course(758112, "Nisha Pegues", "ITS", 101, 3, 10, 15, T | R,
                time(17, 0), time(18, 20), "Computer Applications I");
  create_course(758112, "Nisha Pegues", "ITS", 101, 3, 7, 15, T | R, time(8, 0),
                time(9, 20), "Computer Applications I");
  create_course(758112, "Tracey Sherrard", "ITS", 101, 3, 6, 15, M | W,
                time(17, 0), time(18, 20), "Computer Applications I");
  create_course(743804, "Nisha Pegues", "ITS", 105, 3, 11, 15, T | R,
                time(11, 0), time(12, 20), "Information Tech. Fund.");
  create_course(743804, "Nisha Pegues", "ITS", 105, 3, 8, 15, T | R,
                time(14, 0), time(15, 20), "Information Tech. Fund.");
  create_course(590919, "Herbert Myhre", "ITS", 110, 3, 10, 15, M | W,
                time(17, 0), time(18, 20), "Programming Fundamentals");
  create_course(590919, "Dick Strahl", "ITS", 110, 3, 5, 15, T | R, time(11, 0),
                time(12, 20), "Programming Fundamentals");
  create_course(620414, "Deloris Conroy", "ITS", 202, 3, 13, 15, T | R,
                time(11, 0), time(12, 20), "Computer Hardware Essentials");
  create_course(781729, "Nisha Pegues", "ITS", 203, 3, 15, 15, T | R,
                time(8, 0), time(9, 20), "Operating Systems Essentials");
  create_course(274246, "Dick Strahl", "ITS", 211, 3, 7, 15, T | R, time(9, 30),
                time(10, 50), "Programming Language I");
  create_course(812063, "Herbert Myhre", "ITS", 212, 3, 10, 15, M | W,
                time(12, 30), time(13, 50), "Programming Language II");
  create_course(812063, "Dick Strahl", "ITS", 212, 3, 8, 15, T | R, time(9, 30),
                time(10, 50), "Programming Language II");
  create_course(822811, "Dick Strahl", "ITS", 252, 3, 13, 15, T | R,
                time(11, 0), time(12, 20), "Intro to Web Technologies");
  create_course(210765, "Estefana Thrift", "ITS", 321, 3, 11, 15, R,
                time(18, 0), time(20, 50), "Database Fundamentals");
  create_course(519208, "Estefana Thrift", "ITS", 322, 3, 9, 15, R, time(18, 0),
                time(20, 50), "Client/Server Database Appl");
  create_course(646901, "Nisha Pegues", "ITS", 331, 3, 11, 15, T | R,
                time(15, 30), time(16, 50), "Computer Networking Essentials");
  create_course(820507, "Deloris Conroy", "ITS", 341, 3, 4, 15, T | R,
                time(8, 0), time(9, 20), "Systems Analysis & Design");
  create_course(503781, "Herbert Myhre", "ITS", 352, 3, 8, 15, M | W,
                time(15, 0), time(16, 20), "Web Programming");
  create_course(553976, "Deloris Conroy", "ITS", 361, 3, 8, 15, T | R,
                time(15, 0), time(16, 20), "Information Security Fndmtls");
  create_course(391870, "Estefana Thrift", "ITS", 381, 3, 6, 15, M, time(18, 0),
                time(20, 50), "Social & Prof. Issues in IT");
  create_course(119075, "Estefana Thrift", "ITS", 423, 3, 10, 15, M,
                time(18, 0), time(20, 50), "Database Administration");
  create_course(640407, "Nisha Pegues", "ITS", 432, 3, 5, 15, T | R,
                time(9, 30), time(10, 50), "Network Adm-Client Support");
  create_course(38464, "Nisha Pegues", "ITS", 433, 3, 3, 15, T | R, time(9, 30),
                time(10, 50), "Network Adm.-Server Support");
  create_course(401740, "Dick Strahl", "ITS", 491, 3, 6, 15, M | W,
                time(12, 30), time(13, 50), "Senior Capstone Project I");
  create_course(415601, "Dick Strahl", "ITS", 492, 3, 6, 15, T | R, time(14, 0),
                time(15, 20), "Senior Capstone Project II");
  create_course(200743, "Herbert Myhre", "ITS", 495, 1, 7, 15, M | W,
                time(15, 0), time(16, 20), "Special Topics");
  create_course(647319, "Anton Zahler", "LIN", 101, 3, 4, 15, H, time(0, 0),
                time(0, 0), "Sign Lang & Sign Systems");
  create_course(647319, "Joy Greenley", "LIN", 101, 3, 13, 15, T | R,
                time(9, 30), time(10, 50), "Sign Lang & Sign Systems");
  create_course(647319, "Joy Greenley", "LIN", 101, 3, 10, 15, T | R,
                time(8, 0), time(9, 20), "Sign Lang & Sign Systems");
  create_course(647319, "Ali Forst", "LIN", 101, 3, 10, 15, T | R, time(9, 30),
                time(10, 50), "Sign Lang & Sign Systems");
  create_course(647319, "Ali Forst", "LIN", 101, 3, 12, 15, T | R, time(14, 0),
                time(15, 20), "Sign Lang & Sign Systems");
  create_course(647319, "Angelica Licata", "LIN", 101, 3, 12, 15, T | R,
                time(11, 0), time(12, 20), "Sign Lang & Sign Systems");
  create_course(647319, "Angelica Licata", "LIN", 101, 3, 7, 15, T | R,
                time(11, 0), time(12, 20), "Sign Lang & Sign Systems");
  create_course(647319, "Angelica Licata", "LIN", 101, 3, 7, 15, T | R,
                time(16, 0), time(17, 20), "Sign Lang & Sign Systems");
  create_course(647319, "Columbus Knighton", "LIN", 101, 3, 12, 15, T | R,
                time(8, 0), time(9, 20), "Sign Lang & Sign Systems");
  create_course(647319, "Columbus Knighton", "LIN", 101, 3, 14, 15, T | R,
                time(14, 0), time(15, 20), "Sign Lang & Sign Systems");
  create_course(647319, "Columbus Knighton", "LIN", 101, 3, 11, 15, T | R,
                time(11, 0), time(12, 20), "Sign Lang & Sign Systems");
  create_course(588757, "Joy Greenley", "LIN", 263, 3, 14, 15, T | R,
                time(9, 30), time(10, 50), "Intro to the Struct of ASL");
  create_course(588757, "Joy Greenley", "LIN", 263, 3, 10, 15, T | R,
                time(11, 0), time(12, 20), "Intro to the Struct of ASL");
  create_course(588757, "Joy Greenley", "LIN", 263, 3, 7, 15, H, time(0, 0),
                time(0, 0), "Intro to the Struct of ASL");
  create_course(588757, "Joy Greenley", "LIN", 263, 3, 16, 15, T | R,
                time(11, 0), time(12, 20), "Intro to the Struct of ASL");
  create_course(627166, "Loralee Penman", "LIN", 301, 3, 10, 15, T | R,
                time(14, 0), time(15, 20), "Intro to Phonology and Morph");
  create_course(739701, "Nellie Borja", "LIN", 302, 3, 5, 15, T | R,
                time(14, 0), time(15, 20), "Intro to Syntax and Discourse");
  create_course(448296, "Ali Forst", "LIN", 480, 3, 8, 15, W, time(9, 0),
                time(11, 50), "Linguistics Research Experienc");
  create_course(664393, "Anton Zahler", "LIN", 510, 3, 0, 15, H, time(0, 0),
                time(0, 0), "Intro to First and Second Lang");
  create_course(664393, "Anton Zahler", "LIN", 510, 3, 13, 15, H, time(0, 0),
                time(0, 0), "Intro to First and Second Lang");
  create_course(664393, "Glennis Coons", "LIN", 510, 3, 17, 15, W, time(9, 0),
                time(11, 50), "Intro to First and Second Lang");
  create_course(664393, "Glennis Coons", "LIN", 510, 3, 3, 15, W, time(9, 0),
                time(11, 50), "Intro to First and Second Lang");
  create_course(664393, "Glennis Coons", "LIN", 510, 3, 1, 15, H, time(0, 0),
                time(0, 0), "Intro to First and Second Lang");
  create_course(664393, "Glennis Coons", "LIN", 510, 3, 14, 15, H, time(0, 0),
                time(0, 0), "Intro to First and Second Lang");
  create_course(664393, "Gertrude Schulte", "LIN", 510, 3, 0, 15, H, time(0, 0),
                time(0, 0), "Intro to First and Second Lang");
  create_course(664393, "Gertrude Schulte", "LIN", 510, 3, 12, 15, H,
                time(0, 0), time(0, 0), "Intro to First and Second Lang");
  create_course(265291, "Carolina Plantz", "LIN", 537, 3, 2, 15, M, time(17, 0),
                time(19, 50), "Iconicity and Depiction");
  create_course(265291, "Carolina Plantz", "LIN", 537, 3, 8, 15, M, time(17, 0),
                time(19, 50), "Iconicity and Depiction");
  create_course(265291, "Carolina Plantz", "LIN", 537, 3, 0, 15, T | R,
                time(16, 0), time(17, 20), "Iconicity and Depiction");
  create_course(265291, "Carolina Plantz", "LIN", 537, 3, 4, 15, T | R,
                time(16, 0), time(17, 20), "Iconicity and Depiction");
  create_course(829426, "Henry Sandor", "LIN", 595, 1, 2, 15, M, time(13, 0),
                time(15, 50), "Special Topics");
  create_course(829426, "Henry Sandor", "LIN", 595, 1, 5, 15, M, time(13, 0),
                time(15, 50), "Special Topics");
  create_course(829426, "Joy Greenley", "LIN", 595, 1, 0, 15, T, time(13, 0),
                time(15, 50), "Special Topics");
  create_course(829426, "Joy Greenley", "LIN", 595, 1, 6, 15, T, time(13, 0),
                time(15, 50), "Special Topics");
  create_course(829426, "Nellie Borja", "LIN", 595, 1, 0, 15, T, time(13, 0),
                time(15, 50), "Special Topics");
  create_course(829426, "Nellie Borja", "LIN", 595, 1, 6, 15, T, time(13, 0),
                time(15, 50), "Special Topics");
  create_course(60812, "Glennis Coons", "LIN", 702, 4, 9, 15, T | R,
                time(14, 0), time(15, 50), "Generative Linguistics I");
  create_course(850792, "Ali Forst", "LIN", 703, 1, 6, 15, F, time(10, 0),
                time(11, 50), "Proseminar");
  create_course(762657, "Nellie Borja", "LIN", 707, 4, 9, 15, R, time(9, 0),
                time(12, 50), "Structure of Language:Eng&ASL");
  create_course(481239, "Carolina Plantz", "LIN", 721, 4, 7, 15, M | W,
                time(16, 30), time(18, 20), "Cognitive Linguistics I");
  create_course(407664, "Carolina Plantz", "LIN", 732, 3, 6, 15, T, time(9, 30),
                time(12, 20), "Cognitive Linguistics II");
  create_course(567702, "Glennis Coons", "LIN", 733, 3, 8, 15, R, time(9, 30),
                time(12, 20), "Generative Linguistics II");
  create_course(531567, "Ali Forst", "LIN", 741, 3, 9, 15, M, time(13, 0),
                time(15, 50), "Sociolinguistics in Deaf Cmty");
  create_course(304523, "Henry Sandor", "LIN", 771, 4, 9, 15, W, time(13, 0),
                time(16, 50), "Field Methods");
  create_course(939851, "Ali Forst", "LIN", 799, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(939851, "Joy Greenley", "LIN", 799, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(939851, "Angelica Licata", "LIN", 799, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(679865, "Nellie Borja", "LIN", 803, 3, 1, 15, H, time(0, 0),
                time(0, 0), "Dissertation Concept Paper");
  create_course(17750, "Glennis Coons", "LIN", 812, 3, 10, 15, W, time(9, 30),
                time(12, 20), "Second Language Acquisition");
  create_course(296298, "Nellie Borja", "LIN", 899, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(296298, "Ali Forst", "LIN", 899, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(643607, "Glennis Coons", "LIN", 900, 1, 3, 15, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(643607, "Glennis Coons", "LIN", 900, 1, 4, 7, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(643607, "Linsey Khalil", "LIN", 900, 1, 1, 15, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(643607, "Linsey Khalil", "LIN", 900, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(643607, "Henry Sandor", "LIN", 900, 1, 1, 15, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(643607, "Ali Forst", "LIN", 900, 1, 1, 15, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(643607, "Ali Forst", "LIN", 900, 1, 1, 7, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(643607, "Nellie Borja", "LIN", 900, 1, 1, 15, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(643607, "Nellie Borja", "LIN", 900, 1, 1, 7, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(381695, "Lashaun Pasha", "MAT", 40, 4, 17, 15, M | W | F,
                time(11, 0), time(12, 20), "Pre-College Mathematics");
  create_course(381695, "Hollie Hamada", "MAT", 40, 4, 17, 15, M | W | F,
                time(11, 0), time(12, 20), "Pre-College Mathematics");
  create_course(381695, "Keshia Creswell", "MAT", 40, 4, 17, 15, M | W | F,
                time(11, 0), time(12, 20), "Pre-College Mathematics");
  create_course(381695, "Leticia Hedin", "MAT", 40, 4, 16, 18, M | W | R | F,
                time(15, 0), time(15, 50), "Pre-College Mathematics");
  create_course(381695, "Shirly Bensley", "MAT", 40, 4, 17, 15, M | W | F,
                time(11, 0), time(12, 20), "Pre-College Mathematics");
  create_course(381695, "Melita Crafford", "MAT", 40, 4, 22, 18, M | W,
                time(8, 0), time(9, 50), "Pre-College Mathematics");
  create_course(381695, "Hassan Stoke", "MAT", 40, 4, 17, 15, M | W | F,
                time(11, 0), time(12, 20), "Pre-College Mathematics");
  create_course(381695, "Burt Aquino", "MAT", 40, 4, 17, 15, M | W | F,
                time(11, 0), time(12, 20), "Pre-College Mathematics");
  create_course(381695, "Jordon Fiorillo", "MAT", 40, 4, 17, 15, M | W | F,
                time(11, 0), time(12, 20), "Pre-College Mathematics");
  create_course(381695, "Jordon Fiorillo", "MAT", 40, 4, 18, 18, M | W | F,
                time(13, 0), time(14, 10), "Pre-College Mathematics");
  create_course(381695, "Glennis Coons", "MAT", 40, 4, 17, 15, M | W | F,
                time(11, 0), time(12, 20), "Pre-College Mathematics");
  create_course(381695, "Carolina Plantz", "MAT", 40, 4, 17, 15, M | W | F,
                time(11, 0), time(12, 20), "Pre-College Mathematics");
  create_course(381695, "Gertrude Schulte", "MAT", 40, 4, 17, 15, M | W | F,
                time(11, 0), time(12, 20), "Pre-College Mathematics");
  create_course(381695, "Adena Garrard", "MAT", 40, 4, 19, 18, M | W | R | F,
                time(11, 0), time(11, 50), "Pre-College Mathematics");
  create_course(381695, "Verona Tenney", "MAT", 40, 4, 17, 15, M | W | F,
                time(11, 0), time(12, 20), "Pre-College Mathematics");
  create_course(318119, "Adena Garrard", "MAT", 45, 4, 18, 18, M | W | R | F,
                time(9, 0), time(9, 50), "Elementary Algebra");
  create_course(286740, "Ali Forst", "MAT", 55, 4, 18, 15, M | W | R | F,
                time(8, 0), time(8, 50), "Intermediate Algebra");
  create_course(286740, "Ali Forst", "MAT", 55, 4, 14, 18, M | W | R | F,
                time(8, 0), time(8, 50), "Intermediate Algebra");
  create_course(392877, "Edwardo Pokorny", "MAT", 102, 3, 11, 15, M | W | F,
                time(9, 0), time(9, 50), "Intro Probability & Statistics");
  create_course(392877, "Edwardo Pokorny", "MAT", 102, 3, 9, 15, M | W | F,
                time(10, 0), time(10, 50), "Intro Probability & Statistics");
  create_course(392877, "Edwardo Pokorny", "MAT", 102, 3, 9, 12, M | W | F,
                time(12, 0), time(12, 50), "Intro Probability & Statistics");
  create_course(392877, "Edwardo Pokorny", "MAT", 102, 3, 10, 12, M | W | F,
                time(9, 0), time(9, 50), "Intro Probability & Statistics");
  create_course(285192, "Leticia Hedin", "MAT", 130, 4, 16, 15, M | W | F,
                time(11, 0), time(12, 25), "Precalculus");
  create_course(285192, "Leida Chadwick", "MAT", 130, 4, 15, 20, M | W | F,
                time(8, 30), time(9, 55), "Precalculus");
  create_course(285192, "Leida Chadwick", "MAT", 130, 4, 10, 20, M | W | F,
                time(11, 0), time(12, 20), "Precalculus");
  create_course(225331, "Leticia Hedin", "MAT", 140, 3, 7, 15, T | R,
                time(14, 0), time(15, 20), "Discrete Structures");
  create_course(225331, "Leticia Hedin", "MAT", 140, 3, 5, 15, M | W | F,
                time(13, 0), time(13, 50), "Discrete Structures");
  create_course(510165, "Lovie Lubin", "MAT", 150, 4, 11, 15, M | W | F,
                time(11, 0), time(12, 10), "Calculus I");
  create_course(510165, "Lovie Lubin", "MAT", 150, 4, 9, 20, M | W | F,
                time(11, 0), time(12, 20), "Calculus I");
  create_course(292235, "Mica Dildine", "MAT", 171, 3, 17, 15, T, time(17, 0),
                time(19, 50), "Bsc Cpts-Math ECE/Elem Tchr I");
  create_course(330195, "Mica Dildine", "MAT", 172, 3, 20, 15, M, time(17, 0),
                time(19, 50), "Bsc Cpts-Math ECE/Elem Tchr II");
  create_course(445315, "Quincy Modlin", "MAT", 205, 4, 6, 15, M | W | F,
                time(11, 0), time(12, 10), "Calculus II");
  create_course(445315, "Quincy Modlin", "MAT", 205, 4, 6, 15, M | W | F,
                time(11, 0), time(12, 10), "Calculus II");
  create_course(819545, "Leticia Hedin", "MAT", 206, 4, 10, 15, M | W | R | F,
                time(8, 0), time(8, 50), "Calculus III");
  create_course(946953, "Lovie Lubin", "MAT", 307, 3, 9, 15, T | R, time(11, 0),
                time(12, 20), "Linear Algebra");
  create_course(507481, "Leida Chadwick", "MAT", 314, 3, 6, 15, T | R,
                time(9, 30), time(10, 50), "Applied Statistics I");
  create_course(728323, "Quincy Modlin", "MAT", 328, 3, 8, 15, M | W | F,
                time(15, 0), time(15, 50), "Differential Equations");
  create_course(836812, "Leida Chadwick", "MAT", 410, 3, 11, 15, M | W | F,
                time(12, 0), time(12, 50), "Foundations of Geometry");
  create_course(589358, "Leida Chadwick", "MAT", 434, 3, 4, 15, T | R,
                time(9, 30), time(10, 50), "Abstract Algebra");
  create_course(354563, "Lovie Lubin", "MAT", 445, 3, 6, 15, M | W | F,
                time(9, 0), time(9, 50), "Intro to Complex Analysis");
  create_course(348131, "Leida Chadwick", "MAT", 451, 3, 1, 1, H, time(0, 0),
                time(0, 0), "Internship");
  create_course(348131, "Leida Chadwick", "MAT", 451, 3, 1, 1, H, time(0, 0),
                time(0, 0), "Internship");
  create_course(348131, "Edwardo Pokorny", "MAT", 451, 3, 1, 1, H, time(0, 0),
                time(0, 0), "Internship");
  create_course(735814, "Quincy Modlin", "MAT", 455, 3, 6, 15, M | W | F,
                time(9, 0), time(9, 50), "Advanced Calculus I");
  create_course(160867, "Linsey Khalil", "MPA", 710, 3, 18, 18, W, time(17, 0),
                time(19, 50), "Intro to Public Administration");
  create_course(593277, "Linsey Khalil", "MPA", 711, 3, 13, 18, R, time(17, 0),
                time(19, 50), "Basics of Management");
  create_course(233252, "Laverne Conely", "MPA", 713, 3, 7, 18, T, time(17, 0),
                time(19, 50), "Budgeting Public Sector/NonPro");
  create_course(233252, "Jordon Fiorillo", "MPA", 713, 3, 7, 18, T, time(17, 0),
                time(19, 50), "Budgeting Public Sector/NonPro");
  create_course(846567, "Lovie Lubin", "MPA", 714, 3, 21, 18, T, time(17, 0),
                time(19, 50), "Strategic Leadership & Mgmnt");
  create_course(93916, "Linsey Khalil", "MPA", 715, 3, 20, 18, M, time(17, 0),
                time(19, 50), "Economics for Managers");
  create_course(493027, "Linsey Khalil", "MPA", 716, 3, 19, 18, R, time(17, 0),
                time(19, 50), "Quality Mgmt-PubSec/NPOrg");
  create_course(320129, "Lovie Lubin", "MPA", 717, 3, 13, 18, R, time(17, 0),
                time(19, 50), "Capstone Exp in Public Adm");
  create_course(320129, "Lovie Lubin", "MPA", 717, 3, 2, 15, R, time(17, 0),
                time(19, 50), "Capstone Exp in Public Adm");
  create_course(105694, "Linsey Khalil", "MPA", 780, 3, 5, 18, W, time(17, 0),
                time(19, 50), "Human Resource Management");
  create_course(567469, "Jordon Fiorillo", "MPA", 794, 3, 3, 18, M, time(17, 0),
                time(19, 50), "Successful Grant Writing");
  create_course(371404, "Rosetta Harker", "MPA", 795, 1, 4, 18, W, time(17, 0),
                time(19, 50), "Special Topics");
  create_course(145181, "Linsey Khalil", "MPA", 796, 3, 18, 18, M, time(17, 0),
                time(19, 50), "Exec Comm. Skills");
  create_course(568154, "Angelica Licata", "MPA", 837, 3, 11, 18, M,
                time(17, 0), time(19, 50), "Interpersonal & Grp Behavior");
  create_course(126815, "Angelica Licata", "MPA", 838, 3, 16, 18, W,
                time(17, 0), time(19, 50), "Org  Dev & Management");
  create_course(113742, "Angelica Licata", "MPA", 839, 3, 7, 18, M, time(17, 0),
                time(19, 50), "Organization Theory & Design");
  create_course(423911, "Angelica Licata", "MPA", 841, 3, 13, 18, W,
                time(17, 0), time(19, 50), "Redesigning Organizations");
  create_course(546839, "Lovie Lubin", "MPA", 860, 3, 9, 18, W, time(17, 0),
                time(19, 50), "Ethics in Management");
  create_course(546839, "Lovie Lubin", "MPA", 860, 3, 19, 18, T, time(17, 0),
                time(19, 50), "Ethics in Management");
  create_course(489707, "Augustus Zito", "PEN", 701, 1, 5, 4, R, time(15, 0),
                time(16, 0), "Edu Neuroscience Proseminar");
  create_course(489707, "Augustus Zito", "PEN", 701, 1, 3, 40, R, time(15, 0),
                time(16, 0), "Edu Neuroscience Proseminar");
  create_course(892577, "Angelic Sane", "PEN", 703, 3, 2, 4, T, time(13, 0),
                time(16, 0), "Fndtns of Edu Neuroscience");
  create_course(879036, "Angelic Sane", "PEN", 704, 3, 2, 4, T, time(13, 0),
                time(15, 50), "Fdntns of Edu Neuroscience II");
  create_course(824041, "Leatrice Walck", "PEN", 705, 3, 5, 10, W, time(16, 0),
                time(19, 0), "New Directions in Neuroethics");
  create_course(482074, "Augustus Zito", "PEN", 801, 3, 2, 4, W, time(13, 0),
                time(16, 0), "Guided Studies: ClercCtr/Pk-12");
  create_course(265600, "Hassan Stoke", "PEN", 802, 3, 2, 4, W, time(9, 30),
                time(12, 30), "Guided Stds: Research");
  create_course(896370, "Angelic Sane", "PEN", 895, 1, 2, 4, F, time(13, 0),
                time(14, 50), "Special Topics");
  create_course(305213, "Keshia Creswell", "PER", 110, 3, 13, 15, M | W,
                time(11, 0), time(12, 20), "Wellness");
  create_course(305213, "Tawna Bradstreet", "PER", 110, 3, 15, 15, M | W,
                time(11, 0), time(12, 20), "Wellness");
  create_course(305213, "Winfred Rowse", "PER", 110, 3, 14, 15, T | R,
                time(11, 0), time(12, 20), "Wellness");
  create_course(305213, "Winfred Rowse", "PER", 110, 3, 12, 12, M | W,
                time(14, 0), time(15, 20), "Wellness");
  create_course(930283, "Winfred Rowse", "PER", 120, 3, 15, 15, T | R,
                time(8, 0), time(9, 20), "Fndtns of PE and Recreation");
  create_course(930283, "Todd Holsinger", "PER", 120, 3, 16, 16, M | W,
                time(8, 30), time(9, 50), "Fndtns of PE and Recreation");
  create_course(8410, "Tawna Bradstreet", "PER", 200, 3, 17, 15, M | W,
                time(13, 0), time(14, 20), "Leading Phys & Rec Activities");
  create_course(8410, "Tawna Bradstreet", "PER", 200, 3, 18, 12, M | W,
                time(14, 0), time(15, 20), "Leading Phys & Rec Activities");
  create_course(315378, "Todd Holsinger", "PER", 201, 2, 15, 12, T | R,
                time(9, 30), time(10, 50), "Outdoor Experiential Learning");
  create_course(315378, "Todd Holsinger", "PER", 201, 2, 14, 12, T | R,
                time(9, 30), time(10, 50), "Outdoor Experiential Learning");
  create_course(260120, "Odell Ostrowski", "PER", 202, 2, 23, 15, M | W | F,
                time(14, 30), time(15, 20), "Fndmntl Mvmnt,Rhythms & Gymn");
  create_course(62782, "Tawna Bradstreet", "PER", 203, 2, 17, 15, M | W,
                time(11, 0), time(12, 20), "Cncpts & Skls of Sports");
  create_course(62782, "Tawna Bradstreet", "PER", 203, 2, 11, 12, T | R,
                time(8, 0), time(9, 20), "Cncpts & Skls of Sports");
  create_course(919502, "Keshia Creswell", "PER", 204, 2, 18, 15, T | R,
                time(11, 0), time(12, 20), "Concepts&Skills of Phy Fitness");
  create_course(919502, "Keshia Creswell", "PER", 204, 2, 12, 12, M | W,
                time(11, 0), time(12, 20), "Concepts&Skills of Phy Fitness");
  create_course(919502, "Keshia Creswell", "PER", 204, 2, 8, 15, T | R,
                time(11, 0), time(12, 20), "Concepts&Skills of Phy Fitness");
  create_course(919502, "Winfred Rowse", "PER", 204, 2, 9, 15, M | W,
                time(11, 0), time(12, 20), "Concepts&Skills of Phy Fitness");
  create_course(562559, "Viola Grayer", "PER", 205, 2, 12, 12, T | R,
                time(14, 0), time(15, 20), "Cncpts&Sklls of Rcqut Sports");
  create_course(562559, "Viola Grayer", "PER", 205, 2, 13, 12, T | R,
                time(14, 0), time(15, 20), "Cncpts&Sklls of Rcqut Sports");
  create_course(368037, "Todd Holsinger", "PER", 222, 1, 9, 12, T | R,
                time(11, 0), time(12, 20), "Outdoor Activities");
  create_course(368037, "Todd Holsinger", "PER", 222, 1, 12, 12, T | R,
                time(11, 0), time(12, 20), "Outdoor Activities");
  create_course(917354, "Edwardo Pokorny", "PER", 223, 1, 8, 15, M | W,
                time(15, 0), time(15, 50), "Aquatic Activities");
  create_course(917354, "Odell Ostrowski", "PER", 223, 1, 17, 18, M | W,
                time(14, 0), time(14, 50), "Aquatic Activities");
  create_course(917354, "Quincy Modlin", "PER", 223, 1, 9, 15, T, time(19, 0),
                time(21, 50), "Aquatic Activities");
  create_course(917354, "Quincy Modlin", "PER", 223, 1, 9, 12, T, time(19, 0),
                time(21, 50), "Aquatic Activities");
  create_course(703489, "Winfred Rowse", "PER", 224, 1, 16, 15, M | W,
                time(13, 0), time(13, 50), "Activities");
  create_course(703489, "Laura Scannell", "PER", 224, 1, 17, 15, M | W,
                time(13, 0), time(13, 50), "Activities");
  create_course(703489, "Laura Scannell", "PER", 224, 1, 12, 12, M | W,
                time(9, 0), time(9, 50), "Activities");
  create_course(703489, "Laura Scannell", "PER", 224, 1, 12, 12, M | W,
                time(9, 0), time(9, 50), "Activities");
  create_course(150300, "Winfred Rowse", "PER", 232, 3, 15, 15, M | W,
                time(9, 30), time(10, 50), "Motor Learning");
  create_course(150300, "Winfred Rowse", "PER", 232, 3, 7, 15, M | W,
                time(8, 0), time(9, 20), "Motor Learning");
  create_course(624590, "Edwardo Pokorny", "PER", 235, 3, 8, 12, T | R,
                time(14, 0), time(15, 20), "Lifeguard Training");
  create_course(624590, "Tawna Bradstreet", "PER", 235, 3, 11, 12, T | R,
                time(14, 0), time(15, 20), "Lifeguard Training");
  create_course(446795, "Viola Grayer", "PER", 239, 3, 12, 12, M | W,
                time(17, 0), time(20, 50), "Pro Rscr CPR/AED & First Aid");
  create_course(446795, "Viola Grayer", "PER", 239, 3, 11, 11, M | W,
                time(17, 0), time(20, 50), "Pro Rscr CPR/AED & First Aid");
  create_course(371967, "Viola Grayer", "PER", 250, 3, 12, 12, T | R,
                time(17, 0), time(20, 50), "Sport Safety Training");
  create_course(371967, "Viola Grayer", "PER", 250, 3, 10, 12, T | R,
                time(18, 0), time(21, 50), "Sport Safety Training");
  create_course(934892, "Keshia Creswell", "PER", 341, 3, 16, 15, T | R,
                time(8, 0), time(9, 20), "Kinesiology");
  create_course(934892, "Keshia Creswell", "PER", 341, 3, 13, 12, T | R,
                time(8, 0), time(9, 20), "Kinesiology");
  create_course(296902, "Jannie Pastor", "PER", 345, 3, 11, 15, M | W,
                time(11, 0), time(12, 20), "Care & Prevent Athletic Injuri");
  create_course(296902, "Jannie Pastor", "PER", 345, 3, 10, 12, M | W,
                time(11, 0), time(12, 20), "Care & Prevent Athletic Injuri");
  create_course(532560, "Alphonso Lowenstein", "PER", 350, 3, 14, 15, M | W,
                time(12, 30), time(13, 50), "Event Planning and Management");
  create_course(532560, "Alphonso Lowenstein", "PER", 350, 3, 9, 12, T | R,
                time(9, 30), time(10, 50), "Event Planning and Management");
  create_course(30976, "Keshia Creswell", "PER", 368, 3, 15, 15, M | W,
                time(8, 0), time(9, 20), "Physiology of Exercise");
  create_course(30976, "Keshia Creswell", "PER", 368, 3, 18, 12, M | W,
                time(8, 0), time(9, 20), "Physiology of Exercise");
  create_course(335962, "Winfred Rowse", "PER", 383, 3, 9, 12, T | R,
                time(8, 0), time(9, 20), "Intramurals and Officiating");
  create_course(925676, "Tawna Bradstreet", "PER", 386, 3, 19, 15, T | R,
                time(11, 0), time(12, 20), "PE and Wellness in School Env");
  create_course(976430, "Tawna Bradstreet", "PER", 387, 3, 4, 15, T | R,
                time(11, 0), time(12, 20), "Athletic Coaching");
  create_course(976430, "Todd Holsinger", "PER", 387, 3, 14, 15, M | W,
                time(9, 30), time(10, 50), "Athletic Coaching");
  create_course(730659, "Augustina Amann", "PER", 400, 3, 9, 12, T | R,
                time(14, 0), time(15, 20), "Msrmnt & Evaluation in PE/REC");
  create_course(730659, "Augustina Amann", "PER", 400, 3, 9, 12, T | R,
                time(14, 0), time(15, 20), "Msrmnt & Evaluation in PE/REC");
  create_course(491987, "Alphonso Lowenstein", "PER", 410, 3, 15, 15, T | R,
                time(9, 30), time(10, 50), "Mngmt of PE and Rec");
  create_course(491987, "Alphonso Lowenstein", "PER", 410, 3, 14, 12, T | R,
                time(11, 0), time(12, 20), "Mngmt of PE and Rec");
  create_course(307159, "Alphonso Lowenstein", "PER", 440, 3, 14, 15, M | W,
                time(8, 0), time(9, 20), "Adapted PE and Rec");
  create_course(307159, "Alphonso Lowenstein", "PER", 440, 3, 13, 12, M | W,
                time(8, 30), time(9, 50), "Adapted PE and Rec");
  create_course(665486, "Todd Holsinger", "PER", 460, 3, 5, 10, H, time(0, 0),
                time(0, 0), "Practicum in Athletic Coaching");
  create_course(665486, "Todd Holsinger", "PER", 460, 3, 1, 12, H, time(0, 0),
                time(0, 0), "Practicum in Athletic Coaching");
  create_course(131405, "Augustina Amann", "PER", 490, 3, 6, 12, M | W,
                time(12, 30), time(13, 50), "PED/REC Capstone");
  create_course(131405, "Augustina Amann", "PER", 490, 3, 11, 12, M | W,
                time(12, 30), time(13, 50), "PED/REC Capstone");
  create_course(965631, "Loralee Penman", "PER", 491, 3, 1, 1, H, time(0, 0),
                time(0, 0), "Internship");
  create_course(965631, "Keshia Creswell", "PER", 491, 3, 1, 1, H, time(0, 0),
                time(0, 0), "Internship");
  create_course(965631, "Keshia Creswell", "PER", 491, 3, 1, 1, H, time(0, 0),
                time(0, 0), "Internship");
  create_course(965631, "Keshia Creswell", "PER", 491, 3, 1, 1, H, time(0, 0),
                time(0, 0), "Internship");
  create_course(965631, "Keshia Creswell", "PER", 491, 3, 1, 15, H, time(0, 0),
                time(0, 0), "Internship");
  create_course(965631, "Keshia Creswell", "PER", 491, 3, 1, 1, H, time(0, 0),
                time(0, 0), "Internship");
  create_course(56109, "Odell Ostrowski", "PER", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(469656, "Quincy Modlin", "PHI", 104, 3, 7, 15, M | W | F,
                time(9, 0), time(9, 50), "Critical Reasoning");
  create_course(221828, "Quincy Modlin", "PHI", 201, 3, 7, 15, T | R,
                time(9, 30), time(10, 50), "Intro to Logic");
  create_course(435838, "Quincy Modlin", "PHI", 295, 1, 1, 15, T | R,
                time(14, 0), time(15, 50), "Special Topics");
  create_course(419252, "Deirdre Aylesworth", "PHI", 395, 1, 6, 15, T,
                time(18, 0), time(20, 50), "Special Topics");
  create_course(771345, "Deirdre Aylesworth", "PHI", 450, 3, 3, 15, T | R,
                time(14, 0), time(15, 20), "Bioethics and the Deaf Comm");
  create_course(812346, "Quincy Modlin", "PHI", 493, 3, 1, 1, H, time(0, 0),
                time(0, 0), "Senior Research Paper");
  create_course(395147, "Ali Forst", "PHY", 151, 3, 14, 16, M | W | F,
                time(12, 0), time(12, 50), "Physics I");
  create_course(709466, "Hollie Hamada", "PHY", 152, 3, 9, 16, M | W | F,
                time(12, 0), time(12, 50), "Physics II");
  create_course(709466, "Ali Forst", "PHY", 152, 3, 9, 16, M | W | F,
                time(12, 0), time(12, 50), "Physics II");
  create_course(808260, "Ali Forst", "PHY", 153, 1, 14, 16, F, time(13, 0),
                time(15, 50), "Physics I Laboratory");
  create_course(318497, "Ali Forst", "PHY", 154, 1, 9, 16, F, time(13, 0),
                time(15, 50), "Physics II Laboratory");
  create_course(888959, "Warner Maggart", "PST", 136, 1, 4, 15, M | W,
                time(16, 0), time(17, 20), "Beginning Fingerspelling");
  create_course(888959, "Warner Maggart", "PST", 136, 1, 4, 15, M | W,
                time(16, 0), time(17, 20), "Beginning Fingerspelling");
  create_course(888959, "Herbert Myhre", "PST", 136, 1, 4, 15, M | W,
                time(16, 0), time(17, 20), "Beginning Fingerspelling");
  create_course(888959, "Herbert Myhre", "PST", 136, 1, 4, 15, M | W,
                time(16, 0), time(17, 20), "Beginning Fingerspelling");
  create_course(965211, "Warner Maggart", "PST", 137, 1, 4, 15, M | W,
                time(16, 0), time(17, 20), "Intermediate Fingerspelling");
  create_course(965211, "Herbert Myhre", "PST", 137, 1, 4, 15, M | W,
                time(16, 0), time(17, 20), "Intermediate Fingerspelling");
  create_course(798597, "Loralee Penman", "PST", 170, 1, 10, 12, H, time(0, 0),
                time(0, 0), "NAD/RID NIC Test Preparation");
  create_course(798597, "Loralee Penman", "PST", 170, 1, 6, 12, H, time(0, 0),
                time(0, 0), "NAD/RID NIC Test Preparation");
  create_course(106160, "Tomas Jiang", "PST", 202, 3, 0, 15, H, time(0, 0),
                time(0, 0), "Dynamics of Oppression");
  create_course(106160, "Tomas Jiang", "PST", 202, 3, 0, 15, H, time(0, 0),
                time(0, 0), "Dynamics of Oppression");
  create_course(570065, "Lois Hansell", "PST", 203, 3, 0, 15, H, time(0, 0),
                time(0, 0), "Oral Traditions/Deaf Community");
  create_course(570065, "Lois Hansell", "PST", 203, 3, 0, 15, H, time(0, 0),
                time(0, 0), "Oral Traditions/Deaf Community");
  create_course(518325, "Lovie Lubin", "PST", 210, 3, 0, 15, H, time(0, 0),
                time(0, 0), "Introduction to Deaf Studies");
  create_course(579084, "Teressa Marshburn", "PST", 212, 3, 2, 15, H,
                time(0, 0), time(0, 0), "Deaf Culture");
  create_course(579084, "Teressa Marshburn", "PST", 212, 3, 3, 15, H,
                time(0, 0), time(0, 0), "Deaf Culture");
  create_course(306978, "Ashlyn Deville", "PST", 213, 3, 0, 15, H, time(0, 0),
                time(0, 0), "Intro to Cultural Studies");
  create_course(306978, "Krista Blanks", "PST", 213, 3, 0, 15, H, time(0, 0),
                time(0, 0), "Intro to Cultural Studies");
  create_course(389789, "Diamond Macias", "PST", 222, 3, 0, 14, H, time(0, 0),
                time(0, 0), "Deaf Women's Studies");
  create_course(389789, "Diamond Macias", "PST", 222, 3, 1, 15, H, time(0, 0),
                time(0, 0), "Deaf Women's Studies");
  create_course(758555, "Tomas Jiang", "PST", 229, 3, 1, 12, H, time(0, 0),
                time(0, 0), "Multi-Cult Lives: Ethno Stdes");
  create_course(242172, "Nova Christon", "PST", 260, 3, 1, 15, H, time(0, 0),
                time(0, 0), "Disability Studies");
  create_course(242172, "Nova Christon", "PST", 260, 3, 2, 15, H, time(0, 0),
                time(0, 0), "Disability Studies");
  create_course(763634, "Augustina Amann", "PST", 301, 3, 6, 15, M | W,
                time(18, 30), time(19, 50), "ASL I");
  create_course(763634, "Augustina Amann", "PST", 301, 3, 11, 15, S, time(9, 0),
                time(12, 15), "ASL I");
  create_course(763634, "Augustina Amann", "PST", 301, 3, 10, 12, H, time(0, 0),
                time(0, 0), "ASL I");
  create_course(763634, "Augustina Amann", "PST", 301, 3, 12, 12, H, time(0, 0),
                time(0, 0), "ASL I");
  create_course(763634, "Augustina Amann", "PST", 301, 3, 11, 15, H, time(0, 0),
                time(0, 0), "ASL I");
  create_course(763634, "Augustina Amann", "PST", 301, 3, 6, 15, M | W,
                time(8, 30), time(9, 50), "ASL I");
  create_course(763634, "Augustina Amann", "PST", 301, 3, 11, 12, H, time(0, 0),
                time(0, 0), "ASL I");
  create_course(763634, "Augustina Amann", "PST", 301, 3, 11, 12, H, time(0, 0),
                time(0, 0), "ASL I");
  create_course(763634, "Verona Tenney", "PST", 301, 3, 9, 15, T | R,
                time(14, 0), time(15, 20), "ASL I");
  create_course(763634, "Lovie Lubin", "PST", 301, 3, 11, 15, S, time(9, 0),
                time(12, 15), "ASL I");
  create_course(763634, "Hassan Stoke", "PST", 301, 3, 9, 15, S, time(9, 0),
                time(12, 15), "ASL I");
  create_course(763634, "Winfred Rowse", "PST", 301, 3, 10, 15, M | W,
                time(18, 30), time(19, 50), "ASL I");
  create_course(763634, "Herbert Myhre", "PST", 301, 3, 11, 15, S, time(9, 0),
                time(12, 15), "ASL I");
  create_course(763634, "Herbert Myhre", "PST", 301, 3, 10, 12, H, time(0, 0),
                time(0, 0), "ASL I");
  create_course(763634, "Herbert Myhre", "PST", 301, 3, 12, 12, H, time(0, 0),
                time(0, 0), "ASL I");
  create_course(763634, "Herbert Myhre", "PST", 301, 3, 11, 15, H, time(0, 0),
                time(0, 0), "ASL I");
  create_course(763634, "Herbert Myhre", "PST", 301, 3, 7, 15, H, time(0, 0),
                time(0, 0), "ASL I");
  create_course(763634, "Herbert Myhre", "PST", 301, 3, 10, 15, M | W,
                time(18, 30), time(19, 50), "ASL I");
  create_course(763634, "Herbert Myhre", "PST", 301, 3, 9, 15, S, time(9, 0),
                time(12, 15), "ASL I");
  create_course(763634, "Herbert Myhre", "PST", 301, 3, 6, 15, M | W,
                time(8, 30), time(9, 50), "ASL I");
  create_course(763634, "Herbert Myhre", "PST", 301, 3, 9, 15, T | R,
                time(14, 0), time(15, 20), "ASL I");
  create_course(763634, "Herbert Myhre", "PST", 301, 3, 11, 12, H, time(0, 0),
                time(0, 0), "ASL I");
  create_course(763634, "Herbert Myhre", "PST", 301, 3, 11, 12, H, time(0, 0),
                time(0, 0), "ASL I");
  create_course(763634, "Herbert Myhre", "PST", 301, 3, 11, 15, H, time(0, 0),
                time(0, 0), "ASL I");
  create_course(763634, "Herbert Myhre", "PST", 301, 3, 12, 15, H, time(0, 0),
                time(0, 0), "ASL I");
  create_course(763634, "Jeane Guyer", "PST", 301, 3, 11, 15, S, time(9, 0),
                time(12, 15), "ASL I");
  create_course(763634, "Jeane Guyer", "PST", 301, 3, 10, 15, M | W,
                time(18, 30), time(19, 50), "ASL I");
  create_course(763634, "Lashaun Pasha", "PST", 301, 3, 6, 15, M | W,
                time(18, 30), time(19, 50), "ASL I");
  create_course(763634, "Celestine Mcnaught", "PST", 301, 3, 11, 15, H,
                time(0, 0), time(0, 0), "ASL I");
  create_course(763634, "Celestine Mcnaught", "PST", 301, 3, 7, 15, H,
                time(0, 0), time(0, 0), "ASL I");
  create_course(763634, "Celestine Mcnaught", "PST", 301, 3, 11, 15, H,
                time(0, 0), time(0, 0), "ASL I");
  create_course(763634, "Celestine Mcnaught", "PST", 301, 3, 12, 15, H,
                time(0, 0), time(0, 0), "ASL I");
  create_course(405596, "Edwardo Pokorny", "PST", 302, 3, 7, 15, M | W,
                time(8, 30), time(9, 50), "ASL II");
  create_course(405596, "Augustina Amann", "PST", 302, 3, 7, 15, M | W,
                time(18, 30), time(19, 50), "ASL II");
  create_course(405596, "Augustina Amann", "PST", 302, 3, 13, 15, T | R,
                time(14, 0), time(15, 20), "ASL II");
  create_course(405596, "Augustina Amann", "PST", 302, 3, 6, 15, T | R,
                time(14, 0), time(15, 20), "ASL II");
  create_course(405596, "Verona Tenney", "PST", 302, 3, 7, 15, M | W,
                time(18, 30), time(19, 50), "ASL II");
  create_course(405596, "Verona Tenney", "PST", 302, 3, 7, 15, S, time(9, 0),
                time(12, 15), "ASL II");
  create_course(405596, "Warner Maggart", "PST", 302, 3, 11, 15, H, time(0, 0),
                time(0, 0), "ASL II");
  create_course(405596, "Warner Maggart", "PST", 302, 3, 9, 15, H, time(0, 0),
                time(0, 0), "ASL II");
  create_course(405596, "Warner Maggart", "PST", 302, 3, 9, 12, H, time(0, 0),
                time(0, 0), "ASL II");
  create_course(405596, "Warner Maggart", "PST", 302, 3, 9, 12, H, time(0, 0),
                time(0, 0), "ASL II");
  create_course(405596, "Warner Maggart", "PST", 302, 3, 12, 12, H, time(0, 0),
                time(0, 0), "ASL II");
  create_course(405596, "Mica Dildine", "PST", 302, 3, 9, 15, H, time(0, 0),
                time(0, 0), "ASL II");
  create_course(405596, "Billie Darrigo", "PST", 302, 3, 6, 15, T | R,
                time(14, 0), time(15, 20), "ASL II");
  create_course(405596, "Herbert Myhre", "PST", 302, 3, 7, 15, M | W,
                time(18, 30), time(19, 50), "ASL II");
  create_course(405596, "Herbert Myhre", "PST", 302, 3, 13, 15, T | R,
                time(14, 0), time(15, 20), "ASL II");
  create_course(405596, "Herbert Myhre", "PST", 302, 3, 11, 15, H, time(0, 0),
                time(0, 0), "ASL II");
  create_course(405596, "Herbert Myhre", "PST", 302, 3, 9, 15, H, time(0, 0),
                time(0, 0), "ASL II");
  create_course(405596, "Herbert Myhre", "PST", 302, 3, 9, 12, H, time(0, 0),
                time(0, 0), "ASL II");
  create_course(405596, "Herbert Myhre", "PST", 302, 3, 7, 15, S, time(9, 0),
                time(12, 15), "ASL II");
  create_course(405596, "Herbert Myhre", "PST", 302, 3, 7, 15, M | W,
                time(8, 30), time(9, 50), "ASL II");
  create_course(405596, "Herbert Myhre", "PST", 302, 3, 6, 15, T | R,
                time(14, 0), time(15, 20), "ASL II");
  create_course(405596, "Herbert Myhre", "PST", 302, 3, 9, 12, H, time(0, 0),
                time(0, 0), "ASL II");
  create_course(405596, "Herbert Myhre", "PST", 302, 3, 12, 12, H, time(0, 0),
                time(0, 0), "ASL II");
  create_course(197432, "Jordon Fiorillo", "PST", 303, 3, 17, 15, M | W,
                time(12, 30), time(13, 50), "ASL III");
  create_course(197432, "Verona Tenney", "PST", 303, 3, 12, 15, S, time(9, 0),
                time(12, 15), "ASL III");
  create_course(197432, "Warner Maggart", "PST", 303, 3, 12, 15, S, time(9, 0),
                time(12, 15), "ASL III");
  create_course(197432, "Warner Maggart", "PST", 303, 3, 17, 15, M | W,
                time(12, 30), time(13, 50), "ASL III");
  create_course(197432, "Coretta Himes", "PST", 303, 3, 16, 15, S, time(9, 0),
                time(12, 15), "ASL III");
  create_course(197432, "Coretta Himes", "PST", 303, 3, 15, 15, M | W,
                time(12, 30), time(13, 50), "ASL III");
  create_course(197432, "Herbert Myhre", "PST", 303, 3, 12, 15, S, time(9, 0),
                time(12, 15), "ASL III");
  create_course(197432, "Herbert Myhre", "PST", 303, 3, 17, 15, M | W,
                time(12, 30), time(13, 50), "ASL III");
  create_course(197432, "Herbert Myhre", "PST", 303, 3, 9, 15, M | W,
                time(18, 30), time(19, 50), "ASL III");
  create_course(197432, "Herbert Myhre", "PST", 303, 3, 16, 15, S, time(9, 0),
                time(12, 15), "ASL III");
  create_course(197432, "Herbert Myhre", "PST", 303, 3, 15, 15, M | W,
                time(12, 30), time(13, 50), "ASL III");
  create_course(197432, "Lashaun Pasha", "PST", 303, 3, 9, 15, M | W,
                time(18, 30), time(19, 50), "ASL III");
  create_course(268474, "Augustina Amann", "PST", 304, 3, 5, 15, M | W,
                time(18, 30), time(19, 50), "ASL IV");
  create_course(268474, "Augustina Amann", "PST", 304, 3, 6, 15, M | W,
                time(12, 30), time(13, 50), "ASL IV");
  create_course(268474, "Jordon Fiorillo", "PST", 304, 3, 5, 15, M | W,
                time(18, 30), time(19, 50), "ASL IV");
  create_course(268474, "Joy Greenley", "PST", 304, 3, 8, 15, S, time(9, 0),
                time(12, 15), "ASL IV");
  create_course(268474, "Herbert Myhre", "PST", 304, 3, 5, 15, M | W,
                time(18, 30), time(19, 50), "ASL IV");
  create_course(268474, "Herbert Myhre", "PST", 304, 3, 6, 15, M | W,
                time(12, 30), time(13, 50), "ASL IV");
  create_course(268474, "Herbert Myhre", "PST", 304, 3, 8, 15, S, time(9, 0),
                time(12, 15), "ASL IV");
  create_course(285218, "Milton Brekke", "PST", 305, 3, 4, 15, S, time(9, 0),
                time(12, 15), "ASL V");
  create_course(285218, "Alfreda Kotter", "PST", 305, 3, 1, 15, M, time(9, 0),
                time(11, 50), "ASL V");
  create_course(285218, "Warner Maggart", "PST", 305, 3, 4, 15, S, time(9, 0),
                time(12, 15), "ASL V");
  create_course(285218, "Herbert Myhre", "PST", 305, 3, 4, 15, S, time(9, 0),
                time(12, 15), "ASL V");
  create_course(285218, "Herbert Myhre", "PST", 305, 3, 1, 15, M, time(9, 0),
                time(11, 50), "ASL V");
  create_course(631708, "Ranee Boeck", "PST", 322, 3, 5, 15, H, time(0, 0),
                time(0, 0), "ASL & English:Cmprtve Analysis");
  create_course(631708, "Ranee Boeck", "PST", 322, 3, 1, 15, H, time(0, 0),
                time(0, 0), "ASL & English:Cmprtve Analysis");
  create_course(954265, "Keshia Creswell", "PST", 325, 2, 5, 15, H, time(0, 0),
                time(0, 0), "Sign Language Interpreting");
  create_course(613356, "Loralee Penman", "PST", 326, 1, 12, 12, H, time(0, 0),
                time(0, 0), "NAD/RID NIC Test Prep: Int/Per");
  create_course(613356, "Loralee Penman", "PST", 326, 1, 13, 15, H, time(0, 0),
                time(0, 0), "NAD/RID NIC Test Prep: Int/Per");
  create_course(613356, "Loralee Penman", "PST", 326, 1, 12, 12, H, time(0, 0),
                time(0, 0), "NAD/RID NIC Test Prep: Int/Per");
  create_course(613356, "Loralee Penman", "PST", 326, 1, 12, 12, H, time(0, 0),
                time(0, 0), "NAD/RID NIC Test Prep: Int/Per");
  create_course(613356, "Loralee Penman", "PST", 326, 1, 11, 12, H, time(0, 0),
                time(0, 0), "NAD/RID NIC Test Prep: Int/Per");
  create_course(860290, "Joy Greenley", "PST", 361, 3, 1, 15, H, time(0, 0),
                time(0, 0), "Intro to Structure of ASL");
  create_course(136280, "Glennis Coons", "PST", 373, 3, 1, 15, H, time(0, 0),
                time(0, 0), "Intro to First and Second Lang");
  create_course(550242, "Glennis Coons", "PST", 375, 1, 12, 15, H, time(0, 0),
                time(0, 0), "Lang Learning Eye or by Ear");
  create_course(164510, "Carolina Plantz", "PST", 376, 3, 1, 15, M, time(17, 0),
                time(19, 50), "Iconicity and Depiction");
  create_course(811045, "Warner Maggart", "PST", 662, 3, 4, 15, H, time(0, 0),
                time(0, 0), "Leadership Perspectives");
  create_course(811045, "Coretta Himes", "PST", 662, 3, 4, 15, H, time(0, 0),
                time(0, 0), "Leadership Perspectives");
  create_course(811045, "Dick Strahl", "PST", 662, 3, 4, 15, H, time(0, 0),
                time(0, 0), "Leadership Perspectives");
  create_course(301293, "Coretta Himes", "PST", 663, 3, 4, 20, H, time(0, 0),
                time(0, 0), "Str for Dev Com, Lang&Cog DHH");
  create_course(301293, "Rosetta Harker", "PST", 663, 3, 4, 20, H, time(0, 0),
                time(0, 0), "Str for Dev Com, Lang&Cog DHH");
  create_course(519422, "Coretta Himes", "PST", 665, 1, 3, 15, H, time(0, 0),
                time(0, 0), "DHH ITF Capstone Project");
  create_course(519422, "Coretta Himes", "PST", 665, 1, 3, 15, H, time(0, 0),
                time(0, 0), "DHH ITF Capstone Project");
  create_course(519422, "Dick Strahl", "PST", 665, 1, 3, 15, H, time(0, 0),
                time(0, 0), "DHH ITF Capstone Project");
  create_course(519422, "Dick Strahl", "PST", 665, 1, 3, 15, H, time(0, 0),
                time(0, 0), "DHH ITF Capstone Project");
  create_course(552601, "Katharyn Armbruster", "PST", 671, 3, 0, 15, H,
                time(0, 0), time(0, 0), "Fmly Collab Partn: ASL/Eng Blg");
  create_course(982340, "Viola Grayer", "PST", 672, 3, 2, 15, H, time(0, 0),
                time(0, 0), "Erly Lang Acq&Cog Dev of Bilng");
  create_course(518941, "Columbus Knighton", "PST", 673, 1, 2, 15, H,
                time(0, 0), time(0, 0), "Capstone I: ASL/ENGBil ECE 0-5");
  create_course(768693, "Audra Spradley", "PST", 674, 3, 0, 15, H, time(0, 0),
                time(0, 0), "Assmt&Indv Plng in ASL/ENG Bi");
  create_course(372801, "Amiee Broadfoot", "PST", 710, 2, 0, 10, H, time(0, 0),
                time(0, 0), "Pract Instr of ASL: All Way Df");
  create_course(588983, "Estefana Thrift", "PST", 712, 3, 1, 12, H, time(0, 0),
                time(0, 0), "Classroom Management");
  create_course(161127, "Amiee Broadfoot", "PST", 715, 3, 3, 15, H, time(0, 0),
                time(0, 0), "Teaching Functional Curriculum");
  create_course(988588, "Celestine Mcnaught", "PST", 717, 3, 2, 15, H,
                time(0, 0), time(0, 0), "Assess/Deaf Students w/Disabil");
  create_course(587548, "Leatrice Walck", "PST", 748, 2, 8, 15, H, time(0, 0),
                time(0, 0), "GRE Preparation Course");
  create_course(862003, "Danyel Mickle", "PST", 779, 2, 7, 20, H, time(0, 0),
                time(0, 0), "Communication Assistive Tech");
  create_course(862003, "Jannie Pastor", "PST", 779, 2, 7, 20, H, time(0, 0),
                time(0, 0), "Communication Assistive Tech");
  create_course(862003, "Diamond Macias", "PST", 779, 2, 7, 20, H, time(0, 0),
                time(0, 0), "Communication Assistive Tech");
  create_course(492189, "Danyel Mickle", "PST", 780, 3, 7, 15, H, time(0, 0),
                time(0, 0), "Peer Mentoring - Hearing Loss");
  create_course(492189, "Jannie Pastor", "PST", 780, 3, 7, 15, H, time(0, 0),
                time(0, 0), "Peer Mentoring - Hearing Loss");
  create_course(492189, "Diamond Macias", "PST", 780, 3, 7, 15, H, time(0, 0),
                time(0, 0), "Peer Mentoring - Hearing Loss");
  create_course(990893, "Columbus Knighton", "PST", 891, 3, 0, 12, M | R,
                time(17, 0), time(18, 20), "ST: Psyscsl Aspects of Disabil");
  create_course(863646, "Julius Anding", "PST", 895, 1, 6, 15, H, time(0, 0),
                time(0, 0), "SWK Licensure Prep");
  create_course(290026, "Dick Strahl", "PST", 955, 4, 0, 15, H, time(0, 0),
                time(0, 0), "Basic French I");
  create_course(334271, "Jeane Guyer", "PST", 957, 4, 1, 15, H, time(0, 0),
                time(0, 0), "Basic Spanish I");
  create_course(614286, "Keshia Creswell", "PSY", 201, 3, 20, 20, T | R,
                time(9, 30), time(10, 50), "Intro to Psychology");
  create_course(614286, "Jesica Cryer", "PSY", 201, 3, 17, 20, T | R,
                time(9, 30), time(10, 50), "Intro to Psychology");
  create_course(614286, "Jesica Cryer", "PSY", 201, 3, 18, 20, M | W | F,
                time(13, 0), time(13, 50), "Intro to Psychology");
  create_course(614286, "Odell Ostrowski", "PSY", 201, 3, 19, 20, T | R,
                time(14, 0), time(15, 20), "Intro to Psychology");
  create_course(614286, "Odell Ostrowski", "PSY", 201, 3, 21, 20, M | W,
                time(15, 0), time(16, 20), "Intro to Psychology");
  create_course(614286, "Augustina Amann", "PSY", 201, 3, 7, 20, T | R,
                time(15, 30), time(16, 50), "Intro to Psychology");
  create_course(464908, "Danyel Mickle", "PSY", 295, 1, 1, 15, W | F,
                time(10, 0), time(11, 50), "Special Topics");
  create_course(622207, "Danyel Mickle", "PSY", 311, 3, 15, 15, H, time(0, 0),
                time(0, 0), "Dev I:  Child Psychology");
  create_course(622207, "Ranee Boeck", "PSY", 311, 3, 21, 20, T | R,
                time(11, 0), time(12, 20), "Dev I:  Child Psychology");
  create_course(622207, "Ranee Boeck", "PSY", 311, 3, 19, 20, T | R,
                time(11, 0), time(12, 20), "Dev I:  Child Psychology");
  create_course(622207, "Gale Roosa", "PSY", 311, 3, 21, 20, T | R,
                time(15, 30), time(16, 50), "Dev I:  Child Psychology");
  create_course(761203, "Danyel Mickle", "PSY", 313, 3, 16, 15, H, time(0, 0),
                time(0, 0), "Dev II:  The Psych of Adolesc");
  create_course(852625, "Ranee Boeck", "PSY", 317, 3, 15, 15, H, time(0, 0),
                time(0, 0), "Health Psychology");
  create_course(852625, "Ranee Boeck", "PSY", 317, 3, 15, 15, H, time(0, 0),
                time(0, 0), "Health Psychology");
  create_course(524318, "Alfreda Kotter", "PSY", 319, 3, 13, 15, T | R,
                time(15, 30), time(16, 50), "The Psycho of Except Children");
  create_course(920658, "Jesica Cryer", "PSY", 321, 3, 16, 15, H, time(0, 0),
                time(0, 0), "Abnormal Psychology");
  create_course(920658, "Jesica Cryer", "PSY", 321, 3, 17, 20, M | W | F,
                time(11, 0), time(11, 50), "Abnormal Psychology");
  create_course(45598, "Odell Ostrowski", "PSY", 324, 3, 15, 15, H, time(0, 0),
                time(0, 0), "Cognition");
  create_course(45598, "Odell Ostrowski", "PSY", 324, 3, 14, 20, M | W | F,
                time(10, 0), time(10, 50), "Cognition");
  create_course(517509, "Odell Ostrowski", "PSY", 331, 3, 16, 15, M | W | F,
                time(14, 0), time(14, 50), "Statistics for Behavioral Scie");
  create_course(891562, "Odell Ostrowski", "PSY", 332, 3, 17, 20, M | W | F,
                time(10, 0), time(10, 50), "Rsrch Methods in Psychology II");
  create_course(110145, "Jesica Cryer", "PSY", 358, 3, 15, 20, M | W | F,
                time(11, 0), time(11, 50), "Social Psychology");
  create_course(110145, "Danyel Mickle", "PSY", 358, 3, 9, 20, M | W | F,
                time(11, 0), time(11, 50), "Social Psychology");
  create_course(436805, "Odell Ostrowski", "PSY", 410, 3, 10, 20, M | W,
                time(17, 0), time(18, 20), "Psychology and Deaf People");
  create_course(436805, "Tracey Sherrard", "PSY", 410, 3, 15, 15, H, time(0, 0),
                time(0, 0), "Psychology and Deaf People");
  create_course(438140, "Odell Ostrowski", "PSY", 424, 3, 10, 20, M | W | F,
                time(14, 0), time(14, 50), "Neuropsychology");
  create_course(237017, "Jesica Cryer", "PSY", 434, 3, 14, 20, M | W | F,
                time(9, 0), time(9, 50), "Methods of Therapy");
  create_course(233030, "Laveta Pea", "PSY", 450, 3, 10, 20, T | R, time(11, 0),
                time(12, 20), "Internship Seminar");
  create_course(10525, "Alphonso Lowenstein", "PSY", 451, 3, 4, 15, W,
                time(12, 15), time(12, 45), "Internship I");
  create_course(10525, "Jesica Cryer", "PSY", 451, 3, 4, 15, W, time(12, 15),
                time(12, 45), "Internship I");
  create_course(10525, "Delorse Serrao", "PSY", 451, 3, 10, 15, W, time(12, 15),
                time(12, 45), "Internship I");
  create_course(212428, "Jesica Cryer", "PSY", 452, 3, 1, 15, W, time(12, 15),
                time(12, 45), "Internship II");
  create_course(212428, "Delorse Serrao", "PSY", 452, 3, 1, 15, W, time(12, 15),
                time(12, 45), "Internship II");
  create_course(241503, "Jesica Cryer", "PSY", 457, 3, 15, 20, M | W,
                time(15, 0), time(16, 20), "Human Sexuality");
  create_course(917699, "Danyel Mickle", "PSY", 460, 3, 9, 20, M | W | F,
                time(13, 0), time(13, 50), "Multicultural Psychology");
  create_course(410068, "Laveta Pea", "PSY", 495, 1, 11, 15, T | R, time(11, 0),
                time(12, 20), "Special Topics");
  create_course(410068, "Columbus Knighton", "PSY", 495, 1, 6, 12, M | R,
                time(17, 0), time(18, 20), "Special Topics");
  create_course(410068, "Dylan Schneiderman", "PSY", 495, 1, 16, 15, H,
                time(0, 0), time(0, 0), "Special Topics");
  create_course(97780, "Hollie Hamada", "PSY", 701, 3, 7, 10, R, time(13, 0),
                time(15, 50), "Lgl,Ethl&Prof Iss in Sch Psy");
  create_course(278055, "Jesica Cryer", "PSY", 703, 1, 7, 7, R, time(11, 0),
                time(11, 50), "Research Seminar");
  create_course(278055, "Jesica Cryer", "PSY", 703, 1, 0, 7, R, time(11, 0),
                time(11, 50), "Research Seminar");
  create_course(507554, "Edwardo Pokorny", "PSY", 711, 3, 16, 15, M | W,
                time(14, 0), time(15, 30), "Principles of Statistics");
  create_course(274205, "Jannie Pastor", "PSY", 712, 3, 6, 15, R, time(9, 0),
                time(12, 20), "Research Methods in Psychology");
  create_course(585798, "Edwardo Pokorny", "PSY", 713, 3, 9, 15, M | W,
                time(14, 0), time(15, 20), "Psychological Statistics II");
  create_course(228991, "Danyel Mickle", "PSY", 720, 3, 5, 8, T, time(13, 0),
                time(16, 0), "The Teaching of Psychology");
  create_course(314903, "Kia Kurland", "PSY", 723, 3, 14, 20, R, time(17, 0),
                time(19, 50), "Psychology and Deafness");
  create_course(385672, "Alphonso Lowenstein", "PSY", 732, 3, 8, 10, T,
                time(9, 0), time(11, 50), "Child Psychopathology & Beh");
  create_course(681713, "Jesica Cryer", "PSY", 733, 3, 9, 15, W, time(9, 0),
                time(12, 0), "Child Development");
  create_course(372577, "Alphonso Lowenstein", "PSY", 736, 3, 7, 10, R,
                time(9, 0), time(11, 50), "Psy Dev I:Lrng & Cgntve Dev.");
  create_course(193796, "Ranee Boeck", "PSY", 743, 3, 7, 10, M, time(9, 0),
                time(11, 50), "Assessment I: History and Theo");
  create_course(458393, "Ranee Boeck", "PSY", 746, 3, 7, 10, R, time(9, 0),
                time(11, 50), "Assessment II: Intel Assessmen");
  create_course(348025, "Ranee Boeck", "PSY", 748, 3, 4, 10, T, time(9, 0),
                time(11, 50), "Psychoeducational Assessment");
  create_course(885783, "Bernarda Burgess", "PSY", 749, 4, 7, 10, T | R,
                time(13, 0), time(14, 50), "Intl Assmnt:Msrmnt Prin & Appl");
  create_course(261811, "Alfreda Kotter", "PSY", 754, 3, 3, 10, W, time(9, 0),
                time(11, 50), "Biological Psy: Brain & Behavi");
  create_course(281047, "Hollie Hamada", "PSY", 765, 3, 4, 10, W, time(13, 0),
                time(15, 50), "Assessment III:Soc,Emtnl&Behav");
  create_course(350165, "Alfreda Kotter", "PSY", 766, 3, 4, 10, M, time(9, 0),
                time(11, 50), "Sch Psy and Prevention Service");
  create_course(813712, "Hollie Hamada", "PSY", 767, 3, 4, 15, R, time(13, 0),
                time(15, 50), "Psychological Consultation: Th");
  create_course(706652, "Alphonso Lowenstein", "PSY", 768, 3, 4, 10, R,
                time(9, 0), time(11, 50), "Hme/Sch/Com Collab, Fam & Exce");
  create_course(195793, "Hollie Hamada", "PSY", 769, 2, 4, 10, R, time(16, 0),
                time(17, 50), "Coll. ProbSlvg Team Roles &CS");
  create_course(107652, "Deirdre Aylesworth", "PSY", 770, 3, 1, 3, W,
                time(13, 0), time(15, 50), "Practicum in School Psychology");
  create_course(107652, "Alphonso Lowenstein", "PSY", 770, 3, 2, 3, W,
                time(13, 0), time(15, 50), "Practicum in School Psychology");
  create_course(107652, "Alfreda Kotter", "PSY", 770, 3, 3, 3, W, time(13, 0),
                time(15, 50), "Practicum in School Psychology");
  create_course(402829, "Ranee Boeck", "PSY", 771, 3, 4, 10, M, time(13, 0),
                time(15, 50), "Practicum in Sch Psy II");
  create_course(139182, "Hollie Hamada", "PSY", 772, 1, 4, 10, R, time(0, 0),
                time(0, 0), "Psychological Consultation:Ext");
  create_course(235651, "Bernarda Burgess", "PSY", 781, 3, 7, 10, M, time(9, 0),
                time(12, 0), "Clinl Psy Ethics and Prof Issu");
  create_course(222261, "Bernarda Burgess", "PSY", 782, 3, 7, 10, M, time(9, 0),
                time(11, 50), "Foundations of Clinical Skills");
  create_course(643488, "Celestine Mcnaught", "PSY", 785, 3, 3, 10, W,
                time(13, 0), time(15, 0), "Clinical Psy Practicum");
  create_course(643488, "Celestine Mcnaught", "PSY", 785, 3, 4, 10, H,
                time(0, 0), time(0, 0), "Clinical Psy Practicum");
  create_course(643488, "Delorse Serrao", "PSY", 785, 3, 4, 10, H, time(0, 0),
                time(0, 0), "Clinical Psy Practicum");
  create_course(114447, "Celestine Mcnaught", "PSY", 786, 3, 3, 10, W,
                time(13, 0), time(14, 50), "Clinical Psy Practicum");
  create_course(114447, "Celestine Mcnaught", "PSY", 786, 3, 2, 6, W,
                time(13, 0), time(14, 50), "Clinical Psy Practicum");
  create_course(114447, "Jesica Cryer", "PSY", 786, 3, 2, 7, W, time(13, 0),
                time(14, 50), "Clinical Psy Practicum");
  create_course(114447, "Delorse Serrao", "PSY", 786, 3, 2, 6, W, time(13, 0),
                time(14, 50), "Clinical Psy Practicum");
  create_course(465634, "Alphonso Lowenstein", "PSY", 790, 3, 6, 6, H,
                time(0, 0), time(0, 0), "Internship: Individual Case St");
  create_course(765808, "Hollie Hamada", "PSY", 791, 3, 6, 6, H, time(0, 0),
                time(0, 0), "Internship: Tchr Cnsltn & Cnsl");
  create_course(306981, "Hollie Hamada", "PSY", 792, 3, 6, 5, H, time(0, 0),
                time(0, 0), "Internship: Syst Cnsltn & In-S");
  create_course(583238, "Alphonso Lowenstein", "PSY", 793, 3, 6, 5, H,
                time(0, 0), time(0, 0), "Internship: Adv Case Confrnce");
  create_course(984621, "Columbus Knighton", "PSY", 795, 1, 8, 12, M,
                time(16, 30), time(19, 20), "Special Topics");
  create_course(984621, "Celestine Mcnaught", "PSY", 795, 1, 8, 12, T,
                time(18, 0), time(20, 50), "Special Topics");
  create_course(984621, "Celestine Mcnaught", "PSY", 795, 1, 3, 12, R,
                time(17, 0), time(19, 50), "Special Topics");
  create_course(984621, "Bernarda Burgess", "PSY", 795, 1, 4, 12, M,
                time(12, 0), time(15, 50), "Special Topics");
  create_course(984621, "Jesica Cryer", "PSY", 795, 1, 8, 12, T, time(18, 0),
                time(20, 50), "Special Topics");
  create_course(984621, "Jesica Cryer", "PSY", 795, 1, 3, 12, R, time(17, 0),
                time(19, 50), "Special Topics");
  create_course(933634, "Odell Ostrowski", "PSY", 800, 1, 4, 10, H, time(0, 0),
                time(0, 0), "Individual Research");
  create_course(933634, "Odell Ostrowski", "PSY", 800, 1, 4, 10, H, time(0, 0),
                time(0, 0), "Individual Research");
  create_course(933634, "Jannie Pastor", "PSY", 800, 1, 4, 10, H, time(0, 0),
                time(0, 0), "Individual Research");
  create_course(933634, "Jannie Pastor", "PSY", 800, 1, 4, 10, H, time(0, 0),
                time(0, 0), "Individual Research");
  create_course(933634, "Celestine Mcnaught", "PSY", 800, 1, 4, 10, H,
                time(0, 0), time(0, 0), "Individual Research");
  create_course(933634, "Celestine Mcnaught", "PSY", 800, 1, 5, 10, H,
                time(0, 0), time(0, 0), "Individual Research");
  create_course(933634, "Bernarda Burgess", "PSY", 800, 1, 1, 10, H, time(0, 0),
                time(0, 0), "Individual Research");
  create_course(933634, "Bernarda Burgess", "PSY", 800, 1, 4, 10, H, time(0, 0),
                time(0, 0), "Individual Research");
  create_course(933634, "Jesica Cryer", "PSY", 800, 1, 2, 10, H, time(0, 0),
                time(0, 0), "Individual Research");
  create_course(933634, "Jesica Cryer", "PSY", 800, 1, 2, 10, H, time(0, 0),
                time(0, 0), "Individual Research");
  create_course(238157, "Jannie Pastor", "PSY", 820, 2, 16, 15, F, time(13, 0),
                time(14, 50), "History and Systems");
  create_course(347651, "Jannie Pastor", "PSY", 825, 3, 6, 15, F, time(13, 0),
                time(15, 50), "Health Psychology");
  create_course(419528, "Odell Ostrowski", "PSY", 833, 3, 7, 15, W, time(18, 0),
                time(20, 50), "Adult Dev and Personality");
  create_course(710151, "Jesica Cryer", "PSY", 834, 3, 6, 15, T | R,
                time(14, 0), time(15, 20), "Adult Psychopathology");
  create_course(904587, "Jesica Cryer", "PSY", 836, 3, 7, 15, T, time(14, 0),
                time(17, 0), "Adult Psychotherapy");
  create_course(669027, "Bernarda Burgess", "PSY", 840, 3, 9, 15, R,
                time(9, 30), time(12, 20), "Neuroanatom & Neurophys");
  create_course(176013, "Jannie Pastor", "PSY", 854, 3, 14, 12, F, time(9, 0),
                time(11, 50), "Psychopharmacology");
  create_course(899811, "Odell Ostrowski", "PSY", 860, 3, 11, 15, F, time(9, 0),
                time(12, 0), "Cognitive-Behavior Therapies");
  create_course(395861, "Odell Ostrowski", "PSY", 865, 3, 7, 10, T, time(9, 30),
                time(12, 20), "Personality Assmt: Proj Tech");
  create_course(855496, "Odell Ostrowski", "PSY", 880, 3, 4, 15, M, time(18, 0),
                time(20, 50), "Clinical Supervision");
  create_course(551528, "Jesica Cryer", "PSY", 885, 3, 7, 10, H, time(0, 0),
                time(0, 0), "Clinical Psych Externship");
  create_course(594748, "Jesica Cryer", "PSY", 886, 3, 6, 10, H, time(0, 0),
                time(0, 0), "Clinical Psych Externship");
  create_course(759070, "Odell Ostrowski", "PSY", 900, 1, 4, 10, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(759070, "Odell Ostrowski", "PSY", 900, 1, 3, 10, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(759070, "Jannie Pastor", "PSY", 900, 1, 2, 10, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(759070, "Jannie Pastor", "PSY", 900, 1, 4, 10, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(759070, "Celestine Mcnaught", "PSY", 900, 1, 4, 10, H,
                time(0, 0), time(0, 0), "Dissertation Research");
  create_course(759070, "Celestine Mcnaught", "PSY", 900, 1, 3, 10, H,
                time(0, 0), time(0, 0), "Dissertation Research");
  create_course(759070, "Bernarda Burgess", "PSY", 900, 1, 2, 10, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(759070, "Bernarda Burgess", "PSY", 900, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(759070, "Jesica Cryer", "PSY", 900, 1, 5, 10, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(759070, "Jesica Cryer", "PSY", 900, 1, 6, 10, H, time(0, 0),
                time(0, 0), "Dissertation Research");
  create_course(951181, "Bernarda Burgess", "PSY", 985, 1, 10, 10, H,
                time(0, 0), time(0, 0), "Adv Clinical Psych Externship");
  create_course(570254, "Bernarda Burgess", "PSY", 986, 1, 10, 10, H,
                time(0, 0), time(0, 0), "Adv Clinical Psych Externship");
  create_course(546013, "Odell Ostrowski", "PSY", 999, 1, 3, 10, H, time(0, 0),
                time(0, 0), "Clinical Psych Internship");
  create_course(546013, "Odell Ostrowski", "PSY", 999, 1, 3, 10, H, time(0, 0),
                time(0, 0), "Clinical Psych Internship");
  create_course(898049, "Laveta Pea", "REL", 295, 1, 9, 15, M | W | F,
                time(10, 0), time(10, 50), "Special Topics");
  create_course(321384, "Laveta Pea", "REL", 355, 3, 6, 15, T | R, time(15, 30),
                time(16, 50), "Religion and Society");
  create_course(534231, "Jordon Fiorillo", "SOC", 101, 3, 21, 20, M | W,
                time(9, 30), time(10, 50), "Intro to Sociology");
  create_course(534231, "Jordon Fiorillo", "SOC", 101, 3, 19, 20, T | R,
                time(11, 0), time(12, 20), "Intro to Sociology");
  create_course(534231, "Billie Darrigo", "SOC", 101, 3, 20, 20, M | W,
                time(14, 0), time(15, 20), "Intro to Sociology");
  create_course(534231, "Billie Darrigo", "SOC", 101, 3, 21, 20, M | W,
                time(11, 0), time(12, 20), "Intro to Sociology");
  create_course(534231, "Lois Hansell", "SOC", 101, 3, 21, 20, M | W,
                time(9, 30), time(10, 50), "Intro to Sociology");
  create_course(539090, "Jordon Fiorillo", "SOC", 150, 3, 6, 12, T, time(9, 30),
                time(12, 30), "Saloshin Justice Seminar");
  create_course(374425, "Jordon Fiorillo", "SOC", 151, 3, 13, 15, M | W,
                time(11, 0), time(12, 20), "Intro to the Crim Justice Sys");
  create_course(374425, "Jordon Fiorillo", "SOC", 151, 3, 12, 15, M | W,
                time(14, 0), time(15, 20), "Intro to the Crim Justice Sys");
  create_course(374425, "Lois Hansell", "SOC", 151, 3, 13, 15, M | W,
                time(11, 0), time(12, 20), "Intro to the Crim Justice Sys");
  create_course(521925, "Billie Darrigo", "SOC", 243, 3, 13, 15, T | R,
                time(11, 0), time(12, 20), "Sociology of Deviance");
  create_course(374065, "Billie Darrigo", "SOC", 250, 3, 11, 20, M | W,
                time(14, 0), time(15, 20), "Gender and Society");
  create_course(656158, "Faustino Mailloux", "SOC", 268, 3, 13, 15, M,
                time(15, 0), time(17, 50), "Cultural Anthropology");
  create_course(852937, "Lovie Lubin", "SOC", 313, 3, 13, 15, T | R,
                time(9, 30), time(10, 50), "Work and Globalization");
  create_course(967204, "Keshia Creswell", "SOC", 334, 3, 14, 15, T,
                time(15, 30), time(16, 50), "Research Methods");
  create_course(674751, "Jordon Fiorillo", "SOC", 351, 3, 15, 20, M | W,
                time(11, 0), time(12, 20), "Juvenile Delinquency");
  create_course(78275, "Keshia Creswell", "SOC", 375, 3, 4, 15, M | W,
                time(14, 0), time(15, 20), "Statistics I");
  create_course(695148, "Billie Darrigo", "SOC", 407, 3, 4, 7, T | R,
                time(10, 0), time(11, 50), "Social Problems");
  create_course(175423, "Billie Darrigo", "SOC", 423, 3, 4, 15, M | W,
                time(11, 0), time(12, 20), "Social Theory");
  create_course(28526, "Keshia Creswell", "SOC", 450, 4, 3, 10, M, time(13, 0),
                time(13, 50), "Internship Seminar w/Field Exp");
  create_course(202497, "Keshia Creswell", "SOC", 491, 3, 3, 15, R, time(17, 0),
                time(19, 20), "Senior Capstone Seminar I");
  create_course(718855, "Keshia Creswell", "SOC", 492, 3, 3, 10, M, time(16, 0),
                time(18, 50), "Senior Capstone Seminar II");
  create_course(330946, "Deloris Conroy", "SPA", 111, 4, 13, 15, M | W,
                time(10, 0), time(11, 50), "Basic Spanish I");
  create_course(330946, "Deloris Conroy", "SPA", 111, 4, 13, 15, F, time(10, 0),
                time(10, 50), "Basic Spanish I");
  create_course(330946, "Deloris Conroy", "SPA", 111, 4, 12, 15, M | W,
                time(10, 0), time(11, 50), "Basic Spanish I");
  create_course(330946, "Deloris Conroy", "SPA", 111, 4, 12, 15, F, time(10, 0),
                time(10, 50), "Basic Spanish I");
  create_course(330946, "Jeane Guyer", "SPA", 111, 4, 12, 15, T | R,
                time(15, 30), time(16, 50), "Basic Spanish I");
  create_course(330946, "Jeane Guyer", "SPA", 111, 4, 7, 15, H, time(0, 0),
                time(0, 0), "Basic Spanish I");
  create_course(735781, "Laverne Conely", "SPA", 112, 4, 15, 15, M | W,
                time(11, 0), time(12, 20), "Basic Spanish II");
  create_course(735781, "Jeane Guyer", "SPA", 112, 4, 7, 15, M | W, time(10, 0),
                time(11, 50), "Basic Spanish II");
  create_course(735781, "Jeane Guyer", "SPA", 112, 4, 7, 30, F, time(11, 0),
                time(11, 50), "Basic Spanish II");
  create_course(191761, "Laverne Conely", "SPA", 211, 3, 6, 15, T | R,
                time(15, 30), time(16, 50), "Reading in Spanish");
  create_course(63285, "Laverne Conely", "SPA", 212, 3, 8, 8, W, time(16, 30),
                time(19, 20), "Spanish Through Film");
  create_course(61132, "Laverne Conely", "SPA", 311, 3, 4, 10, T | R,
                time(14, 0), time(15, 20), "Advanced Spanish I");
  create_course(7124, "Laverne Conely", "SPA", 312, 3, 3, 15, M | W,
                time(12, 30), time(13, 50), "Spanish Thru Short Fiction");
  create_course(41966, "Laverne Conely", "SPA", 437, 3, 5, 15, W, time(16, 0),
                time(18, 50), "Contemp Lat Am Soc");
  create_course(606065, "Jeane Guyer", "SPA", 438, 3, 2, 15, T | R, time(14, 0),
                time(15, 20), "Spanish Civilization");
  create_course(204893, "Deloris Conroy", "SPA", 499, 1, 1, 1, H, time(0, 0),
                time(0, 0), "Independent Study");
  create_course(204893, "Jeane Guyer", "SPA", 499, 1, 1, 1, F, time(11, 0),
                time(11, 50), "Independent Study");
  create_course(204893, "Jeane Guyer", "SPA", 499, 1, 1, 1, M | W, time(10, 0),
                time(10, 50), "Independent Study");
  create_course(931627, "Tomas Jiang", "SWK", 203, 3, 9, 25, M | W, time(11, 0),
                time(12, 20), "The Field of Social Work");
  create_course(931627, "Linsey Khalil", "SWK", 203, 3, 22, 25, M | W,
                time(15, 30), time(16, 50), "The Field of Social Work");
  create_course(99659, "Faustino Mailloux", "SWK", 304, 3, 23, 25, M | W,
                time(18, 0), time(19, 20), "Amer Social Welfare");
  create_course(99659, "Columbus Knighton", "SWK", 304, 3, 23, 25, M | W,
                time(18, 0), time(19, 20), "Amer Social Welfare");
  create_course(444148, "Deirdre Aylesworth", "SWK", 307, 3, 23, 25, M | W,
                time(15, 0), time(16, 20), "Hum Beh Soc Envir I");
  create_course(573402, "Danyel Mickle", "SWK", 308, 3, 20, 25, M | W,
                time(15, 0), time(16, 20), "Hum Beh Soc Envir II");
  create_course(140459, "Loralee Penman", "SWK", 318, 3, 20, 20, M | W,
                time(12, 30), time(13, 50), "Human Diversity");
  create_course(140459, "Loralee Penman", "SWK", 318, 3, 18, 20, M | W,
                time(12, 30), time(13, 50), "Human Diversity");
  create_course(584826, "Robert Hetrick", "SWK", 335, 3, 11, 10, T | R,
                time(14, 0), time(15, 20), "Soc Wrk Prac I:Indiv");
  create_course(584826, "Robert Hetrick", "SWK", 335, 3, 10, 8, T | R,
                time(14, 0), time(15, 20), "Soc Wrk Prac I:Indiv");
  create_course(584826, "Bianca Rosenfeld", "SWK", 335, 3, 10, 8, T | R,
                time(14, 0), time(15, 20), "Soc Wrk Prac I:Indiv");
  create_course(584826, "Danyel Mickle", "SWK", 335, 3, 11, 10, T | R,
                time(14, 0), time(15, 20), "Soc Wrk Prac I:Indiv");
  create_course(812876, "Bianca Rosenfeld", "SWK", 337, 3, 10, 11, T | R,
                time(15, 30), time(16, 50), "Case Management");
  create_course(812876, "Danyel Mickle", "SWK", 337, 3, 9, 11, T | R,
                time(15, 30), time(16, 50), "Case Management");
  create_course(473110, "Bianca Rosenfeld", "SWK", 436, 3, 11, 10, T | R,
                time(15, 30), time(16, 50), "Soc Wrk Prac II: Fam & Groups");
  create_course(473110, "Danyel Mickle", "SWK", 436, 3, 9, 10, T | R,
                time(15, 30), time(16, 50), "Soc Wrk Prac II: Fam & Groups");
  create_course(473110, "Columbus Knighton", "SWK", 436, 3, 9, 10, T | R,
                time(15, 30), time(16, 50), "Soc Wrk Prac II: Fam & Groups");
  create_course(473110, "Columbus Knighton", "SWK", 436, 3, 11, 10, T | R,
                time(15, 30), time(16, 50), "Soc Wrk Prac II: Fam & Groups");
  create_course(32871, "Leticia Hedin", "SWK", 441, 3, 11, 8, T | R,
                time(18, 30), time(19, 50), "Rsch Method Soc Wrk I");
  create_course(32871, "Leticia Hedin", "SWK", 441, 3, 9, 8, T | R,
                time(18, 30), time(19, 50), "Rsch Method Soc Wrk I");
  create_course(887261, "Robert Hetrick", "SWK", 442, 3, 18, 25, H, time(0, 0),
                time(0, 0), "Res Mth in Soc Wrk II");
  create_course(564815, "Robert Hetrick", "SWK", 482, 3, 19, 25, T | R,
                time(11, 0), time(12, 20), "Soc Wrk Prac III");
  create_course(714331, "Danyel Mickle", "SWK", 484, 4, 20, 25, F, time(11, 0),
                time(12, 20), "Soc Wrk Prac. I:Intrnshp");
  create_course(714331, "Danyel Mickle", "SWK", 484, 4, 20, 25, M | W,
                time(9, 0), time(17, 0), "Soc Wrk Prac. I:Intrnshp");
  create_course(714331, "Jesica Cryer", "SWK", 484, 4, 20, 25, F, time(11, 0),
                time(12, 20), "Soc Wrk Prac. I:Intrnshp");
  create_course(714331, "Jesica Cryer", "SWK", 484, 4, 20, 25, M | W,
                time(9, 0), time(17, 0), "Soc Wrk Prac. I:Intrnshp");
  create_course(399494, "Bianca Rosenfeld", "SWK", 486, 4, 4, 7, T,
                time(15, 30), time(16, 50), "Social Work Practicum II: Inte");
  create_course(399494, "Bianca Rosenfeld", "SWK", 486, 4, 4, 7, M | W,
                time(9, 0), time(16, 50), "Social Work Practicum II: Inte");
  create_course(399494, "Winfred Rowse", "SWK", 486, 4, 4, 7, T, time(15, 30),
                time(16, 50), "Social Work Practicum II: Inte");
  create_course(399494, "Winfred Rowse", "SWK", 486, 4, 4, 7, M | W, time(9, 0),
                time(16, 50), "Social Work Practicum II: Inte");
  create_course(399494, "Danyel Mickle", "SWK", 486, 4, 11, 7, T, time(15, 30),
                time(16, 50), "Social Work Practicum II: Inte");
  create_course(399494, "Danyel Mickle", "SWK", 486, 4, 11, 7, M | W,
                time(9, 0), time(16, 50), "Social Work Practicum II: Inte");
  create_course(399494, "Danyel Mickle", "SWK", 486, 4, 4, 7, T, time(15, 30),
                time(16, 50), "Social Work Practicum II: Inte");
  create_course(399494, "Danyel Mickle", "SWK", 486, 4, 4, 7, M | W, time(9, 0),
                time(16, 50), "Social Work Practicum II: Inte");
  create_course(399494, "Jesica Cryer", "SWK", 486, 4, 11, 7, T, time(15, 30),
                time(16, 50), "Social Work Practicum II: Inte");
  create_course(399494, "Jesica Cryer", "SWK", 486, 4, 11, 7, M | W, time(9, 0),
                time(16, 50), "Social Work Practicum II: Inte");
  create_course(399494, "Jesica Cryer", "SWK", 486, 4, 4, 7, T, time(15, 30),
                time(16, 50), "Social Work Practicum II: Inte");
  create_course(399494, "Jesica Cryer", "SWK", 486, 4, 4, 7, M | W, time(9, 0),
                time(16, 50), "Social Work Practicum II: Inte");
  create_course(399494, "Jesica Cryer", "SWK", 486, 4, 4, 7, T, time(15, 30),
                time(16, 50), "Social Work Practicum II: Inte");
  create_course(399494, "Jesica Cryer", "SWK", 486, 4, 4, 7, M | W, time(9, 0),
                time(16, 50), "Social Work Practicum II: Inte");
  create_course(604407, "Estefana Thrift", "SWK", 494, 3, 19, 25, T | R,
                time(18, 0), time(19, 20), "Senior Seminar");
  create_course(490447, "Coretta Himes", "SWK", 702, 3, 14, 15, M, time(9, 0),
                time(11, 50), "Play Therapy");
  create_course(829206, "Sunny Tien", "SWK", 705, 3, 12, 20, M, time(16, 0),
                time(18, 50), "Human Behavior & Soc Environ I");
  create_course(663220, "Gale Roosa", "SWK", 706, 3, 13, 15, M, time(16, 0),
                time(18, 50), "Human Behav & Soc Environ II");
  create_course(257471, "Gale Roosa", "SWK", 709, 3, 14, 15, W, time(17, 0),
                time(19, 50), "SW Perspect on Dysfunction");
  create_course(823444, "Deloris Conroy", "SWK", 711, 3, 14, 8, H, time(0, 0),
                time(0, 0), "Social Policy & Social Svcs");
  create_course(139693, "Sunny Tien", "SWK", 713, 3, 13, 15, F, time(9, 0),
                time(11, 50), "Deaf & Hard of Hearing Populat");
  create_course(583502, "Deloris Conroy", "SWK", 715, 3, 10, 15, H, time(0, 0),
                time(0, 0), "Disab Policy: Impl Df and HH");
  create_course(218555, "Deloris Conroy", "SWK", 717, 3, 8, 15, H, time(0, 0),
                time(0, 0), "Cultural Competence");
  create_course(681669, "Nisha Pegues", "SWK", 741, 3, 8, 8, M, time(9, 0),
                time(11, 50), "Social Work Practice I");
  create_course(681669, "Rosetta Harker", "SWK", 741, 3, 8, 8, F, time(16, 0),
                time(18, 50), "Social Work Practice I");
  create_course(681669, "Jesica Cryer", "SWK", 741, 3, 8, 8, M, time(9, 0),
                time(11, 50), "Social Work Practice I");
  create_course(240901, "Gale Roosa", "SWK", 742, 3, 9, 9, F, time(9, 0),
                time(11, 50), "Social Work Practice II");
  create_course(240901, "Rosetta Harker", "SWK", 742, 3, 8, 9, W, time(17, 0),
                time(19, 50), "Social Work Practice II");
  create_course(441761, "Todd Holsinger", "SWK", 744, 2, 8, 8, M, time(19, 0),
                time(20, 50), "SWK Prac w/Families&SmGrps");
  create_course(441761, "Rosetta Harker", "SWK", 744, 2, 7, 8, F, time(10, 30),
                time(12, 20), "SWK Prac w/Families&SmGrps");
  create_course(374850, "Gale Roosa", "SWK", 751, 3, 13, 15, R, time(9, 0),
                time(11, 50), "Micro Interventions");
  create_course(322285, "Sunny Tien", "SWK", 752, 3, 13, 15, W, time(9, 0),
                time(11, 50), "Macro Interventions");
  create_course(106104, "Gale Roosa", "SWK", 755, 3, 9, 10, H, time(0, 0),
                time(0, 0), "Qualitative Socl Wk Research");
  create_course(106104, "Todd Holsinger", "SWK", 755, 3, 8, 10, H, time(0, 0),
                time(0, 0), "Qualitative Socl Wk Research");
  create_course(167076, "Rosetta Harker", "SWK", 756, 3, 8, 9, M, time(13, 0),
                time(15, 50), "Quantitative Socl Wk Research");
  create_course(167076, "Leticia Hedin", "SWK", 756, 3, 11, 9, W, time(10, 0),
                time(11, 30), "Quantitative Socl Wk Research");
  create_course(693572, "Rosetta Harker", "SWK", 760, 3, 4, 15, W, time(13, 0),
                time(15, 50), "School Social Work Practice");
  create_course(221307, "Rosetta Harker", "SWK", 761, 3, 8, 15, W, time(13, 0),
                time(15, 50), "School Social Work Policy");
  create_course(872154, "Deloris Conroy", "SWK", 771, 3, 9, 9, F, time(9, 0),
                time(10, 20), "Foundation Field Practicum I");
  create_course(872154, "Nisha Pegues", "SWK", 771, 3, 9, 9, F, time(19, 0),
                time(20, 20), "Foundation Field Practicum I");
  create_course(872154, "Jesica Cryer", "SWK", 771, 3, 9, 9, F, time(9, 0),
                time(10, 20), "Foundation Field Practicum I");
  create_course(872154, "Jesica Cryer", "SWK", 771, 3, 9, 9, T | R, time(8, 30),
                time(16, 50), "Foundation Field Practicum I");
  create_course(872154, "Jesica Cryer", "SWK", 771, 3, 9, 9, F, time(19, 0),
                time(20, 20), "Foundation Field Practicum I");
  create_course(872154, "Jesica Cryer", "SWK", 771, 3, 9, 9, T | R, time(8, 30),
                time(16, 50), "Foundation Field Practicum I");
  create_course(766770, "Jesica Cryer", "SWK", 772, 3, 10, 9, T | R, time(9, 0),
                time(17, 0), "Foundation Field Practicum II");
  create_course(766770, "Jesica Cryer", "SWK", 772, 3, 10, 9, M, time(10, 30),
                time(11, 50), "Foundation Field Practicum II");
  create_course(766770, "Jesica Cryer", "SWK", 772, 3, 7, 9, T | R, time(9, 0),
                time(17, 0), "Foundation Field Practicum II");
  create_course(766770, "Jesica Cryer", "SWK", 772, 3, 7, 9, F, time(17, 0),
                time(18, 20), "Foundation Field Practicum II");
  create_course(766770, "Sunny Tien", "SWK", 772, 3, 10, 9, T | R, time(9, 0),
                time(17, 0), "Foundation Field Practicum II");
  create_course(766770, "Sunny Tien", "SWK", 772, 3, 10, 9, M, time(10, 30),
                time(11, 50), "Foundation Field Practicum II");
  create_course(765575, "Sunny Tien", "SWK", 783, 6, 14, 15, H, time(0, 0),
                time(0, 0), "Adv Field Practicum with D & H");
  create_course(401819, "Gale Roosa", "SWK", 791, 3, 14, 15, H, time(0, 0),
                time(0, 0), "Research Practicum I");
  create_course(62014, "Conception Templeman", "THE", 101, 3, 14, 15, T | R,
                time(15, 30), time(16, 50), "Visual Gestural Communication");
  create_course(62014, "Alphonso Lowenstein", "THE", 101, 3, 15, 15, T | R,
                time(11, 0), time(12, 20), "Visual Gestural Communication");
  create_course(62014, "Alphonso Lowenstein", "THE", 101, 3, 15, 15, T | R,
                time(11, 0), time(12, 20), "Visual Gestural Communication");
  create_course(947868, "Conception Templeman", "THE", 110, 3, 9, 15, M | W,
                time(12, 30), time(13, 50), "Introduction to Theatre");
  create_course(947868, "Conception Templeman", "THE", 110, 3, 8, 15, M | W,
                time(12, 30), time(13, 50), "Introduction to Theatre");
  create_course(947868, "Tracey Sherrard", "THE", 110, 3, 5, 15, M | W,
                time(15, 0), time(16, 20), "Introduction to Theatre");
  create_course(304539, "Conception Templeman", "THE", 201, 3, 11, 15, T | R,
                time(15, 30), time(16, 50), "Fundamentals of Body Movement");
  create_course(978156, "Odell Ostrowski", "THE", 250, 1, 15, 15, T | R,
                time(11, 0), time(11, 50), "Dance & Fund Mvmnt Activities");
  create_course(978156, "Odell Ostrowski", "THE", 250, 1, 15, 18, T | R,
                time(11, 0), time(11, 50), "Dance & Fund Mvmnt Activities");
  create_course(454945, "Alphonso Lowenstein", "THE", 281, 1, 18, 15,
                M | T | W | R, time(19, 0), time(21, 50), "Theatre Practicum");
  create_course(454945, "Alphonso Lowenstein", "THE", 281, 1, 4, 15, M | W,
                time(14, 0), time(15, 20), "Theatre Practicum");
  create_course(248209, "Tracey Sherrard", "THE", 320, 3, 1, 1, H, time(0, 0),
                time(0, 0), "Field Experience");
  create_course(248209, "Tracey Sherrard", "THE", 320, 3, 1, 1, H, time(0, 0),
                time(0, 0), "Field Experience");
  create_course(248209, "Tracey Sherrard", "THE", 320, 3, 1, 1, H, time(0, 0),
                time(0, 0), "Field Experience");
  create_course(248209, "Alphonso Lowenstein", "THE", 320, 3, 1, 1, H,
                time(0, 0), time(0, 0), "Field Experience");
  create_course(625554, "Odell Ostrowski", "THE", 325, 3, 6, 15, T | R,
                time(14, 0), time(15, 20), "Choreography");
  create_course(199478, "Alphonso Lowenstein", "THE", 342, 3, 4, 15, M | W,
                time(11, 0), time(12, 20), "Intro to Playwriting");
  create_course(949432, "Tracey Sherrard", "THE", 350, 3, 8, 15, T | R,
                time(9, 30), time(10, 50), "Script Reading and Analysis");
  create_course(677578, "Tracey Sherrard", "THE", 351, 3, 4, 15, T | R,
                time(9, 30), time(10, 50), "Contemporary Drama");
  create_course(990748, "Alphonso Lowenstein", "THE", 353, 3, 4, 15, M | W,
                time(11, 0), time(12, 20), "Fundamentals of Acting");
  create_course(928451, "Odell Ostrowski", "THE", 435, 3, 6, 15, M | W,
                time(16, 30), time(17, 50), "Dance Production");
  create_course(973314, "Conception Templeman", "THE", 470, 3, 11, 15, M | W,
                time(8, 30), time(9, 50), "Creative - Kindergarten");
  create_course(646861, "Conception Templeman", "THE", 472, 3, 14, 15, M | W,
                time(8, 30), time(9, 50), "Educational Drama Grades 1-6");
  create_course(872165, "Tracey Sherrard", "THE", 495, 1, 6, 15, M | W,
                time(15, 0), time(16, 20), "Special Topics");
  create_course(835598, "Jeane Guyer", "WLC", 380, 3, 7, 15, T | R, time(11, 0),
                time(12, 20), "The Latino Presence in the US");
  create_course(899591, "Corey Teets", "WLC", 395, 1, 9, 15, W, time(18, 0),
                time(20, 0), "Special Topics");
  create_course(899591, "Joy Greenley", "WLC", 395, 1, 9, 15, W, time(18, 0),
                time(20, 0), "Special Topics");
  create_course(899591, "Joy Greenley", "WLC", 395, 1, 9, 15, W, time(18, 0),
                time(20, 0), "Special Topics");
  create_course(899591, "Joy Greenley", "WLC", 395, 1, 9, 15, W, time(18, 0),
                time(20, 0), "Special Topics");
  create_course(899591, "Joy Greenley", "WLC", 395, 1, 9, 15, W, time(18, 0),
                time(20, 0), "Special Topics");
  create_course(899591, "Joy Greenley", "WLC", 395, 1, 9, 15, W, time(18, 0),
                time(20, 0), "Special Topics");
  create_course(899591, "Joy Greenley", "WLC", 395, 1, 9, 15, W, time(18, 0),
                time(20, 0), "Special Topics");
  create_course(899591, "Joy Greenley", "WLC", 395, 1, 9, 15, W, time(18, 0),
                time(20, 0), "Special Topics");
  create_course(899591, "Quincy Modlin", "WLC", 395, 1, 9, 15, W, time(18, 0),
                time(20, 0), "Special Topics");
}

void generate_data() {
  add_all_professors();
  add_all_departments();
  add_all_courses();
}
