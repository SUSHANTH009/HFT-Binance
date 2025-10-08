#pragma once
// Auto-generated C++ header for HFT Random Forest model
// Source: best_hft_rf.pkl

#include <cmath>

// —————————————————————————————
// MODEL IMPLEMENTATION (helpers + forest_score)
// —————————————————————————————
#include <string.h>
static inline void add_vectors(double *v1, double *v2, int size, double *result) {
    for(int i = 0; i < size; ++i)
        result[i] = v1[i] + v2[i];
}
static inline void mul_vector_number(double *v1, double num, int size, double *result) {
    for(int i = 0; i < size; ++i)
        result[i] = v1[i] * num;
}
void forest_score(double * input, double * output) {
    double var0[2];
    double var1[2];
    double var2[2];
    double var3[2];
    double var4[2];
    double var5[2];
    double var6[2];
    double var7[2];
    double var8[2];
    double var9[2];
    double var10[2];
    double var11[2];
    double var12[2];
    double var13[2];
    double var14[2];
    double var15[2];
    double var16[2];
    double var17[2];
    double var18[2];
    double var19[2];
    double var20[2];
    double var21[2];
    double var22[2];
    double var23[2];
    double var24[2];
    double var25[2];
    double var26[2];
    double var27[2];
    double var28[2];
    double var29[2];
    double var30[2];
    double var31[2];
    double var32[2];
    double var33[2];
    double var34[2];
    double var35[2];
    double var36[2];
    double var37[2];
    double var38[2];
    double var39[2];
    double var40[2];
    double var41[2];
    double var42[2];
    double var43[2];
    double var44[2];
    double var45[2];
    double var46[2];
    double var47[2];
    double var48[2];
    double var49[2];
    double var50[2];
    double var51[2];
    double var52[2];
    double var53[2];
    double var54[2];
    double var55[2];
    double var56[2];
    double var57[2];
    double var58[2];
    double var59[2];
    double var60[2];
    double var61[2];
    double var62[2];
    double var63[2];
    double var64[2];
    double var65[2];
    double var66[2];
    double var67[2];
    double var68[2];
    double var69[2];
    double var70[2];
    double var71[2];
    double var72[2];
    double var73[2];
    double var74[2];
    double var75[2];
    double var76[2];
    double var77[2];
    double var78[2];
    double var79[2];
    double var80[2];
    double var81[2];
    double var82[2];
    double var83[2];
    double var84[2];
    double var85[2];
    double var86[2];
    double var87[2];
    double var88[2];
    double var89[2];
    double var90[2];
    double var91[2];
    double var92[2];
    double var93[2];
    double var94[2];
    double var95[2];
    double var96[2];
    double var97[2];
    double var98[2];
    double var99[2];
    double var100[2];
    if (input[2] <= 99.52534103393555) {
        if (input[6] <= 0.000037393767343019135) {
            if (input[0] <= 0.5055495947599411) {
                if (input[15] <= -0.00009709897130960599) {
                    memcpy(var100, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[12] <= 0.0001571151879034005) {
                        memcpy(var100, (double[]){0.7286148182236534, 0.2713851817763466}, 2 * sizeof(double));
                    } else {
                        memcpy(var100, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[13] <= 0.00003357844616402872) {
                    if (input[25] <= 0.000040940190956462175) {
                        memcpy(var100, (double[]){0.38051215781131786, 0.6194878421886821}, 2 * sizeof(double));
                    } else {
                        memcpy(var100, (double[]){0.19569105908107953, 0.8043089409189205}, 2 * sizeof(double));
                    }
                } else {
                    if (input[18] <= -0.00010619980821502395) {
                        memcpy(var100, (double[]){0.17212633556416576, 0.8278736644358342}, 2 * sizeof(double));
                    } else {
                        memcpy(var100, (double[]){0.5796193733624111, 0.420380626637589}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[6] <= 0.000039171796743175946) {
                if (input[18] <= 0.000044736876589013264) {
                    if (input[0] <= 5.490560293197632) {
                        memcpy(var100, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var100, (double[]){0.16007861978597948, 0.8399213802140206}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= 0.00006932328506081831) {
                        memcpy(var100, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var100, (double[]){0.8205989364679541, 0.1794010635320459}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[9] <= 0.9976017773151398) {
                    if (input[21] <= -0.00004616015394276474) {
                        memcpy(var100, (double[]){0.38058700512006927, 0.6194129948799307}, 2 * sizeof(double));
                    } else {
                        memcpy(var100, (double[]){0.5737367438042298, 0.4262632561957703}, 2 * sizeof(double));
                    }
                } else {
                    if (input[6] <= 0.00011801202344940975) {
                        memcpy(var100, (double[]){0.347204130450229, 0.6527958695497709}, 2 * sizeof(double));
                    } else {
                        memcpy(var100, (double[]){0.7273887156223419, 0.272611284377658}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[16] <= 0.000011105374824182945) {
            if (input[8] <= 0.000015720894680271158) {
                memcpy(var100, (double[]){0.7742957746478872, 0.2257042253521127}, 2 * sizeof(double));
            } else {
                memcpy(var100, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            if (input[13] <= 0.00004612654811353423) {
                memcpy(var100, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                if (input[8] <= 0.0000032343559723813087) {
                    memcpy(var100, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    memcpy(var100, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        }
    }
    double var101[2];
    if (input[15] <= -0.0000932446273509413) {
        if (input[18] <= 0.000023263695766218007) {
            if (input[9] <= 0.47270072996616364) {
                if (input[24] <= -0.00005872851579624694) {
                    memcpy(var101, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                } else {
                    memcpy(var101, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var101, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            if (input[7] <= 0.00000046563866362703266) {
                memcpy(var101, (double[]){0.0, 1.0}, 2 * sizeof(double));
            } else {
                memcpy(var101, (double[]){0.8727922206787061, 0.12720777932129393}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[11] <= 0.00001962965416169027) {
            if (input[0] <= 4.118036270141602) {
                if (input[18] <= -0.0000564770325581776) {
                    if (input[2] <= 26.184585571289062) {
                        memcpy(var101, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    } else {
                        memcpy(var101, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[12] <= 0.00011059834650950506) {
                        memcpy(var101, (double[]){0.775432257355416, 0.22456774264458398}, 2 * sizeof(double));
                    } else {
                        memcpy(var101, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[9] <= 0.99931600689888) {
                    if (input[10] <= 0.0000354017047357047) {
                        memcpy(var101, (double[]){0.8205989364679541, 0.1794010635320459}, 2 * sizeof(double));
                    } else {
                        memcpy(var101, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[4] <= 0.00003610394196584821) {
                        memcpy(var101, (double[]){0.20566298019593615, 0.7943370198040638}, 2 * sizeof(double));
                    } else {
                        memcpy(var101, (double[]){0.6730259130789634, 0.3269740869210365}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[9] <= 0.9984177350997925) {
                if (input[18] <= 0.00010954938261420466) {
                    if (input[7] <= 0.0000004610976418462087) {
                        memcpy(var101, (double[]){0.4118054645218075, 0.5881945354781924}, 2 * sizeof(double));
                    } else {
                        memcpy(var101, (double[]){0.583979759980102, 0.41602024001989807}, 2 * sizeof(double));
                    }
                } else {
                    if (input[10] <= 0.00005988779230392538) {
                        memcpy(var101, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var101, (double[]){0.4616838127230736, 0.5383161872769264}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[12] <= 0.00003794186523009557) {
                    if (input[10] <= 0.00005862418947799597) {
                        memcpy(var101, (double[]){0.21343150100871458, 0.7865684989912856}, 2 * sizeof(double));
                    } else {
                        memcpy(var101, (double[]){0.4937632110752362, 0.5062367889247638}, 2 * sizeof(double));
                    }
                } else {
                    if (input[19] <= 0.0000611770974501269) {
                        memcpy(var101, (double[]){0.5210585030483852, 0.47894149695161486}, 2 * sizeof(double));
                    } else {
                        memcpy(var101, (double[]){0.34443584498866725, 0.6555641550113327}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var100, var101, 2, var99);
    double var102[2];
    if (input[21] <= -0.00010754360118880868) {
        if (input[6] <= 0.00003031716369150672) {
            if (input[9] <= 0.3296397179365158) {
                memcpy(var102, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
            } else {
                memcpy(var102, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[13] <= 0.00006767686863895506) {
                if (input[2] <= 49.1212043762207) {
                    if (input[1] <= 7.8108625411987305) {
                        memcpy(var102, (double[]){0.14042145593869731, 0.8595785440613027}, 2 * sizeof(double));
                    } else {
                        memcpy(var102, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[22] <= 0.0001716675833449699) {
                        memcpy(var102, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var102, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[11] <= 0.00005367230187403038) {
                    memcpy(var102, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    memcpy(var102, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        }
    } else {
        if (input[7] <= 0.0000004610976418462087) {
            if (input[21] <= -0.000009305817002314143) {
                if (input[11] <= 0.0000009328963130883494) {
                    if (input[4] <= 0.00006243142161110882) {
                        memcpy(var102, (double[]){0.948176893847522, 0.051823106152477975}, 2 * sizeof(double));
                    } else {
                        memcpy(var102, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                    }
                } else {
                    if (input[19] <= 0.00003250252120778896) {
                        memcpy(var102, (double[]){0.5485319364352685, 0.45146806356473135}, 2 * sizeof(double));
                    } else {
                        memcpy(var102, (double[]){0.36132611750886245, 0.6386738824911374}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[8] <= 0.0000018648314608071814) {
                    if (input[25] <= 0.000019599887309595942) {
                        memcpy(var102, (double[]){0.411356563440641, 0.5886434365593591}, 2 * sizeof(double));
                    } else {
                        memcpy(var102, (double[]){0.28368108131642783, 0.716318918683572}, 2 * sizeof(double));
                    }
                } else {
                    if (input[13] <= 0.00004200943840260152) {
                        memcpy(var102, (double[]){0.3369727617515226, 0.6630272382484773}, 2 * sizeof(double));
                    } else {
                        memcpy(var102, (double[]){0.589933550703702, 0.410066449296298}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[0] <= 10.612656116485596) {
                if (input[4] <= 0.00005416554267867468) {
                    if (input[11] <= 0.000028005333660985343) {
                        memcpy(var102, (double[]){0.69099829671448, 0.3090017032855201}, 2 * sizeof(double));
                    } else {
                        memcpy(var102, (double[]){0.5001462130811973, 0.4998537869188027}, 2 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 39.29460906982422) {
                        memcpy(var102, (double[]){0.14042145593869731, 0.8595785440613027}, 2 * sizeof(double));
                    } else {
                        memcpy(var102, (double[]){0.7584453741257622, 0.24155462587423782}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[21] <= -0.00001444023109797854) {
                    memcpy(var102, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[4] <= 0.000010710660717450082) {
                        memcpy(var102, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var102, (double[]){0.979603525630827, 0.020396474369173002}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var99, var102, 2, var98);
    double var103[2];
    if (input[24] <= -0.0001466149915358983) {
        if (input[18] <= -0.0000004668612518798909) {
            if (input[11] <= 0.00002281361503264634) {
                memcpy(var103, (double[]){0.0, 1.0}, 2 * sizeof(double));
            } else {
                memcpy(var103, (double[]){0.8591311991795473, 0.14086880082045278}, 2 * sizeof(double));
            }
        } else {
            if (input[4] <= 0.000048030273319454864) {
                memcpy(var103, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                memcpy(var103, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[22] <= 0.00010160588863072917) {
            if (input[13] <= 0.0000009319351761405414) {
                if (input[24] <= 0.00011131391147500835) {
                    if (input[13] <= 0.0000009310202244705579) {
                        memcpy(var103, (double[]){0.2759789156626506, 0.7240210843373494}, 2 * sizeof(double));
                    } else {
                        memcpy(var103, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var103, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                }
            } else {
                if (input[10] <= 0.000028009335437673144) {
                    if (input[3] <= 44.73249626159668) {
                        memcpy(var103, (double[]){0.7987403959810875, 0.2012596040189126}, 2 * sizeof(double));
                    } else {
                        memcpy(var103, (double[]){0.5273286451682524, 0.47267135483174777}, 2 * sizeof(double));
                    }
                } else {
                    if (input[7] <= 0.00000046111040319374297) {
                        memcpy(var103, (double[]){0.3970728007840011, 0.6029271992159989}, 2 * sizeof(double));
                    } else {
                        memcpy(var103, (double[]){0.5946166634200492, 0.40538333657995096}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[13] <= 0.00002700285131140845) {
                if (input[0] <= 11.330616474151611) {
                    if (input[15] <= -0.00007871349225752056) {
                        memcpy(var103, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var103, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var103, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                }
            } else {
                if (input[18] <= 0.00006472624954767525) {
                    if (input[9] <= 0.5843289196491241) {
                        memcpy(var103, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var103, (double[]){0.4665132674042886, 0.5334867325957114}, 2 * sizeof(double));
                    }
                } else {
                    if (input[10] <= 0.00010193486741627567) {
                        memcpy(var103, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var103, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var98, var103, 2, var97);
    double var104[2];
    if (input[6] <= 0.000019573110876081046) {
        if (input[0] <= 4.28916335105896) {
            if (input[19] <= 0.00003715263301273808) {
                if (input[24] <= 0.000019587042515922803) {
                    if (input[13] <= 0.0000009316925400071341) {
                        memcpy(var104, (double[]){0.494991558806978, 0.505008441193022}, 2 * sizeof(double));
                    } else {
                        memcpy(var104, (double[]){0.9127025817622911, 0.08729741823770895}, 2 * sizeof(double));
                    }
                } else {
                    if (input[19] <= 0.000013032286915404256) {
                        memcpy(var104, (double[]){0.2602751886373724, 0.7397248113626277}, 2 * sizeof(double));
                    } else {
                        memcpy(var104, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[22] <= 0.00009243408567272127) {
                    if (input[21] <= 0.00005595032598648686) {
                        memcpy(var104, (double[]){0.6300575905301029, 0.36994240946989715}, 2 * sizeof(double));
                    } else {
                        memcpy(var104, (double[]){0.0982112949688484, 0.9017887050311516}, 2 * sizeof(double));
                    }
                } else {
                    if (input[11] <= 0.000015739642094558803) {
                        memcpy(var104, (double[]){0.7742957746478873, 0.22570422535211274}, 2 * sizeof(double));
                    } else {
                        memcpy(var104, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[13] <= 0.00003361302697157953) {
                if (input[19] <= 0.0000009242196767900168) {
                    memcpy(var104, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[2] <= 99.28737258911133) {
                        memcpy(var104, (double[]){0.3138514236780131, 0.6861485763219869}, 2 * sizeof(double));
                    } else {
                        memcpy(var104, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[1] <= 12.871790885925293) {
                    if (input[11] <= 0.000016282177057291847) {
                        memcpy(var104, (double[]){0.5951822446770119, 0.4048177553229881}, 2 * sizeof(double));
                    } else {
                        memcpy(var104, (double[]){0.1639026571758655, 0.8360973428241345}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= -0.000028915290386066772) {
                        memcpy(var104, (double[]){0.36377171215880894, 0.6362282878411911}, 2 * sizeof(double));
                    } else {
                        memcpy(var104, (double[]){0.8602853645859531, 0.13971463541404688}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[9] <= 0.9984177350997925) {
            if (input[24] <= -0.00016060857160482556) {
                memcpy(var104, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                if (input[10] <= 0.00008469290332868695) {
                    if (input[18] <= 0.00011059994358220138) {
                        memcpy(var104, (double[]){0.5538785817972123, 0.44612141820278783}, 2 * sizeof(double));
                    } else {
                        memcpy(var104, (double[]){0.9449123410106566, 0.055087658989343424}, 2 * sizeof(double));
                    }
                } else {
                    if (input[25] <= 0.000018502049897506367) {
                        memcpy(var104, (double[]){0.5595847011222231, 0.4404152988777769}, 2 * sizeof(double));
                    } else {
                        memcpy(var104, (double[]){0.2576876150298818, 0.7423123849701183}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[2] <= 99.52902603149414) {
                if (input[15] <= -0.000014940711935196305) {
                    if (input[0] <= 4.192112922668457) {
                        memcpy(var104, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var104, (double[]){0.2462623887115739, 0.7537376112884261}, 2 * sizeof(double));
                    }
                } else {
                    if (input[18] <= 0.000013077450148557546) {
                        memcpy(var104, (double[]){0.45930638902947496, 0.540693610970525}, 2 * sizeof(double));
                    } else {
                        memcpy(var104, (double[]){0.3071083216718764, 0.6928916783281235}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[21] <= 0.00006985296568018384) {
                    if (input[4] <= 0.000025157465643133037) {
                        memcpy(var104, (double[]){0.9412088416032285, 0.058791158396771535}, 2 * sizeof(double));
                    } else {
                        memcpy(var104, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var104, (double[]){0.43257598111537315, 0.5674240188846268}, 2 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var97, var104, 2, var96);
    double var105[2];
    if (input[2] <= 58.739173889160156) {
        if (input[10] <= 0.0000240272784139961) {
            if (input[6] <= 0.0000009246489582892536) {
                memcpy(var105, (double[]){0.0, 1.0}, 2 * sizeof(double));
            } else {
                if (input[0] <= 9.173502922058105) {
                    if (input[21] <= -0.00006728961307089776) {
                        memcpy(var105, (double[]){0.96746027717143, 0.032539722828569984}, 2 * sizeof(double));
                    } else {
                        memcpy(var105, (double[]){0.6599250815903278, 0.34007491840967224}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var105, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[2] <= 57.36702537536621) {
                if (input[13] <= 0.00003829595880233683) {
                    if (input[4] <= 0.00008521723066223785) {
                        memcpy(var105, (double[]){0.3152469478357382, 0.6847530521642619}, 2 * sizeof(double));
                    } else {
                        memcpy(var105, (double[]){0.6228918812916721, 0.3771081187083279}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= -0.00012414759112289175) {
                        memcpy(var105, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var105, (double[]){0.5993357457318453, 0.40066425426815455}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[22] <= 0.00000792278888184228) {
                    memcpy(var105, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[16] <= 0.000010244122222502483) {
                        memcpy(var105, (double[]){0.39520150963741735, 0.6047984903625826}, 2 * sizeof(double));
                    } else {
                        memcpy(var105, (double[]){0.8402611642743222, 0.15973883572567782}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[13] <= 0.00009922275421558879) {
            if (input[9] <= 0.998245507478714) {
                if (input[9] <= 0.9770163595676422) {
                    if (input[11] <= 0.000028436537832021713) {
                        memcpy(var105, (double[]){0.720117891059928, 0.27988210894007204}, 2 * sizeof(double));
                    } else {
                        memcpy(var105, (double[]){0.4156434425693214, 0.5843565574306786}, 2 * sizeof(double));
                    }
                } else {
                    if (input[22] <= 0.00004689254637924023) {
                        memcpy(var105, (double[]){0.7614068194212407, 0.2385931805787593}, 2 * sizeof(double));
                    } else {
                        memcpy(var105, (double[]){0.565115490177938, 0.434884509822062}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[6] <= 0.0001116222920245491) {
                    if (input[2] <= 74.53531265258789) {
                        memcpy(var105, (double[]){0.19436062513589356, 0.8056393748641065}, 2 * sizeof(double));
                    } else {
                        memcpy(var105, (double[]){0.4015088326465576, 0.5984911673534423}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 9.163384437561035) {
                        memcpy(var105, (double[]){0.856039168126488, 0.1439608318735121}, 2 * sizeof(double));
                    } else {
                        memcpy(var105, (double[]){0.24626238871157397, 0.7537376112884261}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[1] <= 7.571234464645386) {
                if (input[9] <= 0.9614437818527222) {
                    if (input[16] <= 0.000034096035960828885) {
                        memcpy(var105, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var105, (double[]){0.9536682327430429, 0.04633176725695699}, 2 * sizeof(double));
                    }
                } else {
                    if (input[18] <= 0.00003587228093238082) {
                        memcpy(var105, (double[]){0.16007861978597943, 0.8399213802140205}, 2 * sizeof(double));
                    } else {
                        memcpy(var105, (double[]){0.7365151861155514, 0.2634848138844485}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[6] <= 0.00006717888754792511) {
                    if (input[10] <= 0.000039893644498079084) {
                        memcpy(var105, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var105, (double[]){0.5784558726818361, 0.4215441273181639}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var105, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var96, var105, 2, var95);
    double var106[2];
    if (input[7] <= 0.0000009239736016297684) {
        if (input[9] <= 0.1867891252040863) {
            if (input[24] <= -0.00002563177258707583) {
                if (input[3] <= 33.79289436340332) {
                    memcpy(var106, (double[]){0.5784558726818361, 0.42154412731816393}, 2 * sizeof(double));
                } else {
                    if (input[18] <= -0.00000979626975095016) {
                        memcpy(var106, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var106, (double[]){0.8727922206787061, 0.12720777932129393}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var106, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            if (input[21] <= 0.00006465686237788759) {
                if (input[6] <= 0.0000018539728898758767) {
                    if (input[13] <= 0.0000009319920764028211) {
                        memcpy(var106, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var106, (double[]){0.7183845893883068, 0.2816154106116932}, 2 * sizeof(double));
                    }
                } else {
                    if (input[15] <= -0.000050276550609851256) {
                        memcpy(var106, (double[]){0.1861350939563229, 0.8138649060436771}, 2 * sizeof(double));
                    } else {
                        memcpy(var106, (double[]){0.4313111938749677, 0.5686888061250323}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[11] <= 0.00005139265522302594) {
                    if (input[13] <= 0.0000771059603721369) {
                        memcpy(var106, (double[]){0.11935316446678808, 0.8806468355332119}, 2 * sizeof(double));
                    } else {
                        memcpy(var106, (double[]){0.36377171215880894, 0.636228287841191}, 2 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 78.21383666992188) {
                        memcpy(var106, (double[]){0.5204711729874344, 0.47952882701256555}, 2 * sizeof(double));
                    } else {
                        memcpy(var106, (double[]){0.20262612301313054, 0.7973738769868696}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[24] <= 0.0001089905490516685) {
            if (input[11] <= 0.000020482815671130084) {
                if (input[9] <= 0.5877373218536377) {
                    memcpy(var106, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[18] <= -0.000009731869113238645) {
                        memcpy(var106, (double[]){0.3138514236780133, 0.6861485763219868}, 2 * sizeof(double));
                    } else {
                        memcpy(var106, (double[]){0.780587989198646, 0.21941201080135397}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[22] <= 0.000055951401009224355) {
                    if (input[18] <= -0.00009097790098167025) {
                        memcpy(var106, (double[]){0.9581073132475002, 0.04189268675249984}, 2 * sizeof(double));
                    } else {
                        memcpy(var106, (double[]){0.47775786214762905, 0.522242137852371}, 2 * sizeof(double));
                    }
                } else {
                    if (input[10] <= 0.00007377975998679176) {
                        memcpy(var106, (double[]){0.7224155180909998, 0.2775844819090002}, 2 * sizeof(double));
                    } else {
                        memcpy(var106, (double[]){0.3841383526945584, 0.6158616473054416}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[11] <= 0.000021921990082773846) {
                memcpy(var106, (double[]){0.753049955053294, 0.2469500449467061}, 2 * sizeof(double));
            } else {
                if (input[3] <= 70.82517623901367) {
                    memcpy(var106, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[3] <= 76.93345642089844) {
                        memcpy(var106, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var106, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var95, var106, 2, var94);
    double var107[2];
    if (input[9] <= 0.9987818002700806) {
        if (input[10] <= 0.00002784686967061134) {
            if (input[6] <= 0.000000924530581869476) {
                memcpy(var107, (double[]){0.0, 1.0}, 2 * sizeof(double));
            } else {
                if (input[4] <= 0.000028297595235926565) {
                    if (input[8] <= 0.0000074585686888895) {
                        memcpy(var107, (double[]){0.4870064175160437, 0.5129935824839563}, 2 * sizeof(double));
                    } else {
                        memcpy(var107, (double[]){0.8934567012022827, 0.10654329879771735}, 2 * sizeof(double));
                    }
                } else {
                    if (input[9] <= 0.0509993601590395) {
                        memcpy(var107, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var107, (double[]){0.7646312662210312, 0.2353687337789688}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[7] <= 0.0000004610976418462087) {
                if (input[21] <= -0.00010710667265811935) {
                    if (input[25] <= 0.00009606778621673584) {
                        memcpy(var107, (double[]){0.8205989364679541, 0.17940106353204588}, 2 * sizeof(double));
                    } else {
                        memcpy(var107, (double[]){0.4325759811153732, 0.5674240188846268}, 2 * sizeof(double));
                    }
                } else {
                    if (input[12] <= -0.000006528648100356804) {
                        memcpy(var107, (double[]){0.9195834901518003, 0.08041650984819974}, 2 * sizeof(double));
                    } else {
                        memcpy(var107, (double[]){0.33087882635068444, 0.6691211736493156}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[21] <= -0.0001219383702846244) {
                    memcpy(var107, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[16] <= 0.00005657164547301363) {
                        memcpy(var107, (double[]){0.6046076272584472, 0.39539237274155276}, 2 * sizeof(double));
                    } else {
                        memcpy(var107, (double[]){0.46168381272307357, 0.5383161872769265}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[19] <= 0.00002597607181087369) {
            if (input[22] <= 0.000017653598661127035) {
                if (input[22] <= 0.000015845415873627644) {
                    if (input[11] <= 0.00002403125472483225) {
                        memcpy(var107, (double[]){0.8205989364679541, 0.17940106353204588}, 2 * sizeof(double));
                    } else {
                        memcpy(var107, (double[]){0.4722769087589932, 0.5277230912410068}, 2 * sizeof(double));
                    }
                } else {
                    if (input[16] <= 0.00002362040049774805) {
                        memcpy(var107, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var107, (double[]){0.8591311991795473, 0.14086880082045275}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 8.85444688796997) {
                    if (input[25] <= 0.000019478165086184163) {
                        memcpy(var107, (double[]){0.5915810041627729, 0.4084189958372271}, 2 * sizeof(double));
                    } else {
                        memcpy(var107, (double[]){0.28280412052934134, 0.7171958794706585}, 2 * sizeof(double));
                    }
                } else {
                    if (input[4] <= 0.000010517716873437166) {
                        memcpy(var107, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var107, (double[]){0.8026005132591959, 0.19739948674080413}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[3] <= 51.03841972351074) {
                if (input[3] <= 47.34063148498535) {
                    if (input[12] <= 0.00006574549843207933) {
                        memcpy(var107, (double[]){0.08700296735905044, 0.9129970326409496}, 2 * sizeof(double));
                    } else {
                        memcpy(var107, (double[]){0.5665153125301904, 0.43348468746980967}, 2 * sizeof(double));
                    }
                } else {
                    if (input[12] <= 0.00014558852853951976) {
                        memcpy(var107, (double[]){0.888946638946639, 0.11105336105336105}, 2 * sizeof(double));
                    } else {
                        memcpy(var107, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[12] <= 0.000014404880403162679) {
                    if (input[24] <= 0.000018092123355017975) {
                        memcpy(var107, (double[]){0.7688727177369129, 0.23112728226308718}, 2 * sizeof(double));
                    } else {
                        memcpy(var107, (double[]){0.22232332423415221, 0.7776766757658479}, 2 * sizeof(double));
                    }
                } else {
                    if (input[18] <= 0.00006713430775562301) {
                        memcpy(var107, (double[]){0.36054091875827027, 0.6394590812417298}, 2 * sizeof(double));
                    } else {
                        memcpy(var107, (double[]){0.15694011133541327, 0.8430598886645868}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var94, var107, 2, var93);
    double var108[2];
    if (input[6] <= 0.00001570555650687311) {
        if (input[0] <= 4.065661907196045) {
            if (input[11] <= 0.0000009321849461230158) {
                if (input[25] <= 0.00003390761048649438) {
                    if (input[25] <= 0.000025154321519949008) {
                        memcpy(var108, (double[]){0.8955770953816079, 0.10442290461839211}, 2 * sizeof(double));
                    } else {
                        memcpy(var108, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var108, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[10] <= 0.000005107103788759559) {
                    if (input[13] <= 0.00004153396548645105) {
                        memcpy(var108, (double[]){0.6667966211825861, 0.3332033788174139}, 2 * sizeof(double));
                    } else {
                        memcpy(var108, (double[]){0.16007861978597945, 0.8399213802140205}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= 0.00008308047836180776) {
                        memcpy(var108, (double[]){0.7638915092220754, 0.23610849077792465}, 2 * sizeof(double));
                    } else {
                        memcpy(var108, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[13] <= 0.000018978553271153942) {
                if (input[2] <= 97.94094848632812) {
                    if (input[18] <= 0.0001164904642791953) {
                        memcpy(var108, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var108, (double[]){0.8205989364679541, 0.1794010635320459}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var108, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[15] <= 0.0000924508785828948) {
                    if (input[9] <= 0.9968197047710419) {
                        memcpy(var108, (double[]){0.7988836963521971, 0.20111630364780286}, 2 * sizeof(double));
                    } else {
                        memcpy(var108, (double[]){0.43896259443523117, 0.5610374055647688}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var108, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        }
    } else {
        if (input[7] <= 0.0000004610976418462087) {
            if (input[24] <= 0.0001531373054604046) {
                if (input[0] <= 7.033029794692993) {
                    if (input[15] <= -0.0000924798587220721) {
                        memcpy(var108, (double[]){0.06870694099451655, 0.9312930590054834}, 2 * sizeof(double));
                    } else {
                        memcpy(var108, (double[]){0.3852331858483815, 0.6147668141516185}, 2 * sizeof(double));
                    }
                } else {
                    if (input[8] <= 0.0000023203645014291396) {
                        memcpy(var108, (double[]){0.42815875274801124, 0.5718412472519888}, 2 * sizeof(double));
                    } else {
                        memcpy(var108, (double[]){0.7249029705926257, 0.2750970294073744}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var108, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            if (input[22] <= 0.00009567258530296385) {
                if (input[18] <= 0.00003777771780733019) {
                    if (input[24] <= -0.00008827089914120734) {
                        memcpy(var108, (double[]){0.21201822257574662, 0.7879817774242533}, 2 * sizeof(double));
                    } else {
                        memcpy(var108, (double[]){0.6118330605564645, 0.3881669394435355}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= 0.0000004633533876585716) {
                        memcpy(var108, (double[]){0.5334788937409025, 0.4665211062590975}, 2 * sizeof(double));
                    } else {
                        memcpy(var108, (double[]){0.7803273907178533, 0.21967260928214682}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[21] <= 0.00013590361777460203) {
                    if (input[18] <= 0.0000445755595137598) {
                        memcpy(var108, (double[]){0.4707339449541284, 0.5292660550458715}, 2 * sizeof(double));
                    } else {
                        memcpy(var108, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var108, (double[]){0.9014604150653344, 0.09853958493466565}, 2 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var93, var108, 2, var92);
    double var109[2];
    if (input[4] <= 0.00004224791155138519) {
        if (input[11] <= 0.000021263796952553093) {
            if (input[21] <= 0.000012551734471344389) {
                if (input[12] <= 0.0000009255579982436757) {
                    memcpy(var109, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[16] <= 0.000008383400654565776) {
                        memcpy(var109, (double[]){0.9195834901518003, 0.08041650984819973}, 2 * sizeof(double));
                    } else {
                        memcpy(var109, (double[]){0.7047088749574378, 0.2952911250425621}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[7] <= 0.00000046310918833114556) {
                    if (input[2] <= 99.158447265625) {
                        memcpy(var109, (double[]){0.2729842736952583, 0.7270157263047416}, 2 * sizeof(double));
                    } else {
                        memcpy(var109, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[16] <= 0.00006378043690347113) {
                        memcpy(var109, (double[]){0.8421830118998769, 0.15781698810012315}, 2 * sizeof(double));
                    } else {
                        memcpy(var109, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[9] <= 0.9993506371974945) {
                if (input[7] <= 0.0000004611529504927603) {
                    if (input[4] <= 0.00003415668470552191) {
                        memcpy(var109, (double[]){0.34985979356840285, 0.6501402064315972}, 2 * sizeof(double));
                    } else {
                        memcpy(var109, (double[]){0.05283454067106352, 0.9471654593289365}, 2 * sizeof(double));
                    }
                } else {
                    if (input[9] <= 0.8247247338294983) {
                        memcpy(var109, (double[]){0.8355895009832142, 0.1644104990167859}, 2 * sizeof(double));
                    } else {
                        memcpy(var109, (double[]){0.5180233298682301, 0.48197667013177004}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[8] <= 0.0000009330883870006801) {
                    if (input[10] <= 0.0000746798723412212) {
                        memcpy(var109, (double[]){0.21518071944094425, 0.7848192805590557}, 2 * sizeof(double));
                    } else {
                        memcpy(var109, (double[]){0.4495829244357212, 0.5504170755642788}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 13.0234694480896) {
                        memcpy(var109, (double[]){0.3736777263265218, 0.6263222736734781}, 2 * sizeof(double));
                    } else {
                        memcpy(var109, (double[]){0.6778441187704803, 0.3221558812295197}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[18] <= 0.00011061796612921171) {
            if (input[21] <= 0.00008911708209780045) {
                if (input[6] <= 0.00003608548649935983) {
                    if (input[2] <= 95.74282455444336) {
                        memcpy(var109, (double[]){0.6377515134513192, 0.3622484865486808}, 2 * sizeof(double));
                    } else {
                        memcpy(var109, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[7] <= 0.00000326623376167845) {
                        memcpy(var109, (double[]){0.43961164331897823, 0.5603883566810217}, 2 * sizeof(double));
                    } else {
                        memcpy(var109, (double[]){0.6621998042610855, 0.3378001957389146}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[11] <= 0.00008155620889738202) {
                    if (input[6] <= 0.00005652102299791295) {
                        memcpy(var109, (double[]){0.10417604282634951, 0.8958239571736505}, 2 * sizeof(double));
                    } else {
                        memcpy(var109, (double[]){0.3138514236780133, 0.6861485763219868}, 2 * sizeof(double));
                    }
                } else {
                    if (input[12] <= 0.000042087842302862555) {
                        memcpy(var109, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var109, (double[]){0.820598936467954, 0.17940106353204593}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[19] <= 0.00014593335072277114) {
                if (input[1] <= 15.840491771697998) {
                    if (input[6] <= 0.0000009331605212992145) {
                        memcpy(var109, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                    } else {
                        memcpy(var109, (double[]){0.9127025817622911, 0.08729741823770888}, 2 * sizeof(double));
                    }
                } else {
                    if (input[18] <= 0.00012814158981200308) {
                        memcpy(var109, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var109, (double[]){0.9014604150653344, 0.09853958493466565}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[16] <= 0.0000807912256277632) {
                    memcpy(var109, (double[]){0.7742957746478873, 0.22570422535211274}, 2 * sizeof(double));
                } else {
                    memcpy(var109, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var92, var109, 2, var91);
    double var110[2];
    if (input[10] <= 0.000013006587323616259) {
        if (input[8] <= 0.000019043826796405483) {
            if (input[13] <= 0.000006986504331507604) {
                if (input[6] <= 0.0000009332447632459662) {
                    if (input[3] <= 34.4135799407959) {
                        memcpy(var110, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var110, (double[]){0.6957759848125296, 0.30422401518747033}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= 0.0000012708187568932772) {
                        memcpy(var110, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var110, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[9] <= 0.9975094199180603) {
                    if (input[25] <= 0.00002141933418897679) {
                        memcpy(var110, (double[]){0.9442094452277752, 0.055790554772224825}, 2 * sizeof(double));
                    } else {
                        memcpy(var110, (double[]){0.705762491743078, 0.294237508256922}, 2 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 73.21293258666992) {
                        memcpy(var110, (double[]){0.11273454321747156, 0.8872654567825285}, 2 * sizeof(double));
                    } else {
                        memcpy(var110, (double[]){0.7879765153394527, 0.2120234846605474}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[19] <= 0.0001117917345254682) {
                if (input[6] <= 0.0000009334447952369374) {
                    memcpy(var110, (double[]){0.36377171215880894, 0.6362282878411911}, 2 * sizeof(double));
                } else {
                    if (input[6] <= 0.0000027932330795010785) {
                        memcpy(var110, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var110, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var110, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[9] <= 0.9981273412704468) {
            if (input[19] <= 0.00010820954412338324) {
                if (input[7] <= 0.00000046111040319374297) {
                    if (input[10] <= 0.00007567702778032981) {
                        memcpy(var110, (double[]){0.5233066603206711, 0.476693339679329}, 2 * sizeof(double));
                    } else {
                        memcpy(var110, (double[]){0.2779518865083702, 0.7220481134916299}, 2 * sizeof(double));
                    }
                } else {
                    if (input[3] <= 49.20005226135254) {
                        memcpy(var110, (double[]){0.7938941632397487, 0.20610583676025135}, 2 * sizeof(double));
                    } else {
                        memcpy(var110, (double[]){0.5188100549073441, 0.48118994509265584}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[16] <= 0.00007267739783856086) {
                    if (input[0] <= -4.317523241043091) {
                        memcpy(var110, (double[]){0.36377171215880894, 0.6362282878411911}, 2 * sizeof(double));
                    } else {
                        memcpy(var110, (double[]){0.888946638946639, 0.11105336105336104}, 2 * sizeof(double));
                    }
                } else {
                    if (input[13] <= 0.000044229294871911407) {
                        memcpy(var110, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var110, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[24] <= 0.000022362550225807354) {
                if (input[24] <= 0.00001585794052516576) {
                    if (input[11] <= 0.00010496454342501238) {
                        memcpy(var110, (double[]){0.353416610098524, 0.6465833899014759}, 2 * sizeof(double));
                    } else {
                        memcpy(var110, (double[]){0.720117891059928, 0.279882108940072}, 2 * sizeof(double));
                    }
                } else {
                    if (input[8] <= 0.0000023151389996201033) {
                        memcpy(var110, (double[]){0.6558697208303508, 0.3441302791696492}, 2 * sizeof(double));
                    } else {
                        memcpy(var110, (double[]){0.888946638946639, 0.11105336105336105}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[11] <= 0.00004316901140555274) {
                    if (input[6] <= 0.00002276917439303361) {
                        memcpy(var110, (double[]){0.33473098638326126, 0.6652690136167387}, 2 * sizeof(double));
                    } else {
                        memcpy(var110, (double[]){0.06574433257842459, 0.9342556674215755}, 2 * sizeof(double));
                    }
                } else {
                    if (input[10] <= 0.00005319587216945365) {
                        memcpy(var110, (double[]){0.5765116718051971, 0.4234883281948028}, 2 * sizeof(double));
                    } else {
                        memcpy(var110, (double[]){0.33567124608339377, 0.6643287539166061}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var91, var110, 2, var90);
    double var111[2];
    if (input[25] <= 0.00002236400541733019) {
        if (input[19] <= 0.0000009314712201557995) {
            if (input[11] <= 0.000026604420781950466) {
                if (input[16] <= 0.0000009260609488137561) {
                    memcpy(var111, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[18] <= 0.00000046341523329829215) {
                        memcpy(var111, (double[]){0.4616838127230736, 0.5383161872769263}, 2 * sizeof(double));
                    } else {
                        memcpy(var111, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 2.1293909549713135) {
                    memcpy(var111, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[0] <= 2.275574207305908) {
                        memcpy(var111, (double[]){0.8205989364679541, 0.17940106353204593}, 2 * sizeof(double));
                    } else {
                        memcpy(var111, (double[]){0.16007861978597945, 0.8399213802140205}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[0] <= 5.083972930908203) {
                if (input[19] <= 0.00001902339863590896) {
                    if (input[10] <= 0.00006344361463561654) {
                        memcpy(var111, (double[]){0.8682839564371275, 0.13171604356287248}, 2 * sizeof(double));
                    } else {
                        memcpy(var111, (double[]){0.5665153125301903, 0.43348468746980967}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= 0.0000749312930565793) {
                        memcpy(var111, (double[]){0.6085309413617058, 0.39146905863829407}, 2 * sizeof(double));
                    } else {
                        memcpy(var111, (double[]){0.21704852500277602, 0.7829514749972241}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[8] <= 0.000002325739842490293) {
                    if (input[7] <= 0.0000009244838565791724) {
                        memcpy(var111, (double[]){0.263271316715753, 0.736728683284247}, 2 * sizeof(double));
                    } else {
                        memcpy(var111, (double[]){0.5432260639055951, 0.45677393609440475}, 2 * sizeof(double));
                    }
                } else {
                    if (input[15] <= 0.00006059719453332946) {
                        memcpy(var111, (double[]){0.8147522397350111, 0.185247760264989}, 2 * sizeof(double));
                    } else {
                        memcpy(var111, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[10] <= 0.00005031006003264338) {
            if (input[11] <= 0.0000493961779284291) {
                if (input[7] <= 0.0000009241725535957812) {
                    if (input[12] <= 0.0001616836743778549) {
                        memcpy(var111, (double[]){0.35963657429301066, 0.6403634257069893}, 2 * sizeof(double));
                    } else {
                        memcpy(var111, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[6] <= 0.000034332755603827536) {
                        memcpy(var111, (double[]){0.6815738523462572, 0.3184261476537427}, 2 * sizeof(double));
                    } else {
                        memcpy(var111, (double[]){0.3369727617515228, 0.6630272382484773}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[13] <= 0.000007446740482919267) {
                    memcpy(var111, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[16] <= 0.0000260821116171428) {
                        memcpy(var111, (double[]){0.8685427822718469, 0.13145721772815314}, 2 * sizeof(double));
                    } else {
                        memcpy(var111, (double[]){0.5825487057784645, 0.4174512942215355}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[4] <= 0.00007780424857628532) {
                if (input[6] <= 0.00005308513755153399) {
                    if (input[12] <= 0.00006152819696580991) {
                        memcpy(var111, (double[]){0.2709488469959338, 0.7290511530040663}, 2 * sizeof(double));
                    } else {
                        memcpy(var111, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 71.22823715209961) {
                        memcpy(var111, (double[]){0.384568973206088, 0.6154310267939119}, 2 * sizeof(double));
                    } else {
                        memcpy(var111, (double[]){0.580787563984857, 0.4192124360151429}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[8] <= 0.000009336077710031532) {
                    if (input[15] <= 0.00007729237404419109) {
                        memcpy(var111, (double[]){0.10743862220593627, 0.8925613777940636}, 2 * sizeof(double));
                    } else {
                        memcpy(var111, (double[]){0.37367772632652196, 0.6263222736734781}, 2 * sizeof(double));
                    }
                } else {
                    if (input[9] <= 0.7486997246742249) {
                        memcpy(var111, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var111, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var90, var111, 2, var89);
    double var112[2];
    if (input[2] <= 99.53027725219727) {
        if (input[7] <= 0.0000009287237219268718) {
            if (input[24] <= -0.0001281151344301179) {
                if (input[6] <= 0.00004216221350361593) {
                    memcpy(var112, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[6] <= 0.00005593644891632721) {
                        memcpy(var112, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var112, (double[]){0.888946638946639, 0.11105336105336107}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[25] <= 0.0000279635032711667) {
                    if (input[6] <= 0.00010991999442921951) {
                        memcpy(var112, (double[]){0.45076439309770905, 0.549235606902291}, 2 * sizeof(double));
                    } else {
                        memcpy(var112, (double[]){0.7786896130454414, 0.22131038695455874}, 2 * sizeof(double));
                    }
                } else {
                    if (input[3] <= 93.10937881469727) {
                        memcpy(var112, (double[]){0.383506836245567, 0.616493163754433}, 2 * sizeof(double));
                    } else {
                        memcpy(var112, (double[]){0.10578218202809303, 0.8942178179719069}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[0] <= -1.633605420589447) {
                if (input[2] <= 54.43400192260742) {
                    if (input[3] <= 30.523539543151855) {
                        memcpy(var112, (double[]){0.5784558726818361, 0.4215441273181639}, 2 * sizeof(double));
                    } else {
                        memcpy(var112, (double[]){0.921642247175314, 0.0783577528246861}, 2 * sizeof(double));
                    }
                } else {
                    if (input[10] <= 0.000046137416575220414) {
                        memcpy(var112, (double[]){0.8205989364679541, 0.17940106353204588}, 2 * sizeof(double));
                    } else {
                        memcpy(var112, (double[]){0.38413835269455837, 0.6158616473054416}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[1] <= 3.931446075439453) {
                    if (input[24] <= 0.000038326219510054216) {
                        memcpy(var112, (double[]){0.29199485758777394, 0.708005142412226}, 2 * sizeof(double));
                    } else {
                        memcpy(var112, (double[]){0.6101098056791625, 0.3898901943208375}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 15.646655559539795) {
                        memcpy(var112, (double[]){0.6552046006470646, 0.3447953993529353}, 2 * sizeof(double));
                    } else {
                        memcpy(var112, (double[]){0.45019325461957954, 0.5498067453804205}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[4] <= 0.00001931306815095013) {
            memcpy(var112, (double[]){1.0, 0.0}, 2 * sizeof(double));
        } else {
            if (input[1] <= 19.570545196533203) {
                if (input[22] <= 0.000040413073293166235) {
                    if (input[4] <= 0.00002086773019982502) {
                        memcpy(var112, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var112, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var112, (double[]){0.4777578621476291, 0.522242137852371}, 2 * sizeof(double));
                }
            } else {
                memcpy(var112, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    }
    add_vectors(var89, var112, 2, var88);
    double var113[2];
    if (input[11] <= 0.00001950042678799946) {
        if (input[13] <= 0.000000931835302253603) {
            if (input[6] <= 0.0000009272237377899728) {
                memcpy(var113, (double[]){0.7742957746478873, 0.2257042253521127}, 2 * sizeof(double));
            } else {
                if (input[11] <= 0.000008381642601307249) {
                    if (input[17] <= 0.5) {
                        memcpy(var113, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var113, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var113, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[21] <= 0.000013524812402465614) {
                if (input[18] <= -0.000055588050599908456) {
                    if (input[1] <= 2.6587793827056885) {
                        memcpy(var113, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var113, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    }
                } else {
                    if (input[9] <= 0.99931600689888) {
                        memcpy(var113, (double[]){0.8687735025697938, 0.13122649743020615}, 2 * sizeof(double));
                    } else {
                        memcpy(var113, (double[]){0.6809781346428215, 0.3190218653571785}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[1] <= 7.599905967712402) {
                    if (input[21] <= 0.000024687499717401806) {
                        memcpy(var113, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var113, (double[]){0.7742957746478873, 0.22570422535211268}, 2 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 99.20841979980469) {
                        memcpy(var113, (double[]){0.20628130804300093, 0.7937186919569991}, 2 * sizeof(double));
                    } else {
                        memcpy(var113, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[2] <= 99.8034896850586) {
            if (input[10] <= 0.000019387905012990814) {
                if (input[2] <= 80.1278076171875) {
                    if (input[1] <= 18.948969841003418) {
                        memcpy(var113, (double[]){0.7627089815806058, 0.237291018419394}, 2 * sizeof(double));
                    } else {
                        memcpy(var113, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[10] <= 0.000018521682250138838) {
                        memcpy(var113, (double[]){0.26678105339780583, 0.7332189466021942}, 2 * sizeof(double));
                    } else {
                        memcpy(var113, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[6] <= 0.00005885394239157904) {
                    if (input[9] <= 0.9980750679969788) {
                        memcpy(var113, (double[]){0.47416900655794586, 0.5258309934420542}, 2 * sizeof(double));
                    } else {
                        memcpy(var113, (double[]){0.3074731915744605, 0.6925268084255395}, 2 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 5.839880466461182) {
                        memcpy(var113, (double[]){0.4417138633485401, 0.5582861366514599}, 2 * sizeof(double));
                    } else {
                        memcpy(var113, (double[]){0.6638859757841546, 0.3361140242158454}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[21] <= 0.00004101588456251193) {
                if (input[13] <= 0.000035811392081086524) {
                    memcpy(var113, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    memcpy(var113, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                }
            } else {
                memcpy(var113, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    }
    add_vectors(var88, var113, 2, var87);
    double var114[2];
    if (input[21] <= -0.000023234868422150612) {
        if (input[16] <= 0.0000009243354384125269) {
            if (input[25] <= 0.00005804675311082974) {
                if (input[6] <= 0.000013039522087865407) {
                    memcpy(var114, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    memcpy(var114, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[3] <= 39.211219787597656) {
                    memcpy(var114, (double[]){0.7742957746478873, 0.22570422535211274}, 2 * sizeof(double));
                } else {
                    memcpy(var114, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[11] <= 0.000028728656616294757) {
                if (input[10] <= 0.00004224110489303712) {
                    if (input[19] <= 0.00002880977808672469) {
                        memcpy(var114, (double[]){0.9050276570525484, 0.0949723429474516}, 2 * sizeof(double));
                    } else {
                        memcpy(var114, (double[]){0.5704403467433364, 0.4295596532566635}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var114, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[6] <= 0.00002048024362011347) {
                    if (input[6] <= 0.0000023215052351588383) {
                        memcpy(var114, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var114, (double[]){0.9131977358286163, 0.08680226417138369}, 2 * sizeof(double));
                    }
                } else {
                    if (input[11] <= 0.00004800117312697694) {
                        memcpy(var114, (double[]){0.306430591417681, 0.6935694085823191}, 2 * sizeof(double));
                    } else {
                        memcpy(var114, (double[]){0.5698329590304446, 0.4301670409695553}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[18] <= -0.000011115108463854995) {
            if (input[12] <= 0.000024692604711162858) {
                if (input[0] <= 0.8737220764160156) {
                    if (input[24] <= -0.00007027004539850168) {
                        memcpy(var114, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var114, (double[]){0.4572879996435097, 0.5427120003564904}, 2 * sizeof(double));
                    }
                } else {
                    if (input[4] <= 0.00004640922270482406) {
                        memcpy(var114, (double[]){0.43257598111537326, 0.5674240188846268}, 2 * sizeof(double));
                    } else {
                        memcpy(var114, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[6] <= 0.00003775165714614559) {
                    if (input[19] <= 0.000106445761048235) {
                        memcpy(var114, (double[]){0.810570167494447, 0.189429832505553}, 2 * sizeof(double));
                    } else {
                        memcpy(var114, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1] <= -15.365556240081787) {
                        memcpy(var114, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var114, (double[]){0.46336921236972484, 0.5366307876302753}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[13] <= 0.000094599585281685) {
                if (input[11] <= 0.000014914856365066953) {
                    if (input[24] <= -0.00003818978257186245) {
                        memcpy(var114, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var114, (double[]){0.6541247276123273, 0.3458752723876726}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= 0.00012170259287813678) {
                        memcpy(var114, (double[]){0.3805701708624603, 0.6194298291375397}, 2 * sizeof(double));
                    } else {
                        memcpy(var114, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[12] <= 0.00009889363354886882) {
                    memcpy(var114, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[25] <= 0.000026086658181156963) {
                        memcpy(var114, (double[]){0.7483116067221611, 0.2516883932778388}, 2 * sizeof(double));
                    } else {
                        memcpy(var114, (double[]){0.3788358421086633, 0.6211641578913367}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var87, var114, 2, var86);
    double var115[2];
    if (input[10] <= 0.000012062935184076196) {
        if (input[22] <= 0.00007924921737867408) {
            if (input[24] <= 0.00006270513222261798) {
                if (input[7] <= 0.0000009247478089946526) {
                    if (input[0] <= 5.904319524765015) {
                        memcpy(var115, (double[]){0.5383083593430027, 0.4616916406569973}, 2 * sizeof(double));
                    } else {
                        memcpy(var115, (double[]){0.1448688176293295, 0.8551311823706705}, 2 * sizeof(double));
                    }
                } else {
                    if (input[4] <= 0.00002691267309273826) {
                        memcpy(var115, (double[]){0.6465983019075973, 0.35340169809240274}, 2 * sizeof(double));
                    } else {
                        memcpy(var115, (double[]){0.9648439642406625, 0.03515603575933747}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[16] <= 0.00000046714433210581774) {
                    memcpy(var115, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[4] <= 0.0000216919934246107) {
                        memcpy(var115, (double[]){0.5784558726818361, 0.42154412731816393}, 2 * sizeof(double));
                    } else {
                        memcpy(var115, (double[]){0.9519718274682185, 0.04802817253178152}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[24] <= 0.00016144777328008786) {
                if (input[18] <= -0.000005130123099661432) {
                    if (input[10] <= 0.000003256705866760967) {
                        memcpy(var115, (double[]){0.43257598111537315, 0.5674240188846268}, 2 * sizeof(double));
                    } else {
                        memcpy(var115, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var115, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var115, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[4] <= 0.00002857382241927553) {
            if (input[13] <= 0.000034480783142498694) {
                if (input[11] <= 0.00006159803888294846) {
                    if (input[3] <= 85.37388229370117) {
                        memcpy(var115, (double[]){0.15042711655707297, 0.8495728834429271}, 2 * sizeof(double));
                    } else {
                        memcpy(var115, (double[]){0.3607517063630828, 0.6392482936369172}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= 0.00001858188352343859) {
                        memcpy(var115, (double[]){0.3138514236780132, 0.6861485763219868}, 2 * sizeof(double));
                    } else {
                        memcpy(var115, (double[]){0.807430402563589, 0.19256959743641097}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[24] <= 0.000009749304354045307) {
                    if (input[0] <= -3.326695442199707) {
                        memcpy(var115, (double[]){0.8727922206787061, 0.12720777932129393}, 2 * sizeof(double));
                    } else {
                        memcpy(var115, (double[]){0.20262612301313052, 0.7973738769868695}, 2 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 78.29499053955078) {
                        memcpy(var115, (double[]){0.20262612301313057, 0.7973738769868693}, 2 * sizeof(double));
                    } else {
                        memcpy(var115, (double[]){0.6638859757841545, 0.33611402421584546}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[21] <= 0.00005669042184308637) {
                if (input[2] <= 82.3850326538086) {
                    if (input[4] <= 0.00002904204848164227) {
                        memcpy(var115, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var115, (double[]){0.500695060278504, 0.499304939721496}, 2 * sizeof(double));
                    }
                } else {
                    if (input[18] <= 0.00005395459811552428) {
                        memcpy(var115, (double[]){0.8155537224961154, 0.18444627750388465}, 2 * sizeof(double));
                    } else {
                        memcpy(var115, (double[]){0.481107926575798, 0.5188920734242021}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[16] <= 0.00014560130512109026) {
                    if (input[9] <= 0.9974695444107056) {
                        memcpy(var115, (double[]){0.4665132674042885, 0.5334867325957114}, 2 * sizeof(double));
                    } else {
                        memcpy(var115, (double[]){0.27878230828962175, 0.7212176917103782}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var115, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var86, var115, 2, var85);
    double var116[2];
    if (input[9] <= 0.9987818002700806) {
        if (input[10] <= 0.000026860853722610045) {
            if (input[21] <= -0.00010062817091238685) {
                if (input[10] <= 0.000005097789653518703) {
                    memcpy(var116, (double[]){0.8727922206787061, 0.1272077793212939}, 2 * sizeof(double));
                } else {
                    if (input[8] <= 0.00000046732466785215365) {
                        memcpy(var116, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var116, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[6] <= 0.000006544206598846358) {
                    if (input[15] <= 0.00008961457933764905) {
                        memcpy(var116, (double[]){0.8265301520003607, 0.1734698479996392}, 2 * sizeof(double));
                    } else {
                        memcpy(var116, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[6] <= 0.000010251822459395044) {
                        memcpy(var116, (double[]){0.33473098638326126, 0.6652690136167387}, 2 * sizeof(double));
                    } else {
                        memcpy(var116, (double[]){0.7097979048505348, 0.2902020951494652}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[12] <= 0.00002797598972392734) {
                if (input[3] <= 63.50079536437988) {
                    if (input[10] <= 0.0000904245680430904) {
                        memcpy(var116, (double[]){0.5665153125301899, 0.43348468746981}, 2 * sizeof(double));
                    } else {
                        memcpy(var116, (double[]){0.25307496439514904, 0.7469250356048509}, 2 * sizeof(double));
                    }
                } else {
                    if (input[24] <= 0.000016696073544153478) {
                        memcpy(var116, (double[]){0.5080826835004332, 0.49191731649956677}, 2 * sizeof(double));
                    } else {
                        memcpy(var116, (double[]){0.11706226418860909, 0.8829377358113909}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 38.50402069091797) {
                    if (input[2] <= 32.62945365905762) {
                        memcpy(var116, (double[]){0.49499155880697804, 0.505008441193022}, 2 * sizeof(double));
                    } else {
                        memcpy(var116, (double[]){0.08700296735905044, 0.9129970326409496}, 2 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 43.04657554626465) {
                        memcpy(var116, (double[]){0.8312508859682874, 0.16874911403171258}, 2 * sizeof(double));
                    } else {
                        memcpy(var116, (double[]){0.5409007053716768, 0.4590992946283234}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[4] <= 0.0000353590767190326) {
            if (input[8] <= 0.0000009327418695193046) {
                if (input[24] <= 0.000128288782434538) {
                    if (input[0] <= 10.440999984741211) {
                        memcpy(var116, (double[]){0.23073442326231122, 0.7692655767376888}, 2 * sizeof(double));
                    } else {
                        memcpy(var116, (double[]){0.603913491246138, 0.396086508753862}, 2 * sizeof(double));
                    }
                } else {
                    if (input[12] <= 0.000050358972657704726) {
                        memcpy(var116, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var116, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[11] <= 0.00007861028643674217) {
                    if (input[4] <= 0.00001870885807875311) {
                        memcpy(var116, (double[]){0.32012727726478657, 0.6798727227352135}, 2 * sizeof(double));
                    } else {
                        memcpy(var116, (double[]){0.7262508754847196, 0.2737491245152804}, 2 * sizeof(double));
                    }
                } else {
                    if (input[19] <= 0.000045289059926290065) {
                        memcpy(var116, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    } else {
                        memcpy(var116, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[16] <= 0.00009219372077495791) {
                if (input[11] <= 0.000019989990505564492) {
                    if (input[8] <= 0.0000004624277494258422) {
                        memcpy(var116, (double[]){0.8265301520003608, 0.17346984799963913}, 2 * sizeof(double));
                    } else {
                        memcpy(var116, (double[]){0.3138514236780133, 0.6861485763219868}, 2 * sizeof(double));
                    }
                } else {
                    if (input[24] <= 0.00011057819938287139) {
                        memcpy(var116, (double[]){0.5232305013908605, 0.4767694986091395}, 2 * sizeof(double));
                    } else {
                        memcpy(var116, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[19] <= 0.000011648939562292071) {
                    if (input[2] <= 69.68313217163086) {
                        memcpy(var116, (double[]){0.8421830118998769, 0.15781698810012315}, 2 * sizeof(double));
                    } else {
                        memcpy(var116, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[25] <= 0.000020469292394409422) {
                        memcpy(var116, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                    } else {
                        memcpy(var116, (double[]){0.08085153320097063, 0.9191484667990294}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var85, var116, 2, var84);
    double var117[2];
    if (input[9] <= 0.9981273412704468) {
        if (input[6] <= 0.000021422121790237725) {
            if (input[9] <= 0.9520510733127594) {
                if (input[21] <= 0.000000462251620092502) {
                    if (input[24] <= 0.0000009272759484701965) {
                        memcpy(var117, (double[]){0.8252253837020097, 0.17477461629799038}, 2 * sizeof(double));
                    } else {
                        memcpy(var117, (double[]){0.36377171215880894, 0.6362282878411911}, 2 * sizeof(double));
                    }
                } else {
                    if (input[3] <= 84.59585571289062) {
                        memcpy(var117, (double[]){0.4857690966166724, 0.5142309033833276}, 2 * sizeof(double));
                    } else {
                        memcpy(var117, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[7] <= 0.000023648982278245967) {
                    if (input[12] <= 0.000040846236515790224) {
                        memcpy(var117, (double[]){0.6877289212059975, 0.31227107879400245}, 2 * sizeof(double));
                    } else {
                        memcpy(var117, (double[]){0.9263556985294117, 0.07364430147058824}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var117, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[15] <= -0.00011259067832725123) {
                memcpy(var117, (double[]){0.0, 1.0}, 2 * sizeof(double));
            } else {
                if (input[6] <= 0.00007456218372681178) {
                    if (input[22] <= 0.0000032650737011863384) {
                        memcpy(var117, (double[]){0.23539936688535107, 0.764600633114649}, 2 * sizeof(double));
                    } else {
                        memcpy(var117, (double[]){0.5738752574000339, 0.42612474259996624}, 2 * sizeof(double));
                    }
                } else {
                    if (input[7] <= 0.0000009322137941580877) {
                        memcpy(var117, (double[]){0.2346033113805625, 0.7653966886194375}, 2 * sizeof(double));
                    } else {
                        memcpy(var117, (double[]){0.6411602113292046, 0.3588397886707954}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[4] <= 0.0000353590767190326) {
            if (input[24] <= 0.0001264894599444233) {
                if (input[12] <= 0.0001006674428936094) {
                    if (input[3] <= 50.63392639160156) {
                        memcpy(var117, (double[]){0.6702863348002515, 0.32971366519974854}, 2 * sizeof(double));
                    } else {
                        memcpy(var117, (double[]){0.28682729680560004, 0.7131727031943998}, 2 * sizeof(double));
                    }
                } else {
                    if (input[6] <= 0.00006494479384855367) {
                        memcpy(var117, (double[]){0.888946638946639, 0.11105336105336107}, 2 * sizeof(double));
                    } else {
                        memcpy(var117, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 79.10589218139648) {
                    memcpy(var117, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[16] <= 0.00005366430013964418) {
                        memcpy(var117, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var117, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[4] <= 0.00003688405922730453) {
                if (input[11] <= 0.00010966840272885747) {
                    if (input[24] <= 0.00012083560432074592) {
                        memcpy(var117, (double[]){0.9320758715693547, 0.06792412843064535}, 2 * sizeof(double));
                    } else {
                        memcpy(var117, (double[]){0.3138514236780133, 0.6861485763219868}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var117, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[22] <= 0.00003821828249783721) {
                    if (input[18] <= 0.0000009292228639878886) {
                        memcpy(var117, (double[]){0.32889620101705047, 0.6711037989829497}, 2 * sizeof(double));
                    } else {
                        memcpy(var117, (double[]){0.6121122635458142, 0.38788773645418584}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= -0.00010801772441482171) {
                        memcpy(var117, (double[]){0.7232809127351217, 0.2767190872648782}, 2 * sizeof(double));
                    } else {
                        memcpy(var117, (double[]){0.3221402771483116, 0.6778597228516883}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var84, var117, 2, var83);
    double var118[2];
    if (input[12] <= 0.00003796061719185673) {
        if (input[21] <= -0.000029876451662858017) {
            if (input[25] <= 0.000005103724106447771) {
                if (input[11] <= 0.0000032611781648483884) {
                    memcpy(var118, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[16] <= 0.000046460005250992253) {
                        memcpy(var118, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var118, (double[]){0.8205989364679541, 0.1794010635320459}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[24] <= -0.000015827655261091422) {
                    if (input[6] <= 0.00003202840707672294) {
                        memcpy(var118, (double[]){0.8572144567578104, 0.1427855432421897}, 2 * sizeof(double));
                    } else {
                        memcpy(var118, (double[]){0.42119520604170074, 0.5788047939582993}, 2 * sizeof(double));
                    }
                } else {
                    if (input[10] <= 0.000022839163648313843) {
                        memcpy(var118, (double[]){0.9786055205099963, 0.02139447949000367}, 2 * sizeof(double));
                    } else {
                        memcpy(var118, (double[]){0.6538958142592202, 0.34610418574077984}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[7] <= 0.0000009272447130115324) {
                if (input[6] <= 0.00000974839304035413) {
                    if (input[15] <= 0.000015797088053659536) {
                        memcpy(var118, (double[]){0.684211890994892, 0.31578810900510795}, 2 * sizeof(double));
                    } else {
                        memcpy(var118, (double[]){0.39520150963741746, 0.6047984903625825}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 17.932231903076172) {
                        memcpy(var118, (double[]){0.19812527072684785, 0.8018747292731522}, 2 * sizeof(double));
                    } else {
                        memcpy(var118, (double[]){0.740853042247827, 0.25914695775217306}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 8.485214233398438) {
                    if (input[1] <= 15.928006649017334) {
                        memcpy(var118, (double[]){0.6198258295995723, 0.3801741704004277}, 2 * sizeof(double));
                    } else {
                        memcpy(var118, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[15] <= 0.000048416837671538815) {
                        memcpy(var118, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var118, (double[]){0.5334788937409024, 0.4665211062590976}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[19] <= 0.00007339214425883256) {
            if (input[2] <= 57.85297966003418) {
                if (input[4] <= 0.00004789498052559793) {
                    if (input[1] <= -6.857282400131226) {
                        memcpy(var118, (double[]){0.37883584210866333, 0.6211641578913366}, 2 * sizeof(double));
                    } else {
                        memcpy(var118, (double[]){0.8797869547278797, 0.12021304527212032}, 2 * sizeof(double));
                    }
                } else {
                    if (input[6] <= 0.00014713623386342078) {
                        memcpy(var118, (double[]){0.6141659483692643, 0.38583405163073586}, 2 * sizeof(double));
                    } else {
                        memcpy(var118, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[7] <= 0.0000009310228676895349) {
                    if (input[16] <= 0.0000023268913764695753) {
                        memcpy(var118, (double[]){0.10036627528839898, 0.8996337247116011}, 2 * sizeof(double));
                    } else {
                        memcpy(var118, (double[]){0.4845322458497182, 0.5154677541502819}, 2 * sizeof(double));
                    }
                } else {
                    if (input[13] <= 0.000036044171793037094) {
                        memcpy(var118, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var118, (double[]){0.6667966211825859, 0.3332033788174143}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[10] <= 0.000016325770957337227) {
                if (input[3] <= 46.37002182006836) {
                    if (input[13] <= 0.00007838253804948181) {
                        memcpy(var118, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var118, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[13] <= 0.00004374001218820922) {
                        memcpy(var118, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var118, (double[]){0.9014604150653344, 0.09853958493466566}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[15] <= 0.00010851266051759012) {
                    if (input[7] <= 0.0000009303675483351981) {
                        memcpy(var118, (double[]){0.24397797411017286, 0.756022025889827}, 2 * sizeof(double));
                    } else {
                        memcpy(var118, (double[]){0.603913491246138, 0.396086508753862}, 2 * sizeof(double));
                    }
                } else {
                    if (input[15] <= 0.00013941586075816303) {
                        memcpy(var118, (double[]){0.8205989364679541, 0.17940106353204593}, 2 * sizeof(double));
                    } else {
                        memcpy(var118, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var83, var118, 2, var82);
    double var119[2];
    if (input[6] <= 0.0000194472504517762) {
        if (input[0] <= 4.122638940811157) {
            if (input[7] <= 0.0000009293333391724445) {
                if (input[10] <= 0.00002937143017334165) {
                    if (input[10] <= 0.000018489691683498677) {
                        memcpy(var119, (double[]){0.5759004259190339, 0.42409957408096616}, 2 * sizeof(double));
                    } else {
                        memcpy(var119, (double[]){0.9716760196191065, 0.02832398038089347}, 2 * sizeof(double));
                    }
                } else {
                    if (input[6] <= 0.000016300791685353033) {
                        memcpy(var119, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                    } else {
                        memcpy(var119, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[16] <= 0.00003866374754579738) {
                    if (input[13] <= 0.00004892428660241421) {
                        memcpy(var119, (double[]){0.3369727617515228, 0.6630272382484772}, 2 * sizeof(double));
                    } else {
                        memcpy(var119, (double[]){0.8546720647773278, 0.14532793522267207}, 2 * sizeof(double));
                    }
                } else {
                    if (input[3] <= 63.00267028808594) {
                        memcpy(var119, (double[]){0.9856345666838484, 0.014365433316151588}, 2 * sizeof(double));
                    } else {
                        memcpy(var119, (double[]){0.7921755106451961, 0.2078244893548039}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[11] <= 0.0000009324883762928948) {
                memcpy(var119, (double[]){0.0, 1.0}, 2 * sizeof(double));
            } else {
                if (input[2] <= 99.28537368774414) {
                    if (input[24] <= 0.00009607562969904393) {
                        memcpy(var119, (double[]){0.45578581080273123, 0.5442141891972688}, 2 * sizeof(double));
                    } else {
                        memcpy(var119, (double[]){0.8511379470506271, 0.148862052949373}, 2 * sizeof(double));
                    }
                } else {
                    if (input[18] <= 0.00005449540913105011) {
                        memcpy(var119, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var119, (double[]){0.36377171215880894, 0.6362282878411911}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[7] <= 0.0000009303935257776175) {
            if (input[16] <= 0.00009608483378542587) {
                if (input[2] <= 99.60139083862305) {
                    if (input[15] <= -0.00007692550207138993) {
                        memcpy(var119, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var119, (double[]){0.3986880033119214, 0.6013119966880786}, 2 * sizeof(double));
                    }
                } else {
                    if (input[11] <= 0.00005869467349839397) {
                        memcpy(var119, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var119, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[18] <= -0.00009231437798007391) {
                    memcpy(var119, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[11] <= 0.00008994519157567993) {
                        memcpy(var119, (double[]){0.0597343329801972, 0.9402656670198029}, 2 * sizeof(double));
                    } else {
                        memcpy(var119, (double[]){0.4616838127230736, 0.5383161872769263}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[18] <= -0.00011850422743009403) {
                memcpy(var119, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                if (input[1] <= -2.563432455062866) {
                    if (input[10] <= 0.00007144051414798014) {
                        memcpy(var119, (double[]){0.812923184683633, 0.187076815316367}, 2 * sizeof(double));
                    } else {
                        memcpy(var119, (double[]){0.35568957748431596, 0.6443104225156842}, 2 * sizeof(double));
                    }
                } else {
                    if (input[12] <= 0.00005828521170769818) {
                        memcpy(var119, (double[]){0.4173939705866248, 0.5826060294133752}, 2 * sizeof(double));
                    } else {
                        memcpy(var119, (double[]){0.6388885936287587, 0.3611114063712413}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var82, var119, 2, var81);
    double var120[2];
    if (input[10] <= 0.000020495795070019085) {
        if (input[0] <= 4.065661907196045) {
            if (input[0] <= 2.194866895675659) {
                if (input[18] <= -0.00008148357665049843) {
                    if (input[7] <= 0.0000009324722327619384) {
                        memcpy(var120, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var120, (double[]){0.8727922206787061, 0.12720777932129393}, 2 * sizeof(double));
                    }
                } else {
                    if (input[3] <= 66.80327606201172) {
                        memcpy(var120, (double[]){0.820598936467954, 0.1794010635320461}, 2 * sizeof(double));
                    } else {
                        memcpy(var120, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[24] <= 0.00010941621439997107) {
                    if (input[16] <= 0.00000046312462131936627) {
                        memcpy(var120, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    } else {
                        memcpy(var120, (double[]){0.980068407960199, 0.019931592039800997}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var120, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[22] <= 0.000020442657842068) {
                if (input[2] <= 56.643075942993164) {
                    if (input[13] <= 0.000026001883270510007) {
                        memcpy(var120, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var120, (double[]){0.9195834901518003, 0.08041650984819973}, 2 * sizeof(double));
                    }
                } else {
                    if (input[19] <= 0.00000046262755404313793) {
                        memcpy(var120, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                    } else {
                        memcpy(var120, (double[]){0.1658840169731258, 0.8341159830268742}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[10] <= -0.0000013897695509967889) {
                    memcpy(var120, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[10] <= 0.000006033316594766802) {
                        memcpy(var120, (double[]){0.25734648737843624, 0.7426535126215639}, 2 * sizeof(double));
                    } else {
                        memcpy(var120, (double[]){0.6178405493195179, 0.382159450680482}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[9] <= 0.9987818002700806) {
            if (input[7] <= 0.00000046111040319374297) {
                if (input[10] <= 0.0001305338300880976) {
                    if (input[6] <= 0.00006454810136347078) {
                        memcpy(var120, (double[]){0.520693909597338, 0.47930609040266203}, 2 * sizeof(double));
                    } else {
                        memcpy(var120, (double[]){0.3250013855788947, 0.6749986144211052}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 5.8358941078186035) {
                        memcpy(var120, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var120, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[21] <= 0.000008826715202303603) {
                    if (input[10] <= 0.00011632145469775423) {
                        memcpy(var120, (double[]){0.5759004259190338, 0.4240995740809662}, 2 * sizeof(double));
                    } else {
                        memcpy(var120, (double[]){0.13229852901362693, 0.8677014709863731}, 2 * sizeof(double));
                    }
                } else {
                    if (input[12] <= 0.000038109927118057385) {
                        memcpy(var120, (double[]){0.5514267219510486, 0.44857327804895136}, 2 * sizeof(double));
                    } else {
                        memcpy(var120, (double[]){0.792845318260663, 0.20715468173933704}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[1] <= 16.243906021118164) {
                if (input[13] <= 0.000011166303465870442) {
                    if (input[21] <= 0.000025124873900495004) {
                        memcpy(var120, (double[]){0.34201194475550567, 0.6579880552444942}, 2 * sizeof(double));
                    } else {
                        memcpy(var120, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[24] <= 0.0000933815426833462) {
                        memcpy(var120, (double[]){0.44751301849524194, 0.5524869815047582}, 2 * sizeof(double));
                    } else {
                        memcpy(var120, (double[]){0.19611056301523322, 0.8038894369847668}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[22] <= 0.00005220984166953713) {
                    if (input[8] <= 0.000018645137970452197) {
                        memcpy(var120, (double[]){0.6492978662428679, 0.35070213375713216}, 2 * sizeof(double));
                    } else {
                        memcpy(var120, (double[]){0.9648439642406625, 0.03515603575933748}, 2 * sizeof(double));
                    }
                } else {
                    if (input[10] <= 0.000024535655029467307) {
                        memcpy(var120, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var120, (double[]){0.22786088983874095, 0.772139110161259}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var81, var120, 2, var80);
    double var121[2];
    if (input[18] <= -0.00012943091132910922) {
        if (input[6] <= 0.00002368321111134719) {
            memcpy(var121, (double[]){0.0, 1.0}, 2 * sizeof(double));
        } else {
            if (input[12] <= 0.00001725749552861089) {
                memcpy(var121, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
            } else {
                if (input[22] <= 0.000039588898289366625) {
                    memcpy(var121, (double[]){0.6957759848125297, 0.30422401518747044}, 2 * sizeof(double));
                } else {
                    if (input[4] <= 0.00012006005272269249) {
                        memcpy(var121, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var121, (double[]){0.8727922206787061, 0.12720777932129393}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[9] <= 0.9984177350997925) {
            if (input[7] <= 0.0000004610976418462087) {
                if (input[25] <= 0.0000009244228920124442) {
                    memcpy(var121, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[10] <= 0.000025957646357710473) {
                        memcpy(var121, (double[]){0.6684027321110729, 0.3315972678889272}, 2 * sizeof(double));
                    } else {
                        memcpy(var121, (double[]){0.3868456641488277, 0.6131543358511723}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[15] <= 0.00014940804248908535) {
                    if (input[3] <= 17.220521926879883) {
                        memcpy(var121, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var121, (double[]){0.5841214095810325, 0.4158785904189674}, 2 * sizeof(double));
                    }
                } else {
                    if (input[3] <= 58.22908020019531) {
                        memcpy(var121, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    } else {
                        memcpy(var121, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[18] <= 0.00011221705790376291) {
                if (input[3] <= 82.31126403808594) {
                    if (input[19] <= 0.000012103510471206391) {
                        memcpy(var121, (double[]){0.4500366017804994, 0.5499633982195005}, 2 * sizeof(double));
                    } else {
                        memcpy(var121, (double[]){0.3045636065649459, 0.695436393435054}, 2 * sizeof(double));
                    }
                } else {
                    if (input[4] <= 0.0000353590767190326) {
                        memcpy(var121, (double[]){0.3400276068066621, 0.6599723931933378}, 2 * sizeof(double));
                    } else {
                        memcpy(var121, (double[]){0.6881630493227613, 0.31183695067723866}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[21] <= 0.00007649353210581467) {
                    if (input[2] <= 55.16532325744629) {
                        memcpy(var121, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var121, (double[]){0.6465983019075973, 0.3534016980924026}, 2 * sizeof(double));
                    }
                } else {
                    if (input[13] <= 0.00009874970783130266) {
                        memcpy(var121, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var121, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var80, var121, 2, var79);
    double var122[2];
    if (input[7] <= 0.0000004610976418462087) {
        if (input[21] <= 0.00007793685654178262) {
            if (input[3] <= 31.472296714782715) {
                if (input[25] <= 0.000009313697319157654) {
                    if (input[9] <= 0.4791666716337204) {
                        memcpy(var122, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var122, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                    }
                } else {
                    if (input[18] <= 0.0000027932310331379995) {
                        memcpy(var122, (double[]){0.7281956845688808, 0.27180431543111916}, 2 * sizeof(double));
                    } else {
                        memcpy(var122, (double[]){0.2026261230131306, 0.7973738769868693}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= -3.357296109199524) {
                    if (input[1] <= -9.046643257141113) {
                        memcpy(var122, (double[]){0.3328854996499327, 0.6671145003500673}, 2 * sizeof(double));
                    } else {
                        memcpy(var122, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= 0.00003915876004612073) {
                        memcpy(var122, (double[]){0.4321713204099715, 0.5678286795900285}, 2 * sizeof(double));
                    } else {
                        memcpy(var122, (double[]){0.5565585664630648, 0.4434414335369351}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[22] <= 0.0000286480881186435) {
                memcpy(var122, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                if (input[4] <= 0.00003597734212235082) {
                    if (input[1] <= -2.161345958709717) {
                        memcpy(var122, (double[]){0.3138514236780133, 0.6861485763219868}, 2 * sizeof(double));
                    } else {
                        memcpy(var122, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[26] <= 0.5) {
                        memcpy(var122, (double[]){0.08085153320097066, 0.9191484667990294}, 2 * sizeof(double));
                    } else {
                        memcpy(var122, (double[]){0.2951571187411915, 0.7048428812588086}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[12] <= 0.00015048964996822178) {
            if (input[11] <= 0.00002456490256008692) {
                if (input[10] <= 0.000030496209546981845) {
                    if (input[11] <= 0.000009281887287215795) {
                        memcpy(var122, (double[]){0.4707339449541284, 0.5292660550458715}, 2 * sizeof(double));
                    } else {
                        memcpy(var122, (double[]){0.8205989364679541, 0.1794010635320459}, 2 * sizeof(double));
                    }
                } else {
                    if (input[17] <= 0.5) {
                        memcpy(var122, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var122, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[18] <= -0.00006949856469873339) {
                    if (input[19] <= 0.00010311427467968315) {
                        memcpy(var122, (double[]){0.6835436094349973, 0.3164563905650027}, 2 * sizeof(double));
                    } else {
                        memcpy(var122, (double[]){0.9775048254079663, 0.022495174592033693}, 2 * sizeof(double));
                    }
                } else {
                    if (input[13] <= 0.00003737345468834974) {
                        memcpy(var122, (double[]){0.425635865783638, 0.574364134216362}, 2 * sizeof(double));
                    } else {
                        memcpy(var122, (double[]){0.6189888621522239, 0.3810111378477761}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[18] <= -0.00008440790043096058) {
                memcpy(var122, (double[]){0.0, 1.0}, 2 * sizeof(double));
            } else {
                memcpy(var122, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    }
    add_vectors(var79, var122, 2, var78);
    double var123[2];
    if (input[9] <= 0.998245507478714) {
        if (input[12] <= 0.000004658508714783238) {
            if (input[0] <= 2.6743252277374268) {
                if (input[24] <= -0.00003407502481422853) {
                    if (input[2] <= 73.0687484741211) {
                        memcpy(var123, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var123, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 74.23466110229492) {
                        memcpy(var123, (double[]){0.4515554947123447, 0.5484445052876553}, 2 * sizeof(double));
                    } else {
                        memcpy(var123, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[19] <= 0.000029804770747432485) {
                    memcpy(var123, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[12] <= 0.00000046517686769220745) {
                        memcpy(var123, (double[]){0.8045612537349838, 0.19543874626501617}, 2 * sizeof(double));
                    } else {
                        memcpy(var123, (double[]){0.43257598111537326, 0.5674240188846268}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[4] <= 0.00007935546454973519) {
                if (input[8] <= 0.00003624943201430142) {
                    if (input[0] <= -8.173190593719482) {
                        memcpy(var123, (double[]){0.3138514236780132, 0.6861485763219867}, 2 * sizeof(double));
                    } else {
                        memcpy(var123, (double[]){0.6015774450700315, 0.39842255492996836}, 2 * sizeof(double));
                    }
                } else {
                    if (input[26] <= 0.5) {
                        memcpy(var123, (double[]){0.8421830118998769, 0.15781698810012315}, 2 * sizeof(double));
                    } else {
                        memcpy(var123, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[16] <= 0.00012998469173908234) {
                    if (input[24] <= 0.00009834792945184745) {
                        memcpy(var123, (double[]){0.38350683624556636, 0.6164931637544337}, 2 * sizeof(double));
                    } else {
                        memcpy(var123, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[0] <= -0.9214067459106445) {
                        memcpy(var123, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    } else {
                        memcpy(var123, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[11] <= 0.0000009319447258349101) {
            if (input[1] <= 4.874610662460327) {
                memcpy(var123, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                memcpy(var123, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            if (input[22] <= 0.000008375081506528659) {
                if (input[4] <= 0.00005040144969825633) {
                    if (input[6] <= 0.000055021211665007286) {
                        memcpy(var123, (double[]){0.25690175779143737, 0.7430982422085627}, 2 * sizeof(double));
                    } else {
                        memcpy(var123, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[3] <= 70.93099212646484) {
                        memcpy(var123, (double[]){0.7742957746478873, 0.22570422535211268}, 2 * sizeof(double));
                    } else {
                        memcpy(var123, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[12] <= 0.00003483108775981236) {
                    if (input[1] <= 17.908958435058594) {
                        memcpy(var123, (double[]){0.2994678623591778, 0.7005321376408222}, 2 * sizeof(double));
                    } else {
                        memcpy(var123, (double[]){0.6827933513812476, 0.31720664861875236}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= 0.00007442831338266842) {
                        memcpy(var123, (double[]){0.534293466221061, 0.46570653377893884}, 2 * sizeof(double));
                    } else {
                        memcpy(var123, (double[]){0.3482615429934338, 0.6517384570065662}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var78, var123, 2, var77);
    double var124[2];
    if (input[11] <= 0.000020380334717629012) {
        if (input[9] <= 0.9975094199180603) {
            if (input[3] <= 15.740286350250244) {
                memcpy(var124, (double[]){0.0, 1.0}, 2 * sizeof(double));
            } else {
                if (input[2] <= 57.00407791137695) {
                    if (input[4] <= 0.00006817032408434898) {
                        memcpy(var124, (double[]){0.757205330394959, 0.24279466960504112}, 2 * sizeof(double));
                    } else {
                        memcpy(var124, (double[]){0.17885682913438664, 0.8211431708656134}, 2 * sizeof(double));
                    }
                } else {
                    if (input[24] <= 0.000020964068426110316) {
                        memcpy(var124, (double[]){0.9505225620204703, 0.04947743797952978}, 2 * sizeof(double));
                    } else {
                        memcpy(var124, (double[]){0.7600011520405519, 0.23999884795944815}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[16] <= 0.00005667922778229695) {
                if (input[15] <= 0.000005591499984802795) {
                    if (input[21] <= 0.00003531575021042954) {
                        memcpy(var124, (double[]){0.753049955053294, 0.24695004494670605}, 2 * sizeof(double));
                    } else {
                        memcpy(var124, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[8] <= 0.0000009345361888790649) {
                        memcpy(var124, (double[]){0.16999400885143875, 0.8300059911485613}, 2 * sizeof(double));
                    } else {
                        memcpy(var124, (double[]){0.5334788937409025, 0.4665211062590976}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[12] <= 0.00004801237264473457) {
                    if (input[18] <= 0.000005601927114184946) {
                        memcpy(var124, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                    } else {
                        memcpy(var124, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 84.39530944824219) {
                        memcpy(var124, (double[]){0.7232809127351217, 0.2767190872648782}, 2 * sizeof(double));
                    } else {
                        memcpy(var124, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[22] <= 0.00007966067278175615) {
            if (input[22] <= 0.000012095740203221794) {
                if (input[9] <= 0.999207615852356) {
                    if (input[9] <= 0.996793121099472) {
                        memcpy(var124, (double[]){0.4473842820413052, 0.5526157179586948}, 2 * sizeof(double));
                    } else {
                        memcpy(var124, (double[]){0.96746027717143, 0.032539722828569984}, 2 * sizeof(double));
                    }
                } else {
                    if (input[3] <= 91.14395141601562) {
                        memcpy(var124, (double[]){0.3657779039654474, 0.6342220960345525}, 2 * sizeof(double));
                    } else {
                        memcpy(var124, (double[]){0.06670306670306668, 0.9332969332969333}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[7] <= 0.0000009310488735536637) {
                    if (input[15] <= -0.00009299355224356987) {
                        memcpy(var124, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var124, (double[]){0.4744830378822773, 0.5255169621177227}, 2 * sizeof(double));
                    }
                } else {
                    if (input[12] <= 0.00003741080217878334) {
                        memcpy(var124, (double[]){0.5334788937409022, 0.4665211062590978}, 2 * sizeof(double));
                    } else {
                        memcpy(var124, (double[]){0.7466914896419692, 0.25330851035803087}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[6] <= 0.00003109410317847505) {
                if (input[19] <= 0.00005318568219081499) {
                    if (input[18] <= -0.000020502247025433462) {
                        memcpy(var124, (double[]){0.9581073132475001, 0.04189268675249984}, 2 * sizeof(double));
                    } else {
                        memcpy(var124, (double[]){0.5550577396352622, 0.44494226036473783}, 2 * sizeof(double));
                    }
                } else {
                    if (input[22] <= 0.00009200870772474445) {
                        memcpy(var124, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var124, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[24] <= 0.00003387903961993288) {
                    if (input[16] <= 0.00009054318070411682) {
                        memcpy(var124, (double[]){0.3273271261750059, 0.672672873824994}, 2 * sizeof(double));
                    } else {
                        memcpy(var124, (double[]){0.6558697208303508, 0.3441302791696493}, 2 * sizeof(double));
                    }
                } else {
                    if (input[12] <= -0.000006540735739690717) {
                        memcpy(var124, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    } else {
                        memcpy(var124, (double[]){0.04888214601290406, 0.951117853987096}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var77, var124, 2, var76);
    double var125[2];
    if (input[9] <= 0.9984177350997925) {
        if (input[6] <= 0.00003450568692642264) {
            if (input[24] <= -0.00007299919889192097) {
                if (input[15] <= 0.00010527535050641745) {
                    if (input[10] <= -0.000003263960252297693) {
                        memcpy(var125, (double[]){0.36377171215880894, 0.6362282878411911}, 2 * sizeof(double));
                    } else {
                        memcpy(var125, (double[]){0.930730784816966, 0.06926921518303394}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var125, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[13] <= 0.0000009318917761902412) {
                    memcpy(var125, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[0] <= -1.9345811605453491) {
                        memcpy(var125, (double[]){0.7595176418043768, 0.2404823581956232}, 2 * sizeof(double));
                    } else {
                        memcpy(var125, (double[]){0.6158901575598094, 0.38410984244019064}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[15] <= 0.0000009249308732250938) {
                if (input[10] <= 0.00007974583058967255) {
                    if (input[18] <= -0.0000656272932246793) {
                        memcpy(var125, (double[]){0.6862857750824556, 0.3137142249175444}, 2 * sizeof(double));
                    } else {
                        memcpy(var125, (double[]){0.35645599008580797, 0.643544009914192}, 2 * sizeof(double));
                    }
                } else {
                    if (input[11] <= 0.00009606026651454158) {
                        memcpy(var125, (double[]){0.3250013855788948, 0.6749986144211052}, 2 * sizeof(double));
                    } else {
                        memcpy(var125, (double[]){0.1404214559386973, 0.8595785440613027}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[3] <= 60.61021423339844) {
                    if (input[12] <= 0.00005461481669044588) {
                        memcpy(var125, (double[]){0.6741861309451772, 0.3258138690548228}, 2 * sizeof(double));
                    } else {
                        memcpy(var125, (double[]){0.11414111922141108, 0.8858588807785889}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 6.854468107223511) {
                        memcpy(var125, (double[]){0.8205989364679541, 0.17940106353204588}, 2 * sizeof(double));
                    } else {
                        memcpy(var125, (double[]){0.5964140763485958, 0.40358592365140433}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[2] <= 99.72599411010742) {
            if (input[3] <= 48.412044525146484) {
                if (input[6] <= 0.000059219024478807114) {
                    if (input[11] <= 0.00005748589137510862) {
                        memcpy(var125, (double[]){0.7092618910828219, 0.29073810891717816}, 2 * sizeof(double));
                    } else {
                        memcpy(var125, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= -0.00003313006709504407) {
                        memcpy(var125, (double[]){0.8727922206787061, 0.12720777932129393}, 2 * sizeof(double));
                    } else {
                        memcpy(var125, (double[]){0.26027518863737237, 0.7397248113626276}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[19] <= 0.00014090225886320695) {
                    if (input[22] <= 0.00000745291572457063) {
                        memcpy(var125, (double[]){0.21400210206703266, 0.7859978979329673}, 2 * sizeof(double));
                    } else {
                        memcpy(var125, (double[]){0.3926883107219929, 0.6073116892780072}, 2 * sizeof(double));
                    }
                } else {
                    if (input[13] <= 0.0000438855877291644) {
                        memcpy(var125, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var125, (double[]){0.9263556985294118, 0.07364430147058824}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[24] <= 0.00002842187041096622) {
                memcpy(var125, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                memcpy(var125, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    }
    add_vectors(var76, var125, 2, var75);
    double var126[2];
    if (input[21] <= 0.00008292879283544607) {
        if (input[12] <= 0.000034206179407192394) {
            if (input[22] <= 0.00003636808105511591) {
                if (input[7] <= 0.0000009255104487237986) {
                    if (input[21] <= -0.000036802499380428344) {
                        memcpy(var126, (double[]){0.8205989364679541, 0.1794010635320459}, 2 * sizeof(double));
                    } else {
                        memcpy(var126, (double[]){0.23164100384669892, 0.7683589961533012}, 2 * sizeof(double));
                    }
                } else {
                    if (input[15] <= -0.00003261082019889727) {
                        memcpy(var126, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var126, (double[]){0.553024154368477, 0.4469758456315232}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= -0.995587944984436) {
                    if (input[13] <= 0.0000009321836671460915) {
                        memcpy(var126, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var126, (double[]){0.7710123643003154, 0.22898763569968453}, 2 * sizeof(double));
                    }
                } else {
                    if (input[15] <= 0.00003097540684393607) {
                        memcpy(var126, (double[]){0.26114930002514875, 0.7388506999748512}, 2 * sizeof(double));
                    } else {
                        memcpy(var126, (double[]){0.6081393825597134, 0.3918606174402865}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[6] <= 0.000023304135538637638) {
                if (input[11] <= 0.00007831363109289669) {
                    if (input[18] <= -0.00012265021723578684) {
                        memcpy(var126, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var126, (double[]){0.7091670948069361, 0.2908329051930639}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var126, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[8] <= 0.0000009325970040663378) {
                    if (input[25] <= 0.00016161710664164275) {
                        memcpy(var126, (double[]){0.44930834229235644, 0.5506916577076436}, 2 * sizeof(double));
                    } else {
                        memcpy(var126, (double[]){0.8727922206787061, 0.12720777932129393}, 2 * sizeof(double));
                    }
                } else {
                    if (input[3] <= 82.53912734985352) {
                        memcpy(var126, (double[]){0.4515554947123445, 0.5484445052876554}, 2 * sizeof(double));
                    } else {
                        memcpy(var126, (double[]){0.8840378701079419, 0.11596212989205813}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[19] <= 0.00008626415001344867) {
            if (input[7] <= 0.0000009337969117950706) {
                if (input[16] <= 0.00007000004188739695) {
                    if (input[15] <= 0.00004809532219951507) {
                        memcpy(var126, (double[]){0.3288962010170504, 0.6711037989829496}, 2 * sizeof(double));
                    } else {
                        memcpy(var126, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[13] <= 0.000026498339138925076) {
                        memcpy(var126, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var126, (double[]){0.6558697208303508, 0.3441302791696493}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[9] <= 0.9678531587123871) {
                    if (input[12] <= 0.00006618549377890304) {
                        memcpy(var126, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var126, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                    }
                } else {
                    if (input[4] <= 0.00002126801246049581) {
                        memcpy(var126, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var126, (double[]){0.9354199549988246, 0.06458004500117542}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            memcpy(var126, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var75, var126, 2, var74);
    double var127[2];
    if (input[7] <= 0.0000009245185879080964) {
        if (input[19] <= 0.000017731818843458313) {
            if (input[15] <= -0.00005028179475630168) {
                memcpy(var127, (double[]){0.0, 1.0}, 2 * sizeof(double));
            } else {
                if (input[11] <= 0.0000018568006794339453) {
                    if (input[2] <= 21.71950626373291) {
                        memcpy(var127, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var127, (double[]){0.9014604150653344, 0.09853958493466565}, 2 * sizeof(double));
                    }
                } else {
                    if (input[12] <= 0.00003775472032430116) {
                        memcpy(var127, (double[]){0.37402894470593406, 0.6259710552940659}, 2 * sizeof(double));
                    } else {
                        memcpy(var127, (double[]){0.6080302877227313, 0.3919697122772689}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[18] <= 0.00014422301319427788) {
                if (input[6] <= 0.00007250611452036537) {
                    if (input[24] <= -0.00014737984747625887) {
                        memcpy(var127, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var127, (double[]){0.41922564586655675, 0.5807743541334432}, 2 * sizeof(double));
                    }
                } else {
                    if (input[24] <= 0.00009339690950582735) {
                        memcpy(var127, (double[]){0.2914973127554931, 0.7085026872445068}, 2 * sizeof(double));
                    } else {
                        memcpy(var127, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[4] <= 0.00008219934170483612) {
                    if (input[15] <= 0.00009740774112287909) {
                        memcpy(var127, (double[]){0.9263556985294118, 0.07364430147058826}, 2 * sizeof(double));
                    } else {
                        memcpy(var127, (double[]){0.6039134912461379, 0.39608650875386203}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var127, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        }
    } else {
        if (input[24] <= 0.000046654196921736) {
            if (input[10] <= 0.000010205535090790363) {
                if (input[19] <= 0.00008213449837057851) {
                    if (input[13] <= 0.000040093305869959295) {
                        memcpy(var127, (double[]){0.8372889960654906, 0.16271100393450946}, 2 * sizeof(double));
                    } else {
                        memcpy(var127, (double[]){0.9733991783209528, 0.026600821679047183}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var127, (double[]){0.6317150244182705, 0.3682849755817294}, 2 * sizeof(double));
                }
            } else {
                if (input[13] <= 0.000008378070106118685) {
                    if (input[3] <= 42.522281646728516) {
                        memcpy(var127, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var127, (double[]){0.592733783861838, 0.40726621613816205}, 2 * sizeof(double));
                    }
                } else {
                    if (input[9] <= 0.8579994440078735) {
                        memcpy(var127, (double[]){0.8142477662400385, 0.18575223375996147}, 2 * sizeof(double));
                    } else {
                        memcpy(var127, (double[]){0.6123349359322989, 0.38766506406770096}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[4] <= 0.000023868361495260615) {
                if (input[24] <= 0.000048789253924041986) {
                    memcpy(var127, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[7] <= 0.00003108523651462747) {
                        memcpy(var127, (double[]){0.8539012839668753, 0.1460987160331248}, 2 * sizeof(double));
                    } else {
                        memcpy(var127, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[7] <= 0.0000009310579685006815) {
                    memcpy(var127, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[24] <= 0.00007471400022041053) {
                        memcpy(var127, (double[]){0.4043961787508348, 0.5956038212491653}, 2 * sizeof(double));
                    } else {
                        memcpy(var127, (double[]){0.6526148724499671, 0.3473851275500329}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var74, var127, 2, var73);
    double var128[2];
    if (input[6] <= 0.000007425820740536437) {
        if (input[2] <= 87.85273361206055) {
            if (input[16] <= 0.0000900148443179205) {
                if (input[25] <= 0.00007466729948646389) {
                    if (input[7] <= 0.0000009268924259231426) {
                        memcpy(var128, (double[]){0.674547012344112, 0.3254529876558881}, 2 * sizeof(double));
                    } else {
                        memcpy(var128, (double[]){0.8689804594881858, 0.13101954051181425}, 2 * sizeof(double));
                    }
                } else {
                    if (input[6] <= 0.000006050749334463035) {
                        memcpy(var128, (double[]){0.9846242414066061, 0.015375758593393941}, 2 * sizeof(double));
                    } else {
                        memcpy(var128, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[12] <= 0.00006591175406356342) {
                    memcpy(var128, (double[]){0.6039134912461379, 0.39608650875386203}, 2 * sizeof(double));
                } else {
                    memcpy(var128, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[18] <= 0.000015792133581271628) {
                if (input[2] <= 91.83520889282227) {
                    memcpy(var128, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[10] <= 0.0000004659358978642558) {
                        memcpy(var128, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var128, (double[]){0.9581073132475002, 0.04189268675249984}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[25] <= 0.00003252449278079439) {
                    memcpy(var128, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                } else {
                    if (input[18] <= 0.000021433270376292057) {
                        memcpy(var128, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var128, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[7] <= 0.00000046111040319374297) {
            if (input[2] <= 94.66170120239258) {
                if (input[21] <= -0.000011190657460247166) {
                    if (input[10] <= 0.00007074331006151624) {
                        memcpy(var128, (double[]){0.5741051195740653, 0.42589488042593465}, 2 * sizeof(double));
                    } else {
                        memcpy(var128, (double[]){0.34985979356840297, 0.650140206431597}, 2 * sizeof(double));
                    }
                } else {
                    if (input[12] <= 0.000036350284062791616) {
                        memcpy(var128, (double[]){0.2148637472388273, 0.7851362527611727}, 2 * sizeof(double));
                    } else {
                        memcpy(var128, (double[]){0.4205443688845284, 0.5794556311154715}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[18] <= 0.00001672818234510487) {
                    if (input[4] <= 0.0000219572611968033) {
                        memcpy(var128, (double[]){0.3288962010170505, 0.6711037989829495}, 2 * sizeof(double));
                    } else {
                        memcpy(var128, (double[]){0.8330531549662602, 0.16694684503373977}, 2 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 6.5491042137146) {
                        memcpy(var128, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var128, (double[]){0.5575636348269497, 0.44243636517305024}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[10] <= 0.00000840250140754506) {
                if (input[21] <= 0.00006632646181969903) {
                    memcpy(var128, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    memcpy(var128, (double[]){0.8205989364679541, 0.1794010635320459}, 2 * sizeof(double));
                }
            } else {
                if (input[21] <= 0.00005166140908841044) {
                    if (input[7] <= 0.0000009319456069079024) {
                        memcpy(var128, (double[]){0.8276696418969782, 0.17233035810302189}, 2 * sizeof(double));
                    } else {
                        memcpy(var128, (double[]){0.5991904809836235, 0.4008095190163765}, 2 * sizeof(double));
                    }
                } else {
                    if (input[19] <= 0.00006112807750469074) {
                        memcpy(var128, (double[]){0.483367526377491, 0.516632473622509}, 2 * sizeof(double));
                    } else {
                        memcpy(var128, (double[]){0.1297957738165505, 0.8702042261834495}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var73, var128, 2, var72);
    double var129[2];
    if (input[10] <= 0.00002329476501472527) {
        if (input[24] <= 0.00001954124581970973) {
            if (input[9] <= 0.9964641034603119) {
                if (input[0] <= 8.508215427398682) {
                    if (input[3] <= 72.47494125366211) {
                        memcpy(var129, (double[]){0.7312407830436918, 0.26875921695630833}, 2 * sizeof(double));
                    } else {
                        memcpy(var129, (double[]){0.9834610521970225, 0.01653894780297753}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var129, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[21] <= -0.00003443765490374062) {
                    memcpy(var129, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[12] <= 0.000047717350753373466) {
                        memcpy(var129, (double[]){0.47514584968100704, 0.524854150318993}, 2 * sizeof(double));
                    } else {
                        memcpy(var129, (double[]){0.16007861978597945, 0.8399213802140205}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[11] <= 0.00003545894651324488) {
                if (input[1] <= 5.962382793426514) {
                    if (input[24] <= 0.000032634763556416146) {
                        memcpy(var129, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var129, (double[]){0.7385744788043086, 0.2614255211956913}, 2 * sizeof(double));
                    }
                } else {
                    if (input[18] <= 0.000033081463698181324) {
                        memcpy(var129, (double[]){0.13041254308906916, 0.8695874569109309}, 2 * sizeof(double));
                    } else {
                        memcpy(var129, (double[]){0.5022382605517997, 0.49776173944820035}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 4.848060607910156) {
                    if (input[19] <= 0.00005402593706094194) {
                        memcpy(var129, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    } else {
                        memcpy(var129, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[11] <= 0.000038582022170885466) {
                        memcpy(var129, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var129, (double[]){0.37572402480906253, 0.6242759751909375}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[8] <= 0.0000009286008264552947) {
            if (input[15] <= 0.0001278921845369041) {
                if (input[6] <= 0.000012058173069817713) {
                    if (input[26] <= 0.5) {
                        memcpy(var129, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var129, (double[]){0.4325759811153732, 0.5674240188846268}, 2 * sizeof(double));
                    }
                } else {
                    if (input[22] <= 0.00011013950643246062) {
                        memcpy(var129, (double[]){0.4473842820413042, 0.5526157179586958}, 2 * sizeof(double));
                    } else {
                        memcpy(var129, (double[]){0.14261047204455352, 0.8573895279554464}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[23] <= 0.5) {
                    if (input[6] <= 0.00004243861258146353) {
                        memcpy(var129, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var129, (double[]){0.9242286930139091, 0.07577130698609089}, 2 * sizeof(double));
                    }
                } else {
                    if (input[15] <= 0.00017652682436164469) {
                        memcpy(var129, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var129, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[11] <= 0.0000583223627472762) {
                if (input[25] <= 0.00002798086279653944) {
                    if (input[18] <= 0.00005305434387992136) {
                        memcpy(var129, (double[]){0.5425180407602231, 0.4574819592397769}, 2 * sizeof(double));
                    } else {
                        memcpy(var129, (double[]){0.9263556985294118, 0.07364430147058824}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 9.935896873474121) {
                        memcpy(var129, (double[]){0.5040832115533396, 0.49591678844666043}, 2 * sizeof(double));
                    } else {
                        memcpy(var129, (double[]){0.21400210206703257, 0.7859978979329675}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[21] <= 0.00011432382962084375) {
                    if (input[16] <= 0.0000478673155157594) {
                        memcpy(var129, (double[]){0.8272440918355313, 0.17275590816446862}, 2 * sizeof(double));
                    } else {
                        memcpy(var129, (double[]){0.5026255481170037, 0.4973744518829963}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var129, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var72, var129, 2, var71);
    double var130[2];
    if (input[7] <= 0.0000004610976418462087) {
        if (input[15] <= -0.0000924798587220721) {
            memcpy(var130, (double[]){0.0, 1.0}, 2 * sizeof(double));
        } else {
            if (input[1] <= -12.079644680023193) {
                if (input[12] <= 0.000055780996262910776) {
                    if (input[21] <= -0.00003114051833108533) {
                        memcpy(var130, (double[]){0.40215065562078234, 0.5978493443792177}, 2 * sizeof(double));
                    } else {
                        memcpy(var130, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[25] <= 0.000006514366759802215) {
                        memcpy(var130, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var130, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[18] <= -0.00002752855471044313) {
                    if (input[13] <= 0.000043715406718547456) {
                        memcpy(var130, (double[]){0.44798177625913266, 0.5520182237408673}, 2 * sizeof(double));
                    } else {
                        memcpy(var130, (double[]){0.6356164911503144, 0.36438350884968573}, 2 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 99.28979110717773) {
                        memcpy(var130, (double[]){0.4020869599595755, 0.5979130400404246}, 2 * sizeof(double));
                    } else {
                        memcpy(var130, (double[]){0.7836043436673605, 0.2163956563326394}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[21] <= 0.00010577725333860144) {
            if (input[11] <= 0.000036273755540605634) {
                if (input[3] <= 56.329803466796875) {
                    if (input[22] <= 0.00005218521800998133) {
                        memcpy(var130, (double[]){0.8120295852204229, 0.18797041477957704}, 2 * sizeof(double));
                    } else {
                        memcpy(var130, (double[]){0.9805125710637521, 0.019487428936247834}, 2 * sizeof(double));
                    }
                } else {
                    if (input[25] <= 0.00016449856775579974) {
                        memcpy(var130, (double[]){0.6957759848125293, 0.3042240151874707}, 2 * sizeof(double));
                    } else {
                        memcpy(var130, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[12] <= 0.000038164611396496184) {
                    if (input[21] <= -0.00001759114456945099) {
                        memcpy(var130, (double[]){0.664667108429533, 0.33533289157046703}, 2 * sizeof(double));
                    } else {
                        memcpy(var130, (double[]){0.437169695664419, 0.5628303043355809}, 2 * sizeof(double));
                    }
                } else {
                    if (input[3] <= 63.5217342376709) {
                        memcpy(var130, (double[]){0.5454059270110331, 0.454594072988967}, 2 * sizeof(double));
                    } else {
                        memcpy(var130, (double[]){0.7605627957167758, 0.2394372042832242}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[15] <= -0.000018164644643547945) {
                memcpy(var130, (double[]){0.6039134912461379, 0.39608650875386203}, 2 * sizeof(double));
            } else {
                if (input[0] <= 2.677018642425537) {
                    memcpy(var130, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                } else {
                    memcpy(var130, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var71, var130, 2, var70);
    double var131[2];
    if (input[8] <= 0.000022312227883958258) {
        if (input[10] <= 0.000024611632397864014) {
            if (input[21] <= 0.000012551734471344389) {
                if (input[3] <= 48.51458168029785) {
                    if (input[1] <= -15.007133483886719) {
                        memcpy(var131, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var131, (double[]){0.8045612537349839, 0.19543874626501623}, 2 * sizeof(double));
                    }
                } else {
                    if (input[4] <= 0.00009243608656106517) {
                        memcpy(var131, (double[]){0.6495286576168927, 0.35047134238310734}, 2 * sizeof(double));
                    } else {
                        memcpy(var131, (double[]){0.17212633556416576, 0.8278736644358342}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[15] <= -0.00004101040576642845) {
                    if (input[6] <= 0.000002330199123434795) {
                        memcpy(var131, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                    } else {
                        memcpy(var131, (double[]){0.9263556985294118, 0.07364430147058826}, 2 * sizeof(double));
                    }
                } else {
                    if (input[11] <= 0.000035215149182477035) {
                        memcpy(var131, (double[]){0.3903830790885228, 0.6096169209114771}, 2 * sizeof(double));
                    } else {
                        memcpy(var131, (double[]){0.6465983019075974, 0.3534016980924026}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[18] <= 0.00007485241076210514) {
                if (input[15] <= -0.0000720015996193979) {
                    if (input[7] <= 0.000000929056881204815) {
                        memcpy(var131, (double[]){0.04136685572391996, 0.9586331442760799}, 2 * sizeof(double));
                    } else {
                        memcpy(var131, (double[]){0.6957759848125297, 0.30422401518747033}, 2 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 81.19314956665039) {
                        memcpy(var131, (double[]){0.45106073115324125, 0.5489392688467588}, 2 * sizeof(double));
                    } else {
                        memcpy(var131, (double[]){0.5834754780122489, 0.41652452198775114}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[18] <= 0.0001117539759434294) {
                    if (input[22] <= 0.0000650632027827669) {
                        memcpy(var131, (double[]){0.30736230949116994, 0.6926376905088301}, 2 * sizeof(double));
                    } else {
                        memcpy(var131, (double[]){0.03992266005827725, 0.9600773399417227}, 2 * sizeof(double));
                    }
                } else {
                    if (input[3] <= 63.608381271362305) {
                        memcpy(var131, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var131, (double[]){0.730884282340593, 0.26911571765940695}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[21] <= 0.00007797593207214959) {
            if (input[21] <= -0.00013960224168840796) {
                memcpy(var131, (double[]){0.0, 1.0}, 2 * sizeof(double));
            } else {
                if (input[12] <= 0.00003356655906827655) {
                    if (input[16] <= 0.000014923659364285413) {
                        memcpy(var131, (double[]){0.8727922206787061, 0.12720777932129393}, 2 * sizeof(double));
                    } else {
                        memcpy(var131, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[24] <= -0.00009113787018577568) {
                        memcpy(var131, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var131, (double[]){0.8177224604077346, 0.18227753959226534}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[12] <= 0.00008361712025362067) {
                memcpy(var131, (double[]){0.0, 1.0}, 2 * sizeof(double));
            } else {
                memcpy(var131, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
            }
        }
    }
    add_vectors(var70, var131, 2, var69);
    double var132[2];
    if (input[1] <= 6.578954458236694) {
        if (input[15] <= -0.0000917491561267525) {
            if (input[15] <= -0.000157333146489691) {
                memcpy(var132, (double[]){0.36377171215880894, 0.6362282878411911}, 2 * sizeof(double));
            } else {
                memcpy(var132, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            if (input[11] <= 0.000023297967345570214) {
                if (input[16] <= 0.00011961069321841933) {
                    if (input[18] <= -0.00009374072396894917) {
                        memcpy(var132, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var132, (double[]){0.7972475791459724, 0.20275242085402767}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var132, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[7] <= 0.0000009310345490121108) {
                    if (input[12] <= 0.000050371751058264636) {
                        memcpy(var132, (double[]){0.49938517779993363, 0.5006148222000664}, 2 * sizeof(double));
                    } else {
                        memcpy(var132, (double[]){0.3582320539493024, 0.6417679460506978}, 2 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 43.96596908569336) {
                        memcpy(var132, (double[]){0.8805169521363627, 0.11948304786363728}, 2 * sizeof(double));
                    } else {
                        memcpy(var132, (double[]){0.606136477182021, 0.39386352281797893}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[8] <= 0.000002784527850963059) {
            if (input[12] <= -0.00000046610486492681957) {
                if (input[1] <= 7.957058906555176) {
                    memcpy(var132, (double[]){0.6039134912461379, 0.39608650875386203}, 2 * sizeof(double));
                } else {
                    if (input[1] <= 8.73290729522705) {
                        memcpy(var132, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var132, (double[]){0.6957759848125297, 0.30422401518747044}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[19] <= 0.00013234162906883284) {
                    if (input[9] <= 0.9987818002700806) {
                        memcpy(var132, (double[]){0.46651326740428867, 0.5334867325957114}, 2 * sizeof(double));
                    } else {
                        memcpy(var132, (double[]){0.2316410038466992, 0.7683589961533007}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var132, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[16] <= 0.00006017100895405747) {
                if (input[4] <= 0.0000122128844850522) {
                    if (input[4] <= 0.000007716526624790276) {
                        memcpy(var132, (double[]){0.8205989364679541, 0.17940106353204593}, 2 * sizeof(double));
                    } else {
                        memcpy(var132, (double[]){0.11857963277521634, 0.8814203672247837}, 2 * sizeof(double));
                    }
                } else {
                    if (input[16] <= 0.000009736768788570771) {
                        memcpy(var132, (double[]){0.32500138557889485, 0.6749986144211051}, 2 * sizeof(double));
                    } else {
                        memcpy(var132, (double[]){0.7522457683593228, 0.2477542316406773}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[13] <= 0.00003728918090928346) {
                    if (input[6] <= 0.000011663169971143361) {
                        memcpy(var132, (double[]){0.3138514236780132, 0.6861485763219868}, 2 * sizeof(double));
                    } else {
                        memcpy(var132, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= -0.00000046725435254302283) {
                        memcpy(var132, (double[]){0.8511379470506271, 0.148862052949373}, 2 * sizeof(double));
                    } else {
                        memcpy(var132, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var69, var132, 2, var68);
    double var133[2];
    if (input[9] <= 0.9981273412704468) {
        if (input[15] <= 0.00002646158100105822) {
            if (input[13] <= 0.00009979671813198365) {
                if (input[6] <= 0.00003728235969902016) {
                    if (input[9] <= 0.15199288725852966) {
                        memcpy(var133, (double[]){0.9014604150653344, 0.09853958493466562}, 2 * sizeof(double));
                    } else {
                        memcpy(var133, (double[]){0.5883769465403753, 0.41162305345962463}, 2 * sizeof(double));
                    }
                } else {
                    if (input[12] <= 0.000045346119804889895) {
                        memcpy(var133, (double[]){0.4381001713352193, 0.5618998286647806}, 2 * sizeof(double));
                    } else {
                        memcpy(var133, (double[]){0.2779518865083702, 0.7220481134916298}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[4] <= 0.00009256863995688036) {
                    if (input[7] <= 0.000016301604773616418) {
                        memcpy(var133, (double[]){0.9501464755139606, 0.04985352448603946}, 2 * sizeof(double));
                    } else {
                        memcpy(var133, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 7.4812939167022705) {
                        memcpy(var133, (double[]){0.4193563766388558, 0.5806436233611443}, 2 * sizeof(double));
                    } else {
                        memcpy(var133, (double[]){0.9014604150653344, 0.09853958493466565}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[11] <= 0.00003326611113152467) {
                if (input[19] <= 0.00004133343827561475) {
                    if (input[9] <= 0.9976711869239807) {
                        memcpy(var133, (double[]){0.8909254442472714, 0.10907455575272867}, 2 * sizeof(double));
                    } else {
                        memcpy(var133, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[15] <= 0.00004613973760569934) {
                        memcpy(var133, (double[]){0.39520150963741746, 0.6047984903625826}, 2 * sizeof(double));
                    } else {
                        memcpy(var133, (double[]){0.740853042247827, 0.25914695775217306}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 2.231142282485962) {
                    if (input[24] <= 0.000025152739908662625) {
                        memcpy(var133, (double[]){0.3445884800263258, 0.6554115199736742}, 2 * sizeof(double));
                    } else {
                        memcpy(var133, (double[]){0.8511379470506271, 0.148862052949373}, 2 * sizeof(double));
                    }
                } else {
                    if (input[9] <= 0.9743770062923431) {
                        memcpy(var133, (double[]){0.5019556199381049, 0.49804438006189516}, 2 * sizeof(double));
                    } else {
                        memcpy(var133, (double[]){0.8727922206787061, 0.12720777932129387}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[18] <= 0.000143933852086775) {
            if (input[24] <= -0.00002983357717312174) {
                if (input[6] <= 0.000044681191866402514) {
                    if (input[0] <= -2.858391761779785) {
                        memcpy(var133, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    } else {
                        memcpy(var133, (double[]){0.03671792816710913, 0.9632820718328908}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= 0.0000815364983282052) {
                        memcpy(var133, (double[]){0.30855849930279655, 0.6914415006972034}, 2 * sizeof(double));
                    } else {
                        memcpy(var133, (double[]){0.753049955053294, 0.24695004494670605}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[15] <= 0.000025134399038506672) {
                    if (input[11] <= 0.0000009312205406786234) {
                        memcpy(var133, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var133, (double[]){0.3204900282549964, 0.6795099717450035}, 2 * sizeof(double));
                    }
                } else {
                    if (input[13] <= 0.00009691580635262653) {
                        memcpy(var133, (double[]){0.46619751177081603, 0.533802488229184}, 2 * sizeof(double));
                    } else {
                        memcpy(var133, (double[]){0.7165367159315723, 0.28346328406842775}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[2] <= 74.53730773925781) {
                memcpy(var133, (double[]){0.43257598111537315, 0.5674240188846268}, 2 * sizeof(double));
            } else {
                if (input[3] <= 66.60884475708008) {
                    memcpy(var133, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    memcpy(var133, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var68, var133, 2, var67);
    double var134[2];
    if (input[21] <= -0.00001534162720417953) {
        if (input[6] <= 0.0001118005602620542) {
            if (input[13] <= 0.00015197709581116214) {
                if (input[24] <= 0.00005718294232792687) {
                    if (input[4] <= 0.00009581523045198992) {
                        memcpy(var134, (double[]){0.6259231129019107, 0.37407688709808923}, 2 * sizeof(double));
                    } else {
                        memcpy(var134, (double[]){0.9195834901518003, 0.08041650984819972}, 2 * sizeof(double));
                    }
                } else {
                    if (input[11] <= 0.00007277182521647774) {
                        memcpy(var134, (double[]){0.2713020489094513, 0.7286979510905486}, 2 * sizeof(double));
                    } else {
                        memcpy(var134, (double[]){0.6957759848125297, 0.30422401518747033}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[17] <= 0.5) {
                    memcpy(var134, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    memcpy(var134, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[15] <= 0.000022812480438005878) {
                if (input[12] <= 0.000001394888585082299) {
                    memcpy(var134, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                } else {
                    if (input[9] <= 0.9988095164299011) {
                        memcpy(var134, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var134, (double[]){0.36377171215880894, 0.6362282878411911}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[6] <= 0.00012518299627117813) {
                    memcpy(var134, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[22] <= 0.00005638387119688559) {
                        memcpy(var134, (double[]){0.43257598111537315, 0.5674240188846268}, 2 * sizeof(double));
                    } else {
                        memcpy(var134, (double[]){0.948176893847522, 0.05182310615247798}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[1] <= -11.270769596099854) {
            if (input[2] <= 51.567291259765625) {
                if (input[19] <= 0.00008971977877081372) {
                    memcpy(var134, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    memcpy(var134, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                }
            } else {
                if (input[1] <= -14.631284713745117) {
                    if (input[21] <= -0.0000037380766571004642) {
                        memcpy(var134, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var134, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[4] <= 0.000048698044338379987) {
                        memcpy(var134, (double[]){0.8205989364679541, 0.17940106353204593}, 2 * sizeof(double));
                    } else {
                        memcpy(var134, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[9] <= 0.9982545375823975) {
                if (input[9] <= 0.9978213608264923) {
                    if (input[22] <= 0.00006829007907072082) {
                        memcpy(var134, (double[]){0.49387810963605533, 0.5061218903639446}, 2 * sizeof(double));
                    } else {
                        memcpy(var134, (double[]){0.6752337524757034, 0.3247662475242967}, 2 * sizeof(double));
                    }
                } else {
                    if (input[13] <= 0.00003867127998091746) {
                        memcpy(var134, (double[]){0.36377171215880894, 0.6362282878411911}, 2 * sizeof(double));
                    } else {
                        memcpy(var134, (double[]){0.9384502128476779, 0.061549787152322136}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[22] <= 0.0000731226900825277) {
                    if (input[11] <= 0.00006580839908565395) {
                        memcpy(var134, (double[]){0.37255049601867396, 0.6274495039813259}, 2 * sizeof(double));
                    } else {
                        memcpy(var134, (double[]){0.5833043790139091, 0.41669562098609103}, 2 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 34.42290496826172) {
                        memcpy(var134, (double[]){0.8205989364679541, 0.17940106353204593}, 2 * sizeof(double));
                    } else {
                        memcpy(var134, (double[]){0.15678641327016246, 0.8432135867298376}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var67, var134, 2, var66);
    double var135[2];
    if (input[7] <= 0.000000924953866388023) {
        if (input[15] <= -0.0000924798587220721) {
            if (input[3] <= 32.69500923156738) {
                memcpy(var135, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
            } else {
                if (input[18] <= -0.00009231437798007391) {
                    if (input[3] <= 46.3734016418457) {
                        memcpy(var135, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    } else {
                        memcpy(var135, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var135, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[9] <= 0.28452885150909424) {
                if (input[19] <= 0.000042802130337804556) {
                    if (input[13] <= 0.0000009316925400071341) {
                        memcpy(var135, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var135, (double[]){0.8955770953816079, 0.10442290461839213}, 2 * sizeof(double));
                    }
                } else {
                    if (input[13] <= 0.00003778065547521692) {
                        memcpy(var135, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var135, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[4] <= 0.000033916930988198146) {
                    if (input[16] <= 0.000000925565217357871) {
                        memcpy(var135, (double[]){0.10743862220593621, 0.8925613777940637}, 2 * sizeof(double));
                    } else {
                        memcpy(var135, (double[]){0.3847719523962693, 0.6152280476037307}, 2 * sizeof(double));
                    }
                } else {
                    if (input[22] <= 0.00006694527837680653) {
                        memcpy(var135, (double[]){0.5117198223437467, 0.48828017765625337}, 2 * sizeof(double));
                    } else {
                        memcpy(var135, (double[]){0.3327870486230305, 0.6672129513769693}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[7] <= 0.000028864854357379954) {
            if (input[11] <= 0.00002458688959450228) {
                if (input[19] <= 0.00012346700168563984) {
                    if (input[22] <= 0.000049078815209213644) {
                        memcpy(var135, (double[]){0.8659078324001722, 0.13409216759982776}, 2 * sizeof(double));
                    } else {
                        memcpy(var135, (double[]){0.6386326363263632, 0.36136736367363664}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var135, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[12] <= 0.00003827967702818569) {
                    if (input[3] <= 46.23989486694336) {
                        memcpy(var135, (double[]){0.7946778366391525, 0.2053221633608476}, 2 * sizeof(double));
                    } else {
                        memcpy(var135, (double[]){0.44848090858683376, 0.5515190914131662}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= 0.00004099582838534843) {
                        memcpy(var135, (double[]){0.5688638245033111, 0.4311361754966889}, 2 * sizeof(double));
                    } else {
                        memcpy(var135, (double[]){0.8056471480007579, 0.1943528519992421}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[2] <= 58.531253814697266) {
                if (input[24] <= -0.000014452150026045274) {
                    if (input[6] <= 0.000014472712791757658) {
                        memcpy(var135, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    } else {
                        memcpy(var135, (double[]){0.948176893847522, 0.05182310615247797}, 2 * sizeof(double));
                    }
                } else {
                    if (input[18] <= -0.00011742663991753943) {
                        memcpy(var135, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var135, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[19] <= 0.00006574899089173414) {
                    if (input[16] <= 0.00000046524482399945555) {
                        memcpy(var135, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                    } else {
                        memcpy(var135, (double[]){0.06481276802688005, 0.9351872319731199}, 2 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 4.490424156188965) {
                        memcpy(var135, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var135, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var66, var135, 2, var65);
    double var136[2];
    if (input[7] <= 0.0000009245185879080964) {
        if (input[24] <= -0.0001281151344301179) {
            if (input[0] <= -5.676782131195068) {
                memcpy(var136, (double[]){0.0, 1.0}, 2 * sizeof(double));
            } else {
                if (input[4] <= 0.000057176745031028986) {
                    memcpy(var136, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[4] <= 0.0000645007130515296) {
                        memcpy(var136, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var136, (double[]){0.888946638946639, 0.11105336105336107}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[15] <= -0.0000924798587220721) {
                if (input[9] <= 0.2618480771780014) {
                    memcpy(var136, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                } else {
                    if (input[0] <= -3.7857110500335693) {
                        memcpy(var136, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var136, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[9] <= 0.7235272228717804) {
                    if (input[6] <= 0.000028013306291541085) {
                        memcpy(var136, (double[]){0.6866930063948515, 0.3133069936051486}, 2 * sizeof(double));
                    } else {
                        memcpy(var136, (double[]){0.40562044778128414, 0.594379552218716}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 11.346803188323975) {
                        memcpy(var136, (double[]){0.36002889245585934, 0.6399711075441407}, 2 * sizeof(double));
                    } else {
                        memcpy(var136, (double[]){0.4577958203597537, 0.5422041796402464}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[0] <= 3.9893062114715576) {
            if (input[22] <= 0.000003257610273976752) {
                if (input[0] <= 2.3822290897369385) {
                    if (input[1] <= -2.158243715763092) {
                        memcpy(var136, (double[]){0.49499155880697804, 0.505008441193022}, 2 * sizeof(double));
                    } else {
                        memcpy(var136, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[22] <= 0.00000046335296133293014) {
                        memcpy(var136, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var136, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 53.5202522277832) {
                    if (input[13] <= 0.000007455332934114267) {
                        memcpy(var136, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                    } else {
                        memcpy(var136, (double[]){0.8981823957884227, 0.1018176042115773}, 2 * sizeof(double));
                    }
                } else {
                    if (input[18] <= 0.00008955242446972989) {
                        memcpy(var136, (double[]){0.7485413618107659, 0.25145863818923403}, 2 * sizeof(double));
                    } else {
                        memcpy(var136, (double[]){0.13229852901362693, 0.8677014709863731}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[18] <= 0.00009427152690477669) {
                if (input[13] <= 0.000042403951738378964) {
                    if (input[1] <= 14.785458087921143) {
                        memcpy(var136, (double[]){0.47500157505827695, 0.524998424941723}, 2 * sizeof(double));
                    } else {
                        memcpy(var136, (double[]){0.24962220377583363, 0.7503777962241663}, 2 * sizeof(double));
                    }
                } else {
                    if (input[19] <= 0.00008077483653323725) {
                        memcpy(var136, (double[]){0.6887910917605047, 0.31120890823949526}, 2 * sizeof(double));
                    } else {
                        memcpy(var136, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[16] <= 0.00003449767427810002) {
                    memcpy(var136, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[24] <= 0.00008603584501543082) {
                        memcpy(var136, (double[]){0.9067161464018045, 0.09328385359819545}, 2 * sizeof(double));
                    } else {
                        memcpy(var136, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var65, var136, 2, var64);
    double var137[2];
    if (input[7] <= 0.000000924809711477792) {
        if (input[1] <= -11.98836898803711) {
            if (input[23] <= 0.5) {
                if (input[2] <= 80.89409637451172) {
                    if (input[3] <= 34.21227836608887) {
                        memcpy(var137, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var137, (double[]){0.11857963277521638, 0.8814203672247837}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var137, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[2] <= 64.15907669067383) {
                    memcpy(var137, (double[]){0.8205989364679541, 0.17940106353204593}, 2 * sizeof(double));
                } else {
                    memcpy(var137, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[8] <= 0.000018630626072990708) {
                if (input[18] <= 0.000013083781141176587) {
                    if (input[24] <= 0.00008360363062820397) {
                        memcpy(var137, (double[]){0.46629807377470955, 0.5337019262252904}, 2 * sizeof(double));
                    } else {
                        memcpy(var137, (double[]){0.6419048481828752, 0.35809515181712487}, 2 * sizeof(double));
                    }
                } else {
                    if (input[24] <= -0.00012689737923210487) {
                        memcpy(var137, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var137, (double[]){0.3447205278376159, 0.6552794721623841}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[22] <= 0.00006729175947839394) {
                    if (input[13] <= 0.000010705687600420788) {
                        memcpy(var137, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var137, (double[]){0.7934842841862443, 0.2065157158137557}, 2 * sizeof(double));
                    }
                } else {
                    if (input[8] <= 0.00005538240111491177) {
                        memcpy(var137, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var137, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[1] <= 8.366236209869385) {
            if (input[9] <= 0.24969135969877243) {
                if (input[24] <= 0.000023770576319748216) {
                    memcpy(var137, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    memcpy(var137, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                }
            } else {
                if (input[6] <= 0.0000321589413943002) {
                    if (input[19] <= 0.00012633549340534955) {
                        memcpy(var137, (double[]){0.8224666756620481, 0.1775333243379519}, 2 * sizeof(double));
                    } else {
                        memcpy(var137, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[8] <= 0.0000023300690372707322) {
                        memcpy(var137, (double[]){0.6219384745920551, 0.37806152540794496}, 2 * sizeof(double));
                    } else {
                        memcpy(var137, (double[]){0.186135093956323, 0.813864906043677}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[1] <= 8.960261344909668) {
                memcpy(var137, (double[]){0.0, 1.0}, 2 * sizeof(double));
            } else {
                if (input[24] <= 0.00009095824134419672) {
                    if (input[12] <= 0.0000468500566057628) {
                        memcpy(var137, (double[]){0.5033720131711008, 0.4966279868288992}, 2 * sizeof(double));
                    } else {
                        memcpy(var137, (double[]){0.7888298339629272, 0.2111701660370729}, 2 * sizeof(double));
                    }
                } else {
                    if (input[10] <= 0.00011545910820132121) {
                        memcpy(var137, (double[]){0.09044358072675672, 0.9095564192732433}, 2 * sizeof(double));
                    } else {
                        memcpy(var137, (double[]){0.8205989364679541, 0.17940106353204593}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var64, var137, 2, var63);
    double var138[2];
    if (input[2] <= 58.57217597961426) {
        if (input[22] <= 0.000041000545024871826) {
            if (input[2] <= 30.444066047668457) {
                if (input[9] <= 0.6042201519012451) {
                    memcpy(var138, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[10] <= 0.00000416351431908879) {
                        memcpy(var138, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var138, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[1] <= 17.198484420776367) {
                    if (input[10] <= 0.00011900413664989173) {
                        memcpy(var138, (double[]){0.7420857940164837, 0.2579142059835164}, 2 * sizeof(double));
                    } else {
                        memcpy(var138, (double[]){0.3034411384217335, 0.6965588615782665}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var138, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[1] <= -9.576342105865479) {
                if (input[18] <= -0.000011653480214590672) {
                    if (input[9] <= 0.4057715833187103) {
                        memcpy(var138, (double[]){0.8000935599563387, 0.19990644004366134}, 2 * sizeof(double));
                    } else {
                        memcpy(var138, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[11] <= 0.000037105564842931926) {
                        memcpy(var138, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var138, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[6] <= 0.000035897995985578746) {
                    if (input[13] <= 0.00000093270966772252) {
                        memcpy(var138, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var138, (double[]){0.6748271456485795, 0.3251728543514205}, 2 * sizeof(double));
                    }
                } else {
                    if (input[22] <= 0.000061005697716609575) {
                        memcpy(var138, (double[]){0.09821129496884834, 0.9017887050311516}, 2 * sizeof(double));
                    } else {
                        memcpy(var138, (double[]){0.4491522257343764, 0.5508477742656236}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[7] <= 0.0000009243263434655091) {
            if (input[2] <= 73.66561508178711) {
                if (input[1] <= 3.166550397872925) {
                    if (input[9] <= 0.16909419000148773) {
                        memcpy(var138, (double[]){0.9195834901518003, 0.08041650984819974}, 2 * sizeof(double));
                    } else {
                        memcpy(var138, (double[]){0.34258117283549944, 0.6574188271645006}, 2 * sizeof(double));
                    }
                } else {
                    if (input[8] <= 0.00005111069913255051) {
                        memcpy(var138, (double[]){0.16334521838787727, 0.8366547816121227}, 2 * sizeof(double));
                    } else {
                        memcpy(var138, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[8] <= 0.0000009318544869074685) {
                    if (input[2] <= 89.9039421081543) {
                        memcpy(var138, (double[]){0.4478710088044978, 0.5521289911955021}, 2 * sizeof(double));
                    } else {
                        memcpy(var138, (double[]){0.249770363566328, 0.750229636433672}, 2 * sizeof(double));
                    }
                } else {
                    if (input[22] <= 0.00007376891153398901) {
                        memcpy(var138, (double[]){0.6492978662428677, 0.3507021337571324}, 2 * sizeof(double));
                    } else {
                        memcpy(var138, (double[]){0.11273454321747155, 0.8872654567825284}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[4] <= 0.00009304677587351762) {
                if (input[0] <= -10.042411804199219) {
                    memcpy(var138, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[7] <= 0.00001958922075573355) {
                        memcpy(var138, (double[]){0.7277423533721613, 0.27225764662783875}, 2 * sizeof(double));
                    } else {
                        memcpy(var138, (double[]){0.45297510446707057, 0.5470248955329294}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var138, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    }
    add_vectors(var63, var138, 2, var62);
    double var139[2];
    if (input[6] <= 0.000020344545191619545) {
        if (input[10] <= 0.000018488912246539257) {
            if (input[13] <= 0.0000009319920764028211) {
                if (input[18] <= 0.000050292386731598526) {
                    memcpy(var139, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    memcpy(var139, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                }
            } else {
                if (input[3] <= 44.860565185546875) {
                    if (input[1] <= -9.501222133636475) {
                        memcpy(var139, (double[]){0.43257598111537315, 0.5674240188846268}, 2 * sizeof(double));
                    } else {
                        memcpy(var139, (double[]){0.9083456460607215, 0.0916543539392784}, 2 * sizeof(double));
                    }
                } else {
                    if (input[13] <= 0.0000013924846200552565) {
                        memcpy(var139, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var139, (double[]){0.47178486968817784, 0.5282151303118221}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[13] <= 0.000049873417083290406) {
                if (input[0] <= 4.847478866577148) {
                    if (input[13] <= 0.000027074847821495496) {
                        memcpy(var139, (double[]){0.9662026784772751, 0.03379732152272488}, 2 * sizeof(double));
                    } else {
                        memcpy(var139, (double[]){0.2759789156626506, 0.7240210843373494}, 2 * sizeof(double));
                    }
                } else {
                    if (input[12] <= 0.00003356655906827655) {
                        memcpy(var139, (double[]){0.07551251674049654, 0.9244874832595035}, 2 * sizeof(double));
                    } else {
                        memcpy(var139, (double[]){0.6558697208303507, 0.3441302791696493}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 52.810726165771484) {
                    if (input[6] <= 0.00001912876541609876) {
                        memcpy(var139, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var139, (double[]){0.8205989364679541, 0.1794010635320459}, 2 * sizeof(double));
                    }
                } else {
                    if (input[8] <= 0.00002334743294341024) {
                        memcpy(var139, (double[]){0.8511379470506271, 0.14886205294937296}, 2 * sizeof(double));
                    } else {
                        memcpy(var139, (double[]){0.39520150963741746, 0.6047984903625826}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[7] <= 0.00000046111040319374297) {
            if (input[24] <= -0.00017071785259759054) {
                memcpy(var139, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                if (input[24] <= -0.000055659720601397566) {
                    if (input[12] <= 0.00005215847158979159) {
                        memcpy(var139, (double[]){0.35437734176705193, 0.6456226582329482}, 2 * sizeof(double));
                    } else {
                        memcpy(var139, (double[]){0.09226799257324471, 0.9077320074267552}, 2 * sizeof(double));
                    }
                } else {
                    if (input[11] <= 0.00003540738362062257) {
                        memcpy(var139, (double[]){0.2586399545213966, 0.7413600454786033}, 2 * sizeof(double));
                    } else {
                        memcpy(var139, (double[]){0.43630821874785064, 0.5636917812521494}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[15] <= -0.00009134263382293284) {
                if (input[15] <= -0.00009844105079537258) {
                    memcpy(var139, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    memcpy(var139, (double[]){0.8205989364679541, 0.17940106353204593}, 2 * sizeof(double));
                }
            } else {
                if (input[19] <= 0.00009730517558637075) {
                    if (input[9] <= 0.6866814196109772) {
                        memcpy(var139, (double[]){0.7273887156223419, 0.2726112843776582}, 2 * sizeof(double));
                    } else {
                        memcpy(var139, (double[]){0.45922577200320364, 0.5407742279967963}, 2 * sizeof(double));
                    }
                } else {
                    if (input[13] <= 0.000027951772608503234) {
                        memcpy(var139, (double[]){0.6667966211825861, 0.33320337881741396}, 2 * sizeof(double));
                    } else {
                        memcpy(var139, (double[]){0.9114396242055817, 0.08856037579441835}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var62, var139, 2, var61);
    double var140[2];
    if (input[0] <= -0.6365383863449097) {
        if (input[6] <= 0.00006485439735115506) {
            if (input[6] <= 0.000026887507374340203) {
                if (input[16] <= 0.00009146828961092979) {
                    if (input[4] <= 0.00001246912324859295) {
                        memcpy(var140, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var140, (double[]){0.8368788472781044, 0.16312115272189567}, 2 * sizeof(double));
                    }
                } else {
                    if (input[22] <= 0.00004836077459913213) {
                        memcpy(var140, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var140, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[1] <= -17.072887420654297) {
                    if (input[10] <= 0.00005763614535680972) {
                        memcpy(var140, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var140, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                    }
                } else {
                    if (input[13] <= 0.000008380941380892182) {
                        memcpy(var140, (double[]){0.37222967826181574, 0.6277703217381841}, 2 * sizeof(double));
                    } else {
                        memcpy(var140, (double[]){0.6886339737054215, 0.3113660262945787}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[7] <= 0.0000009323356096047064) {
                if (input[25] <= 0.000020050581952091306) {
                    if (input[4] <= 0.00006117966040619649) {
                        memcpy(var140, (double[]){0.11857963277521638, 0.8814203672247837}, 2 * sizeof(double));
                    } else {
                        memcpy(var140, (double[]){0.8205989364679541, 0.17940106353204593}, 2 * sizeof(double));
                    }
                } else {
                    if (input[22] <= 0.00006222752199391834) {
                        memcpy(var140, (double[]){0.17399708365831318, 0.8260029163416869}, 2 * sizeof(double));
                    } else {
                        memcpy(var140, (double[]){0.44186202277294034, 0.5581379772270596}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[16] <= 0.00003592334542190656) {
                    if (input[4] <= 0.00005621618402074091) {
                        memcpy(var140, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                    } else {
                        memcpy(var140, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= -0.00003791192511926056) {
                        memcpy(var140, (double[]){0.8205989364679541, 0.17940106353204593}, 2 * sizeof(double));
                    } else {
                        memcpy(var140, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[12] <= 0.00003729721902345773) {
            if (input[6] <= 0.00011876157077495009) {
                if (input[2] <= 64.49903106689453) {
                    if (input[24] <= 0.00006381695857271552) {
                        memcpy(var140, (double[]){0.10681141337510588, 0.8931885866248941}, 2 * sizeof(double));
                    } else {
                        memcpy(var140, (double[]){0.5334788937409025, 0.46652110625909754}, 2 * sizeof(double));
                    }
                } else {
                    if (input[12] <= 0.000025623625333537348) {
                        memcpy(var140, (double[]){0.4916364163709614, 0.5083635836290387}, 2 * sizeof(double));
                    } else {
                        memcpy(var140, (double[]){0.2745385410814464, 0.7254614589185535}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[18] <= -0.0001114720398618374) {
                    memcpy(var140, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[22] <= 0.00010853722778847441) {
                        memcpy(var140, (double[]){0.3736777263265219, 0.6263222736734781}, 2 * sizeof(double));
                    } else {
                        memcpy(var140, (double[]){0.9014604150653344, 0.09853958493466565}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[10] <= 0.00003916380228474736) {
                if (input[0] <= 2.171433210372925) {
                    if (input[18] <= 0.00005969744597678073) {
                        memcpy(var140, (double[]){0.11558323806520279, 0.8844167619347972}, 2 * sizeof(double));
                    } else {
                        memcpy(var140, (double[]){0.6465983019075973, 0.35340169809240274}, 2 * sizeof(double));
                    }
                } else {
                    if (input[9] <= 0.9883281290531158) {
                        memcpy(var140, (double[]){0.8458912343126411, 0.15410876568735882}, 2 * sizeof(double));
                    } else {
                        memcpy(var140, (double[]){0.5149975679619523, 0.48500243203804777}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[15] <= -0.00008993945812107995) {
                    if (input[24] <= 0.00007882099089329131) {
                        memcpy(var140, (double[]){0.953668232743043, 0.04633176725695701}, 2 * sizeof(double));
                    } else {
                        memcpy(var140, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[8] <= 0.0000009334998196663946) {
                        memcpy(var140, (double[]){0.3723978050434678, 0.6276021949565322}, 2 * sizeof(double));
                    } else {
                        memcpy(var140, (double[]){0.6675689692247366, 0.3324310307752635}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var61, var140, 2, var60);
    double var141[2];
    if (input[7] <= 0.000000924809711477792) {
        if (input[18] <= 0.0000821487556095235) {
            if (input[8] <= 0.0000009319573450738972) {
                if (input[9] <= 0.30891507863998413) {
                    if (input[9] <= 0.025395256467163563) {
                        memcpy(var141, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var141, (double[]){0.644910062565172, 0.355089937434828}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= 0.00008254144267993979) {
                        memcpy(var141, (double[]){0.4032967552081457, 0.5967032447918543}, 2 * sizeof(double));
                    } else {
                        memcpy(var141, (double[]){0.1554165593905707, 0.8445834406094294}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[19] <= 0.00007995030682650395) {
                    if (input[3] <= 83.67725372314453) {
                        memcpy(var141, (double[]){0.47877842651097047, 0.5212215734890295}, 2 * sizeof(double));
                    } else {
                        memcpy(var141, (double[]){0.7724008384207451, 0.2275991615792549}, 2 * sizeof(double));
                    }
                } else {
                    if (input[12] <= 0.00003031383857887704) {
                        memcpy(var141, (double[]){0.36377171215880894, 0.6362282878411911}, 2 * sizeof(double));
                    } else {
                        memcpy(var141, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[10] <= 0.000008835538665152853) {
                if (input[18] <= 0.00009552054689265788) {
                    memcpy(var141, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    memcpy(var141, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[16] <= 0.00014374323654919863) {
                    if (input[13] <= 0.00005614062865788583) {
                        memcpy(var141, (double[]){0.0325387313002175, 0.9674612686997826}, 2 * sizeof(double));
                    } else {
                        memcpy(var141, (double[]){0.26789711727351634, 0.7321028827264837}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var141, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        }
    } else {
        if (input[0] <= -1.633605420589447) {
            if (input[15] <= -0.000001865891817942611) {
                if (input[9] <= 0.96880242228508) {
                    if (input[22] <= 0.000014905279840604635) {
                        memcpy(var141, (double[]){0.5334788937409024, 0.4665211062590976}, 2 * sizeof(double));
                    } else {
                        memcpy(var141, (double[]){0.936315767063599, 0.06368423293640094}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var141, (double[]){0.494991558806978, 0.505008441193022}, 2 * sizeof(double));
                }
            } else {
                if (input[10] <= 0.00004926914334646426) {
                    if (input[3] <= 41.81646156311035) {
                        memcpy(var141, (double[]){0.6809781346428216, 0.3190218653571784}, 2 * sizeof(double));
                    } else {
                        memcpy(var141, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[11] <= 0.00006615996244363487) {
                        memcpy(var141, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var141, (double[]){0.40692079940784603, 0.5930792005921539}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[12] <= 0.000046277968067443) {
                if (input[13] <= 0.00003956988257414196) {
                    if (input[11] <= 0.000012094258636352606) {
                        memcpy(var141, (double[]){0.9114396242055817, 0.08856037579441838}, 2 * sizeof(double));
                    } else {
                        memcpy(var141, (double[]){0.4761535560119022, 0.5238464439880979}, 2 * sizeof(double));
                    }
                } else {
                    if (input[15] <= -0.00006077303987694904) {
                        memcpy(var141, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    } else {
                        memcpy(var141, (double[]){0.09821129496884841, 0.9017887050311516}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[12] <= 0.00011294414798612706) {
                    if (input[22] <= 0.00010777265561046079) {
                        memcpy(var141, (double[]){0.7155662051828183, 0.28443379481718173}, 2 * sizeof(double));
                    } else {
                        memcpy(var141, (double[]){0.17212633556416576, 0.8278736644358343}, 2 * sizeof(double));
                    }
                } else {
                    if (input[16] <= 0.00006673626558040269) {
                        memcpy(var141, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var141, (double[]){0.6039134912461379, 0.39608650875386203}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var60, var141, 2, var59);
    double var142[2];
    if (input[11] <= 0.000019612903088273015) {
        if (input[9] <= 0.9977079629898071) {
            if (input[15] <= -0.00006893572208355181) {
                memcpy(var142, (double[]){0.0, 1.0}, 2 * sizeof(double));
            } else {
                if (input[7] <= 0.0000009312460917954013) {
                    if (input[6] <= 0.000012540178886411013) {
                        memcpy(var142, (double[]){0.7503644112116254, 0.24963558878837458}, 2 * sizeof(double));
                    } else {
                        memcpy(var142, (double[]){0.22232332423415227, 0.7776766757658478}, 2 * sizeof(double));
                    }
                } else {
                    if (input[6] <= 0.000004645560238714097) {
                        memcpy(var142, (double[]){0.6667966211825861, 0.33320337881741396}, 2 * sizeof(double));
                    } else {
                        memcpy(var142, (double[]){0.957079246041046, 0.0429207539589541}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[21] <= 0.00001630661790841259) {
                if (input[24] <= 0.000058925512348650955) {
                    if (input[18] <= -0.0000004659397916384478) {
                        memcpy(var142, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var142, (double[]){0.6752337524757036, 0.3247662475242964}, 2 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 7.937565088272095) {
                        memcpy(var142, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var142, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[25] <= 0.00013533564197132364) {
                    if (input[1] <= 6.126492261886597) {
                        memcpy(var142, (double[]){0.7853746735418201, 0.21462532645817994}, 2 * sizeof(double));
                    } else {
                        memcpy(var142, (double[]){0.1913255318223343, 0.8086744681776658}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var142, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        }
    } else {
        if (input[1] <= 17.090964317321777) {
            if (input[10] <= -0.000015850234603931312) {
                memcpy(var142, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                if (input[7] <= 0.0000009318505362898577) {
                    if (input[8] <= 0.000053063164159539156) {
                        memcpy(var142, (double[]){0.39049380077617923, 0.6095061992238208}, 2 * sizeof(double));
                    } else {
                        memcpy(var142, (double[]){0.7921755106451962, 0.20782448935480388}, 2 * sizeof(double));
                    }
                } else {
                    if (input[22] <= 0.00012626989337150007) {
                        memcpy(var142, (double[]){0.570333549759084, 0.42966645024091593}, 2 * sizeof(double));
                    } else {
                        memcpy(var142, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[12] <= 0.0001053003034030553) {
                if (input[16] <= 0.00006282050526351668) {
                    if (input[9] <= 0.9366342425346375) {
                        memcpy(var142, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var142, (double[]){0.7323550902936219, 0.2676449097063782}, 2 * sizeof(double));
                    }
                } else {
                    if (input[9] <= 0.9990494251251221) {
                        memcpy(var142, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                    } else {
                        memcpy(var142, (double[]){0.08085153320097066, 0.9191484667990293}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var142, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    }
    add_vectors(var59, var142, 2, var58);
    double var143[2];
    if (input[1] <= -0.7594628632068634) {
        if (input[25] <= 0.000022312092369247694) {
            if (input[13] <= 0.00005307665378495585) {
                if (input[12] <= 0.000026629490093910135) {
                    if (input[22] <= 0.00005464636706165038) {
                        memcpy(var143, (double[]){0.37572402480906253, 0.6242759751909375}, 2 * sizeof(double));
                    } else {
                        memcpy(var143, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[9] <= 0.26842808723449707) {
                        memcpy(var143, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var143, (double[]){0.9170405522001726, 0.08295944779982743}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[6] <= 0.000050237043978995644) {
                    if (input[2] <= 45.40726661682129) {
                        memcpy(var143, (double[]){0.4616838127230736, 0.5383161872769263}, 2 * sizeof(double));
                    } else {
                        memcpy(var143, (double[]){0.8797869547278797, 0.12021304527212032}, 2 * sizeof(double));
                    }
                } else {
                    if (input[19] <= 0.000045109160055289976) {
                        memcpy(var143, (double[]){0.2026261230131306, 0.7973738769868695}, 2 * sizeof(double));
                    } else {
                        memcpy(var143, (double[]){0.6039134912461379, 0.39608650875386203}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[7] <= 0.00000093317621008282) {
                if (input[6] <= 0.00006446622865041718) {
                    if (input[12] <= 0.00007509471106459387) {
                        memcpy(var143, (double[]){0.4347986405027575, 0.5652013594972426}, 2 * sizeof(double));
                    } else {
                        memcpy(var143, (double[]){0.6957759848125297, 0.30422401518747033}, 2 * sizeof(double));
                    }
                } else {
                    if (input[24] <= -0.0000641087899566628) {
                        memcpy(var143, (double[]){0.5117740399873056, 0.48822596001269436}, 2 * sizeof(double));
                    } else {
                        memcpy(var143, (double[]){0.20764337771368221, 0.7923566222863178}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[13] <= 0.00006852905426057987) {
                    if (input[12] <= 0.00000046327181735250633) {
                        memcpy(var143, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var143, (double[]){0.882143513798118, 0.11785648620188208}, 2 * sizeof(double));
                    }
                } else {
                    if (input[3] <= 50.76557540893555) {
                        memcpy(var143, (double[]){0.6752337524757036, 0.3247662475242965}, 2 * sizeof(double));
                    } else {
                        memcpy(var143, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[22] <= 0.00005454018173622899) {
            if (input[22] <= 0.000027039969609177206) {
                if (input[9] <= 0.999207615852356) {
                    if (input[18] <= -0.00001994368176383432) {
                        memcpy(var143, (double[]){0.2845634978405396, 0.7154365021594603}, 2 * sizeof(double));
                    } else {
                        memcpy(var143, (double[]){0.6260322501097655, 0.3739677498902345}, 2 * sizeof(double));
                    }
                } else {
                    if (input[18] <= 0.000018639028894540388) {
                        memcpy(var143, (double[]){0.4821368566301323, 0.5178631433698677}, 2 * sizeof(double));
                    } else {
                        memcpy(var143, (double[]){0.24516245915004228, 0.7548375408499578}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[7] <= 0.00000046111040319374297) {
                    if (input[24] <= -0.00012619175322470255) {
                        memcpy(var143, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var143, (double[]){0.4981761558182351, 0.501823844181765}, 2 * sizeof(double));
                    }
                } else {
                    if (input[15] <= 0.00005021036668040324) {
                        memcpy(var143, (double[]){0.5956354849401776, 0.4043645150598224}, 2 * sizeof(double));
                    } else {
                        memcpy(var143, (double[]){0.8530620161873358, 0.14693798381266418}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[10] <= 0.00003340594776091166) {
                if (input[2] <= 92.06044006347656) {
                    if (input[4] <= 0.00002708327338041272) {
                        memcpy(var143, (double[]){0.186135093956323, 0.813864906043677}, 2 * sizeof(double));
                    } else {
                        memcpy(var143, (double[]){0.6662185319485338, 0.3337814680514662}, 2 * sizeof(double));
                    }
                } else {
                    if (input[13] <= 0.00004043315857416019) {
                        memcpy(var143, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var143, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[8] <= 0.000000932676584852743) {
                    if (input[22] <= 0.00006107469198468607) {
                        memcpy(var143, (double[]){0.07678005604001359, 0.9232199439599863}, 2 * sizeof(double));
                    } else {
                        memcpy(var143, (double[]){0.42216101164392134, 0.5778389883560786}, 2 * sizeof(double));
                    }
                } else {
                    if (input[8] <= 0.00003420370558160357) {
                        memcpy(var143, (double[]){0.07678005604001356, 0.9232199439599864}, 2 * sizeof(double));
                    } else {
                        memcpy(var143, (double[]){0.6039134912461379, 0.39608650875386203}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var58, var143, 2, var57);
    double var144[2];
    if (input[11] <= 0.000020437806597328745) {
        if (input[24] <= 0.000011178653949173167) {
            if (input[4] <= 0.00004600740248861257) {
                if (input[4] <= 0.000011889239885931602) {
                    memcpy(var144, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[4] <= 0.00003522338556649629) {
                        memcpy(var144, (double[]){0.8334145469902219, 0.1665854530097781}, 2 * sizeof(double));
                    } else {
                        memcpy(var144, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[18] <= -0.000055420250646420754) {
                    memcpy(var144, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[1] <= 7.0413360595703125) {
                        memcpy(var144, (double[]){0.8102165288277441, 0.18978347117225586}, 2 * sizeof(double));
                    } else {
                        memcpy(var144, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[0] <= -2.316978693008423) {
                if (input[15] <= -0.000022350478502630722) {
                    memcpy(var144, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                } else {
                    memcpy(var144, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[18] <= 0.00007395949069177732) {
                    if (input[6] <= 0.0000036996858625570894) {
                        memcpy(var144, (double[]){0.1721263355641658, 0.8278736644358342}, 2 * sizeof(double));
                    } else {
                        memcpy(var144, (double[]){0.48450530444074746, 0.5154946955592524}, 2 * sizeof(double));
                    }
                } else {
                    if (input[16] <= 0.00007080668001435697) {
                        memcpy(var144, (double[]){0.8511379470506271, 0.148862052949373}, 2 * sizeof(double));
                    } else {
                        memcpy(var144, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[9] <= 0.9993506371974945) {
            if (input[9] <= 0.9967262446880341) {
                if (input[2] <= 94.47848510742188) {
                    if (input[25] <= 0.00006053257493476849) {
                        memcpy(var144, (double[]){0.4758938733938889, 0.5241061266061112}, 2 * sizeof(double));
                    } else {
                        memcpy(var144, (double[]){0.6260911231016018, 0.37390887689839825}, 2 * sizeof(double));
                    }
                } else {
                    if (input[16] <= 0.000014783656752115348) {
                        memcpy(var144, (double[]){0.29369928879094465, 0.7063007112090555}, 2 * sizeof(double));
                    } else {
                        memcpy(var144, (double[]){0.7954168262479255, 0.20458317375207452}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[11] <= 0.00010943312008748762) {
                    if (input[4] <= 0.000054205102060223) {
                        memcpy(var144, (double[]){0.6710312781746307, 0.32896872182536935}, 2 * sizeof(double));
                    } else {
                        memcpy(var144, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var144, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[6] <= 0.00006152727655717172) {
                if (input[25] <= 0.00002421151930320775) {
                    if (input[25] <= 0.000011167358479724498) {
                        memcpy(var144, (double[]){0.34915700407395783, 0.6508429959260422}, 2 * sizeof(double));
                    } else {
                        memcpy(var144, (double[]){0.6039134912461379, 0.3960865087538622}, 2 * sizeof(double));
                    }
                } else {
                    if (input[8] <= 0.000017193498024425935) {
                        memcpy(var144, (double[]){0.2636852324987229, 0.7363147675012771}, 2 * sizeof(double));
                    } else {
                        memcpy(var144, (double[]){0.5644591411487588, 0.43554085885124116}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[12] <= 0.00010848288366105407) {
                    if (input[21] <= 0.00007959325739648193) {
                        memcpy(var144, (double[]){0.5240753471744809, 0.4759246528255191}, 2 * sizeof(double));
                    } else {
                        memcpy(var144, (double[]){0.186135093956323, 0.8138649060436771}, 2 * sizeof(double));
                    }
                } else {
                    if (input[13] <= 0.00013539054634748027) {
                        memcpy(var144, (double[]){0.9014604150653344, 0.09853958493466564}, 2 * sizeof(double));
                    } else {
                        memcpy(var144, (double[]){0.22232332423415227, 0.7776766757658478}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var57, var144, 2, var56);
    double var145[2];
    if (input[9] <= 0.9993506371974945) {
        if (input[7] <= 0.0000004610976418462087) {
            if (input[13] <= 0.0000018533100956119597) {
                if (input[4] <= 0.000013772532838629559) {
                    memcpy(var145, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                } else {
                    if (input[2] <= 87.26649475097656) {
                        memcpy(var145, (double[]){0.14960710276558825, 0.8503928972344117}, 2 * sizeof(double));
                    } else {
                        memcpy(var145, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[21] <= 0.000055594668083358556) {
                    if (input[13] <= 0.000013508623396774055) {
                        memcpy(var145, (double[]){0.7553528491278959, 0.2446471508721041}, 2 * sizeof(double));
                    } else {
                        memcpy(var145, (double[]){0.48576909661667234, 0.5142309033833278}, 2 * sizeof(double));
                    }
                } else {
                    if (input[3] <= 50.125627517700195) {
                        memcpy(var145, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var145, (double[]){0.43257598111537326, 0.5674240188846268}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[10] <= 0.000012143817002652213) {
                if (input[12] <= 0.000014924110473657493) {
                    if (input[25] <= 0.000019484598851704504) {
                        memcpy(var145, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var145, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[25] <= 0.00002371125083300285) {
                        memcpy(var145, (double[]){0.9813440437731017, 0.01865595622689834}, 2 * sizeof(double));
                    } else {
                        memcpy(var145, (double[]){0.7938941632397488, 0.20610583676025113}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[10] <= 0.000013938175015937304) {
                    memcpy(var145, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[9] <= 0.8495346009731293) {
                        memcpy(var145, (double[]){0.7598321447751312, 0.24016785522486878}, 2 * sizeof(double));
                    } else {
                        memcpy(var145, (double[]){0.5446060566618943, 0.45539394333810573}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[22] <= 0.00006797413880121894) {
            if (input[16] <= 0.000022395177438738756) {
                if (input[4] <= 0.00003906778511009179) {
                    if (input[19] <= 0.000004167896008766547) {
                        memcpy(var145, (double[]){0.5247360212716999, 0.4752639787283001}, 2 * sizeof(double));
                    } else {
                        memcpy(var145, (double[]){0.17451436610573023, 0.8254856338942698}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= -0.000025633027689764276) {
                        memcpy(var145, (double[]){0.7176073229232952, 0.2823926770767047}, 2 * sizeof(double));
                    } else {
                        memcpy(var145, (double[]){0.38109031491384426, 0.6189096850861557}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[19] <= 0.0000748034508433193) {
                    if (input[2] <= 99.53027725219727) {
                        memcpy(var145, (double[]){0.5237696384629948, 0.47623036153700515}, 2 * sizeof(double));
                    } else {
                        memcpy(var145, (double[]){0.9263556985294118, 0.07364430147058824}, 2 * sizeof(double));
                    }
                } else {
                    if (input[12] <= 0.00010811637184815481) {
                        memcpy(var145, (double[]){0.31080487620201397, 0.689195123797986}, 2 * sizeof(double));
                    } else {
                        memcpy(var145, (double[]){0.9014604150653344, 0.09853958493466565}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[15] <= 0.0000172895634023007) {
                if (input[8] <= 0.0000032432983516628155) {
                    if (input[1] <= 4.166768193244934) {
                        memcpy(var145, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var145, (double[]){0.5097002990056324, 0.49029970099436754}, 2 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 87.84622955322266) {
                        memcpy(var145, (double[]){0.603913491246138, 0.39608650875386203}, 2 * sizeof(double));
                    } else {
                        memcpy(var145, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[15] <= 0.00003728739102371037) {
                    memcpy(var145, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[11] <= 0.00007242333595058881) {
                        memcpy(var145, (double[]){0.2845634978405395, 0.7154365021594605}, 2 * sizeof(double));
                    } else {
                        memcpy(var145, (double[]){0.07309897781101969, 0.9269010221889803}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var56, var145, 2, var55);
    double var146[2];
    if (input[11] <= 0.0000009319095681803446) {
        if (input[11] <= 0.0000009313454256698606) {
            if (input[1] <= 6.8299853801727295) {
                if (input[13] <= 0.0000560807475267211) {
                    if (input[6] <= 0.0000009290155844610126) {
                        memcpy(var146, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var146, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var146, (double[]){0.4325759811153732, 0.5674240188846268}, 2 * sizeof(double));
                }
            } else {
                if (input[6] <= 0.000000926897342878874) {
                    memcpy(var146, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    memcpy(var146, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            memcpy(var146, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    } else {
        if (input[6] <= 0.00006262243186938576) {
            if (input[1] <= 7.796793222427368) {
                if (input[10] <= 0.000027034522645408288) {
                    if (input[12] <= 0.0000009326618339855486) {
                        memcpy(var146, (double[]){0.3138514236780133, 0.6861485763219868}, 2 * sizeof(double));
                    } else {
                        memcpy(var146, (double[]){0.7346449659019103, 0.2653550340980896}, 2 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 49.12968635559082) {
                        memcpy(var146, (double[]){0.7025612548399118, 0.29743874516008817}, 2 * sizeof(double));
                    } else {
                        memcpy(var146, (double[]){0.4607979021167428, 0.5392020978832571}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[11] <= 0.00004660622471419629) {
                    if (input[7] <= 0.0000004620427205281885) {
                        memcpy(var146, (double[]){0.31163937971199385, 0.6883606202880062}, 2 * sizeof(double));
                    } else {
                        memcpy(var146, (double[]){0.5919908012620884, 0.40800919873791164}, 2 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 6.542524814605713) {
                        memcpy(var146, (double[]){0.29849074851747215, 0.7015092514825279}, 2 * sizeof(double));
                    } else {
                        memcpy(var146, (double[]){0.6235139240506328, 0.3764860759493671}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[13] <= 0.00010673854922060855) {
                if (input[7] <= 0.0000009277144386032887) {
                    if (input[21] <= -0.0001021973803290166) {
                        memcpy(var146, (double[]){0.7967752162688528, 0.20322478373114725}, 2 * sizeof(double));
                    } else {
                        memcpy(var146, (double[]){0.2747279168935503, 0.7252720831064497}, 2 * sizeof(double));
                    }
                } else {
                    if (input[25] <= 0.00003906038364220876) {
                        memcpy(var146, (double[]){0.41180546452180744, 0.5881945354781926}, 2 * sizeof(double));
                    } else {
                        memcpy(var146, (double[]){0.7112312437190282, 0.2887687562809717}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[15] <= -0.000015863684382111387) {
                    if (input[15] <= -0.00009382222924614325) {
                        memcpy(var146, (double[]){0.4325759811153732, 0.5674240188846268}, 2 * sizeof(double));
                    } else {
                        memcpy(var146, (double[]){0.9195834901518003, 0.08041650984819973}, 2 * sizeof(double));
                    }
                } else {
                    if (input[12] <= 0.00015319044177886099) {
                        memcpy(var146, (double[]){0.6957759848125296, 0.30422401518747033}, 2 * sizeof(double));
                    } else {
                        memcpy(var146, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var55, var146, 2, var54);
    double var147[2];
    if (input[9] <= 0.9993506371974945) {
        if (input[9] <= 0.18639080971479416) {
            if (input[15] <= -0.000009758574606166803) {
                if (input[13] <= 0.0000009326587928626395) {
                    memcpy(var147, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[1] <= -16.980588912963867) {
                        memcpy(var147, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var147, (double[]){0.8727922206787061, 0.12720777932129393}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[19] <= 0.00004767523205373436) {
                    memcpy(var147, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    memcpy(var147, (double[]){0.8205989364679541, 0.17940106353204593}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[6] <= 0.00005497067832038738) {
                if (input[10] <= 0.00006954188211238943) {
                    if (input[18] <= -0.00011331732821417972) {
                        memcpy(var147, (double[]){0.21201822257574662, 0.7879817774242535}, 2 * sizeof(double));
                    } else {
                        memcpy(var147, (double[]){0.6485914612447463, 0.3514085387552537}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= -0.00006961357212276198) {
                        memcpy(var147, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    } else {
                        memcpy(var147, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[6] <= 0.00005883146513951942) {
                    if (input[16] <= 0.0000013981429560772085) {
                        memcpy(var147, (double[]){0.494991558806978, 0.505008441193022}, 2 * sizeof(double));
                    } else {
                        memcpy(var147, (double[]){0.08537899304038901, 0.914621006959611}, 2 * sizeof(double));
                    }
                } else {
                    if (input[10] <= 0.00007234676741063595) {
                        memcpy(var147, (double[]){0.7408530422478269, 0.25914695775217317}, 2 * sizeof(double));
                    } else {
                        memcpy(var147, (double[]){0.4133971801010907, 0.5866028198989093}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[8] <= 0.0000009320185654360102) {
            if (input[2] <= 58.57099914550781) {
                if (input[18] <= 0.00003576330891519319) {
                    if (input[3] <= 50.46312713623047) {
                        memcpy(var147, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var147, (double[]){0.5706242305742628, 0.429375769425737}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= -0.00005966149547020905) {
                        memcpy(var147, (double[]){0.6039134912461379, 0.39608650875386203}, 2 * sizeof(double));
                    } else {
                        memcpy(var147, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[24] <= -0.00009432548904442228) {
                    memcpy(var147, (double[]){0.9320758715693547, 0.06792412843064535}, 2 * sizeof(double));
                } else {
                    if (input[15] <= 0.00003732561890501529) {
                        memcpy(var147, (double[]){0.23090571334596516, 0.7690942866540348}, 2 * sizeof(double));
                    } else {
                        memcpy(var147, (double[]){0.3927187669469658, 0.6072812330530343}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[15] <= 0.00009374484943691641) {
                if (input[10] <= 0.00001583726225362625) {
                    if (input[1] <= 7.417196273803711) {
                        memcpy(var147, (double[]){0.753049955053294, 0.24695004494670608}, 2 * sizeof(double));
                    } else {
                        memcpy(var147, (double[]){0.07551251674049654, 0.9244874832595035}, 2 * sizeof(double));
                    }
                } else {
                    if (input[4] <= 0.00009507320646662265) {
                        memcpy(var147, (double[]){0.6717339155278831, 0.3282660844721169}, 2 * sizeof(double));
                    } else {
                        memcpy(var147, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var147, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    }
    add_vectors(var54, var147, 2, var53);
    double var148[2];
    if (input[6] <= 0.00001963128670467995) {
        if (input[1] <= 7.569465637207031) {
            if (input[13] <= 0.000000931831408479411) {
                if (input[3] <= 61.83633804321289) {
                    memcpy(var148, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    memcpy(var148, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                }
            } else {
                if (input[8] <= 0.000008386514764424646) {
                    if (input[15] <= -0.00010091977310366929) {
                        memcpy(var148, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var148, (double[]){0.8247473632186081, 0.175252636781392}, 2 * sizeof(double));
                    }
                } else {
                    if (input[4] <= 0.00006067687354516238) {
                        memcpy(var148, (double[]){0.23772972972972972, 0.7622702702702703}, 2 * sizeof(double));
                    } else {
                        memcpy(var148, (double[]){0.8045612537349839, 0.19543874626501617}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[2] <= 99.28737258911133) {
                if (input[21] <= 0.00000882330687090871) {
                    if (input[18] <= -0.00012265021723578684) {
                        memcpy(var148, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var148, (double[]){0.6375853520636714, 0.3624146479363285}, 2 * sizeof(double));
                    }
                } else {
                    if (input[4] <= 0.00007860866389819421) {
                        memcpy(var148, (double[]){0.2928816503800218, 0.7071183496199783}, 2 * sizeof(double));
                    } else {
                        memcpy(var148, (double[]){0.9014604150653344, 0.09853958493466565}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[13] <= 0.0000186314177881286) {
                    memcpy(var148, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    memcpy(var148, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        }
    } else {
        if (input[7] <= 0.0000004610976418462087) {
            if (input[12] <= 0.00003796309283643495) {
                if (input[4] <= 0.00003917087087756954) {
                    if (input[19] <= 0.00006434135502786376) {
                        memcpy(var148, (double[]){0.1392004991793384, 0.8607995008206615}, 2 * sizeof(double));
                    } else {
                        memcpy(var148, (double[]){0.5334788937409025, 0.46652110625909754}, 2 * sizeof(double));
                    }
                } else {
                    if (input[13] <= 0.000042173336623818614) {
                        memcpy(var148, (double[]){0.3512029179069171, 0.648797082093083}, 2 * sizeof(double));
                    } else {
                        memcpy(var148, (double[]){0.7921755106451961, 0.2078244893548039}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[8] <= 0.000006036698323441669) {
                    if (input[19] <= 0.000019552161575120408) {
                        memcpy(var148, (double[]){0.5085073754929164, 0.49149262450708364}, 2 * sizeof(double));
                    } else {
                        memcpy(var148, (double[]){0.33018450377781033, 0.6698154962221897}, 2 * sizeof(double));
                    }
                } else {
                    if (input[24] <= 0.00001620861075934954) {
                        memcpy(var148, (double[]){0.34055686456708584, 0.6594431354329141}, 2 * sizeof(double));
                    } else {
                        memcpy(var148, (double[]){0.7168817238224438, 0.28311827617755625}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[11] <= 0.00003627613477874547) {
                if (input[4] <= 0.000020697568288596813) {
                    if (input[18] <= 0.000045584449253510684) {
                        memcpy(var148, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var148, (double[]){0.8205989364679541, 0.17940106353204593}, 2 * sizeof(double));
                    }
                } else {
                    if (input[24] <= -0.00005081728886580095) {
                        memcpy(var148, (double[]){0.9114396242055817, 0.08856037579441836}, 2 * sizeof(double));
                    } else {
                        memcpy(var148, (double[]){0.47775786214762916, 0.5222421378523708}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[13] <= 0.0000314198769046925) {
                    if (input[16] <= 0.00005413853250502143) {
                        memcpy(var148, (double[]){0.4515554947123445, 0.5484445052876554}, 2 * sizeof(double));
                    } else {
                        memcpy(var148, (double[]){0.1362390223502625, 0.8637609776497375}, 2 * sizeof(double));
                    }
                } else {
                    if (input[11] <= 0.00004790223465533927) {
                        memcpy(var148, (double[]){0.3637717121588089, 0.6362282878411912}, 2 * sizeof(double));
                    } else {
                        memcpy(var148, (double[]){0.698109850546322, 0.3018901494536781}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var53, var148, 2, var52);
    double var149[2];
    if (input[9] <= 0.998245507478714) {
        if (input[18] <= 0.00011859589358209632) {
            if (input[6] <= 0.00007459346306859516) {
                if (input[0] <= 10.612656116485596) {
                    if (input[10] <= 0.00008356202306458727) {
                        memcpy(var149, (double[]){0.573521897421704, 0.426478102578296}, 2 * sizeof(double));
                    } else {
                        memcpy(var149, (double[]){0.0982112949688484, 0.9017887050311516}, 2 * sizeof(double));
                    }
                } else {
                    if (input[9] <= 0.9339461922645569) {
                        memcpy(var149, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var149, (double[]){0.9412088416032285, 0.058791158396771535}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[3] <= 50.28984260559082) {
                    if (input[11] <= 0.0001522618840681389) {
                        memcpy(var149, (double[]){0.08926686693188265, 0.9107331330681173}, 2 * sizeof(double));
                    } else {
                        memcpy(var149, (double[]){0.43257598111537315, 0.5674240188846268}, 2 * sizeof(double));
                    }
                } else {
                    if (input[4] <= 0.000057679408200783655) {
                        memcpy(var149, (double[]){0.7494211396782439, 0.25057886032175614}, 2 * sizeof(double));
                    } else {
                        memcpy(var149, (double[]){0.3686581864666065, 0.6313418135333935}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[11] <= 0.00008912229532143101) {
                if (input[24] <= 0.0000624057138338685) {
                    memcpy(var149, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    memcpy(var149, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                }
            } else {
                memcpy(var149, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[8] <= 0.0000009319894900272629) {
            if (input[11] <= 0.000016751665498304646) {
                if (input[8] <= 0.0000009275432546473894) {
                    if (input[11] <= 0.000013962785487819929) {
                        memcpy(var149, (double[]){0.5113887417475225, 0.4886112582524775}, 2 * sizeof(double));
                    } else {
                        memcpy(var149, (double[]){0.7742957746478873, 0.2257042253521127}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var149, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[6] <= 0.0001187930720334407) {
                    if (input[4] <= 0.00003650864164228551) {
                        memcpy(var149, (double[]){0.1969960337241817, 0.8030039662758183}, 2 * sizeof(double));
                    } else {
                        memcpy(var149, (double[]){0.35135279079676196, 0.6486472092032382}, 2 * sizeof(double));
                    }
                } else {
                    if (input[11] <= 0.00016845404024934396) {
                        memcpy(var149, (double[]){0.779470177962656, 0.22052982203734398}, 2 * sizeof(double));
                    } else {
                        memcpy(var149, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[1] <= 18.522857666015625) {
                if (input[18] <= 0.000026548581445240416) {
                    if (input[6] <= 0.00005599417636403814) {
                        memcpy(var149, (double[]){0.3556895774843159, 0.6443104225156842}, 2 * sizeof(double));
                    } else {
                        memcpy(var149, (double[]){0.7251920984071496, 0.2748079015928503}, 2 * sizeof(double));
                    }
                } else {
                    if (input[18] <= 0.00007365833880612627) {
                        memcpy(var149, (double[]){0.8205989364679541, 0.1794010635320459}, 2 * sizeof(double));
                    } else {
                        memcpy(var149, (double[]){0.37115098579068956, 0.6288490142093105}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[10] <= 0.00006220260002010036) {
                    memcpy(var149, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    memcpy(var149, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var52, var149, 2, var51);
    double var150[2];
    if (input[7] <= 0.0000009310666371220577) {
        if (input[25] <= 0.000022312092369247694) {
            if (input[4] <= 0.00004648297908715904) {
                if (input[10] <= 0.00003168677358189598) {
                    if (input[6] <= 0.000026940042516798712) {
                        memcpy(var150, (double[]){0.6680613956956728, 0.3319386043043272}, 2 * sizeof(double));
                    } else {
                        memcpy(var150, (double[]){0.3868456641488273, 0.6131543358511727}, 2 * sizeof(double));
                    }
                } else {
                    if (input[3] <= 86.84888458251953) {
                        memcpy(var150, (double[]){0.2447979961964841, 0.7552020038035159}, 2 * sizeof(double));
                    } else {
                        memcpy(var150, (double[]){0.5860573818383099, 0.41394261816169003}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[15] <= -0.00008778881965554319) {
                    memcpy(var150, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[21] <= -0.00004241327951604035) {
                        memcpy(var150, (double[]){0.4870064175160436, 0.5129935824839564}, 2 * sizeof(double));
                    } else {
                        memcpy(var150, (double[]){0.7060037609503278, 0.29399623904967226}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[15] <= -0.0000924798587220721) {
                memcpy(var150, (double[]){0.0, 1.0}, 2 * sizeof(double));
            } else {
                if (input[13] <= 0.00011519323379616253) {
                    if (input[16] <= 0.00009797456004889682) {
                        memcpy(var150, (double[]){0.39440159853282614, 0.6055984014671739}, 2 * sizeof(double));
                    } else {
                        memcpy(var150, (double[]){0.055393916493481944, 0.9446060835065181}, 2 * sizeof(double));
                    }
                } else {
                    if (input[25] <= 0.0000415627673646668) {
                        memcpy(var150, (double[]){0.27597891566265065, 0.7240210843373495}, 2 * sizeof(double));
                    } else {
                        memcpy(var150, (double[]){0.7329389217565203, 0.2670610782434797}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[11] <= 0.000012571369097713614) {
            if (input[9] <= 0.9772940278053284) {
                memcpy(var150, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                if (input[13] <= 0.000045190226956037804) {
                    if (input[24] <= 0.000083880964666605) {
                        memcpy(var150, (double[]){0.6039134912461379, 0.39608650875386203}, 2 * sizeof(double));
                    } else {
                        memcpy(var150, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var150, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[16] <= 0.00008072891796473414) {
                if (input[15] <= -0.00004871856071986258) {
                    if (input[9] <= 0.1626468524336815) {
                        memcpy(var150, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var150, (double[]){0.24107084128132597, 0.7589291587186741}, 2 * sizeof(double));
                    }
                } else {
                    if (input[10] <= 0.000010271748578816187) {
                        memcpy(var150, (double[]){0.8421830118998769, 0.15781698810012315}, 2 * sizeof(double));
                    } else {
                        memcpy(var150, (double[]){0.5710785160704579, 0.4289214839295421}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[1] <= -5.337879657745361) {
                    memcpy(var150, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[7] <= 0.000006520383294628118) {
                        memcpy(var150, (double[]){0.4616838127230737, 0.5383161872769263}, 2 * sizeof(double));
                    } else {
                        memcpy(var150, (double[]){0.8580422677803089, 0.1419577322196912}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var51, var150, 2, var50);
    double var151[2];
    if (input[8] <= 0.0000009313345685768581) {
        if (input[7] <= 0.0000009245185879080964) {
            if (input[10] <= 0.000017672101421339903) {
                if (input[3] <= 79.110595703125) {
                    if (input[22] <= 0.000002800404786285071) {
                        memcpy(var151, (double[]){0.9143315365082194, 0.08566846349178066}, 2 * sizeof(double));
                    } else {
                        memcpy(var151, (double[]){0.5587027611811856, 0.4412972388188145}, 2 * sizeof(double));
                    }
                } else {
                    if (input[13] <= 0.00001116922157962108) {
                        memcpy(var151, (double[]){0.5135150913655204, 0.4864849086344795}, 2 * sizeof(double));
                    } else {
                        memcpy(var151, (double[]){0.14960710276558825, 0.8503928972344117}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[21] <= -0.000029402585823845584) {
                    if (input[13] <= 0.00003583096440706868) {
                        memcpy(var151, (double[]){0.5709348035099249, 0.42906519649007524}, 2 * sizeof(double));
                    } else {
                        memcpy(var151, (double[]){0.4234741105953875, 0.5765258894046125}, 2 * sizeof(double));
                    }
                } else {
                    if (input[3] <= 62.427656173706055) {
                        memcpy(var151, (double[]){0.20924708161288702, 0.7907529183871129}, 2 * sizeof(double));
                    } else {
                        memcpy(var151, (double[]){0.35831498040765636, 0.6416850195923437}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[9] <= 0.7905701994895935) {
                if (input[11] <= 0.000030315739422803745) {
                    if (input[19] <= 0.000041016328395926394) {
                        memcpy(var151, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var151, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= 0.00005971383143332787) {
                        memcpy(var151, (double[]){0.7462247610429273, 0.25377523895707277}, 2 * sizeof(double));
                    } else {
                        memcpy(var151, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[10] <= 0.000009750537628860911) {
                    if (input[25] <= 0.00009827975736698136) {
                        memcpy(var151, (double[]){0.9775048254079663, 0.02249517459203369}, 2 * sizeof(double));
                    } else {
                        memcpy(var151, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[16] <= 0.00014929221651982516) {
                        memcpy(var151, (double[]){0.474840430599219, 0.5251595694007811}, 2 * sizeof(double));
                    } else {
                        memcpy(var151, (double[]){0.953668232743043, 0.046331767256957}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[0] <= 7.330916166305542) {
            if (input[24] <= -0.00013906579624745063) {
                memcpy(var151, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                if (input[16] <= 0.00008491890912409872) {
                    if (input[2] <= 85.28145980834961) {
                        memcpy(var151, (double[]){0.4936963856011854, 0.5063036143988147}, 2 * sizeof(double));
                    } else {
                        memcpy(var151, (double[]){0.7313763445151763, 0.2686236554848237}, 2 * sizeof(double));
                    }
                } else {
                    if (input[25] <= 0.000047616860683774576) {
                        memcpy(var151, (double[]){0.3138514236780133, 0.6861485763219868}, 2 * sizeof(double));
                    } else {
                        memcpy(var151, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[16] <= 0.00009308256994700059) {
                if (input[9] <= 0.9569040834903717) {
                    if (input[21] <= 0.00008848906145431101) {
                        memcpy(var151, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var151, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 16.382967948913574) {
                        memcpy(var151, (double[]){0.8672760079273524, 0.13272399207264768}, 2 * sizeof(double));
                    } else {
                        memcpy(var151, (double[]){0.6409356085964504, 0.3590643914035496}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var151, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    }
    add_vectors(var50, var151, 2, var49);
    double var152[2];
    if (input[7] <= 0.000000924809711477792) {
        if (input[13] <= 0.00009922275421558879) {
            if (input[10] <= 0.000017672101421339903) {
                if (input[15] <= 0.000005127484882905264) {
                    if (input[1] <= 8.415908336639404) {
                        memcpy(var152, (double[]){0.7299398674786473, 0.27006013252135286}, 2 * sizeof(double));
                    } else {
                        memcpy(var152, (double[]){0.39520150963741746, 0.6047984903625826}, 2 * sizeof(double));
                    }
                } else {
                    if (input[25] <= 0.000037685013012378477) {
                        memcpy(var152, (double[]){0.30683364146928505, 0.693166358530715}, 2 * sizeof(double));
                    } else {
                        memcpy(var152, (double[]){0.5762475656166807, 0.4237524343833194}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[12] <= 0.000022356954104907345) {
                    if (input[15] <= -0.000043411382648628205) {
                        memcpy(var152, (double[]){0.4879510051923844, 0.5120489948076156}, 2 * sizeof(double));
                    } else {
                        memcpy(var152, (double[]){0.21619363044800713, 0.7838063695519929}, 2 * sizeof(double));
                    }
                } else {
                    if (input[8] <= 0.0000009345881721856131) {
                        memcpy(var152, (double[]){0.3582320539493025, 0.6417679460506974}, 2 * sizeof(double));
                    } else {
                        memcpy(var152, (double[]){0.5600922591463198, 0.4399077408536803}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[3] <= 54.44612121582031) {
                if (input[6] <= 0.00007085745164658874) {
                    if (input[18] <= -0.00006401888094842434) {
                        memcpy(var152, (double[]){0.8727922206787061, 0.12720777932129396}, 2 * sizeof(double));
                    } else {
                        memcpy(var152, (double[]){0.27597891566265065, 0.7240210843373495}, 2 * sizeof(double));
                    }
                } else {
                    if (input[15] <= 0.00014243129407986999) {
                        memcpy(var152, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var152, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[4] <= 0.00005725630035158247) {
                    if (input[12] <= 0.00010241437121294439) {
                        memcpy(var152, (double[]){0.9195834901518003, 0.08041650984819973}, 2 * sizeof(double));
                    } else {
                        memcpy(var152, (double[]){0.25543036357300497, 0.744569636426995}, 2 * sizeof(double));
                    }
                } else {
                    if (input[15] <= -0.00009146034062723629) {
                        memcpy(var152, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var152, (double[]){0.8166393158790143, 0.1833606841209858}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[10] <= 0.000012143817002652213) {
            if (input[2] <= 87.21986389160156) {
                if (input[11] <= 0.000006987523647694616) {
                    if (input[4] <= 0.00002844065602403134) {
                        memcpy(var152, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var152, (double[]){0.6957759848125296, 0.3042240151874704}, 2 * sizeof(double));
                    }
                } else {
                    if (input[12] <= 0.00000789853993410361) {
                        memcpy(var152, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var152, (double[]){0.8830035774257137, 0.11699642257428633}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[11] <= 0.000024077681700873654) {
                    if (input[12] <= 0.000013517656952899415) {
                        memcpy(var152, (double[]){0.8205989364679541, 0.17940106353204593}, 2 * sizeof(double));
                    } else {
                        memcpy(var152, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[12] <= 0.000050750373702612706) {
                        memcpy(var152, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var152, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[7] <= 0.0000018460274873177696) {
                if (input[11] <= 0.00009966867946786806) {
                    if (input[22] <= 0.0000997395982267335) {
                        memcpy(var152, (double[]){0.7408530422478267, 0.2591469577521734}, 2 * sizeof(double));
                    } else {
                        memcpy(var152, (double[]){0.16007861978597945, 0.8399213802140205}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var152, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[9] <= 0.4735448360443115) {
                    if (input[11] <= 0.00008731872367206961) {
                        memcpy(var152, (double[]){0.9412088416032285, 0.05879115839677154}, 2 * sizeof(double));
                    } else {
                        memcpy(var152, (double[]){0.39520150963741735, 0.6047984903625826}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1] <= -1.6104161143302917) {
                        memcpy(var152, (double[]){0.6862857750824555, 0.3137142249175444}, 2 * sizeof(double));
                    } else {
                        memcpy(var152, (double[]){0.44351783647269294, 0.5564821635273071}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var49, var152, 2, var48);
    double var153[2];
    if (input[7] <= 0.0000009240385168141074) {
        if (input[8] <= 0.00001210965046993806) {
            if (input[16] <= 0.00010352235767641105) {
                if (input[24] <= 0.000019539073946361896) {
                    if (input[15] <= -0.000071129670686787) {
                        memcpy(var153, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var153, (double[]){0.4842925854680933, 0.5157074145319067}, 2 * sizeof(double));
                    }
                } else {
                    if (input[6] <= 0.00011791045835707337) {
                        memcpy(var153, (double[]){0.33429586244674125, 0.6657041375532587}, 2 * sizeof(double));
                    } else {
                        memcpy(var153, (double[]){0.7853746735418201, 0.21462532645817986}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[10] <= 0.00007987966091604903) {
                    if (input[1] <= 16.729960441589355) {
                        memcpy(var153, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var153, (double[]){0.36377171215880894, 0.6362282878411911}, 2 * sizeof(double));
                    }
                } else {
                    if (input[11] <= 0.0000735188223188743) {
                        memcpy(var153, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    } else {
                        memcpy(var153, (double[]){0.17212633556416576, 0.8278736644358342}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[25] <= 0.0000617796576989349) {
                if (input[0] <= 3.0950173139572144) {
                    if (input[3] <= 38.2382926940918) {
                        memcpy(var153, (double[]){0.5784558726818361, 0.42154412731816393}, 2 * sizeof(double));
                    } else {
                        memcpy(var153, (double[]){0.08085153320097066, 0.9191484667990294}, 2 * sizeof(double));
                    }
                } else {
                    if (input[10] <= 0.00001900085680972552) {
                        memcpy(var153, (double[]){0.2678971172735164, 0.7321028827264836}, 2 * sizeof(double));
                    } else {
                        memcpy(var153, (double[]){0.7329389217565203, 0.2670610782434797}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[10] <= 0.000035414615922491066) {
                    if (input[4] <= 0.000034079963370459154) {
                        memcpy(var153, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var153, (double[]){0.740853042247827, 0.25914695775217306}, 2 * sizeof(double));
                    }
                } else {
                    if (input[6] <= 0.000036393204936757684) {
                        memcpy(var153, (double[]){0.6039134912461379, 0.39608650875386203}, 2 * sizeof(double));
                    } else {
                        memcpy(var153, (double[]){0.953668232743043, 0.046331767256957}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[12] <= 0.000038090993257355876) {
            if (input[1] <= 1.240417718887329) {
                if (input[10] <= 0.00007369228114839643) {
                    if (input[24] <= 0.000008382579835597426) {
                        memcpy(var153, (double[]){0.8085116161500103, 0.19148838384998965}, 2 * sizeof(double));
                    } else {
                        memcpy(var153, (double[]){0.9762847312146213, 0.023715268785378673}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var153, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[13] <= 0.000022872934096085373) {
                    if (input[8] <= 0.00001395868184772553) {
                        memcpy(var153, (double[]){0.5883769465403755, 0.4116230534596245}, 2 * sizeof(double));
                    } else {
                        memcpy(var153, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[24] <= 0.00010621750698192045) {
                        memcpy(var153, (double[]){0.1667479119950602, 0.8332520880049398}, 2 * sizeof(double));
                    } else {
                        memcpy(var153, (double[]){0.8727922206787061, 0.12720777932129393}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[7] <= 0.00004688403714681044) {
                if (input[2] <= 28.610248565673828) {
                    memcpy(var153, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[9] <= 0.6555904448032379) {
                        memcpy(var153, (double[]){0.8643345225857169, 0.13566547741428314}, 2 * sizeof(double));
                    } else {
                        memcpy(var153, (double[]){0.6422055945340595, 0.3577944054659405}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[12] <= 0.00008590990910306573) {
                    memcpy(var153, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    memcpy(var153, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var48, var153, 2, var47);
    double var154[2];
    if (input[9] <= 0.9987818002700806) {
        if (input[1] <= 14.363600730895996) {
            if (input[0] <= 7.651337146759033) {
                if (input[16] <= 0.00014929221651982516) {
                    if (input[10] <= 0.00002369116191403009) {
                        memcpy(var154, (double[]){0.7141889883409845, 0.28581101165901546}, 2 * sizeof(double));
                    } else {
                        memcpy(var154, (double[]){0.5317481606699702, 0.46825183933002973}, 2 * sizeof(double));
                    }
                } else {
                    if (input[9] <= 0.9312647879123688) {
                        memcpy(var154, (double[]){0.6957759848125297, 0.30422401518747044}, 2 * sizeof(double));
                    } else {
                        memcpy(var154, (double[]){0.9617701437347169, 0.038229856265282997}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 8.485214233398438) {
                    if (input[11] <= 0.000054055168220656924) {
                        memcpy(var154, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var154, (double[]){0.8205989364679541, 0.17940106353204593}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var154, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[10] <= 0.000006984261062825681) {
                memcpy(var154, (double[]){0.9014604150653344, 0.09853958493466565}, 2 * sizeof(double));
            } else {
                if (input[12] <= 0.00003827967702818569) {
                    if (input[3] <= 98.19551086425781) {
                        memcpy(var154, (double[]){0.06481276802688003, 0.9351872319731199}, 2 * sizeof(double));
                    } else {
                        memcpy(var154, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    }
                } else {
                    if (input[12] <= 0.00005337584843800869) {
                        memcpy(var154, (double[]){0.6501330422323804, 0.3498669577676196}, 2 * sizeof(double));
                    } else {
                        memcpy(var154, (double[]){0.3757240248090624, 0.6242759751909376}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[22] <= 0.00007324423859245144) {
            if (input[8] <= 0.0000032435053753943066) {
                if (input[19] <= 0.00007671548883081414) {
                    if (input[4] <= 0.00003918153015547432) {
                        memcpy(var154, (double[]){0.3599037903292696, 0.6400962096707303}, 2 * sizeof(double));
                    } else {
                        memcpy(var154, (double[]){0.500146213081197, 0.499853786918803}, 2 * sizeof(double));
                    }
                } else {
                    if (input[4] <= 0.00004500710929278284) {
                        memcpy(var154, (double[]){0.03992266005827725, 0.9600773399417227}, 2 * sizeof(double));
                    } else {
                        memcpy(var154, (double[]){0.3392447670137792, 0.6607552329862207}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[22] <= 0.000010650484455254627) {
                    if (input[25] <= 0.00002829056484188186) {
                        memcpy(var154, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var154, (double[]){0.7742957746478872, 0.2257042253521127}, 2 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 6.480700492858887) {
                        memcpy(var154, (double[]){0.4695833222112485, 0.5304166777887516}, 2 * sizeof(double));
                    } else {
                        memcpy(var154, (double[]){0.8330531549662602, 0.16694684503373977}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[15] <= 0.0000794496045273263) {
                if (input[24] <= 0.0001264894599444233) {
                    if (input[18] <= 0.0001230384732480161) {
                        memcpy(var154, (double[]){0.12898243281553964, 0.8710175671844603}, 2 * sizeof(double));
                    } else {
                        memcpy(var154, (double[]){0.6039134912461379, 0.39608650875386203}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= 0.00009591926209395751) {
                        memcpy(var154, (double[]){0.8727922206787061, 0.12720777932129393}, 2 * sizeof(double));
                    } else {
                        memcpy(var154, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[6] <= 0.00003211407420167234) {
                    if (input[6] <= 0.0000069818696601942065) {
                        memcpy(var154, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var154, (double[]){0.9195834901518003, 0.08041650984819974}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= 0.00016114775644382462) {
                        memcpy(var154, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var154, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var47, var154, 2, var46);
    double var155[2];
    if (input[6] <= 0.000019585095287766308) {
        if (input[0] <= 4.280290365219116) {
            if (input[8] <= 0.00000046107001594464236) {
                if (input[9] <= 0.02082923473790288) {
                    memcpy(var155, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[24] <= -0.00007761286542518064) {
                        memcpy(var155, (double[]){0.6112500947615799, 0.3887499052384201}, 2 * sizeof(double));
                    } else {
                        memcpy(var155, (double[]){0.8282185926918479, 0.17178140730815214}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[25] <= 0.00002795892760332208) {
                    if (input[7] <= 0.0000028020922684390825) {
                        memcpy(var155, (double[]){0.4616838127230736, 0.5383161872769263}, 2 * sizeof(double));
                    } else {
                        memcpy(var155, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[22] <= 0.000043365211240598) {
                        memcpy(var155, (double[]){0.8672760079273524, 0.1327239920726477}, 2 * sizeof(double));
                    } else {
                        memcpy(var155, (double[]){0.21201822257574662, 0.7879817774242533}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[2] <= 99.28737258911133) {
                if (input[6] <= 0.0000037275358408805914) {
                    if (input[18] <= 0.000110397220851155) {
                        memcpy(var155, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var155, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    }
                } else {
                    if (input[10] <= 0.000026845863430935424) {
                        memcpy(var155, (double[]){0.49634281114851686, 0.503657188851483}, 2 * sizeof(double));
                    } else {
                        memcpy(var155, (double[]){0.07809087519309646, 0.9219091248069036}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[12] <= 0.00004731503577204421) {
                    memcpy(var155, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    memcpy(var155, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        }
    } else {
        if (input[3] <= 85.64970016479492) {
            if (input[1] <= -1.251075804233551) {
                if (input[21] <= 0.000037830825021956116) {
                    if (input[7] <= 0.0000023224652636599785) {
                        memcpy(var155, (double[]){0.4140288812420573, 0.5859711187579428}, 2 * sizeof(double));
                    } else {
                        memcpy(var155, (double[]){0.7708162449786528, 0.2291837550213473}, 2 * sizeof(double));
                    }
                } else {
                    if (input[10] <= 0.00009367208622279577) {
                        memcpy(var155, (double[]){0.7055323430971494, 0.2944676569028506}, 2 * sizeof(double));
                    } else {
                        memcpy(var155, (double[]){0.2602751886373724, 0.7397248113626277}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 33.88718032836914) {
                    memcpy(var155, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[21] <= -0.00003077736255363561) {
                        memcpy(var155, (double[]){0.5316551558625102, 0.4683448441374897}, 2 * sizeof(double));
                    } else {
                        memcpy(var155, (double[]){0.36715715810182037, 0.6328428418981796}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[24] <= -0.000012077294286427787) {
                if (input[4] <= 0.000018857023860618938) {
                    if (input[16] <= 0.00006579776891157962) {
                        memcpy(var155, (double[]){0.7742957746478872, 0.2257042253521127}, 2 * sizeof(double));
                    } else {
                        memcpy(var155, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[11] <= 0.00007518839629483409) {
                        memcpy(var155, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var155, (double[]){0.8205989364679541, 0.1794010635320459}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[13] <= 0.00005298937321640551) {
                    if (input[0] <= 6.3121254444122314) {
                        memcpy(var155, (double[]){0.07551251674049654, 0.9244874832595035}, 2 * sizeof(double));
                    } else {
                        memcpy(var155, (double[]){0.5251272031587086, 0.4748727968412914}, 2 * sizeof(double));
                    }
                } else {
                    if (input[15] <= 0.00008452058682451025) {
                        memcpy(var155, (double[]){0.8399171453335489, 0.16008285466645122}, 2 * sizeof(double));
                    } else {
                        memcpy(var155, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var46, var155, 2, var45);
    double var156[2];
    if (input[0] <= 14.090974807739258) {
        if (input[6] <= 0.000019562471607059706) {
            if (input[1] <= 7.796793222427368) {
                if (input[13] <= 0.0000009325365795120888) {
                    if (input[6] <= 0.0000009281983466280508) {
                        memcpy(var156, (double[]){0.8205989364679541, 0.17940106353204593}, 2 * sizeof(double));
                    } else {
                        memcpy(var156, (double[]){0.11273454321747153, 0.8872654567825284}, 2 * sizeof(double));
                    }
                } else {
                    if (input[15] <= 0.0001166274851129856) {
                        memcpy(var156, (double[]){0.8060266382525304, 0.1939733617474697}, 2 * sizeof(double));
                    } else {
                        memcpy(var156, (double[]){0.246262388711574, 0.7537376112884261}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[10] <= 0.000007445026767527452) {
                    if (input[6] <= 0.0000009311347639595624) {
                        memcpy(var156, (double[]){0.2026261230131306, 0.7973738769868693}, 2 * sizeof(double));
                    } else {
                        memcpy(var156, (double[]){0.8689804594881858, 0.13101954051181422}, 2 * sizeof(double));
                    }
                } else {
                    if (input[10] <= 0.000008824455107969698) {
                        memcpy(var156, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var156, (double[]){0.4765438558935691, 0.5234561441064308}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[22] <= 0.000008821646133583272) {
                if (input[6] <= 0.000069870180595899) {
                    if (input[19] <= 0.00009662063894211315) {
                        memcpy(var156, (double[]){0.17289175014568364, 0.8271082498543163}, 2 * sizeof(double));
                    } else {
                        memcpy(var156, (double[]){0.753049955053294, 0.2469500449467061}, 2 * sizeof(double));
                    }
                } else {
                    if (input[8] <= 0.0000013940514804744453) {
                        memcpy(var156, (double[]){0.400140372767683, 0.599859627232317}, 2 * sizeof(double));
                    } else {
                        memcpy(var156, (double[]){0.888946638946639, 0.11105336105336107}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[10] <= 0.00013045830564806238) {
                    if (input[9] <= 0.9982450902462006) {
                        memcpy(var156, (double[]){0.6014125840468127, 0.3985874159531872}, 2 * sizeof(double));
                    } else {
                        memcpy(var156, (double[]){0.4251755269366685, 0.5748244730633315}, 2 * sizeof(double));
                    }
                } else {
                    if (input[15] <= 0.000021891236428928096) {
                        memcpy(var156, (double[]){0.047363659860429036, 0.952636340139571}, 2 * sizeof(double));
                    } else {
                        memcpy(var156, (double[]){0.5097002990056324, 0.4902997009943676}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[3] <= 93.31549835205078) {
            memcpy(var156, (double[]){0.0, 1.0}, 2 * sizeof(double));
        } else {
            memcpy(var156, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var45, var156, 2, var44);
    double var157[2];
    if (input[24] <= -0.00012797213275916874) {
        if (input[6] <= 0.00004060698665853124) {
            memcpy(var157, (double[]){1.0, 0.0}, 2 * sizeof(double));
        } else {
            if (input[7] <= 0.000003241168428758101) {
                memcpy(var157, (double[]){0.0, 1.0}, 2 * sizeof(double));
            } else {
                memcpy(var157, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[7] <= 0.0000004610976418462087) {
            if (input[11] <= 0.0000018657090663509734) {
                if (input[21] <= 0.00007198527600849047) {
                    if (input[16] <= 0.0000009314004785210273) {
                        memcpy(var157, (double[]){0.24626238871157397, 0.7537376112884261}, 2 * sizeof(double));
                    } else {
                        memcpy(var157, (double[]){0.7921755106451961, 0.2078244893548038}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var157, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[2] <= 99.60139083862305) {
                    if (input[22] <= 0.00006772431879653595) {
                        memcpy(var157, (double[]){0.42807780283243846, 0.5719221971675615}, 2 * sizeof(double));
                    } else {
                        memcpy(var157, (double[]){0.2905895373230483, 0.7094104626769516}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 15.63163137435913) {
                        memcpy(var157, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var157, (double[]){0.9263556985294118, 0.07364430147058826}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[2] <= 94.53871536254883) {
                if (input[9] <= 0.6743068993091583) {
                    if (input[24] <= -0.000054393285608966835) {
                        memcpy(var157, (double[]){0.8772559720427019, 0.12274402795729811}, 2 * sizeof(double));
                    } else {
                        memcpy(var157, (double[]){0.6764820395979638, 0.3235179604020362}, 2 * sizeof(double));
                    }
                } else {
                    if (input[10] <= 0.0000269095653493423) {
                        memcpy(var157, (double[]){0.7187943536940978, 0.28120564630590217}, 2 * sizeof(double));
                    } else {
                        memcpy(var157, (double[]){0.4800901720809264, 0.5199098279190736}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[24] <= 0.00006015114013280254) {
                    if (input[11] <= 0.00010746472617029212) {
                        memcpy(var157, (double[]){0.9050276570525483, 0.0949723429474516}, 2 * sizeof(double));
                    } else {
                        memcpy(var157, (double[]){0.36377171215880894, 0.6362282878411911}, 2 * sizeof(double));
                    }
                } else {
                    if (input[25] <= 0.00007548996654804796) {
                        memcpy(var157, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var157, (double[]){0.8205989364679541, 0.17940106353204593}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var44, var157, 2, var43);
    double var158[2];
    if (input[11] <= 0.00001950042678799946) {
        if (input[13] <= 0.0000009319351761405414) {
            if (input[25] <= 0.0000009309448500971484) {
                memcpy(var158, (double[]){0.4325759811153732, 0.5674240188846268}, 2 * sizeof(double));
            } else {
                memcpy(var158, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            if (input[2] <= 41.27395057678223) {
                if (input[8] <= 0.0000009314898932188953) {
                    if (input[25] <= 0.00006246374323382042) {
                        memcpy(var158, (double[]){0.9762847312146213, 0.023715268785378673}, 2 * sizeof(double));
                    } else {
                        memcpy(var158, (double[]){0.7823218357347305, 0.21767816426526954}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var158, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[1] <= 7.89675760269165) {
                    if (input[22] <= 0.0001357962901238352) {
                        memcpy(var158, (double[]){0.7324437136352135, 0.2675562863647865}, 2 * sizeof(double));
                    } else {
                        memcpy(var158, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 5.229668378829956) {
                        memcpy(var158, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var158, (double[]){0.4732640723132005, 0.5267359276867994}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[12] <= 0.00010900818961090408) {
            if (input[9] <= 0.2465786263346672) {
                if (input[25] <= 0.000034981050703208894) {
                    if (input[16] <= 0.00006805273005738854) {
                        memcpy(var158, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var158, (double[]){0.8205989364679541, 0.17940106353204593}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1] <= -10.255244255065918) {
                        memcpy(var158, (double[]){0.36377171215880894, 0.6362282878411911}, 2 * sizeof(double));
                    } else {
                        memcpy(var158, (double[]){0.789138431173181, 0.210861568826819}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[6] <= 0.00007456218372681178) {
                    if (input[12] <= 0.000021365602151490748) {
                        memcpy(var158, (double[]){0.3241978368982171, 0.675802163101783}, 2 * sizeof(double));
                    } else {
                        memcpy(var158, (double[]){0.5016714035541014, 0.4983285964458985}, 2 * sizeof(double));
                    }
                } else {
                    if (input[13] <= 0.00007916498725535348) {
                        memcpy(var158, (double[]){0.37660788667266104, 0.623392113327339}, 2 * sizeof(double));
                    } else {
                        memcpy(var158, (double[]){0.05283454067106352, 0.9471654593289365}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[12] <= 0.00015347092266893014) {
                if (input[19] <= 0.00011259944585617632) {
                    if (input[3] <= 42.25603675842285) {
                        memcpy(var158, (double[]){0.5040832115533396, 0.4959167884466604}, 2 * sizeof(double));
                    } else {
                        memcpy(var158, (double[]){0.7679925324799025, 0.2320074675200976}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var158, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[21] <= -0.000028431614737201016) {
                    memcpy(var158, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[22] <= 0.000021462849872477818) {
                        memcpy(var158, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var158, (double[]){0.8205989364679541, 0.17940106353204593}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var43, var158, 2, var42);
    double var159[2];
    if (input[10] <= 0.000024606861188658513) {
        if (input[16] <= 0.00010349853619118221) {
            if (input[0] <= 3.8200074434280396) {
                if (input[13] <= 0.0000009326587928626395) {
                    if (input[6] <= 0.0000009310101631854195) {
                        memcpy(var159, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    } else {
                        memcpy(var159, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[24] <= -0.00009321339530288242) {
                        memcpy(var159, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var159, (double[]){0.7725165883403052, 0.22748341165969477}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 99.42364501953125) {
                    if (input[2] <= 95.12064743041992) {
                        memcpy(var159, (double[]){0.553990666650671, 0.44600933334932913}, 2 * sizeof(double));
                    } else {
                        memcpy(var159, (double[]){0.327327126175006, 0.672672873824994}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= 0.00003478109465504531) {
                        memcpy(var159, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var159, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[7] <= 0.000006520383294628118) {
                if (input[9] <= 0.6942905485630035) {
                    memcpy(var159, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    memcpy(var159, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[4] <= 0.00008338679981534369) {
                    memcpy(var159, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    memcpy(var159, (double[]){0.8727922206787061, 0.12720777932129393}, 2 * sizeof(double));
                }
            }
        }
    } else {
        if (input[16] <= 0.0001552865214762278) {
            if (input[18] <= -0.00018753176118480042) {
                memcpy(var159, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                if (input[11] <= 0.00003357668720127549) {
                    if (input[24] <= 0.000021417896277853288) {
                        memcpy(var159, (double[]){0.5166625686419144, 0.4833374313580856}, 2 * sizeof(double));
                    } else {
                        memcpy(var159, (double[]){0.18613509395632294, 0.813864906043677}, 2 * sizeof(double));
                    }
                } else {
                    if (input[16] <= 0.00009909153959597461) {
                        memcpy(var159, (double[]){0.4907764862172022, 0.5092235137827978}, 2 * sizeof(double));
                    } else {
                        memcpy(var159, (double[]){0.30421734827443075, 0.6957826517255693}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[1] <= -3.1244866847991943) {
                memcpy(var159, (double[]){0.0, 1.0}, 2 * sizeof(double));
            } else {
                if (input[12] <= 0.00012161899212514982) {
                    memcpy(var159, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    memcpy(var159, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var42, var159, 2, var41);
    double var160[2];
    if (input[11] <= 0.000026071006686834153) {
        if (input[0] <= 5.286858558654785) {
            if (input[7] <= 0.000007448894848494092) {
                if (input[15] <= -0.00007130997983040288) {
                    memcpy(var160, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[13] <= 0.0000737463305995334) {
                        memcpy(var160, (double[]){0.7044348125749283, 0.2955651874250716}, 2 * sizeof(double));
                    } else {
                        memcpy(var160, (double[]){0.445540619520748, 0.554459380479252}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var160, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[12] <= 0.00004472697946766857) {
                if (input[12] <= 0.000034274064091732726) {
                    if (input[0] <= 8.497345924377441) {
                        memcpy(var160, (double[]){0.45404568331397593, 0.545954316686024}, 2 * sizeof(double));
                    } else {
                        memcpy(var160, (double[]){0.10261794764104719, 0.8973820523589529}, 2 * sizeof(double));
                    }
                } else {
                    if (input[11] <= 0.000009788976967683993) {
                        memcpy(var160, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var160, (double[]){0.8727922206787061, 0.12720777932129396}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[18] <= 0.000033889582482515834) {
                    if (input[25] <= 0.00007881433703005314) {
                        memcpy(var160, (double[]){0.13229852901362693, 0.867701470986373}, 2 * sizeof(double));
                    } else {
                        memcpy(var160, (double[]){0.8205989364679541, 0.1794010635320459}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var160, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        }
    } else {
        if (input[12] <= 0.00003824138184427284) {
            if (input[24] <= -0.0001284041500184685) {
                if (input[10] <= 0.00006697092976537533) {
                    memcpy(var160, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    memcpy(var160, (double[]){0.7742957746478873, 0.22570422535211274}, 2 * sizeof(double));
                }
            } else {
                if (input[11] <= 0.00003538150485837832) {
                    if (input[21] <= -0.00006860985013190657) {
                        memcpy(var160, (double[]){0.740853042247827, 0.25914695775217306}, 2 * sizeof(double));
                    } else {
                        memcpy(var160, (double[]){0.16709599471128644, 0.8329040052887137}, 2 * sizeof(double));
                    }
                } else {
                    if (input[18] <= -0.0001112767422455363) {
                        memcpy(var160, (double[]){0.888946638946639, 0.11105336105336107}, 2 * sizeof(double));
                    } else {
                        memcpy(var160, (double[]){0.39082428853184203, 0.6091757114681579}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[4] <= 0.0000581195763516007) {
                if (input[25] <= 0.0000009246934382645122) {
                    if (input[15] <= 0.00010068250776384957) {
                        memcpy(var160, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var160, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    }
                } else {
                    if (input[4] <= 0.000028781597393390257) {
                        memcpy(var160, (double[]){0.6020210118747891, 0.397978988125211}, 2 * sizeof(double));
                    } else {
                        memcpy(var160, (double[]){0.4334124731130899, 0.56658752688691}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[7] <= 0.0000009344318527837459) {
                    if (input[24] <= -0.00006581858906429261) {
                        memcpy(var160, (double[]){0.2936992887909445, 0.7063007112090555}, 2 * sizeof(double));
                    } else {
                        memcpy(var160, (double[]){0.5751119408032681, 0.4248880591967319}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= -0.00010446193118696101) {
                        memcpy(var160, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var160, (double[]){0.7954168262479253, 0.20458317375207466}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var41, var160, 2, var40);
    double var161[2];
    if (input[11] <= 0.000024255782591353636) {
        if (input[13] <= 0.0000009320355047748308) {
            if (input[21] <= -0.000013450753158394946) {
                memcpy(var161, (double[]){0.4777578621476291, 0.522242137852371}, 2 * sizeof(double));
            } else {
                memcpy(var161, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            if (input[1] <= 7.835269451141357) {
                if (input[16] <= 0.00008366389374714345) {
                    if (input[18] <= -0.000048005924327299) {
                        memcpy(var161, (double[]){0.5040832115533397, 0.4959167884466604}, 2 * sizeof(double));
                    } else {
                        memcpy(var161, (double[]){0.8086517495587163, 0.1913482504412836}, 2 * sizeof(double));
                    }
                } else {
                    if (input[12] <= 0.00006293852857197635) {
                        memcpy(var161, (double[]){0.6957759848125296, 0.3042240151874704}, 2 * sizeof(double));
                    } else {
                        memcpy(var161, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[21] <= 0.000010163409569940995) {
                    if (input[13] <= 0.000012578767837112537) {
                        memcpy(var161, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var161, (double[]){0.7647070187979367, 0.2352929812020633}, 2 * sizeof(double));
                    }
                } else {
                    if (input[22] <= 0.00002750230487436056) {
                        memcpy(var161, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var161, (double[]){0.3300262104230651, 0.669973789576935}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[18] <= -0.00009524922643322498) {
            if (input[22] <= 0.00011054873903049156) {
                if (input[4] <= 0.00012189546396257356) {
                    if (input[24] <= -0.000057953298892243765) {
                        memcpy(var161, (double[]){0.37883584210866333, 0.6211641578913366}, 2 * sizeof(double));
                    } else {
                        memcpy(var161, (double[]){0.7447652785215088, 0.2552347214784913}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var161, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var161, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            if (input[2] <= 98.79033660888672) {
                if (input[15] <= 0.00014940804248908535) {
                    if (input[7] <= 0.0000004610976418462087) {
                        memcpy(var161, (double[]){0.37435734471291854, 0.6256426552870815}, 2 * sizeof(double));
                    } else {
                        memcpy(var161, (double[]){0.5526971459615403, 0.4473028540384597}, 2 * sizeof(double));
                    }
                } else {
                    if (input[4] <= 0.00009492416938883252) {
                        memcpy(var161, (double[]){0.8968092984320165, 0.10319070156798352}, 2 * sizeof(double));
                    } else {
                        memcpy(var161, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 8.333425045013428) {
                    if (input[6] <= 0.00007000193545536604) {
                        memcpy(var161, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var161, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 9.969448566436768) {
                        memcpy(var161, (double[]){0.9716760196191065, 0.02832398038089347}, 2 * sizeof(double));
                    } else {
                        memcpy(var161, (double[]){0.7329389217565203, 0.2670610782434797}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var40, var161, 2, var39);
    double var162[2];
    if (input[0] <= 9.36756181716919) {
        if (input[11] <= 0.000020471391508181114) {
            if (input[7] <= 0.000008845216598274419) {
                if (input[15] <= 0.000020844308892264962) {
                    if (input[13] <= 0.0000009319920764028211) {
                        memcpy(var162, (double[]){0.11857963277521638, 0.8814203672247837}, 2 * sizeof(double));
                    } else {
                        memcpy(var162, (double[]){0.7859277227026645, 0.21407227729733533}, 2 * sizeof(double));
                    }
                } else {
                    if (input[6] <= 0.0000009325817984517926) {
                        memcpy(var162, (double[]){0.7676320135336528, 0.23236798646634715}, 2 * sizeof(double));
                    } else {
                        memcpy(var162, (double[]){0.46526178342793906, 0.534738216572061}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var162, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[9] <= 0.9987818002700806) {
                if (input[18] <= -0.00009524922643322498) {
                    if (input[6] <= 0.00003125126659142552) {
                        memcpy(var162, (double[]){0.2026261230131306, 0.7973738769868693}, 2 * sizeof(double));
                    } else {
                        memcpy(var162, (double[]){0.7786896130454414, 0.22131038695455874}, 2 * sizeof(double));
                    }
                } else {
                    if (input[7] <= 0.0000009240320935077762) {
                        memcpy(var162, (double[]){0.40137720485922307, 0.598622795140777}, 2 * sizeof(double));
                    } else {
                        memcpy(var162, (double[]){0.6013523348285763, 0.3986476651714237}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[19] <= 0.00001771420556906378) {
                    if (input[1] <= 15.035206317901611) {
                        memcpy(var162, (double[]){0.49555016822212716, 0.504449831777873}, 2 * sizeof(double));
                    } else {
                        memcpy(var162, (double[]){0.9697141507205291, 0.03028584927947083}, 2 * sizeof(double));
                    }
                } else {
                    if (input[19] <= 0.000027334184778737836) {
                        memcpy(var162, (double[]){0.187833663140811, 0.8121663368591889}, 2 * sizeof(double));
                    } else {
                        memcpy(var162, (double[]){0.4194808369725865, 0.5805191630274136}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[25] <= 0.00010456812015036121) {
            if (input[13] <= 0.000051539973355829716) {
                if (input[6] <= 0.00005021530523663387) {
                    if (input[1] <= 21.43472957611084) {
                        memcpy(var162, (double[]){0.12013685439757421, 0.8798631456024257}, 2 * sizeof(double));
                    } else {
                        memcpy(var162, (double[]){0.5040832115533396, 0.4959167884466604}, 2 * sizeof(double));
                    }
                } else {
                    if (input[16] <= 0.000051683384299394675) {
                        memcpy(var162, (double[]){0.6155230326295585, 0.38447696737044146}, 2 * sizeof(double));
                    } else {
                        memcpy(var162, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[18] <= -0.000048468398745171726) {
                    memcpy(var162, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[19] <= 0.000012585322110680863) {
                        memcpy(var162, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var162, (double[]){0.6957759848125297, 0.30422401518747033}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            memcpy(var162, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var39, var162, 2, var38);
    double var163[2];
    if (input[9] <= 0.9987471699714661) {
        if (input[4] <= 0.00007778115104883909) {
            if (input[6] <= 0.00002708689953578869) {
                if (input[16] <= 0.000058279791119275615) {
                    if (input[10] <= 0.000007449094709954807) {
                        memcpy(var163, (double[]){0.8372889960654906, 0.16271100393450946}, 2 * sizeof(double));
                    } else {
                        memcpy(var163, (double[]){0.590040468865438, 0.40995953113456207}, 2 * sizeof(double));
                    }
                } else {
                    if (input[12] <= 0.000014834020475973375) {
                        memcpy(var163, (double[]){0.246262388711574, 0.7537376112884261}, 2 * sizeof(double));
                    } else {
                        memcpy(var163, (double[]){0.842183011899877, 0.15781698810012312}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[8] <= 0.00001631111081223935) {
                    if (input[10] <= 0.000041035766116692685) {
                        memcpy(var163, (double[]){0.3952015096374172, 0.6047984903625828}, 2 * sizeof(double));
                    } else {
                        memcpy(var163, (double[]){0.5963633526700881, 0.4036366473299118}, 2 * sizeof(double));
                    }
                } else {
                    if (input[25] <= 0.00001538127526146127) {
                        memcpy(var163, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var163, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[7] <= 0.0000009315206739302084) {
                if (input[4] <= 0.00009806123489397578) {
                    if (input[1] <= 8.154405117034912) {
                        memcpy(var163, (double[]){0.12238696320042736, 0.8776130367995727}, 2 * sizeof(double));
                    } else {
                        memcpy(var163, (double[]){0.45404568331397605, 0.545954316686024}, 2 * sizeof(double));
                    }
                } else {
                    if (input[6] <= 0.000017282721273659263) {
                        memcpy(var163, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var163, (double[]){0.5978417717548152, 0.4021582282451847}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[6] <= 0.00005410914673120715) {
                    if (input[18] <= -0.00006732548717991449) {
                        memcpy(var163, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var163, (double[]){0.8120295852204229, 0.18797041477957707}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 6.153619050979614) {
                        memcpy(var163, (double[]){0.5715717945861647, 0.4284282054138353}, 2 * sizeof(double));
                    } else {
                        memcpy(var163, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[11] <= 0.000011149832516821334) {
            if (input[6] <= 0.00001110695984607446) {
                if (input[10] <= 0.000015859533050388563) {
                    if (input[15] <= -0.000011624658100117813) {
                        memcpy(var163, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var163, (double[]){0.5173874170627264, 0.48261258293727366}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var163, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var163, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[13] <= 0.00009922275421558879) {
                if (input[21] <= 0.00006845906682428904) {
                    if (input[2] <= 96.76726531982422) {
                        memcpy(var163, (double[]){0.3710276011575687, 0.6289723988424313}, 2 * sizeof(double));
                    } else {
                        memcpy(var163, (double[]){0.6291962902834535, 0.37080370971654647}, 2 * sizeof(double));
                    }
                } else {
                    if (input[16] <= 0.000034477716326364316) {
                        memcpy(var163, (double[]){0.40843476292465464, 0.5915652370753454}, 2 * sizeof(double));
                    } else {
                        memcpy(var163, (double[]){0.09044358072675673, 0.9095564192732433}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[1] <= 4.577695846557617) {
                    if (input[11] <= 0.000060568831031559967) {
                        memcpy(var163, (double[]){0.753049955053294, 0.24695004494670608}, 2 * sizeof(double));
                    } else {
                        memcpy(var163, (double[]){0.12857957286321972, 0.8714204271367803}, 2 * sizeof(double));
                    }
                } else {
                    if (input[25] <= 0.00010117854981217533) {
                        memcpy(var163, (double[]){0.805647148000758, 0.19435285199924196}, 2 * sizeof(double));
                    } else {
                        memcpy(var163, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var38, var163, 2, var37);
    double var164[2];
    if (input[24] <= -0.00012816835078410804) {
        if (input[6] <= 0.00003824259874818381) {
            if (input[22] <= 0.000025654680939624086) {
                memcpy(var164, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
            } else {
                memcpy(var164, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[9] <= 0.3955516219139099) {
                memcpy(var164, (double[]){0.0, 1.0}, 2 * sizeof(double));
            } else {
                if (input[3] <= 54.39126968383789) {
                    memcpy(var164, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    memcpy(var164, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        }
    } else {
        if (input[11] <= 0.00002050950388365891) {
            if (input[9] <= 0.9981289207935333) {
                if (input[11] <= 0.0000009252564154849097) {
                    memcpy(var164, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[10] <= 0.000029863773306715302) {
                        memcpy(var164, (double[]){0.8129231846836328, 0.1870768153163672}, 2 * sizeof(double));
                    } else {
                        memcpy(var164, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[24] <= 0.000037265017454046756) {
                    if (input[16] <= 0.00000509886308464047) {
                        memcpy(var164, (double[]){0.762010841315809, 0.23798915868419096}, 2 * sizeof(double));
                    } else {
                        memcpy(var164, (double[]){0.2554303635730048, 0.7445696364269953}, 2 * sizeof(double));
                    }
                } else {
                    if (input[16] <= 0.00004801370596396737) {
                        memcpy(var164, (double[]){0.44458885711810076, 0.5554111428818993}, 2 * sizeof(double));
                    } else {
                        memcpy(var164, (double[]){0.9412088416032285, 0.058791158396771535}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[12] <= 0.00010752867456176318) {
                if (input[10] <= 0.000024147735530277714) {
                    if (input[9] <= 0.9860093295574188) {
                        memcpy(var164, (double[]){0.7087124251887804, 0.2912875748112196}, 2 * sizeof(double));
                    } else {
                        memcpy(var164, (double[]){0.43744295443375686, 0.5625570455662431}, 2 * sizeof(double));
                    }
                } else {
                    if (input[15] <= -0.0000720015996193979) {
                        memcpy(var164, (double[]){0.2347717214069414, 0.7652282785930585}, 2 * sizeof(double));
                    } else {
                        memcpy(var164, (double[]){0.44673740766529024, 0.5532625923347099}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[4] <= 0.00004095034637430217) {
                    if (input[13] <= 0.00010472369103808887) {
                        memcpy(var164, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    } else {
                        memcpy(var164, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[6] <= 0.000011577634722925723) {
                        memcpy(var164, (double[]){0.9648439642406625, 0.03515603575933748}, 2 * sizeof(double));
                    } else {
                        memcpy(var164, (double[]){0.614495817462776, 0.3855041825372239}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var37, var164, 2, var36);
    double var165[2];
    if (input[10] <= 0.000024611632397864014) {
        if (input[18] <= 0.0000009286609099490306) {
            if (input[18] <= -0.00006298377047642134) {
                if (input[4] <= 0.00006936274075997062) {
                    memcpy(var165, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[0] <= -4.503802537918091) {
                        memcpy(var165, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var165, (double[]){0.5183646408839779, 0.4816353591160221}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[25] <= 0.0000009249505694697291) {
                    if (input[3] <= 64.37586784362793) {
                        memcpy(var165, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var165, (double[]){0.6039134912461379, 0.39608650875386203}, 2 * sizeof(double));
                    }
                } else {
                    if (input[16] <= 0.0000009252316885977052) {
                        memcpy(var165, (double[]){0.4069207994078459, 0.593079200592154}, 2 * sizeof(double));
                    } else {
                        memcpy(var165, (double[]){0.8537140069094141, 0.1462859930905858}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[15] <= -0.000019536635591066442) {
                if (input[4] <= 0.00004868184623774141) {
                    if (input[21] <= 0.00000838401018654622) {
                        memcpy(var165, (double[]){0.8727922206787061, 0.12720777932129393}, 2 * sizeof(double));
                    } else {
                        memcpy(var165, (double[]){0.27597891566265065, 0.7240210843373495}, 2 * sizeof(double));
                    }
                } else {
                    if (input[9] <= 0.8783034980297089) {
                        memcpy(var165, (double[]){0.8205989364679541, 0.17940106353204593}, 2 * sizeof(double));
                    } else {
                        memcpy(var165, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[21] <= -0.000060473958001239225) {
                    if (input[18] <= 0.00007522853047703393) {
                        memcpy(var165, (double[]){0.9014604150653344, 0.09853958493466565}, 2 * sizeof(double));
                    } else {
                        memcpy(var165, (double[]){0.5784558726818361, 0.4215441273181639}, 2 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 8.43663501739502) {
                        memcpy(var165, (double[]){0.5011096035928017, 0.49889039640719846}, 2 * sizeof(double));
                    } else {
                        memcpy(var165, (double[]){0.23368135809356808, 0.766318641906432}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[4] <= 0.00004643027205020189) {
            if (input[9] <= 0.9993506371974945) {
                if (input[13] <= 0.000037661604437744245) {
                    if (input[0] <= 8.344815731048584) {
                        memcpy(var165, (double[]){0.4285234065564664, 0.5714765934435335}, 2 * sizeof(double));
                    } else {
                        memcpy(var165, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[25] <= 0.000018157486920244992) {
                        memcpy(var165, (double[]){0.35745441738235206, 0.6425455826176479}, 2 * sizeof(double));
                    } else {
                        memcpy(var165, (double[]){0.6498025997051878, 0.3501974002948121}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 99.52902603149414) {
                    if (input[19] <= 0.00007356505011557601) {
                        memcpy(var165, (double[]){0.34370353663205344, 0.6562964633679466}, 2 * sizeof(double));
                    } else {
                        memcpy(var165, (double[]){0.08700296735905037, 0.9129970326409497}, 2 * sizeof(double));
                    }
                } else {
                    if (input[17] <= 0.5) {
                        memcpy(var165, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var165, (double[]){0.9114396242055817, 0.08856037579441836}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[6] <= 0.00007267759792739525) {
                if (input[12] <= 0.00015071751840878278) {
                    if (input[11] <= 0.00005943563155597076) {
                        memcpy(var165, (double[]){0.4361111229160205, 0.5638888770839795}, 2 * sizeof(double));
                    } else {
                        memcpy(var165, (double[]){0.7266786768860126, 0.27332132311398727}, 2 * sizeof(double));
                    }
                } else {
                    if (input[24] <= 0.000045160597437643446) {
                        memcpy(var165, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var165, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[22] <= 0.00004092067865713034) {
                    if (input[6] <= 0.00011801202344940975) {
                        memcpy(var165, (double[]){0.4221610116439213, 0.5778389883560787}, 2 * sizeof(double));
                    } else {
                        memcpy(var165, (double[]){0.6752337524757036, 0.32476624752429645}, 2 * sizeof(double));
                    }
                } else {
                    if (input[25] <= 0.000011181437002960593) {
                        memcpy(var165, (double[]){0.6155230326295585, 0.3844769673704415}, 2 * sizeof(double));
                    } else {
                        memcpy(var165, (double[]){0.22232332423415227, 0.7776766757658478}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var36, var165, 2, var35);
    double var166[2];
    if (input[18] <= -0.000013972904071124503) {
        if (input[18] <= -0.00013969435531180352) {
            if (input[1] <= -3.7443944215774536) {
                memcpy(var166, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                memcpy(var166, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
            }
        } else {
            if (input[10] <= 0.00002985848277603509) {
                if (input[25] <= 0.000011181619356648298) {
                    if (input[22] <= 0.000012059726259394665) {
                        memcpy(var166, (double[]){0.7742957746478873, 0.2257042253521127}, 2 * sizeof(double));
                    } else {
                        memcpy(var166, (double[]){0.10743862220593622, 0.8925613777940637}, 2 * sizeof(double));
                    }
                } else {
                    if (input[7] <= 0.0000009258120599042741) {
                        memcpy(var166, (double[]){0.7219219360058156, 0.27807806399418455}, 2 * sizeof(double));
                    } else {
                        memcpy(var166, (double[]){0.903867624268884, 0.09613237573111597}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 8.396167278289795) {
                    if (input[19] <= 0.00003261347774241585) {
                        memcpy(var166, (double[]){0.6458246221850544, 0.3541753778149457}, 2 * sizeof(double));
                    } else {
                        memcpy(var166, (double[]){0.47453936277992403, 0.525460637220076}, 2 * sizeof(double));
                    }
                } else {
                    if (input[6] <= 0.0000533184520463692) {
                        memcpy(var166, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var166, (double[]){0.3369727617515228, 0.6630272382484772}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[2] <= 54.664649963378906) {
            if (input[21] <= -0.000059679781770682894) {
                if (input[3] <= 77.99653244018555) {
                    if (input[24] <= -0.00013757316628471017) {
                        memcpy(var166, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var166, (double[]){0.9036322087918697, 0.0963677912081304}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var166, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[10] <= 0.000024218240469053853) {
                    if (input[25] <= 0.000010247949830954894) {
                        memcpy(var166, (double[]){0.4777578621476291, 0.5222421378523708}, 2 * sizeof(double));
                    } else {
                        memcpy(var166, (double[]){0.8205989364679541, 0.17940106353204585}, 2 * sizeof(double));
                    }
                } else {
                    if (input[15] <= -0.0000721045580576174) {
                        memcpy(var166, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var166, (double[]){0.5813389316538372, 0.4186610683461629}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[11] <= 0.00001947728105733404) {
                if (input[21] <= 0.00008238806913141161) {
                    if (input[15] <= 0.000002792864506773185) {
                        memcpy(var166, (double[]){0.9510761715768585, 0.04892382842314151}, 2 * sizeof(double));
                    } else {
                        memcpy(var166, (double[]){0.5752227822053255, 0.4247772177946744}, 2 * sizeof(double));
                    }
                } else {
                    if (input[24] <= 0.000052141618652967736) {
                        memcpy(var166, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var166, (double[]){0.7742957746478873, 0.2257042253521127}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 7.202369213104248) {
                    if (input[15] <= 0.0001616614026715979) {
                        memcpy(var166, (double[]){0.3471645033206922, 0.6528354966793077}, 2 * sizeof(double));
                    } else {
                        memcpy(var166, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 99.76211929321289) {
                        memcpy(var166, (double[]){0.4986814982366677, 0.5013185017633324}, 2 * sizeof(double));
                    } else {
                        memcpy(var166, (double[]){0.834204128084424, 0.16579587191557604}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var35, var166, 2, var34);
    double var167[2];
    if (input[7] <= 0.0000004610976418462087) {
        if (input[25] <= 0.0001398819949827157) {
            if (input[11] <= 0.000000932430936018136) {
                if (input[19] <= 0.00003948630910599604) {
                    if (input[2] <= 79.02494430541992) {
                        memcpy(var167, (double[]){0.863999622810533, 0.13600037718946698}, 2 * sizeof(double));
                    } else {
                        memcpy(var167, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[19] <= 0.0000640934522380121) {
                        memcpy(var167, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var167, (double[]){0.5040832115533397, 0.4959167884466604}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[4] <= 0.000035380106055526994) {
                    if (input[13] <= 0.000010243948963761795) {
                        memcpy(var167, (double[]){0.48672929320547614, 0.5132707067945238}, 2 * sizeof(double));
                    } else {
                        memcpy(var167, (double[]){0.2833045758851546, 0.7166954241148453}, 2 * sizeof(double));
                    }
                } else {
                    if (input[4] <= 0.00005179935396881774) {
                        memcpy(var167, (double[]){0.5425180407602229, 0.45748195923977697}, 2 * sizeof(double));
                    } else {
                        memcpy(var167, (double[]){0.39217127670217566, 0.6078287232978242}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[10] <= 0.00007127523349481635) {
                if (input[0] <= 3.5013660192489624) {
                    memcpy(var167, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[13] <= 0.000023764992874930613) {
                        memcpy(var167, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var167, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[18] <= -0.00005693980892829131) {
                    memcpy(var167, (double[]){0.8727922206787061, 0.12720777932129393}, 2 * sizeof(double));
                } else {
                    memcpy(var167, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        }
    } else {
        if (input[6] <= 0.000011597139291552594) {
            if (input[7] <= 0.000016232056623266544) {
                if (input[22] <= 0.00005549868546950165) {
                    if (input[13] <= 0.000008854971383698285) {
                        memcpy(var167, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    } else {
                        memcpy(var167, (double[]){0.9769108853828975, 0.023089114617102516}, 2 * sizeof(double));
                    }
                } else {
                    if (input[24] <= 0.00006297272921074182) {
                        memcpy(var167, (double[]){0.9648439642406624, 0.03515603575933746}, 2 * sizeof(double));
                    } else {
                        memcpy(var167, (double[]){0.4949915588069781, 0.505008441193022}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[12] <= 0.00004704216553363949) {
                    if (input[22] <= 0.00005033948582422454) {
                        memcpy(var167, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var167, (double[]){0.8727922206787061, 0.12720777932129393}, 2 * sizeof(double));
                    }
                } else {
                    if (input[15] <= 0.00007004789586062543) {
                        memcpy(var167, (double[]){0.9320758715693547, 0.06792412843064534}, 2 * sizeof(double));
                    } else {
                        memcpy(var167, (double[]){0.3138514236780133, 0.6861485763219868}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[1] <= 7.72492527961731) {
                if (input[25] <= 0.0001140708991442807) {
                    if (input[10] <= 0.00009555203723721206) {
                        memcpy(var167, (double[]){0.7293379878341935, 0.2706620121658065}, 2 * sizeof(double));
                    } else {
                        memcpy(var167, (double[]){0.3034411384217335, 0.6965588615782664}, 2 * sizeof(double));
                    }
                } else {
                    if (input[15] <= -0.00001815151279060956) {
                        memcpy(var167, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    } else {
                        memcpy(var167, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 10.649777889251709) {
                    if (input[9] <= 0.997767835855484) {
                        memcpy(var167, (double[]){0.44305088587510855, 0.5569491141248915}, 2 * sizeof(double));
                    } else {
                        memcpy(var167, (double[]){0.8591311991795473, 0.14086880082045275}, 2 * sizeof(double));
                    }
                } else {
                    if (input[16] <= 0.00004462371362023987) {
                        memcpy(var167, (double[]){0.6039134912461379, 0.39608650875386203}, 2 * sizeof(double));
                    } else {
                        memcpy(var167, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var34, var167, 2, var33);
    double var168[2];
    if (input[11] <= 0.00001947728105733404) {
        if (input[1] <= 8.372537612915039) {
            if (input[24] <= 0.0000731559848645702) {
                if (input[9] <= 0.012100644875317812) {
                    memcpy(var168, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[18] <= -0.0000564770325581776) {
                        memcpy(var168, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var168, (double[]){0.7915523895423391, 0.208447610457661}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[16] <= 0.00007386291690636426) {
                    memcpy(var168, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    memcpy(var168, (double[]){0.6039134912461379, 0.39608650875386203}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[3] <= 77.3765869140625) {
                memcpy(var168, (double[]){0.0, 1.0}, 2 * sizeof(double));
            } else {
                if (input[18] <= 0.0000876515441632364) {
                    if (input[3] <= 80.39366149902344) {
                        memcpy(var168, (double[]){0.720117891059928, 0.2798821089400721}, 2 * sizeof(double));
                    } else {
                        memcpy(var168, (double[]){0.35568957748431584, 0.6443104225156842}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var168, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        }
    } else {
        if (input[7] <= 0.0000004610976418462087) {
            if (input[6] <= 0.00014038618974154815) {
                if (input[15] <= -0.0000770918013586197) {
                    memcpy(var168, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[11] <= 0.00003526492582750507) {
                        memcpy(var168, (double[]){0.27087170663263843, 0.7291282933673616}, 2 * sizeof(double));
                    } else {
                        memcpy(var168, (double[]){0.4474919090814702, 0.5525080909185299}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[15] <= -0.000038810805563116446) {
                    memcpy(var168, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[19] <= 0.00003631121762737166) {
                        memcpy(var168, (double[]){0.43257598111537315, 0.5674240188846268}, 2 * sizeof(double));
                    } else {
                        memcpy(var168, (double[]){0.886052547374409, 0.11394745262559107}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[2] <= 49.27974510192871) {
                if (input[22] <= 0.00012072665776940994) {
                    if (input[4] <= 0.00006224227763595991) {
                        memcpy(var168, (double[]){0.6657695995155838, 0.3342304004844163}, 2 * sizeof(double));
                    } else {
                        memcpy(var168, (double[]){0.9157078045893879, 0.08429219541061214}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var168, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[12] <= 0.00003729539457708597) {
                    if (input[0] <= 8.485214233398438) {
                        memcpy(var168, (double[]){0.48336752637749114, 0.516632473622509}, 2 * sizeof(double));
                    } else {
                        memcpy(var168, (double[]){0.11558323806520279, 0.8844167619347972}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 3.80652117729187) {
                        memcpy(var168, (double[]){0.5090329762354598, 0.4909670237645402}, 2 * sizeof(double));
                    } else {
                        memcpy(var168, (double[]){0.73293892175652, 0.26706107824348}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var33, var168, 2, var32);
    double var169[2];
    if (input[1] <= -2.4430497884750366) {
        if (input[11] <= 0.00007821349208825268) {
            if (input[21] <= -0.000069535610236926) {
                if (input[25] <= 0.000027015049454348627) {
                    if (input[4] <= 0.00007414417632389814) {
                        memcpy(var169, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var169, (double[]){0.8205989364679541, 0.17940106353204593}, 2 * sizeof(double));
                    }
                } else {
                    if (input[6] <= 0.00003439892680034973) {
                        memcpy(var169, (double[]){0.9412088416032285, 0.058791158396771535}, 2 * sizeof(double));
                    } else {
                        memcpy(var169, (double[]){0.5135150913655205, 0.4864849086344795}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[7] <= 0.0000004610976418462087) {
                    if (input[10] <= 0.00003397861473786179) {
                        memcpy(var169, (double[]){0.6794570003293126, 0.32054299967068756}, 2 * sizeof(double));
                    } else {
                        memcpy(var169, (double[]){0.40616801877072517, 0.5938319812292748}, 2 * sizeof(double));
                    }
                } else {
                    if (input[25] <= 0.00011204588008695282) {
                        memcpy(var169, (double[]){0.8276696418969781, 0.17233035810302194}, 2 * sizeof(double));
                    } else {
                        memcpy(var169, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[2] <= 58.666433334350586) {
                if (input[19] <= 0.00005888455234526191) {
                    if (input[12] <= 0.000020087489247089252) {
                        memcpy(var169, (double[]){0.7408530422478269, 0.25914695775217306}, 2 * sizeof(double));
                    } else {
                        memcpy(var169, (double[]){0.09416752312435767, 0.9058324768756424}, 2 * sizeof(double));
                    }
                } else {
                    if (input[19] <= 0.0001164978530141525) {
                        memcpy(var169, (double[]){0.7329389217565202, 0.26706107824347974}, 2 * sizeof(double));
                    } else {
                        memcpy(var169, (double[]){0.9648439642406625, 0.03515603575933748}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[25] <= 0.00004372823423182126) {
                    memcpy(var169, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[25] <= 0.00004655099110095762) {
                        memcpy(var169, (double[]){0.8205989364679541, 0.17940106353204593}, 2 * sizeof(double));
                    } else {
                        memcpy(var169, (double[]){0.16791386682956624, 0.8320861331704338}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[0] <= 2.2238739728927612) {
            if (input[21] <= 0.0000009308257631346351) {
                if (input[1] <= -1.6302378177642822) {
                    if (input[22] <= 0.000006517551355500473) {
                        memcpy(var169, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                    } else {
                        memcpy(var169, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 0.31297293305397034) {
                        memcpy(var169, (double[]){0.6547651888341544, 0.34523481116584576}, 2 * sizeof(double));
                    } else {
                        memcpy(var169, (double[]){0.40117765846017367, 0.5988223415398262}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[15] <= 0.00016257925744866952) {
                    if (input[19] <= 0.000039165461203083396) {
                        memcpy(var169, (double[]){0.062170013358495334, 0.9378299866415046}, 2 * sizeof(double));
                    } else {
                        memcpy(var169, (double[]){0.23236236835616908, 0.767637631643831}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var169, (double[]){0.8205989364679541, 0.1794010635320459}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[4] <= 0.000059062249420094304) {
                if (input[1] <= 5.870112895965576) {
                    if (input[24] <= 0.00003263541839260142) {
                        memcpy(var169, (double[]){0.4807113648638222, 0.5192886351361777}, 2 * sizeof(double));
                    } else {
                        memcpy(var169, (double[]){0.8099665804225961, 0.19003341957740405}, 2 * sizeof(double));
                    }
                } else {
                    if (input[9] <= 0.9987818002700806) {
                        memcpy(var169, (double[]){0.5745284817500722, 0.42547151824992774}, 2 * sizeof(double));
                    } else {
                        memcpy(var169, (double[]){0.36596831019085524, 0.6340316898091447}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[10] <= 0.000011129162885481492) {
                    if (input[18] <= -0.00007653345528524369) {
                        memcpy(var169, (double[]){0.7742957746478873, 0.22570422535211274}, 2 * sizeof(double));
                    } else {
                        memcpy(var169, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[18] <= -0.00010621331603033468) {
                        memcpy(var169, (double[]){0.3637717121588089, 0.636228287841191}, 2 * sizeof(double));
                    } else {
                        memcpy(var169, (double[]){0.6542203652484352, 0.3457796347515647}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var32, var169, 2, var31);
    double var170[2];
    if (input[11] <= 0.00002554643197072437) {
        if (input[13] <= 0.0000009323987910647702) {
            if (input[16] <= 0.000013972225929137494) {
                if (input[12] <= 0.0000009281829136398301) {
                    memcpy(var170, (double[]){0.7742957746478872, 0.2257042253521127}, 2 * sizeof(double));
                } else {
                    memcpy(var170, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[21] <= -0.000026546810659056064) {
                    memcpy(var170, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    memcpy(var170, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[24] <= 0.000021833618120581377) {
                if (input[21] <= 0.00007614603237016127) {
                    if (input[0] <= 4.60656213760376) {
                        memcpy(var170, (double[]){0.8235538652540039, 0.17644613474599627}, 2 * sizeof(double));
                    } else {
                        memcpy(var170, (double[]){0.5571063359358804, 0.44289366406411956}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= 0.00013949826097814366) {
                        memcpy(var170, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var170, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[16] <= 0.000026468806026969105) {
                    if (input[22] <= 0.00005454319943964947) {
                        memcpy(var170, (double[]){0.8205989364679542, 0.17940106353204588}, 2 * sizeof(double));
                    } else {
                        memcpy(var170, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[15] <= 0.000057618613936938345) {
                        memcpy(var170, (double[]){0.07309897781101965, 0.9269010221889803}, 2 * sizeof(double));
                    } else {
                        memcpy(var170, (double[]){0.6202927985106202, 0.37970720148937975}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[4] <= 0.000058142233683611266) {
            if (input[12] <= 0.0000004619936362360022) {
                if (input[6] <= 0.00003717683102877345) {
                    memcpy(var170, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[11] <= 0.0000658977405691985) {
                        memcpy(var170, (double[]){0.7462247610429273, 0.25377523895707255}, 2 * sizeof(double));
                    } else {
                        memcpy(var170, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[7] <= 0.000000925010454011499) {
                    if (input[15] <= 0.00009437330299988389) {
                        memcpy(var170, (double[]){0.3633559256148691, 0.6366440743851309}, 2 * sizeof(double));
                    } else {
                        memcpy(var170, (double[]){0.10417604282634951, 0.8958239571736505}, 2 * sizeof(double));
                    }
                } else {
                    if (input[3] <= 64.82178115844727) {
                        memcpy(var170, (double[]){0.655232756334987, 0.34476724366501293}, 2 * sizeof(double));
                    } else {
                        memcpy(var170, (double[]){0.5282722008211906, 0.4717277991788095}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[25] <= 0.000009325407972937683) {
                if (input[9] <= 0.5568948090076447) {
                    memcpy(var170, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[0] <= 7.9450883865356445) {
                        memcpy(var170, (double[]){0.8968092984320165, 0.1031907015679835}, 2 * sizeof(double));
                    } else {
                        memcpy(var170, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[11] <= 0.00008240059833042324) {
                    if (input[9] <= 0.9990494251251221) {
                        memcpy(var170, (double[]){0.6909982967144798, 0.30900170328552035}, 2 * sizeof(double));
                    } else {
                        memcpy(var170, (double[]){0.36684270831961424, 0.6331572916803858}, 2 * sizeof(double));
                    }
                } else {
                    if (input[19] <= 0.00010667827154975384) {
                        memcpy(var170, (double[]){0.3606707803606577, 0.6393292196393424}, 2 * sizeof(double));
                    } else {
                        memcpy(var170, (double[]){0.7442973708068903, 0.25570262919310977}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var31, var170, 2, var30);
    double var171[2];
    if (input[9] <= 0.9982762634754181) {
        if (input[9] <= 0.9967314600944519) {
            if (input[10] <= 0.000029792911846016068) {
                if (input[0] <= 6.632614612579346) {
                    if (input[16] <= 0.00000046226057293097256) {
                        memcpy(var171, (double[]){0.13229852901362693, 0.8677014709863732}, 2 * sizeof(double));
                    } else {
                        memcpy(var171, (double[]){0.6814779193716434, 0.31852208062835663}, 2 * sizeof(double));
                    }
                } else {
                    if (input[15] <= 0.00011356348113622516) {
                        memcpy(var171, (double[]){0.8284210213246885, 0.17157897867531152}, 2 * sizeof(double));
                    } else {
                        memcpy(var171, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 97.0246810913086) {
                    if (input[18] <= -0.00011175421968800947) {
                        memcpy(var171, (double[]){0.820598936467954, 0.17940106353204588}, 2 * sizeof(double));
                    } else {
                        memcpy(var171, (double[]){0.4396413842848859, 0.5603586157151141}, 2 * sizeof(double));
                    }
                } else {
                    if (input[19] <= 0.000017159604794869665) {
                        memcpy(var171, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var171, (double[]){0.9412088416032285, 0.05879115839677154}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[2] <= 52.355709075927734) {
                if (input[11] <= 0.00009094866982195526) {
                    memcpy(var171, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    memcpy(var171, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                }
            } else {
                if (input[2] <= 84.04181671142578) {
                    if (input[21] <= 0.00006018446947564371) {
                        memcpy(var171, (double[]){0.9786055205099963, 0.02139447949000367}, 2 * sizeof(double));
                    } else {
                        memcpy(var171, (double[]){0.7742957746478873, 0.22570422535211268}, 2 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 7.757150888442993) {
                        memcpy(var171, (double[]){0.43257598111537326, 0.5674240188846268}, 2 * sizeof(double));
                    } else {
                        memcpy(var171, (double[]){0.9014604150653344, 0.09853958493466565}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[1] <= 25.286251068115234) {
            if (input[4] <= 0.0000353781088051619) {
                if (input[2] <= 98.73526000976562) {
                    if (input[10] <= 0.00004758341674460098) {
                        memcpy(var171, (double[]){0.25184548922517275, 0.7481545107748273}, 2 * sizeof(double));
                    } else {
                        memcpy(var171, (double[]){0.41871657372167914, 0.581283426278321}, 2 * sizeof(double));
                    }
                } else {
                    if (input[18] <= 0.000025457711672061123) {
                        memcpy(var171, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var171, (double[]){0.8482680623865759, 0.15173193761342416}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[4] <= 0.00003720631866599433) {
                    if (input[24] <= -0.000007463220299541717) {
                        memcpy(var171, (double[]){0.24626238871157397, 0.753737611288426}, 2 * sizeof(double));
                    } else {
                        memcpy(var171, (double[]){0.8474276581998708, 0.15257234180012924}, 2 * sizeof(double));
                    }
                } else {
                    if (input[8] <= 0.0000018635912510944763) {
                        memcpy(var171, (double[]){0.4340289513329402, 0.5659710486670598}, 2 * sizeof(double));
                    } else {
                        memcpy(var171, (double[]){0.7004081802224736, 0.2995918197775264}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            memcpy(var171, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var30, var171, 2, var29);
    double var172[2];
    if (input[2] <= 99.53027725219727) {
        if (input[1] <= 7.764617681503296) {
            if (input[7] <= 0.00000046226142558225547) {
                if (input[10] <= 0.00003635002940427512) {
                    if (input[10] <= -0.0000018630803424457554) {
                        memcpy(var172, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var172, (double[]){0.6736737773973374, 0.32632622260266275}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= -0.00001212709230458131) {
                        memcpy(var172, (double[]){0.4843041310236809, 0.5156958689763191}, 2 * sizeof(double));
                    } else {
                        memcpy(var172, (double[]){0.31814575662166283, 0.6818542433783371}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[21] <= 0.00008119700942188501) {
                    if (input[2] <= 70.70156478881836) {
                        memcpy(var172, (double[]){0.612112263545814, 0.3878877364541861}, 2 * sizeof(double));
                    } else {
                        memcpy(var172, (double[]){0.8480336838910962, 0.15196631610890368}, 2 * sizeof(double));
                    }
                } else {
                    if (input[24] <= 0.000035947161450167187) {
                        memcpy(var172, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var172, (double[]){0.4616838127230736, 0.5383161872769263}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[4] <= 0.00005806441367894877) {
                if (input[22] <= 0.000054152949815033935) {
                    if (input[11] <= 0.00009291918104281649) {
                        memcpy(var172, (double[]){0.4292212914434494, 0.5707787085565507}, 2 * sizeof(double));
                    } else {
                        memcpy(var172, (double[]){0.7572053303949589, 0.24279466960504112}, 2 * sizeof(double));
                    }
                } else {
                    if (input[11] <= 0.00004522456038102973) {
                        memcpy(var172, (double[]){0.10828644942077333, 0.8917135505792267}, 2 * sizeof(double));
                    } else {
                        memcpy(var172, (double[]){0.33087882635068405, 0.6691211736493159}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 56.8398551940918) {
                    if (input[7] <= 0.000016341056380042573) {
                        memcpy(var172, (double[]){0.3138514236780131, 0.6861485763219869}, 2 * sizeof(double));
                    } else {
                        memcpy(var172, (double[]){0.948176893847522, 0.051823106152477975}, 2 * sizeof(double));
                    }
                } else {
                    if (input[18] <= -0.00008535631786799058) {
                        memcpy(var172, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var172, (double[]){0.7280778900971556, 0.27192210990284443}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[21] <= 0.0000004658629677578574) {
            memcpy(var172, (double[]){0.0, 1.0}, 2 * sizeof(double));
        } else {
            if (input[25] <= 0.000024679665330040734) {
                if (input[17] <= 0.5) {
                    memcpy(var172, (double[]){0.9014604150653344, 0.09853958493466565}, 2 * sizeof(double));
                } else {
                    memcpy(var172, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[3] <= 96.37638854980469) {
                    if (input[19] <= 0.00004151856046519242) {
                        memcpy(var172, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var172, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var172, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var29, var172, 2, var28);
    double var173[2];
    if (input[21] <= 0.00008292879283544607) {
        if (input[10] <= 0.000018611402992974035) {
            if (input[24] <= -0.0000009336588675523672) {
                if (input[3] <= 14.931654930114746) {
                    memcpy(var173, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[21] <= 0.00006012297671986744) {
                        memcpy(var173, (double[]){0.7679235835612216, 0.23207641643877838}, 2 * sizeof(double));
                    } else {
                        memcpy(var173, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[16] <= 0.0000009269863596728101) {
                    memcpy(var173, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[10] <= 0.0000004655151144561387) {
                        memcpy(var173, (double[]){0.24626238871157397, 0.753737611288426}, 2 * sizeof(double));
                    } else {
                        memcpy(var173, (double[]){0.6577799486562008, 0.34222005134379924}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[7] <= 0.00000046111040319374297) {
                if (input[12] <= 0.000025175212613248732) {
                    if (input[2] <= 69.44572448730469) {
                        memcpy(var173, (double[]){0.41589010006533456, 0.5841098999346653}, 2 * sizeof(double));
                    } else {
                        memcpy(var173, (double[]){0.2136688812505312, 0.7863311187494687}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 2.6348146200180054) {
                        memcpy(var173, (double[]){0.3637717121588094, 0.6362282878411907}, 2 * sizeof(double));
                    } else {
                        memcpy(var173, (double[]){0.5466702670729984, 0.4533297329270015}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[9] <= 0.19930892437696457) {
                    memcpy(var173, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[8] <= 0.000012067764146195259) {
                        memcpy(var173, (double[]){0.6179128226999173, 0.3820871773000826}, 2 * sizeof(double));
                    } else {
                        memcpy(var173, (double[]){0.32665923921693457, 0.6733407607830654}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[2] <= 85.23999786376953) {
            if (input[13] <= 0.00009856826000032015) {
                if (input[18] <= -0.000023263490220415406) {
                    if (input[13] <= 0.000020949440113327) {
                        memcpy(var173, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var173, (double[]){0.6317150244182705, 0.36828497558172946}, 2 * sizeof(double));
                    }
                } else {
                    if (input[22] <= 0.00003605115671234671) {
                        memcpy(var173, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var173, (double[]){0.18893080582046526, 0.8110691941795346}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 4.19415020942688) {
                    if (input[22] <= 0.00008409246584051289) {
                        memcpy(var173, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var173, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var173, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[0] <= 12.044354915618896) {
                memcpy(var173, (double[]){0.0, 1.0}, 2 * sizeof(double));
            } else {
                memcpy(var173, (double[]){0.8727922206787061, 0.12720777932129393}, 2 * sizeof(double));
            }
        }
    }
    add_vectors(var28, var173, 2, var27);
    double var174[2];
    if (input[21] <= 0.00006901270535308868) {
        if (input[9] <= 0.99931600689888) {
            if (input[7] <= 0.0000009245185879080964) {
                if (input[16] <= 0.00009176153253065422) {
                    if (input[21] <= 0.00004593198900693096) {
                        memcpy(var174, (double[]){0.4848572894579041, 0.5151427105420959}, 2 * sizeof(double));
                    } else {
                        memcpy(var174, (double[]){0.8205989364679541, 0.1794010635320459}, 2 * sizeof(double));
                    }
                } else {
                    if (input[13] <= 0.0000191487415577285) {
                        memcpy(var174, (double[]){0.36377171215880894, 0.6362282878411911}, 2 * sizeof(double));
                    } else {
                        memcpy(var174, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[1] <= -4.754183769226074) {
                    if (input[2] <= 55.57006645202637) {
                        memcpy(var174, (double[]){0.9195834901518003, 0.08041650984819973}, 2 * sizeof(double));
                    } else {
                        memcpy(var174, (double[]){0.6775873084922718, 0.32241269150772833}, 2 * sizeof(double));
                    }
                } else {
                    if (input[3] <= 87.64329528808594) {
                        memcpy(var174, (double[]){0.5668205398899239, 0.4331794601100761}, 2 * sizeof(double));
                    } else {
                        memcpy(var174, (double[]){0.7847142047482104, 0.2152857952517896}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[11] <= 0.0000018570968336462101) {
                if (input[21] <= 0.00000046542973564100976) {
                    memcpy(var174, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[18] <= 0.0000288771889245254) {
                        memcpy(var174, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var174, (double[]){0.7742957746478873, 0.2257042253521127}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 99.60041809082031) {
                    if (input[12] <= 0.000042031608245451935) {
                        memcpy(var174, (double[]){0.2379358336072195, 0.7620641663927804}, 2 * sizeof(double));
                    } else {
                        memcpy(var174, (double[]){0.49176628445962456, 0.5082337155403753}, 2 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 8.67027997970581) {
                        memcpy(var174, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var174, (double[]){0.9014604150653344, 0.09853958493466568}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[8] <= 0.00003420370558160357) {
            if (input[12] <= 0.00012141268234699965) {
                if (input[7] <= 0.0000009307052550866501) {
                    if (input[11] <= 0.00009645265527069569) {
                        memcpy(var174, (double[]){0.19941385237488737, 0.8005861476251126}, 2 * sizeof(double));
                    } else {
                        memcpy(var174, (double[]){0.5135150913655204, 0.4864849086344796}, 2 * sizeof(double));
                    }
                } else {
                    if (input[10] <= 0.00007377975998679176) {
                        memcpy(var174, (double[]){0.6683012172884529, 0.331698782711547}, 2 * sizeof(double));
                    } else {
                        memcpy(var174, (double[]){0.09416752312435765, 0.9058324768756424}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[18] <= 0.000012017075277981348) {
                    memcpy(var174, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                } else {
                    memcpy(var174, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[6] <= 0.00003154878140776418) {
                memcpy(var174, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                memcpy(var174, (double[]){0.7742957746478873, 0.22570422535211274}, 2 * sizeof(double));
            }
        }
    }
    add_vectors(var27, var174, 2, var26);
    double var175[2];
    if (input[24] <= -0.00014637218555435538) {
        if (input[4] <= 0.0001070200014510192) {
            memcpy(var175, (double[]){1.0, 0.0}, 2 * sizeof(double));
        } else {
            memcpy(var175, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
        }
    } else {
        if (input[21] <= 0.00007401102266157977) {
            if (input[6] <= 0.000019560695363907143) {
                if (input[13] <= 0.00005309096377459355) {
                    if (input[11] <= 0.000026539066311670467) {
                        memcpy(var175, (double[]){0.6687862805431545, 0.33121371945684547}, 2 * sizeof(double));
                    } else {
                        memcpy(var175, (double[]){0.2759789156626504, 0.7240210843373495}, 2 * sizeof(double));
                    }
                } else {
                    if (input[10] <= 0.00004617463309841696) {
                        memcpy(var175, (double[]){0.8186407362182445, 0.18135926378175554}, 2 * sizeof(double));
                    } else {
                        memcpy(var175, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[9] <= 0.9984177350997925) {
                    if (input[7] <= 0.0000004610976418462087) {
                        memcpy(var175, (double[]){0.3832055400654626, 0.6167944599345375}, 2 * sizeof(double));
                    } else {
                        memcpy(var175, (double[]){0.6468508966095582, 0.3531491033904419}, 2 * sizeof(double));
                    }
                } else {
                    if (input[3] <= 82.98590469360352) {
                        memcpy(var175, (double[]){0.32529770879442926, 0.6747022912055707}, 2 * sizeof(double));
                    } else {
                        memcpy(var175, (double[]){0.5078648739747574, 0.4921351260252426}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[4] <= 0.000026971213628712576) {
                if (input[10] <= 0.00004619005812855903) {
                    if (input[21] <= 0.00009806144225876778) {
                        memcpy(var175, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var175, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var175, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[13] <= 0.000023775295630912296) {
                    if (input[1] <= 18.46775722503662) {
                        memcpy(var175, (double[]){0.06769017661318245, 0.9323098233868176}, 2 * sizeof(double));
                    } else {
                        memcpy(var175, (double[]){0.43257598111537326, 0.5674240188846268}, 2 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 84.24466323852539) {
                        memcpy(var175, (double[]){0.6058645055288435, 0.3941354944711564}, 2 * sizeof(double));
                    } else {
                        memcpy(var175, (double[]){0.2667810533978058, 0.7332189466021943}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var26, var175, 2, var25);
    double var176[2];
    if (input[7] <= 0.0000009252795223346766) {
        if (input[19] <= 0.0000009319408320607181) {
            if (input[10] <= 0.00001860920474427985) {
                if (input[6] <= 0.0000018570968336462101) {
                    if (input[2] <= 35.4657096862793) {
                        memcpy(var176, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var176, (double[]){0.8727922206787061, 0.12720777932129393}, 2 * sizeof(double));
                    }
                } else {
                    if (input[6] <= 0.00001113031612476334) {
                        memcpy(var176, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var176, (double[]){0.36377171215880894, 0.6362282878411911}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[25] <= 0.00005638388574880082) {
                    if (input[3] <= 80.15346145629883) {
                        memcpy(var176, (double[]){0.1185796327752163, 0.8814203672247837}, 2 * sizeof(double));
                    } else {
                        memcpy(var176, (double[]){0.5040832115533397, 0.4959167884466604}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var176, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[6] <= 0.00001533270551590249) {
                if (input[1] <= 7.491390228271484) {
                    if (input[18] <= -0.00007472341530956328) {
                        memcpy(var176, (double[]){0.1496071027655883, 0.8503928972344118}, 2 * sizeof(double));
                    } else {
                        memcpy(var176, (double[]){0.8840378701079418, 0.11596212989205817}, 2 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 94.51353073120117) {
                        memcpy(var176, (double[]){0.2890592265792522, 0.7109407734207478}, 2 * sizeof(double));
                    } else {
                        memcpy(var176, (double[]){0.740853042247827, 0.25914695775217306}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[16] <= 0.00010261051647830755) {
                    if (input[1] <= -12.079644680023193) {
                        memcpy(var176, (double[]){0.04291946013994201, 0.957080539860058}, 2 * sizeof(double));
                    } else {
                        memcpy(var176, (double[]){0.43665838405207846, 0.5633416159479215}, 2 * sizeof(double));
                    }
                } else {
                    if (input[18] <= -0.0000944065504882019) {
                        memcpy(var176, (double[]){0.6957759848125296, 0.3042240151874704}, 2 * sizeof(double));
                    } else {
                        memcpy(var176, (double[]){0.06769017661318247, 0.9323098233868176}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[24] <= -0.00003778814971155953) {
            if (input[25] <= 0.00007888204709161073) {
                if (input[22] <= 0.00009567258530296385) {
                    if (input[21] <= 0.000055203061492647976) {
                        memcpy(var176, (double[]){0.9079436316309129, 0.0920563683690872}, 2 * sizeof(double));
                    } else {
                        memcpy(var176, (double[]){0.36377171215880894, 0.6362282878411911}, 2 * sizeof(double));
                    }
                } else {
                    if (input[9] <= 0.974468320608139) {
                        memcpy(var176, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var176, (double[]){0.8205989364679541, 0.1794010635320459}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[1] <= -3.636371374130249) {
                    if (input[0] <= -2.137820303440094) {
                        memcpy(var176, (double[]){0.8591311991795473, 0.1408688008204527}, 2 * sizeof(double));
                    } else {
                        memcpy(var176, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[3] <= 78.71837615966797) {
                        memcpy(var176, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var176, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[24] <= -0.000028477511477831285) {
                if (input[18] <= -0.0000004661435184516449) {
                    memcpy(var176, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                } else {
                    memcpy(var176, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[2] <= 43.001630783081055) {
                    if (input[16] <= 0.00009822009087656625) {
                        memcpy(var176, (double[]){0.8672760079273524, 0.13272399207264768}, 2 * sizeof(double));
                    } else {
                        memcpy(var176, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[24] <= -0.000009285271971748443) {
                        memcpy(var176, (double[]){0.8056471480007581, 0.194352851999242}, 2 * sizeof(double));
                    } else {
                        memcpy(var176, (double[]){0.5345179099353121, 0.4654820900646879}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var25, var176, 2, var24);
    double var177[2];
    if (input[21] <= -0.00001534162720417953) {
        if (input[15] <= -0.00007246822860906832) {
            if (input[15] <= -0.00009913081157719716) {
                if (input[24] <= 0.00005477978629642166) {
                    if (input[9] <= 0.3222676217556) {
                        memcpy(var177, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var177, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var177, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[9] <= 0.22591128200292587) {
                    memcpy(var177, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                } else {
                    if (input[3] <= 31.65005874633789) {
                        memcpy(var177, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var177, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[7] <= 0.000000930414756794562) {
                if (input[22] <= 0.00003822057988145389) {
                    if (input[11] <= 0.00003631516665336676) {
                        memcpy(var177, (double[]){0.3320799166402391, 0.6679200833597609}, 2 * sizeof(double));
                    } else {
                        memcpy(var177, (double[]){0.7371792392254548, 0.26282076077454525}, 2 * sizeof(double));
                    }
                } else {
                    if (input[6] <= 0.0000009328784642548271) {
                        memcpy(var177, (double[]){0.8727922206787061, 0.12720777932129393}, 2 * sizeof(double));
                    } else {
                        memcpy(var177, (double[]){0.4033326760912132, 0.5966673239087869}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[25] <= 0.00011095426452811807) {
                    if (input[6] <= 0.00009076786955120042) {
                        memcpy(var177, (double[]){0.7508160507463236, 0.24918394925367637}, 2 * sizeof(double));
                    } else {
                        memcpy(var177, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var177, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        }
    } else {
        if (input[15] <= 0.00016115563630592078) {
            if (input[16] <= 0.00009217565457220189) {
                if (input[9] <= 0.9982450902462006) {
                    if (input[21] <= -0.000012982797670701984) {
                        memcpy(var177, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var177, (double[]){0.6008027739496236, 0.3991972260503764}, 2 * sizeof(double));
                    }
                } else {
                    if (input[11] <= 0.000001397548146542249) {
                        memcpy(var177, (double[]){0.7879765153394526, 0.21202348466054743}, 2 * sizeof(double));
                    } else {
                        memcpy(var177, (double[]){0.3982947754986169, 0.6017052245013831}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[7] <= 0.0000069594507294823416) {
                    if (input[15] <= 0.00013936668983660638) {
                        memcpy(var177, (double[]){0.10619148512341312, 0.893808514876587}, 2 * sizeof(double));
                    } else {
                        memcpy(var177, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    }
                } else {
                    if (input[16] <= 0.00010737267075455748) {
                        memcpy(var177, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var177, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            memcpy(var177, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var24, var177, 2, var23);
    double var178[2];
    if (input[7] <= 0.0000009245468106655608) {
        if (input[1] <= 6.498862028121948) {
            if (input[17] <= 0.5) {
                if (input[6] <= 0.000024694579224160407) {
                    if (input[25] <= 0.00010809974992298521) {
                        memcpy(var178, (double[]){0.5334788937409024, 0.4665211062590976}, 2 * sizeof(double));
                    } else {
                        memcpy(var178, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[10] <= 0.00007034254667814821) {
                        memcpy(var178, (double[]){0.4515554947123446, 0.5484445052876555}, 2 * sizeof(double));
                    } else {
                        memcpy(var178, (double[]){0.25543036357300497, 0.7445696364269949}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[24] <= -0.00009502215834800154) {
                    if (input[10] <= 0.000061001834183116443) {
                        memcpy(var178, (double[]){0.9648439642406625, 0.03515603575933747}, 2 * sizeof(double));
                    } else {
                        memcpy(var178, (double[]){0.41304500950905126, 0.5869549904909488}, 2 * sizeof(double));
                    }
                } else {
                    if (input[0] <= -5.1963818073272705) {
                        memcpy(var178, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var178, (double[]){0.5119306426373444, 0.4880693573626556}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[1] <= 7.127990484237671) {
                memcpy(var178, (double[]){0.0, 1.0}, 2 * sizeof(double));
            } else {
                if (input[2] <= 99.52902603149414) {
                    if (input[15] <= -0.00005649197737511713) {
                        memcpy(var178, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var178, (double[]){0.3716853026373847, 0.6283146973626152}, 2 * sizeof(double));
                    }
                } else {
                    if (input[15] <= 0.00005198930739425123) {
                        memcpy(var178, (double[]){0.8934567012022827, 0.10654329879771736}, 2 * sizeof(double));
                    } else {
                        memcpy(var178, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[1] <= -1.6452283263206482) {
            if (input[15] <= 0.000013051634596195072) {
                if (input[11] <= 0.000027062298613600433) {
                    if (input[2] <= 46.16553497314453) {
                        memcpy(var178, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    } else {
                        memcpy(var178, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[13] <= 0.000004196440386294853) {
                        memcpy(var178, (double[]){0.43257598111537315, 0.5674240188846268}, 2 * sizeof(double));
                    } else {
                        memcpy(var178, (double[]){0.8554793703001287, 0.14452062969987134}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[8] <= 0.000005120022251503542) {
                    if (input[18] <= 0.00007921399446786381) {
                        memcpy(var178, (double[]){0.7290449312479798, 0.2709550687520203}, 2 * sizeof(double));
                    } else {
                        memcpy(var178, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var178, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[0] <= 1.7970733642578125) {
                if (input[22] <= 0.0000432475826528389) {
                    if (input[19] <= 0.000004191077096038498) {
                        memcpy(var178, (double[]){0.43257598111537315, 0.5674240188846268}, 2 * sizeof(double));
                    } else {
                        memcpy(var178, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[13] <= 0.00005153259735379834) {
                        memcpy(var178, (double[]){0.6517164732032601, 0.34828352679673996}, 2 * sizeof(double));
                    } else {
                        memcpy(var178, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[12] <= 0.00007141226524254307) {
                    if (input[10] <= 0.000008356185617230949) {
                        memcpy(var178, (double[]){0.8572144567578104, 0.14278554324218967}, 2 * sizeof(double));
                    } else {
                        memcpy(var178, (double[]){0.5322963818508133, 0.46770361814918676}, 2 * sizeof(double));
                    }
                } else {
                    if (input[24] <= 0.00018047437333734706) {
                        memcpy(var178, (double[]){0.863324838306816, 0.13667516169318403}, 2 * sizeof(double));
                    } else {
                        memcpy(var178, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var23, var178, 2, var22);
    double var179[2];
    if (input[10] <= 0.000021400397599791177) {
        if (input[0] <= -1.491954267024994) {
            if (input[0] <= -4.549048900604248) {
                if (input[3] <= 32.31717109680176) {
                    if (input[22] <= 0.00002412217645542114) {
                        memcpy(var179, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var179, (double[]){0.8372889960654906, 0.16271100393450946}, 2 * sizeof(double));
                    }
                } else {
                    if (input[9] <= 0.5127248018980026) {
                        memcpy(var179, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var179, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[16] <= 0.0000046626181529063615) {
                    if (input[7] <= 0.00000046575794954151206) {
                        memcpy(var179, (double[]){0.186135093956323, 0.8138649060436769}, 2 * sizeof(double));
                    } else {
                        memcpy(var179, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[8] <= 0.000026110850740224123) {
                        memcpy(var179, (double[]){0.9896966871875652, 0.0103033128124347}, 2 * sizeof(double));
                    } else {
                        memcpy(var179, (double[]){0.4777578621476291, 0.522242137852371}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[22] <= 0.00009243408567272127) {
                if (input[13] <= 0.0000532309350091964) {
                    if (input[10] <= 0.0000027855127200382412) {
                        memcpy(var179, (double[]){0.777671230081815, 0.22232876991818498}, 2 * sizeof(double));
                    } else {
                        memcpy(var179, (double[]){0.3669264280109319, 0.6330735719890682}, 2 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 2.267334461212158) {
                        memcpy(var179, (double[]){0.23772972972972972, 0.7622702702702703}, 2 * sizeof(double));
                    } else {
                        memcpy(var179, (double[]){0.7688727177369129, 0.23112728226308715}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[11] <= 0.00001946845350175863) {
                    if (input[1] <= 3.8811919689178467) {
                        memcpy(var179, (double[]){0.7742957746478873, 0.2257042253521127}, 2 * sizeof(double));
                    } else {
                        memcpy(var179, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[18] <= -0.000021374133211793378) {
                        memcpy(var179, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var179, (double[]){0.6621998042610856, 0.33780019573891434}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[21] <= 0.00008300937406602316) {
            if (input[12] <= 0.00010853131243493408) {
                if (input[9] <= 0.9981359839439392) {
                    if (input[12] <= -0.0000027948428282797977) {
                        memcpy(var179, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var179, (double[]){0.5256053075630145, 0.4743946924369855}, 2 * sizeof(double));
                    }
                } else {
                    if (input[24] <= 0.000037270327084115706) {
                        memcpy(var179, (double[]){0.46612492051075705, 0.5338750794892428}, 2 * sizeof(double));
                    } else {
                        memcpy(var179, (double[]){0.32665923921693485, 0.6733407607830652}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[3] <= 42.986717224121094) {
                    memcpy(var179, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[12] <= 0.0001491281363996677) {
                        memcpy(var179, (double[]){0.7507610602683862, 0.24923893973161382}, 2 * sizeof(double));
                    } else {
                        memcpy(var179, (double[]){0.29369928879094465, 0.7063007112090554}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[23] <= 0.5) {
                memcpy(var179, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                if (input[13] <= 0.00008997632903628983) {
                    if (input[7] <= 0.0000009340043050087843) {
                        memcpy(var179, (double[]){0.186135093956323, 0.813864906043677}, 2 * sizeof(double));
                    } else {
                        memcpy(var179, (double[]){0.5846169183988834, 0.4153830816011166}, 2 * sizeof(double));
                    }
                } else {
                    if (input[3] <= 68.99442291259766) {
                        memcpy(var179, (double[]){0.720117891059928, 0.2798821089400721}, 2 * sizeof(double));
                    } else {
                        memcpy(var179, (double[]){0.2026261230131306, 0.7973738769868693}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var22, var179, 2, var21);
    double var180[2];
    if (input[4] <= 0.000008779174095252529) {
        if (input[11] <= 0.000018992523109773174) {
            if (input[3] <= 79.22734069824219) {
                memcpy(var180, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                memcpy(var180, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            memcpy(var180, (double[]){0.0, 1.0}, 2 * sizeof(double));
        }
    } else {
        if (input[10] <= 0.000017662107893556822) {
            if (input[0] <= 3.8206762075424194) {
                if (input[25] <= 0.000038156671507749707) {
                    if (input[4] <= 0.00004371725481178146) {
                        memcpy(var180, (double[]){0.8000935599563387, 0.19990644004366132}, 2 * sizeof(double));
                    } else {
                        memcpy(var180, (double[]){0.34545597360772917, 0.6545440263922709}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= 0.0000852225894050207) {
                        memcpy(var180, (double[]){0.852334931273928, 0.14766506872607207}, 2 * sizeof(double));
                    } else {
                        memcpy(var180, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[16] <= 0.000014832831311650807) {
                    if (input[20] <= 0.5) {
                        memcpy(var180, (double[]){0.49499155880697804, 0.505008441193022}, 2 * sizeof(double));
                    } else {
                        memcpy(var180, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[9] <= 0.9977373480796814) {
                        memcpy(var180, (double[]){0.784591449374572, 0.21540855062542788}, 2 * sizeof(double));
                    } else {
                        memcpy(var180, (double[]){0.4021506556207822, 0.5978493443792178}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[9] <= 0.9987818002700806) {
                if (input[7] <= 0.0000009312404642969341) {
                    if (input[6] <= 0.00011187152995262295) {
                        memcpy(var180, (double[]){0.519459298001066, 0.480540701998934}, 2 * sizeof(double));
                    } else {
                        memcpy(var180, (double[]){0.15642895251645025, 0.8435710474835498}, 2 * sizeof(double));
                    }
                } else {
                    if (input[11] <= 0.00015994405839592218) {
                        memcpy(var180, (double[]){0.6345136091975473, 0.3654863908024528}, 2 * sizeof(double));
                    } else {
                        memcpy(var180, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[4] <= 0.000015221380635921378) {
                    if (input[13] <= 0.000021392798771557864) {
                        memcpy(var180, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var180, (double[]){0.722139029003783, 0.27786097099621687}, 2 * sizeof(double));
                    }
                } else {
                    if (input[11] <= 0.00009302570833824575) {
                        memcpy(var180, (double[]){0.27909731599228665, 0.7209026840077134}, 2 * sizeof(double));
                    } else {
                        memcpy(var180, (double[]){0.5040832115533395, 0.49591678844666054}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var21, var180, 2, var20);
    double var181[2];
    if (input[10] <= 0.000012064703241776442) {
        if (input[0] <= 4.280290365219116) {
            if (input[3] <= 15.740286350250244) {
                memcpy(var181, (double[]){0.0, 1.0}, 2 * sizeof(double));
            } else {
                if (input[12] <= 0.0001675383246038109) {
                    if (input[19] <= 0.000007907420922492747) {
                        memcpy(var181, (double[]){0.6317150244182707, 0.3682849755817294}, 2 * sizeof(double));
                    } else {
                        memcpy(var181, (double[]){0.8560391681264878, 0.14396083187351216}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var181, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[21] <= -0.000016245979622908635) {
                if (input[13] <= 0.000023587690520798787) {
                    memcpy(var181, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                } else {
                    if (input[1] <= 16.537668228149414) {
                        memcpy(var181, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var181, (double[]){0.8205989364679541, 0.17940106353204593}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[17] <= 0.5) {
                    memcpy(var181, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[9] <= 0.9989406764507294) {
                        memcpy(var181, (double[]){0.7176073229232952, 0.2823926770767047}, 2 * sizeof(double));
                    } else {
                        memcpy(var181, (double[]){0.10497296910243095, 0.8950270308975691}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[7] <= 0.0000004610976418462087) {
            if (input[13] <= 0.000043391657527536154) {
                if (input[16] <= 0.00015917628479655832) {
                    if (input[22] <= 0.000011639606782409828) {
                        memcpy(var181, (double[]){0.1460250264583203, 0.8539749735416797}, 2 * sizeof(double));
                    } else {
                        memcpy(var181, (double[]){0.3390794988407351, 0.6609205011592648}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var181, (double[]){0.9320758715693547, 0.06792412843064535}, 2 * sizeof(double));
                }
            } else {
                if (input[16] <= 0.00010361789463786408) {
                    if (input[21] <= 0.00007797593207214959) {
                        memcpy(var181, (double[]){0.4735356623027217, 0.5264643376972783}, 2 * sizeof(double));
                    } else {
                        memcpy(var181, (double[]){0.27821708270600576, 0.7217829172939944}, 2 * sizeof(double));
                    }
                } else {
                    if (input[16] <= 0.00015499358414672315) {
                        memcpy(var181, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var181, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[18] <= -0.00002703674454096472) {
                if (input[12] <= 0.00015247712144628167) {
                    if (input[10] <= 0.00006334482168313116) {
                        memcpy(var181, (double[]){0.8390854227961481, 0.160914577203852}, 2 * sizeof(double));
                    } else {
                        memcpy(var181, (double[]){0.5665153125301903, 0.4334846874698097}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var181, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[24] <= -0.0000689600346959196) {
                    if (input[7] <= 0.000026032260393549222) {
                        memcpy(var181, (double[]){0.8689804594881858, 0.13101954051181425}, 2 * sizeof(double));
                    } else {
                        memcpy(var181, (double[]){0.4777578621476291, 0.5222421378523708}, 2 * sizeof(double));
                    }
                } else {
                    if (input[4] <= 0.000035640750866150483) {
                        memcpy(var181, (double[]){0.6224028954895954, 0.3775971045104046}, 2 * sizeof(double));
                    } else {
                        memcpy(var181, (double[]){0.44410520813533555, 0.5558947918646645}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var20, var181, 2, var19);
    double var182[2];
    if (input[12] <= 0.00003733621088031214) {
        if (input[21] <= 0.00006399682388291694) {
            if (input[2] <= 99.8034896850586) {
                if (input[1] <= 15.646655559539795) {
                    if (input[16] <= 0.000043799838749691844) {
                        memcpy(var182, (double[]){0.5416836619623688, 0.45831633803763105}, 2 * sizeof(double));
                    } else {
                        memcpy(var182, (double[]){0.34771497869149737, 0.6522850213085027}, 2 * sizeof(double));
                    }
                } else {
                    if (input[22] <= 0.00009577162200002931) {
                        memcpy(var182, (double[]){0.14799360646083945, 0.8520063935391606}, 2 * sizeof(double));
                    } else {
                        memcpy(var182, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var182, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        } else {
            if (input[12] <= 0.000028890462090203073) {
                if (input[8] <= 0.000009751094921739423) {
                    if (input[25] <= 0.000024132260477927048) {
                        memcpy(var182, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    } else {
                        memcpy(var182, (double[]){0.18026658796911113, 0.8197334120308889}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var182, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var182, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[19] <= 0.00008839642396196723) {
            if (input[9] <= 0.9993506371974945) {
                if (input[0] <= -4.782155513763428) {
                    if (input[19] <= 0.00007843342609703541) {
                        memcpy(var182, (double[]){0.39520150963741724, 0.6047984903625827}, 2 * sizeof(double));
                    } else {
                        memcpy(var182, (double[]){0.8511379470506271, 0.14886205294937302}, 2 * sizeof(double));
                    }
                } else {
                    if (input[6] <= 0.00003701935020217206) {
                        memcpy(var182, (double[]){0.7601231779181485, 0.23987682208185154}, 2 * sizeof(double));
                    } else {
                        memcpy(var182, (double[]){0.5689967145723203, 0.43100328542767974}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[4] <= 0.000018339082998863887) {
                    if (input[16] <= 0.00006987828965066001) {
                        memcpy(var182, (double[]){0.8079941529576687, 0.19200584704233112}, 2 * sizeof(double));
                    } else {
                        memcpy(var182, (double[]){0.494991558806978, 0.505008441193022}, 2 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 9.894261837005615) {
                        memcpy(var182, (double[]){0.4884175979910743, 0.5115824020089258}, 2 * sizeof(double));
                    } else {
                        memcpy(var182, (double[]){0.06975471653224842, 0.9302452834677515}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[10] <= 0.00009328991654911079) {
                if (input[15] <= 0.00006674721953459084) {
                    if (input[22] <= 0.000014006430774315959) {
                        memcpy(var182, (double[]){0.8840378701079419, 0.11596212989205817}, 2 * sizeof(double));
                    } else {
                        memcpy(var182, (double[]){0.45200622258349316, 0.5479937774165069}, 2 * sizeof(double));
                    }
                } else {
                    if (input[8] <= 0.000016342469280061778) {
                        memcpy(var182, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var182, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[25] <= 0.00004669532063417137) {
                    if (input[2] <= 46.26560020446777) {
                        memcpy(var182, (double[]){0.6317150244182705, 0.36828497558172946}, 2 * sizeof(double));
                    } else {
                        memcpy(var182, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[23] <= 0.5) {
                        memcpy(var182, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var182, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var19, var182, 2, var18);
    double var183[2];
    if (input[11] <= 0.000011606546195253031) {
        if (input[18] <= 0.00003166970782331191) {
            if (input[1] <= 8.333067893981934) {
                if (input[18] <= -0.00005029867315897718) {
                    if (input[3] <= 51.72085762023926) {
                        memcpy(var183, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var183, (double[]){0.8205989364679541, 0.17940106353204593}, 2 * sizeof(double));
                    }
                } else {
                    if (input[16] <= 0.00009107196819968522) {
                        memcpy(var183, (double[]){0.7985585887578304, 0.20144141124216963}, 2 * sizeof(double));
                    } else {
                        memcpy(var183, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 5.298047780990601) {
                    if (input[24] <= 0.000043019047552661505) {
                        memcpy(var183, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var183, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    }
                } else {
                    if (input[3] <= 71.15300369262695) {
                        memcpy(var183, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var183, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[10] <= 0.000007444000857503852) {
                if (input[25] <= 0.000041510025766910985) {
                    if (input[22] <= 0.00005318966395861935) {
                        memcpy(var183, (double[]){0.8511379470506271, 0.148862052949373}, 2 * sizeof(double));
                    } else {
                        memcpy(var183, (double[]){0.4325759811153732, 0.5674240188846268}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= 0.00006156741073937155) {
                        memcpy(var183, (double[]){0.7742957746478872, 0.2257042253521127}, 2 * sizeof(double));
                    } else {
                        memcpy(var183, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[4] <= 0.00004283600355847739) {
                    if (input[18] <= 0.00005912932465435006) {
                        memcpy(var183, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var183, (double[]){0.9195834901518003, 0.08041650984819973}, 2 * sizeof(double));
                    }
                } else {
                    if (input[4] <= 0.00004942917985317763) {
                        memcpy(var183, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var183, (double[]){0.9114396242055817, 0.08856037579441836}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[21] <= -0.000037298474126146175) {
            if (input[18] <= -0.000003734523033926962) {
                if (input[10] <= 0.00004941953557136003) {
                    if (input[18] <= -0.000022386655473383144) {
                        memcpy(var183, (double[]){0.720117891059928, 0.2798821089400721}, 2 * sizeof(double));
                    } else {
                        memcpy(var183, (double[]){0.1600786197859794, 0.8399213802140205}, 2 * sizeof(double));
                    }
                } else {
                    if (input[22] <= 0.000026158109903917648) {
                        memcpy(var183, (double[]){0.9320758715693547, 0.06792412843064535}, 2 * sizeof(double));
                    } else {
                        memcpy(var183, (double[]){0.3443374425106645, 0.6556625574893354}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[25] <= 0.000055921154853422195) {
                    if (input[15] <= 0.00009288954606745392) {
                        memcpy(var183, (double[]){0.48382199574923085, 0.5161780042507692}, 2 * sizeof(double));
                    } else {
                        memcpy(var183, (double[]){0.8205989364679541, 0.17940106353204593}, 2 * sizeof(double));
                    }
                } else {
                    if (input[6] <= 0.0000999769545160234) {
                        memcpy(var183, (double[]){0.846527611509373, 0.15347238849062714}, 2 * sizeof(double));
                    } else {
                        memcpy(var183, (double[]){0.24626238871157397, 0.7537376112884261}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[16] <= 0.00003236683733121026) {
                if (input[16] <= 0.000027680443054123316) {
                    if (input[13] <= 0.000003727306989276258) {
                        memcpy(var183, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var183, (double[]){0.4781120327151446, 0.5218879672848555}, 2 * sizeof(double));
                    }
                } else {
                    if (input[9] <= 0.998179018497467) {
                        memcpy(var183, (double[]){0.8036373603340697, 0.19636263966593037}, 2 * sizeof(double));
                    } else {
                        memcpy(var183, (double[]){0.5440544301840111, 0.45594556981598894}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[13] <= 0.000006974093821554561) {
                    if (input[18] <= -0.00005716769192076754) {
                        memcpy(var183, (double[]){0.5784558726818361, 0.4215441273181639}, 2 * sizeof(double));
                    } else {
                        memcpy(var183, (double[]){0.03793603146672185, 0.9620639685332781}, 2 * sizeof(double));
                    }
                } else {
                    if (input[6] <= 0.000017701941942505073) {
                        memcpy(var183, (double[]){0.5701679094469181, 0.429832090553082}, 2 * sizeof(double));
                    } else {
                        memcpy(var183, (double[]){0.36889098299886747, 0.6311090170011325}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var18, var183, 2, var17);
    double var184[2];
    if (input[9] <= 0.9982762634754181) {
        if (input[11] <= 0.00002047267753368942) {
            if (input[11] <= 0.000010267586276313523) {
                if (input[16] <= 0.00009791627962840721) {
                    if (input[22] <= 0.00009415505337528884) {
                        memcpy(var184, (double[]){0.47073394495412846, 0.5292660550458715}, 2 * sizeof(double));
                    } else {
                        memcpy(var184, (double[]){0.888946638946639, 0.11105336105336107}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var184, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[10] <= 0.00004704185630544089) {
                    if (input[18] <= -0.00007179149906733073) {
                        memcpy(var184, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var184, (double[]){0.8705773364846728, 0.1294226635153272}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var184, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[0] <= 11.916575908660889) {
                if (input[22] <= 0.00011395181718398817) {
                    if (input[7] <= 0.0000009270813450257265) {
                        memcpy(var184, (double[]){0.44958292443572145, 0.5504170755642785}, 2 * sizeof(double));
                    } else {
                        memcpy(var184, (double[]){0.6240365961069559, 0.3759634038930442}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= -0.00016481908824061975) {
                        memcpy(var184, (double[]){0.6957759848125297, 0.30422401518747044}, 2 * sizeof(double));
                    } else {
                        memcpy(var184, (double[]){0.1639026571758655, 0.8360973428241345}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var184, (double[]){1.0, 0.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[6] <= 0.000006033503268554341) {
            if (input[16] <= 0.000048943698857328855) {
                if (input[1] <= 7.328691244125366) {
                    if (input[16] <= 0.000011649010616565647) {
                        memcpy(var184, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var184, (double[]){0.43257598111537315, 0.5674240188846268}, 2 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 60.64325714111328) {
                        memcpy(var184, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var184, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 4.619440793991089) {
                    memcpy(var184, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    memcpy(var184, (double[]){0.43257598111537315, 0.5674240188846268}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[23] <= 0.5) {
                if (input[6] <= 0.00002236587170045823) {
                    if (input[18] <= 0.00011102241842309013) {
                        memcpy(var184, (double[]){0.061336345759591626, 0.9386636542404083}, 2 * sizeof(double));
                    } else {
                        memcpy(var184, (double[]){0.8727922206787061, 0.12720777932129393}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= -0.0000018648794082309905) {
                        memcpy(var184, (double[]){0.5580017542020861, 0.44199824579791397}, 2 * sizeof(double));
                    } else {
                        memcpy(var184, (double[]){0.36827764787725353, 0.6317223521227465}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[25] <= 0.00007729943172307685) {
                    if (input[15] <= 0.00003167562681483105) {
                        memcpy(var184, (double[]){0.2967073937173111, 0.703292606282689}, 2 * sizeof(double));
                    } else {
                        memcpy(var184, (double[]){0.455175251010056, 0.544824748989944}, 2 * sizeof(double));
                    }
                } else {
                    if (input[10] <= 0.000012603989944182103) {
                        memcpy(var184, (double[]){0.7742957746478873, 0.22570422535211274}, 2 * sizeof(double));
                    } else {
                        memcpy(var184, (double[]){0.1285795728632197, 0.8714204271367804}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var17, var184, 2, var16);
    double var185[2];
    if (input[6] <= 0.000019039954167965334) {
        if (input[1] <= 8.24980640411377) {
            if (input[21] <= 0.00007425110379699618) {
                if (input[18] <= -0.00011232212273171172) {
                    memcpy(var185, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[0] <= -4.86802864074707) {
                        memcpy(var185, (double[]){0.500146213081197, 0.499853786918803}, 2 * sizeof(double));
                    } else {
                        memcpy(var185, (double[]){0.8097931531926352, 0.19020684680736483}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[6] <= 0.00001768008769431617) {
                    if (input[11] <= 0.000008857878583512502) {
                        memcpy(var185, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var185, (double[]){0.727388715622342, 0.2726112843776581}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var185, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[1] <= 10.097956657409668) {
                if (input[4] <= 0.000014231439763534581) {
                    memcpy(var185, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                } else {
                    if (input[24] <= 0.00010312238009646535) {
                        memcpy(var185, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var185, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[16] <= 0.00005531955866899807) {
                    if (input[15] <= 0.00003677081076602917) {
                        memcpy(var185, (double[]){0.5381279314798448, 0.4618720685201551}, 2 * sizeof(double));
                    } else {
                        memcpy(var185, (double[]){0.19132553182233433, 0.8086744681776658}, 2 * sizeof(double));
                    }
                } else {
                    if (input[24] <= -0.0000064687596932344604) {
                        memcpy(var185, (double[]){0.29369928879094465, 0.7063007112090555}, 2 * sizeof(double));
                    } else {
                        memcpy(var185, (double[]){0.8018358659722719, 0.19816413402772826}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[21] <= 0.00011074737267335877) {
            if (input[7] <= 0.0000004610976418462087) {
                if (input[1] <= 15.12667989730835) {
                    if (input[4] <= 0.000033315838663838804) {
                        memcpy(var185, (double[]){0.24626238871157444, 0.7537376112884256}, 2 * sizeof(double));
                    } else {
                        memcpy(var185, (double[]){0.4278977639879405, 0.5721022360120595}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= 0.00007578477016068064) {
                        memcpy(var185, (double[]){0.5878062988432701, 0.41219370115673}, 2 * sizeof(double));
                    } else {
                        memcpy(var185, (double[]){0.09044358072675675, 0.9095564192732433}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[6] <= 0.000020474411030591) {
                    if (input[21] <= -0.000016282427168334834) {
                        memcpy(var185, (double[]){0.8205989364679541, 0.17940106353204593}, 2 * sizeof(double));
                    } else {
                        memcpy(var185, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[9] <= 0.6573041081428528) {
                        memcpy(var185, (double[]){0.7921755106451962, 0.20782448935480394}, 2 * sizeof(double));
                    } else {
                        memcpy(var185, (double[]){0.606601035837765, 0.39339896416223497}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[4] <= 0.00006483588731498457) {
                if (input[21] <= 0.0001718354833428748) {
                    if (input[9] <= 0.9842334091663361) {
                        memcpy(var185, (double[]){0.36377171215880894, 0.6362282878411911}, 2 * sizeof(double));
                    } else {
                        memcpy(var185, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var185, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                }
            } else {
                if (input[21] <= 0.0001247616164619103) {
                    memcpy(var185, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[0] <= 4.700554847717285) {
                        memcpy(var185, (double[]){0.36377171215880894, 0.6362282878411911}, 2 * sizeof(double));
                    } else {
                        memcpy(var185, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var16, var185, 2, var15);
    double var186[2];
    if (input[24] <= -0.00014737984747625887) {
        memcpy(var186, (double[]){1.0, 0.0}, 2 * sizeof(double));
    } else {
        if (input[8] <= 0.0000009326170129497768) {
            if (input[7] <= 0.00000046111040319374297) {
                if (input[13] <= 0.00012116707512177527) {
                    if (input[11] <= 0.000006033503268554341) {
                        memcpy(var186, (double[]){0.6629437994278983, 0.3370562005721018}, 2 * sizeof(double));
                    } else {
                        memcpy(var186, (double[]){0.36584996301214745, 0.6341500369878526}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var186, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[0] <= 1.0167664289474487) {
                    if (input[10] <= 0.00007225054650916718) {
                        memcpy(var186, (double[]){0.8170239373632197, 0.1829760626367803}, 2 * sizeof(double));
                    } else {
                        memcpy(var186, (double[]){0.4985885793966602, 0.5014114206033399}, 2 * sizeof(double));
                    }
                } else {
                    if (input[15] <= 0.00007200918480521068) {
                        memcpy(var186, (double[]){0.5568597063001876, 0.4431402936998125}, 2 * sizeof(double));
                    } else {
                        memcpy(var186, (double[]){0.7581098268319614, 0.24189017316803868}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[12] <= 0.000032158897738554515) {
                if (input[9] <= 0.99702587723732) {
                    if (input[7] <= 0.000016746485016483348) {
                        memcpy(var186, (double[]){0.6957759848125296, 0.30422401518747033}, 2 * sizeof(double));
                    } else {
                        memcpy(var186, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[3] <= 82.24164962768555) {
                        memcpy(var186, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var186, (double[]){0.4515554947123447, 0.5484445052876553}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[13] <= 0.00003151962664560415) {
                    if (input[16] <= 0.000003724353859979601) {
                        memcpy(var186, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    } else {
                        memcpy(var186, (double[]){0.9384502128476779, 0.061549787152322136}, 2 * sizeof(double));
                    }
                } else {
                    if (input[11] <= 0.00008967838220996782) {
                        memcpy(var186, (double[]){0.5691455457821968, 0.43085445421780316}, 2 * sizeof(double));
                    } else {
                        memcpy(var186, (double[]){0.767632013533653, 0.23236798646634713}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var15, var186, 2, var14);
    double var187[2];
    if (input[7] <= 0.0000009245185879080964) {
        if (input[8] <= 0.000007922967142803827) {
            if (input[10] <= 0.0000018582590257665288) {
                if (input[11] <= 0.0000009246489582892536) {
                    memcpy(var187, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[10] <= -0.000013914700502937194) {
                        memcpy(var187, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var187, (double[]){0.7370830521705765, 0.2629169478294236}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[16] <= 0.0000820474342617672) {
                    if (input[25] <= 0.00010483530422789045) {
                        memcpy(var187, (double[]){0.42932783543799635, 0.5706721645620036}, 2 * sizeof(double));
                    } else {
                        memcpy(var187, (double[]){0.19823535377438203, 0.8017646462256179}, 2 * sizeof(double));
                    }
                } else {
                    if (input[11] <= 0.000038293854231596924) {
                        memcpy(var187, (double[]){0.5233066603206711, 0.4766933396793289}, 2 * sizeof(double));
                    } else {
                        memcpy(var187, (double[]){0.0652752268046975, 0.9347247731953026}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[22] <= 0.000016741261788411066) {
                if (input[10] <= 0.00000232557931667543) {
                    memcpy(var187, (double[]){0.8205989364679541, 0.17940106353204593}, 2 * sizeof(double));
                } else {
                    if (input[1] <= 9.864460945129395) {
                        memcpy(var187, (double[]){0.4325759811153732, 0.5674240188846268}, 2 * sizeof(double));
                    } else {
                        memcpy(var187, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[26] <= 0.5) {
                    if (input[6] <= 0.0000571534128539497) {
                        memcpy(var187, (double[]){0.6401347389432974, 0.3598652610567026}, 2 * sizeof(double));
                    } else {
                        memcpy(var187, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[24] <= 0.00011150427599204704) {
                        memcpy(var187, (double[]){0.820598936467954, 0.179401063532046}, 2 * sizeof(double));
                    } else {
                        memcpy(var187, (double[]){0.22232332423415221, 0.7776766757658478}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[9] <= 0.25411035120487213) {
            if (input[0] <= -5.255960702896118) {
                memcpy(var187, (double[]){1.0, 0.0}, 2 * sizeof(double));
            } else {
                if (input[22] <= 0.000011129497352158069) {
                    memcpy(var187, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[10] <= 0.000041796407458605245) {
                        memcpy(var187, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var187, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[15] <= 0.000016769395188021008) {
                if (input[18] <= -0.0000009267368454857206) {
                    if (input[13] <= 0.00003448162351560313) {
                        memcpy(var187, (double[]){0.40692079940784603, 0.5930792005921539}, 2 * sizeof(double));
                    } else {
                        memcpy(var187, (double[]){0.7329389217565203, 0.2670610782434798}, 2 * sizeof(double));
                    }
                } else {
                    if (input[13] <= 0.000048015479478635825) {
                        memcpy(var187, (double[]){0.23923686318725323, 0.7607631368127468}, 2 * sizeof(double));
                    } else {
                        memcpy(var187, (double[]){0.5334788937409024, 0.46652110625909765}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[10] <= 0.000012143817002652213) {
                    if (input[25] <= 0.000018106934476236347) {
                        memcpy(var187, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var187, (double[]){0.7979945566537746, 0.20200544334622547}, 2 * sizeof(double));
                    }
                } else {
                    if (input[6] <= 0.000016757195226091426) {
                        memcpy(var187, (double[]){0.29369928879094453, 0.7063007112090555}, 2 * sizeof(double));
                    } else {
                        memcpy(var187, (double[]){0.6457371524502489, 0.35426284754975107}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var14, var187, 2, var13);
    double var188[2];
    if (input[6] <= 0.000020344545191619545) {
        if (input[8] <= 0.0000009240852136827016) {
            if (input[24] <= -0.000052747105655726045) {
                if (input[2] <= 64.97513580322266) {
                    if (input[18] <= -0.00008846793207339942) {
                        memcpy(var188, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    } else {
                        memcpy(var188, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[24] <= -0.00009186353418044746) {
                        memcpy(var188, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var188, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[3] <= 75.49663543701172) {
                    if (input[18] <= -0.000095570783742005) {
                        memcpy(var188, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var188, (double[]){0.7893349369620093, 0.21066506303799082}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 6.621532678604126) {
                        memcpy(var188, (double[]){0.8511379470506271, 0.148862052949373}, 2 * sizeof(double));
                    } else {
                        memcpy(var188, (double[]){0.4819527964604193, 0.5180472035395807}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[9] <= 0.9972708821296692) {
                if (input[2] <= 78.22518539428711) {
                    if (input[1] <= 7.651379823684692) {
                        memcpy(var188, (double[]){0.6221677315917289, 0.3778322684082711}, 2 * sizeof(double));
                    } else {
                        memcpy(var188, (double[]){0.16007861978597945, 0.8399213802140205}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= 0.00002610917090350995) {
                        memcpy(var188, (double[]){0.36377171215880894, 0.6362282878411911}, 2 * sizeof(double));
                    } else {
                        memcpy(var188, (double[]){0.9263556985294118, 0.07364430147058824}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[22] <= 0.00004841345798922703) {
                    if (input[13] <= 0.00002595338173705386) {
                        memcpy(var188, (double[]){0.753049955053294, 0.2469500449467061}, 2 * sizeof(double));
                    } else {
                        memcpy(var188, (double[]){0.27597891566265054, 0.7240210843373495}, 2 * sizeof(double));
                    }
                } else {
                    if (input[19] <= 0.00004689613342634402) {
                        memcpy(var188, (double[]){0.24626238871157397, 0.753737611288426}, 2 * sizeof(double));
                    } else {
                        memcpy(var188, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[22] <= 0.000012095740203221794) {
            if (input[18] <= 0.00012578345922520384) {
                if (input[12] <= 0.00007919353447505273) {
                    if (input[7] <= 0.000018653874576557428) {
                        memcpy(var188, (double[]){0.2581765120257624, 0.7418234879742376}, 2 * sizeof(double));
                    } else {
                        memcpy(var188, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[11] <= 0.00005030718421039637) {
                        memcpy(var188, (double[]){0.7365151861155514, 0.26348481388444844}, 2 * sizeof(double));
                    } else {
                        memcpy(var188, (double[]){0.3841383526945584, 0.6158616473054416}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[1] <= 6.577760934829712) {
                    memcpy(var188, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    memcpy(var188, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[18] <= 0.00007487860057153739) {
                if (input[24] <= 0.00008949696712079458) {
                    if (input[7] <= 0.0000004611529504927603) {
                        memcpy(var188, (double[]){0.43592425717541816, 0.5640757428245818}, 2 * sizeof(double));
                    } else {
                        memcpy(var188, (double[]){0.6127388583435607, 0.38726114165643927}, 2 * sizeof(double));
                    }
                } else {
                    if (input[15] <= 0.00008476491711917333) {
                        memcpy(var188, (double[]){0.7045242788909484, 0.2954757211090516}, 2 * sizeof(double));
                    } else {
                        memcpy(var188, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[6] <= 0.000044213247747393325) {
                    if (input[18] <= 0.000140089301567059) {
                        memcpy(var188, (double[]){0.3746050919903362, 0.6253949080096637}, 2 * sizeof(double));
                    } else {
                        memcpy(var188, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[15] <= 0.00015730204177089036) {
                        memcpy(var188, (double[]){0.14486881762932952, 0.8551311823706705}, 2 * sizeof(double));
                    } else {
                        memcpy(var188, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var13, var188, 2, var12);
    double var189[2];
    if (input[8] <= 0.000001862736212387972) {
        if (input[7] <= 0.0000004610976418462087) {
            if (input[18] <= 0.000014921285583113786) {
                if (input[10] <= 0.00001299914993069251) {
                    if (input[19] <= 0.00008508004248142242) {
                        memcpy(var189, (double[]){0.7012461364862875, 0.2987538635137124}, 2 * sizeof(double));
                    } else {
                        memcpy(var189, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[13] <= 0.0000009321145739704662) {
                        memcpy(var189, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var189, (double[]){0.4408552386030394, 0.5591447613969606}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[11] <= 0.0000027832625164592173) {
                    if (input[12] <= 0.000042388721340103075) {
                        memcpy(var189, (double[]){0.9014604150653344, 0.09853958493466568}, 2 * sizeof(double));
                    } else {
                        memcpy(var189, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= 0.00011096435991930775) {
                        memcpy(var189, (double[]){0.3476439376722959, 0.652356062327704}, 2 * sizeof(double));
                    } else {
                        memcpy(var189, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[3] <= 94.17107009887695) {
                if (input[2] <= 55.6343936920166) {
                    if (input[13] <= 0.00013188885714043863) {
                        memcpy(var189, (double[]){0.7625080156750976, 0.23749198432490226}, 2 * sizeof(double));
                    } else {
                        memcpy(var189, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[13] <= 0.0000778561006882228) {
                        memcpy(var189, (double[]){0.5917288165719913, 0.4082711834280087}, 2 * sizeof(double));
                    } else {
                        memcpy(var189, (double[]){0.3068336414692852, 0.6931663585307147}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[10] <= 0.000012540969692054205) {
                    memcpy(var189, (double[]){0.8205989364679541, 0.1794010635320459}, 2 * sizeof(double));
                } else {
                    if (input[16] <= 0.00003959766218031291) {
                        memcpy(var189, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var189, (double[]){0.4616838127230736, 0.5383161872769264}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[16] <= 0.00009412089639226906) {
            if (input[4] <= 0.000011768251169996802) {
                if (input[4] <= 0.000007716526624790276) {
                    memcpy(var189, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                } else {
                    memcpy(var189, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[22] <= 0.00005474393401527777) {
                    if (input[6] <= 0.000002798771333800687) {
                        memcpy(var189, (double[]){0.1496071027655883, 0.8503928972344116}, 2 * sizeof(double));
                    } else {
                        memcpy(var189, (double[]){0.711091460875761, 0.2889085391242388}, 2 * sizeof(double));
                    }
                } else {
                    if (input[13] <= 0.000023791757485014386) {
                        memcpy(var189, (double[]){0.21534544386231208, 0.784654556137688}, 2 * sizeof(double));
                    } else {
                        memcpy(var189, (double[]){0.5883769465403756, 0.4116230534596244}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[4] <= 0.00004306793744035531) {
                memcpy(var189, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
            } else {
                if (input[22] <= 0.00005223509106144775) {
                    memcpy(var189, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[11] <= 0.00004991523383068852) {
                        memcpy(var189, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    } else {
                        memcpy(var189, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var12, var189, 2, var11);
    double var190[2];
    if (input[6] <= 0.000037393767343019135) {
        if (input[12] <= 0.00003796061719185673) {
            if (input[4] <= 0.000031568251870339736) {
                if (input[3] <= 47.901100158691406) {
                    if (input[11] <= 0.000004192711912764935) {
                        memcpy(var190, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                    } else {
                        memcpy(var190, (double[]){0.86630978865406, 0.13369021134593997}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 14.6700758934021) {
                        memcpy(var190, (double[]){0.3936555209051687, 0.6063444790948314}, 2 * sizeof(double));
                    } else {
                        memcpy(var190, (double[]){0.12337730648656599, 0.876622693513434}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[1] <= 13.32479190826416) {
                    if (input[2] <= 89.53285598754883) {
                        memcpy(var190, (double[]){0.6578212398554814, 0.3421787601445186}, 2 * sizeof(double));
                    } else {
                        memcpy(var190, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 7.079324007034302) {
                        memcpy(var190, (double[]){0.36377171215880894, 0.6362282878411911}, 2 * sizeof(double));
                    } else {
                        memcpy(var190, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[1] <= -4.784067869186401) {
                if (input[12] <= 0.0001441572021576576) {
                    if (input[16] <= 0.0000004659649732730031) {
                        memcpy(var190, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var190, (double[]){0.8609971628386069, 0.13900283716139294}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var190, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[9] <= 0.9981273412704468) {
                    if (input[0] <= 1.9662569165229797) {
                        memcpy(var190, (double[]){0.43257598111537315, 0.5674240188846269}, 2 * sizeof(double));
                    } else {
                        memcpy(var190, (double[]){0.7538773775077819, 0.24612262249221806}, 2 * sizeof(double));
                    }
                } else {
                    if (input[6] <= 0.000013962785487819929) {
                        memcpy(var190, (double[]){0.14960710276558825, 0.8503928972344118}, 2 * sizeof(double));
                    } else {
                        memcpy(var190, (double[]){0.5646081774702917, 0.4353918225297082}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[8] <= 0.00003597535032895394) {
            if (input[9] <= 0.9976130127906799) {
                if (input[9] <= 0.9735223948955536) {
                    if (input[9] <= 0.9375803172588348) {
                        memcpy(var190, (double[]){0.4801459808478121, 0.5198540191521879}, 2 * sizeof(double));
                    } else {
                        memcpy(var190, (double[]){0.1952138182924973, 0.8047861817075028}, 2 * sizeof(double));
                    }
                } else {
                    if (input[11] <= 0.00004613724922819529) {
                        memcpy(var190, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var190, (double[]){0.7676320135336527, 0.2323679864663473}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 99.53027725219727) {
                    if (input[25] <= 0.0000624142303422559) {
                        memcpy(var190, (double[]){0.3979521480186547, 0.6020478519813454}, 2 * sizeof(double));
                    } else {
                        memcpy(var190, (double[]){0.27597891566265065, 0.7240210843373495}, 2 * sizeof(double));
                    }
                } else {
                    if (input[6] <= 0.00005869467349839397) {
                        memcpy(var190, (double[]){0.9014604150653344, 0.09853958493466565}, 2 * sizeof(double));
                    } else {
                        memcpy(var190, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[1] <= 14.670042514801025) {
                if (input[16] <= 0.00007647165693924762) {
                    if (input[17] <= 0.5) {
                        memcpy(var190, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var190, (double[]){0.9014604150653344, 0.09853958493466565}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var190, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                memcpy(var190, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    }
    add_vectors(var11, var190, 2, var10);
    double var191[2];
    if (input[7] <= 0.0000009248290098184953) {
        if (input[6] <= 0.00001535246019557235) {
            if (input[12] <= 0.000034929347748402506) {
                if (input[25] <= 0.00010967261914629489) {
                    if (input[22] <= 0.00000046254325525296736) {
                        memcpy(var191, (double[]){0.842183011899877, 0.15781698810012312}, 2 * sizeof(double));
                    } else {
                        memcpy(var191, (double[]){0.3042173482744308, 0.6957826517255692}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 12.54522180557251) {
                        memcpy(var191, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var191, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[16] <= 0.0001067356533894781) {
                    if (input[1] <= 6.256667613983154) {
                        memcpy(var191, (double[]){0.8679915564022035, 0.13200844359779648}, 2 * sizeof(double));
                    } else {
                        memcpy(var191, (double[]){0.48233780994825465, 0.5176621900517454}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var191, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[15] <= -0.00007620436372235417) {
                if (input[12] <= 0.000007892711209933623) {
                    if (input[16] <= 0.00012776071525877342) {
                        memcpy(var191, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var191, (double[]){0.8205989364679541, 0.17940106353204593}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var191, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            } else {
                if (input[1] <= 17.925183296203613) {
                    if (input[18] <= 0.000012119461189286085) {
                        memcpy(var191, (double[]){0.47626847611673767, 0.5237315238832623}, 2 * sizeof(double));
                    } else {
                        memcpy(var191, (double[]){0.32737261567680354, 0.6726273843231964}, 2 * sizeof(double));
                    }
                } else {
                    if (input[15] <= 0.00006239963840926066) {
                        memcpy(var191, (double[]){0.7649630507136007, 0.23503694928639934}, 2 * sizeof(double));
                    } else {
                        memcpy(var191, (double[]){0.18613509395632302, 0.813864906043677}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[3] <= 46.243019104003906) {
            if (input[20] <= 0.5) {
                if (input[11] <= 0.00008763922960497439) {
                    if (input[12] <= 0.0000713298431946896) {
                        memcpy(var191, (double[]){0.9516175293993328, 0.048382470600667235}, 2 * sizeof(double));
                    } else {
                        memcpy(var191, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                    }
                } else {
                    if (input[4] <= 0.0000809299926913809) {
                        memcpy(var191, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var191, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[13] <= 0.000007914795332908398) {
                    memcpy(var191, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[22] <= 0.0000060291088743724686) {
                        memcpy(var191, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var191, (double[]){0.7101795633639065, 0.2898204366360935}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[12] <= 0.000038164611396496184) {
                if (input[7] <= 0.00003739804196811747) {
                    if (input[11] <= 0.000011650094620563323) {
                        memcpy(var191, (double[]){0.9014604150653344, 0.09853958493466566}, 2 * sizeof(double));
                    } else {
                        memcpy(var191, (double[]){0.42258494577162825, 0.5774150542283718}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var191, (double[]){1.0, 0.0}, 2 * sizeof(double));
                }
            } else {
                if (input[11] <= 0.00010945033136522397) {
                    if (input[22] <= 0.00006426734398701228) {
                        memcpy(var191, (double[]){0.737573679926998, 0.2624263200730021}, 2 * sizeof(double));
                    } else {
                        memcpy(var191, (double[]){0.5126809390585086, 0.48731906094149136}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var191, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var10, var191, 2, var9);
    double var192[2];
    if (input[3] <= 46.246665954589844) {
        if (input[0] <= -9.91536808013916) {
            if (input[24] <= -0.00006677221426798496) {
                memcpy(var192, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
            } else {
                memcpy(var192, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            if (input[6] <= 0.00009099686212721281) {
                if (input[7] <= 0.0000009267025689041475) {
                    if (input[15] <= -0.00005021216202294454) {
                        memcpy(var192, (double[]){0.26027518863737237, 0.7397248113626277}, 2 * sizeof(double));
                    } else {
                        memcpy(var192, (double[]){0.6514738019804048, 0.3485261980195951}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= -0.00007132239625207148) {
                        memcpy(var192, (double[]){0.9805125710637521, 0.019487428936247834}, 2 * sizeof(double));
                    } else {
                        memcpy(var192, (double[]){0.7773206808915217, 0.22267931910847838}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 60.06025505065918) {
                    if (input[2] <= 49.48922538757324) {
                        memcpy(var192, (double[]){0.3138514236780132, 0.6861485763219868}, 2 * sizeof(double));
                    } else {
                        memcpy(var192, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 72.6248893737793) {
                        memcpy(var192, (double[]){0.5784558726818361, 0.4215441273181639}, 2 * sizeof(double));
                    } else {
                        memcpy(var192, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[21] <= 0.00007481249122065492) {
            if (input[3] <= 86.71007919311523) {
                if (input[6] <= 0.00002038950606220169) {
                    if (input[18] <= 0.00011698913294821978) {
                        memcpy(var192, (double[]){0.5400225802747904, 0.4599774197252097}, 2 * sizeof(double));
                    } else {
                        memcpy(var192, (double[]){0.9320758715693547, 0.06792412843064535}, 2 * sizeof(double));
                    }
                } else {
                    if (input[19] <= 0.000014916776763129747) {
                        memcpy(var192, (double[]){0.5334788937409023, 0.4665211062590978}, 2 * sizeof(double));
                    } else {
                        memcpy(var192, (double[]){0.3778371234762205, 0.6221628765237796}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 99.57754516601562) {
                    if (input[13] <= 0.000055058264479157515) {
                        memcpy(var192, (double[]){0.43884034724065674, 0.5611596527593433}, 2 * sizeof(double));
                    } else {
                        memcpy(var192, (double[]){0.6696572887629131, 0.3303427112370868}, 2 * sizeof(double));
                    }
                } else {
                    if (input[9] <= 0.9929435551166534) {
                        memcpy(var192, (double[]){0.7273887156223419, 0.27261128437765814}, 2 * sizeof(double));
                    } else {
                        memcpy(var192, (double[]){0.9762847312146213, 0.023715268785378673}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[4] <= 0.000057081088016275316) {
                if (input[13] <= 0.000012614236766239628) {
                    if (input[22] <= 0.00008143311060848646) {
                        memcpy(var192, (double[]){0.727388715622342, 0.27261128437765814}, 2 * sizeof(double));
                    } else {
                        memcpy(var192, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 6.591196298599243) {
                        memcpy(var192, (double[]){0.028485931913570624, 0.9715140680864294}, 2 * sizeof(double));
                    } else {
                        memcpy(var192, (double[]){0.24626238871157394, 0.7537376112884261}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[16] <= 0.00009603954458725639) {
                    if (input[25] <= 0.00007512765660067089) {
                        memcpy(var192, (double[]){0.6317150244182707, 0.36828497558172935}, 2 * sizeof(double));
                    } else {
                        memcpy(var192, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var192, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var9, var192, 2, var8);
    double var193[2];
    if (input[8] <= 0.000000932450944901575) {
        if (input[9] <= 0.9982360601425171) {
            if (input[3] <= 34.827388763427734) {
                if (input[24] <= -0.00006992684939177707) {
                    if (input[4] <= 0.00010300130452378653) {
                        memcpy(var193, (double[]){0.830532159987914, 0.16946784001208598}, 2 * sizeof(double));
                    } else {
                        memcpy(var193, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[22] <= 0.00005353678534447681) {
                        memcpy(var193, (double[]){0.3570896377808343, 0.6429103622191656}, 2 * sizeof(double));
                    } else {
                        memcpy(var193, (double[]){0.17212633556416573, 0.8278736644358343}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[12] <= 0.00014623987954109907) {
                    if (input[1] <= 1.1766653656959534) {
                        memcpy(var193, (double[]){0.6940867220168473, 0.30591327798315265}, 2 * sizeof(double));
                    } else {
                        memcpy(var193, (double[]){0.5639711296186368, 0.4360288703813633}, 2 * sizeof(double));
                    }
                } else {
                    if (input[6] <= 0.000030321491522045108) {
                        memcpy(var193, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var193, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[6] <= 0.00001113488224291359) {
                if (input[18] <= 0.000022278968572209124) {
                    if (input[23] <= 0.5) {
                        memcpy(var193, (double[]){0.8205989364679541, 0.1794010635320459}, 2 * sizeof(double));
                    } else {
                        memcpy(var193, (double[]){0.20262612301313057, 0.7973738769868693}, 2 * sizeof(double));
                    }
                } else {
                    if (input[21] <= -0.00006303111877059564) {
                        memcpy(var193, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var193, (double[]){0.7879765153394527, 0.2120234846605474}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[13] <= 0.00010365781781729311) {
                    if (input[15] <= 0.00003629668026405852) {
                        memcpy(var193, (double[]){0.21690149180542723, 0.7830985081945727}, 2 * sizeof(double));
                    } else {
                        memcpy(var193, (double[]){0.4056805895123632, 0.5943194104876368}, 2 * sizeof(double));
                    }
                } else {
                    if (input[4] <= 0.00009198610132443719) {
                        memcpy(var193, (double[]){0.7124485981308412, 0.2875514018691589}, 2 * sizeof(double));
                    } else {
                        memcpy(var193, (double[]){0.3498597935684028, 0.6501402064315972}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[13] <= 0.000004195695396447263) {
            if (input[0] <= -1.7957043051719666) {
                memcpy(var193, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
            } else {
                memcpy(var193, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            if (input[24] <= -0.000021301285414665472) {
                if (input[1] <= -5.561640501022339) {
                    if (input[18] <= -0.00003397775981284212) {
                        memcpy(var193, (double[]){0.5334788937409024, 0.4665211062590976}, 2 * sizeof(double));
                    } else {
                        memcpy(var193, (double[]){0.8628143392188337, 0.13718566078116642}, 2 * sizeof(double));
                    }
                } else {
                    if (input[3] <= 78.88238906860352) {
                        memcpy(var193, (double[]){0.17542704998952938, 0.8245729500104707}, 2 * sizeof(double));
                    } else {
                        memcpy(var193, (double[]){0.559584701122223, 0.44041529887777703}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[9] <= 0.8799007534980774) {
                    memcpy(var193, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[21] <= 0.00012266582780284807) {
                        memcpy(var193, (double[]){0.7222076118159086, 0.2777923881840914}, 2 * sizeof(double));
                    } else {
                        memcpy(var193, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var8, var193, 2, var7);
    double var194[2];
    if (input[9] <= 0.998245507478714) {
        if (input[11] <= 0.000024689873498573434) {
            if (input[24] <= 0.000019103720660496037) {
                if (input[9] <= 0.025395256467163563) {
                    memcpy(var194, (double[]){0.246262388711574, 0.7537376112884261}, 2 * sizeof(double));
                } else {
                    if (input[18] <= -0.000056963319366332144) {
                        memcpy(var194, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var194, (double[]){0.8372889960654903, 0.16271100393450957}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[7] <= 0.0000009318370643995877) {
                    if (input[9] <= 0.244175985455513) {
                        memcpy(var194, (double[]){0.8205989364679541, 0.17940106353204593}, 2 * sizeof(double));
                    } else {
                        memcpy(var194, (double[]){0.19823535377438217, 0.8017646462256178}, 2 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 4.375188589096069) {
                        memcpy(var194, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var194, (double[]){0.6155230326295585, 0.3844769673704414}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[7] <= 0.0000009310766131420678) {
                if (input[10] <= 0.000030085323487583082) {
                    if (input[18] <= -0.00012433043229975738) {
                        memcpy(var194, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var194, (double[]){0.7656551940251737, 0.23434480597482632}, 2 * sizeof(double));
                    }
                } else {
                    if (input[19] <= 0.00004887644718110096) {
                        memcpy(var194, (double[]){0.28583365829201735, 0.7141663417079827}, 2 * sizeof(double));
                    } else {
                        memcpy(var194, (double[]){0.45695332480818407, 0.5430466751918159}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[15] <= 0.0000013997157850553776) {
                    if (input[11] <= 0.00011435629494371824) {
                        memcpy(var194, (double[]){0.7251920984071493, 0.27480790159285073}, 2 * sizeof(double));
                    } else {
                        memcpy(var194, (double[]){0.3841383526945584, 0.6158616473054416}, 2 * sizeof(double));
                    }
                } else {
                    if (input[15] <= 0.000027444159059086815) {
                        memcpy(var194, (double[]){0.3454559736077291, 0.6545440263922709}, 2 * sizeof(double));
                    } else {
                        memcpy(var194, (double[]){0.5825983701533128, 0.4174016298466872}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[15] <= 0.00005816204611619469) {
            if (input[13] <= 0.000053198198656900786) {
                if (input[11] <= 0.000045189406591816805) {
                    if (input[18] <= -0.0000009321584570898267) {
                        memcpy(var194, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var194, (double[]){0.34922381473646014, 0.6507761852635399}, 2 * sizeof(double));
                    }
                } else {
                    if (input[22] <= 0.00008075638834270649) {
                        memcpy(var194, (double[]){0.5834754780122485, 0.41652452198775153}, 2 * sizeof(double));
                    } else {
                        memcpy(var194, (double[]){0.06133634575959163, 0.9386636542404083}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[3] <= 47.47989463806152) {
                    memcpy(var194, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[8] <= 0.000004174992568550806) {
                        memcpy(var194, (double[]){0.5190230601762804, 0.4809769398237197}, 2 * sizeof(double));
                    } else {
                        memcpy(var194, (double[]){0.7567140840152424, 0.2432859159847576}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[18] <= 0.000018611444829730317) {
                if (input[25] <= 0.0000032609972322461545) {
                    if (input[6] <= 0.000010679885917852516) {
                        memcpy(var194, (double[]){0.43257598111537315, 0.5674240188846268}, 2 * sizeof(double));
                    } else {
                        memcpy(var194, (double[]){0.8934567012022827, 0.10654329879771736}, 2 * sizeof(double));
                    }
                } else {
                    if (input[23] <= 0.5) {
                        memcpy(var194, (double[]){0.5071884369954639, 0.49281156300453605}, 2 * sizeof(double));
                    } else {
                        memcpy(var194, (double[]){0.11558323806520278, 0.8844167619347972}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[25] <= 0.000016297454294544877) {
                    if (input[15] <= 0.00010252148422296159) {
                        memcpy(var194, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var194, (double[]){0.26027518863737237, 0.7397248113626276}, 2 * sizeof(double));
                    }
                } else {
                    if (input[19] <= 0.00011817357153631747) {
                        memcpy(var194, (double[]){0.29439940498326517, 0.7056005950167349}, 2 * sizeof(double));
                    } else {
                        memcpy(var194, (double[]){0.8205989364679541, 0.1794010635320459}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var7, var194, 2, var6);
    double var195[2];
    if (input[9] <= 0.9982328414916992) {
        if (input[10] <= 0.000028013299925078172) {
            if (input[16] <= 0.00009581579070072621) {
                if (input[11] <= 0.000023716845134913456) {
                    if (input[13] <= 0.0000009319812193098187) {
                        memcpy(var195, (double[]){0.1496071027655883, 0.8503928972344117}, 2 * sizeof(double));
                    } else {
                        memcpy(var195, (double[]){0.8517534507753314, 0.14824654922466862}, 2 * sizeof(double));
                    }
                } else {
                    if (input[4] <= 0.000029506632017728407) {
                        memcpy(var195, (double[]){0.38610352918641955, 0.6138964708135805}, 2 * sizeof(double));
                    } else {
                        memcpy(var195, (double[]){0.7442973708068902, 0.2557026291931098}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[20] <= 0.5) {
                    memcpy(var195, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[21] <= -0.000014491743939970547) {
                        memcpy(var195, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var195, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[12] <= 0.00014623987954109907) {
                if (input[15] <= -0.000071129670686787) {
                    if (input[7] <= 0.0000009280980464154709) {
                        memcpy(var195, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var195, (double[]){0.3810903149138443, 0.6189096850861557}, 2 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 98.77836227416992) {
                        memcpy(var195, (double[]){0.5224011143866018, 0.4775988856133982}, 2 * sizeof(double));
                    } else {
                        memcpy(var195, (double[]){0.953668232743043, 0.046331767256957}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[17] <= 0.5) {
                    memcpy(var195, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    memcpy(var195, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        }
    } else {
        if (input[18] <= -0.0000377677206415683) {
            if (input[13] <= 0.00011335806266288273) {
                if (input[2] <= 79.35897827148438) {
                    if (input[25] <= 0.00010136925629922189) {
                        memcpy(var195, (double[]){0.8205989364679541, 0.17940106353204588}, 2 * sizeof(double));
                    } else {
                        memcpy(var195, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 18.218284606933594) {
                        memcpy(var195, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var195, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 50.69317436218262) {
                    memcpy(var195, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                } else {
                    memcpy(var195, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[13] <= 0.000002785698143270565) {
                if (input[0] <= 8.857381820678711) {
                    if (input[25] <= 0.000003262829011418944) {
                        memcpy(var195, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var195, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var195, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                }
            } else {
                if (input[13] <= 0.000003693971166285337) {
                    memcpy(var195, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[11] <= 0.000016283058357657865) {
                        memcpy(var195, (double[]){0.5901631580193704, 0.40983684198062953}, 2 * sizeof(double));
                    } else {
                        memcpy(var195, (double[]){0.39187443602516775, 0.6081255639748323}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var6, var195, 2, var5);
    double var196[2];
    if (input[21] <= 0.00012170259287813678) {
        if (input[6] <= 0.000023304135538637638) {
            if (input[1] <= 7.7752110958099365) {
                if (input[21] <= 0.00007365893543465063) {
                    if (input[0] <= 5.371308088302612) {
                        memcpy(var196, (double[]){0.7462247610429271, 0.25377523895707293}, 2 * sizeof(double));
                    } else {
                        memcpy(var196, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[6] <= 0.00001720787531667156) {
                        memcpy(var196, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var196, (double[]){0.6317150244182705, 0.3682849755817294}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[13] <= 0.00003419116364966612) {
                    if (input[2] <= 99.41597747802734) {
                        memcpy(var196, (double[]){0.34654650217921257, 0.6534534978207874}, 2 * sizeof(double));
                    } else {
                        memcpy(var196, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[8] <= 0.000000931990683739059) {
                        memcpy(var196, (double[]){0.5276182968002878, 0.4723817031997121}, 2 * sizeof(double));
                    } else {
                        memcpy(var196, (double[]){0.7578486927129934, 0.24215130728700662}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[0] <= 6.39739465713501) {
                if (input[18] <= -0.00012630485434783623) {
                    if (input[15] <= 0.000032132715205079876) {
                        memcpy(var196, (double[]){0.953668232743043, 0.04633176725695699}, 2 * sizeof(double));
                    } else {
                        memcpy(var196, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    if (input[19] <= 0.000015860103303566575) {
                        memcpy(var196, (double[]){0.5088704795689002, 0.49112952043109975}, 2 * sizeof(double));
                    } else {
                        memcpy(var196, (double[]){0.3532370525428075, 0.6467629474571925}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[16] <= 0.000054118087064125575) {
                    if (input[15] <= 0.00004670633643399924) {
                        memcpy(var196, (double[]){0.4716006192572934, 0.5283993807427065}, 2 * sizeof(double));
                    } else {
                        memcpy(var196, (double[]){0.8045612537349838, 0.19543874626501617}, 2 * sizeof(double));
                    }
                } else {
                    if (input[12] <= 0.00008522015559719875) {
                        memcpy(var196, (double[]){0.18426055397571037, 0.8157394460242896}, 2 * sizeof(double));
                    } else {
                        memcpy(var196, (double[]){0.592733783861838, 0.4072662161381621}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[12] <= 0.0001083563402062282) {
            if (input[1] <= 10.482588768005371) {
                memcpy(var196, (double[]){0.0, 1.0}, 2 * sizeof(double));
            } else {
                if (input[0] <= 7.326618194580078) {
                    memcpy(var196, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                } else {
                    memcpy(var196, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            memcpy(var196, (double[]){1.0, 0.0}, 2 * sizeof(double));
        }
    }
    add_vectors(var5, var196, 2, var4);
    double var197[2];
    if (input[6] <= 0.00001958670236490434) {
        if (input[3] <= 48.551557540893555) {
            if (input[22] <= 0.000028905597901029978) {
                if (input[16] <= 0.00000046297111566673266) {
                    memcpy(var197, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[22] <= 0.0000009320263814061036) {
                        memcpy(var197, (double[]){0.6957759848125297, 0.3042240151874704}, 2 * sizeof(double));
                    } else {
                        memcpy(var197, (double[]){0.9756236689990874, 0.024376331000912688}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[12] <= 0.000002796600227839008) {
                    memcpy(var197, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[8] <= 0.0000004628909664461389) {
                        memcpy(var197, (double[]){0.8205989364679541, 0.17940106353204588}, 2 * sizeof(double));
                    } else {
                        memcpy(var197, (double[]){0.36377171215880894, 0.6362282878411911}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[9] <= 0.5234177112579346) {
                if (input[16] <= 0.00005824957224831451) {
                    memcpy(var197, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    memcpy(var197, (double[]){0.36377171215880894, 0.6362282878411911}, 2 * sizeof(double));
                }
            } else {
                if (input[19] <= 0.000026824543056136463) {
                    if (input[24] <= 0.00001582555069035152) {
                        memcpy(var197, (double[]){0.6599250815903281, 0.34007491840967197}, 2 * sizeof(double));
                    } else {
                        memcpy(var197, (double[]){0.39341252242199953, 0.6065874775780005}, 2 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 7.872599840164185) {
                        memcpy(var197, (double[]){0.8033052779238996, 0.19669472207610042}, 2 * sizeof(double));
                    } else {
                        memcpy(var197, (double[]){0.587581347762343, 0.412418652237657}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[3] <= 85.70630645751953) {
            if (input[1] <= 18.171939849853516) {
                if (input[1] <= 16.643702507019043) {
                    if (input[9] <= 0.9981273412704468) {
                        memcpy(var197, (double[]){0.5147189519535669, 0.48528104804643307}, 2 * sizeof(double));
                    } else {
                        memcpy(var197, (double[]){0.36150791724512943, 0.6384920827548706}, 2 * sizeof(double));
                    }
                } else {
                    if (input[25] <= 0.000014889933027006919) {
                        memcpy(var197, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var197, (double[]){0.7959783565183202, 0.20402164348167975}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var197, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        } else {
            if (input[19] <= 0.00006840366404503584) {
                if (input[8] <= 0.0000009251550920907903) {
                    if (input[2] <= 99.04723358154297) {
                        memcpy(var197, (double[]){0.4325759811153731, 0.5674240188846269}, 2 * sizeof(double));
                    } else {
                        memcpy(var197, (double[]){0.8421830118998769, 0.1578169881001231}, 2 * sizeof(double));
                    }
                } else {
                    if (input[6] <= 0.00002238797242171131) {
                        memcpy(var197, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var197, (double[]){0.8399171453335488, 0.16008285466645114}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[19] <= 0.0001072147315426264) {
                    memcpy(var197, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    memcpy(var197, (double[]){0.8205989364679541, 0.1794010635320459}, 2 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var4, var197, 2, var3);
    double var198[2];
    if (input[6] <= 0.00001958670236490434) {
        if (input[3] <= 53.069087982177734) {
            if (input[3] <= 40.59688186645508) {
                if (input[19] <= 0.00005267739288683515) {
                    if (input[4] <= 0.00005116846841701772) {
                        memcpy(var198, (double[]){0.820598936467954, 0.17940106353204588}, 2 * sizeof(double));
                    } else {
                        memcpy(var198, (double[]){0.22232332423415221, 0.7776766757658478}, 2 * sizeof(double));
                    }
                } else {
                    if (input[15] <= -0.00006097517143643927) {
                        memcpy(var198, (double[]){1.0, 0.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var198, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 3.299135684967041) {
                    if (input[16] <= 0.0001249807646672707) {
                        memcpy(var198, (double[]){0.9153368634655331, 0.08466313653446686}, 2 * sizeof(double));
                    } else {
                        memcpy(var198, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    }
                } else {
                    memcpy(var198, (double[]){0.0, 1.0}, 2 * sizeof(double));
                }
            }
        } else {
            if (input[21] <= 0.00012173763389000669) {
                if (input[13] <= 0.00003389861012692563) {
                    if (input[0] <= 4.60113000869751) {
                        memcpy(var198, (double[]){0.6446173552297016, 0.35538264477029835}, 2 * sizeof(double));
                    } else {
                        memcpy(var198, (double[]){0.27022455463150696, 0.7297754453684931}, 2 * sizeof(double));
                    }
                } else {
                    if (input[4] <= 0.000025204803023370914) {
                        memcpy(var198, (double[]){0.4572879996435096, 0.5427120003564904}, 2 * sizeof(double));
                    } else {
                        memcpy(var198, (double[]){0.7498014724686055, 0.2501985275313945}, 2 * sizeof(double));
                    }
                }
            } else {
                memcpy(var198, (double[]){0.0, 1.0}, 2 * sizeof(double));
            }
        }
    } else {
        if (input[0] <= 6.94390606880188) {
            if (input[7] <= 0.0000009316148350535514) {
                if (input[24] <= -0.0001703021553112194) {
                    memcpy(var198, (double[]){1.0, 0.0}, 2 * sizeof(double));
                } else {
                    if (input[21] <= 0.00001756647998263361) {
                        memcpy(var198, (double[]){0.44139492772829186, 0.5586050722717083}, 2 * sizeof(double));
                    } else {
                        memcpy(var198, (double[]){0.2975199902585546, 0.7024800097414454}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[2] <= 49.281930923461914) {
                    if (input[2] <= 39.96259689331055) {
                        memcpy(var198, (double[]){0.4495829244357212, 0.5504170755642788}, 2 * sizeof(double));
                    } else {
                        memcpy(var198, (double[]){0.8074304025635891, 0.19256959743641094}, 2 * sizeof(double));
                    }
                } else {
                    if (input[13] <= 0.0000350067039107671) {
                        memcpy(var198, (double[]){0.38199963519816543, 0.6180003648018347}, 2 * sizeof(double));
                    } else {
                        memcpy(var198, (double[]){0.6056905717197498, 0.39430942828025034}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[8] <= 0.000002325739842490293) {
                if (input[15] <= 0.000026007061933341902) {
                    if (input[18] <= 0.00011496877777972259) {
                        memcpy(var198, (double[]){0.3088649010397946, 0.6911350989602053}, 2 * sizeof(double));
                    } else {
                        memcpy(var198, (double[]){0.9014604150653344, 0.09853958493466565}, 2 * sizeof(double));
                    }
                } else {
                    if (input[7] <= 0.0000009311477242590627) {
                        memcpy(var198, (double[]){0.5051967027816833, 0.49480329721831673}, 2 * sizeof(double));
                    } else {
                        memcpy(var198, (double[]){0.7425118326143528, 0.2574881673856471}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 9.9954195022583) {
                    if (input[15] <= -0.0000456580710306298) {
                        memcpy(var198, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var198, (double[]){0.872792220678706, 0.12720777932129393}, 2 * sizeof(double));
                    }
                } else {
                    if (input[12] <= 0.000049011485316441394) {
                        memcpy(var198, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var198, (double[]){0.6558697208303507, 0.34413027916964933}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var3, var198, 2, var2);
    double var199[2];
    if (input[6] <= 0.000024293421120091807) {
        if (input[1] <= 7.80080246925354) {
            if (input[21] <= 0.00007201274638646282) {
                if (input[15] <= -0.00009711468737805262) {
                    memcpy(var199, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[7] <= 0.000000930414756794562) {
                        memcpy(var199, (double[]){0.7170585638786487, 0.28294143612135125}, 2 * sizeof(double));
                    } else {
                        memcpy(var199, (double[]){0.8916973608623661, 0.10830263913763391}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[24] <= 0.000008382579835597426) {
                    memcpy(var199, (double[]){0.0, 1.0}, 2 * sizeof(double));
                } else {
                    if (input[16] <= 0.00007225945591926575) {
                        memcpy(var199, (double[]){0.8727922206787061, 0.12720777932129393}, 2 * sizeof(double));
                    } else {
                        memcpy(var199, (double[]){0.22232332423415221, 0.7776766757658478}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[12] <= 0.00007375286077149212) {
                if (input[11] <= 0.000037636335036950186) {
                    if (input[0] <= 6.777285099029541) {
                        memcpy(var199, (double[]){0.2640311578378621, 0.735968842162138}, 2 * sizeof(double));
                    } else {
                        memcpy(var199, (double[]){0.516849834662517, 0.48315016533748306}, 2 * sizeof(double));
                    }
                } else {
                    if (input[3] <= 62.16872787475586) {
                        memcpy(var199, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var199, (double[]){0.7433878673036377, 0.25661213269636235}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[25] <= 0.000030334595976455603) {
                    if (input[3] <= 79.44453430175781) {
                        memcpy(var199, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var199, (double[]){0.5334788937409024, 0.46652110625909754}, 2 * sizeof(double));
                    }
                } else {
                    if (input[22] <= 0.000006950037231945316) {
                        memcpy(var199, (double[]){0.0, 1.0}, 2 * sizeof(double));
                    } else {
                        memcpy(var199, (double[]){0.9074215445560897, 0.09257845544391029}, 2 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[4] <= 0.00004868184623774141) {
            if (input[16] <= 0.00005808333844470326) {
                if (input[25] <= 0.0000009282167923174711) {
                    if (input[8] <= 0.000004193340089386766) {
                        memcpy(var199, (double[]){0.10914776393507712, 0.8908522360649229}, 2 * sizeof(double));
                    } else {
                        memcpy(var199, (double[]){0.7742957746478873, 0.2257042253521127}, 2 * sizeof(double));
                    }
                } else {
                    if (input[2] <= 94.59354400634766) {
                        memcpy(var199, (double[]){0.4566812764878477, 0.5433187235121524}, 2 * sizeof(double));
                    } else {
                        memcpy(var199, (double[]){0.5890986327844696, 0.4109013672155304}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[24] <= -0.00008390417133341543) {
                    memcpy(var199, (double[]){0.8205989364679541, 0.17940106353204596}, 2 * sizeof(double));
                } else {
                    if (input[11] <= 0.00008432851609541103) {
                        memcpy(var199, (double[]){0.15922135427545014, 0.8407786457245499}, 2 * sizeof(double));
                    } else {
                        memcpy(var199, (double[]){0.6730259130789634, 0.3269740869210365}, 2 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[6] <= 0.00003076708162552677) {
                if (input[9] <= 0.9978359937667847) {
                    if (input[6] <= 0.00002640389448060887) {
                        memcpy(var199, (double[]){0.43257598111537315, 0.5674240188846268}, 2 * sizeof(double));
                    } else {
                        memcpy(var199, (double[]){0.9775048254079663, 0.022495174592033693}, 2 * sizeof(double));
                    }
                } else {
                    if (input[13] <= 0.00005866274113941472) {
                        memcpy(var199, (double[]){0.8205989364679541, 0.17940106353204593}, 2 * sizeof(double));
                    } else {
                        memcpy(var199, (double[]){0.22232332423415221, 0.7776766757658478}, 2 * sizeof(double));
                    }
                }
            } else {
                if (input[4] <= 0.00005144503302290104) {
                    if (input[20] <= 0.5) {
                        memcpy(var199, (double[]){0.5334788937409025, 0.4665211062590976}, 2 * sizeof(double));
                    } else {
                        memcpy(var199, (double[]){0.8727922206787061, 0.12720777932129393}, 2 * sizeof(double));
                    }
                } else {
                    if (input[18] <= -0.0001338048532488756) {
                        memcpy(var199, (double[]){0.8955770953816079, 0.10442290461839213}, 2 * sizeof(double));
                    } else {
                        memcpy(var199, (double[]){0.46110922346591104, 0.5388907765340889}, 2 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var2, var199, 2, var1);
    mul_vector_number(var1, 0.01, 2, var0);
    memcpy(output, var0, 2 * sizeof(double));
}


// Compile-time feature dimension
constexpr int get_feature_dimension() {
    return 27;
}

// Model metadata
struct ModelMetadata {
    static constexpr int features_dim           = 27;
    static constexpr int lookback               = 5;
    static constexpr int tick_count             = 10;
    static constexpr double validation_precision = 0.7571428571428571;
};
