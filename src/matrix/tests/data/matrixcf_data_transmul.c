/*
 * Copyright (c) 2013 Joseph Gaeddert
 *
 * This file is part of liquid.
 *
 * liquid is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * liquid is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with liquid.  If not, see <http://www.gnu.org/licenses/>.
 */

//
// data for testing multiply/transpose
//

#include <complex.h>

// matrixcf_data_transmul_x [size: 5 x 4]
float complex matrixcf_data_transmul_x[] = {
    0.897770464420 +  -1.137341141701*_Complex_I /* ( 0, 0) */,
    0.816529691219 +  -0.575469911098*_Complex_I /* ( 0, 1) */,
    2.407611131668 +   0.901603281498*_Complex_I /* ( 0, 2) */,
   -1.024818181992 +  -1.785745739937*_Complex_I /* ( 0, 3) */,
    1.494256496429 +  -0.826167643070*_Complex_I /* ( 1, 0) */,
   -0.908512234688 +   0.119766108692*_Complex_I /* ( 1, 1) */,
   -0.215938329697 +  -2.537411689758*_Complex_I /* ( 1, 2) */,
   -1.348789930344 +  -0.935531198978*_Complex_I /* ( 1, 3) */,
   -0.398543357849 +   0.101190350950*_Complex_I /* ( 2, 0) */,
   -0.083604514599 +   1.493514776230*_Complex_I /* ( 2, 1) */,
    0.477280050516 +  -0.074863225222*_Complex_I /* ( 2, 2) */,
   -0.283995777369 +   0.336168438196*_Complex_I /* ( 2, 3) */,
   -0.030109925196 +  -1.602186083794*_Complex_I /* ( 3, 0) */,
    2.220442056656 +  -0.208865001798*_Complex_I /* ( 3, 1) */,
    1.889614224434 +  -0.896111547947*_Complex_I /* ( 3, 2) */,
   -0.317830920219 +   0.215485602617*_Complex_I /* ( 3, 3) */,
   -0.945744097233 +  -0.822628259659*_Complex_I /* ( 4, 0) */,
   -0.238264903426 +   0.054408840835*_Complex_I /* ( 4, 1) */,
    0.532425582409 +   0.438958346844*_Complex_I /* ( 4, 2) */,
    0.089408367872 +  -1.864659070969*_Complex_I /* ( 4, 3) */};

// matrixcf_data_transmul_xxT [size: 5 x 5]
float complex matrixcf_data_transmul_xxT[] = {
   13.946043026996 +   0.000000000000*_Complex_I /* ( 0, 0) */,
    1.715635857916 +   6.831514803023*_Complex_I /* ( 0, 1) */,
   -0.628286275869 +   0.653261344190*_Complex_I /* ( 0, 2) */,
    7.410888277177 +   5.014956782605*_Complex_I /* ( 0, 3) */,
    4.776506544166 +  -0.740548606324*_Complex_I /* ( 0, 4) */,
    1.715635857916 +  -6.831514803023*_Complex_I /* ( 1, 0) */,
   12.934634198959 +   0.000000000000*_Complex_I /* ( 1, 1) */,
   -0.268847669275 +   1.016808442009*_Complex_I /* ( 1, 2) */,
    1.329226044140 +  -1.905118394989*_Complex_I /* ( 1, 3) */,
   -0.115507997317 +  -1.823416830395*_Complex_I /* ( 1, 4) */,
   -0.628286275869 +  -0.653261344190*_Complex_I /* ( 2, 0) */,
   -0.268847669275 +  -1.016808442009*_Complex_I /* ( 2, 1) */,
    2.833715966403 +   0.000000000000*_Complex_I /* ( 2, 2) */,
    0.483955462699 +   2.897799335427*_Complex_I /* ( 2, 3) */,
   -0.036118440085 +  -1.523720724413*_Complex_I /* ( 2, 4) */,
    7.410888277177 +  -5.014956782605*_Complex_I /* ( 3, 0) */,
    1.329226044140 +   1.905118394989*_Complex_I /* ( 3, 1) */,
    0.483955462699 +  -2.897799335427*_Complex_I /* ( 3, 2) */,
   12.063002732969 +   0.000000000000*_Complex_I /* ( 3, 3) */,
    0.988561701830 +  -0.460512464248*_Complex_I /* ( 3, 4) */,
    4.776506544166 +   0.740548606324*_Complex_I /* ( 4, 0) */,
   -0.115507997317 +   1.823416830395*_Complex_I /* ( 4, 1) */,
   -0.036118440085 +   1.523720724413*_Complex_I /* ( 4, 2) */,
    0.988561701830 +   0.460512464248*_Complex_I /* ( 4, 3) */,
    5.591988375464 +   0.000000000000*_Complex_I /* ( 4, 4) */};

// matrixcf_data_transmul_xxH [size: 5 x 5]
float complex matrixcf_data_transmul_xxH[] = {
    2.693069394806 +   5.019630491560*_Complex_I /* ( 0, 0) */,
    1.208446246635 +  -4.757020341403*_Complex_I /* ( 0, 1) */,
    2.656451825557 +   2.224444954914*_Complex_I /* ( 0, 2) */,
    5.911512147844 +  -2.959566260460*_Complex_I /* ( 0, 3) */,
   -4.483236639053 +   3.806796594938*_Complex_I /* ( 0, 4) */,
    1.208446246635 +  -4.757020341403*_Complex_I /* ( 1, 0) */,
   -3.086513006704 +   0.932888319797*_Complex_I /* ( 1, 1) */,
   -0.210317709361 +  -2.269045302266*_Complex_I /* ( 1, 2) */,
   -5.412513485879 +  -6.508039464439*_Complex_I /* ( 1, 3) */,
   -2.749055759920 +   0.459776624619*_Complex_I /* ( 1, 4) */,
    2.656451825557 +   2.224444954914*_Complex_I /* ( 2, 0) */,
   -0.210317709361 +  -2.269045302266*_Complex_I /* ( 2, 1) */,
   -1.885163224141 +  -0.592788922020*_Complex_I /* ( 2, 2) */,
    1.153042421508 +   3.232018360881*_Complex_I /* ( 2, 3) */,
    1.287247559495 +   0.601010412549*_Complex_I /* ( 2, 4) */,
    5.911512147844 +  -2.959566260460*_Complex_I /* ( 3, 0) */,
   -5.412513485879 +  -6.508039464439*_Complex_I /* ( 3, 1) */,
    1.153042421508 +   3.232018360881*_Complex_I /* ( 3, 2) */,
    5.142853158215 +  -4.354648092153*_Complex_I /* ( 3, 3) */,
   -0.034391537899 +   2.674865932467*_Complex_I /* ( 3, 4) */,
   -4.483236639053 +   3.806796594938*_Complex_I /* ( 4, 0) */,
   -2.749055759920 +   0.459776624619*_Complex_I /* ( 4, 1) */,
    1.287247559495 +   0.601010412549*_Complex_I /* ( 4, 2) */,
   -0.034391537899 +   2.674865932467*_Complex_I /* ( 4, 3) */,
   -3.106642538055 +   1.664057265760*_Complex_I /* ( 4, 4) */};

// matrixcf_data_transmul_xTx [size: 4 x 4]
float complex matrixcf_data_transmul_xTx[] = {
    9.323024431917 +   0.000000000000*_Complex_I /* ( 0, 0) */,
    0.563876592623 +   2.570030362211*_Complex_I /* ( 0, 1) */,
    3.226123027525 +   2.636644463529*_Complex_I /* ( 0, 2) */,
    1.129305368076 +  -4.064920271606*_Complex_I /* ( 0, 3) */,
    0.563876592623 +  -2.570030362211*_Complex_I /* ( 1, 0) */,
    9.108918860377 +   0.000000000000*_Complex_I /* ( 1, 1) */,
    5.467585123601 +   2.017612849734*_Complex_I /* ( 1, 2) */,
    0.956522192172 +   0.211168853425*_Complex_I /* ( 1, 3) */,
    3.226123027525 +  -2.636644463529*_Complex_I /* ( 2, 0) */,
    5.467585123601 +  -2.017612849734*_Complex_I /* ( 2, 1) */,
   18.177787287820 +   0.000000000000*_Complex_I /* ( 2, 2) */,
   -3.137608134941 +  -7.366300567700*_Complex_I /* ( 2, 3) */,
    1.129305368076 +   4.064920271606*_Complex_I /* ( 3, 0) */,
    0.956522192172 +  -0.211168853425*_Complex_I /* ( 3, 1) */,
   -3.137608134941 +   7.366300567700*_Complex_I /* ( 3, 2) */,
   10.759653720678 +   0.000000000000*_Complex_I /* ( 3, 3) */};

// matrixcf_data_transmul_xHx [size: 4 x 4]
float complex matrixcf_data_transmul_xHx[] = {
   -1.137085237839 +  -2.939337742229*_Complex_I /* ( 0, 0) */,
   -1.429264118470 +  -4.526184217761*_Complex_I /* ( 0, 1) */,
   -1.049795781222 +  -9.317515018345*_Complex_I /* ( 0, 2) */,
   -6.923890470327 +   1.308742276041*_Complex_I /* ( 0, 3) */,
   -1.429264118470 +  -4.526184217761*_Complex_I /* ( 1, 0) */,
    3.863557186128 +  -2.360596346275*_Complex_I /* ( 1, 1) */,
    6.914587648894 +  -0.110888488534*_Complex_I /* ( 1, 2) */,
   -1.585896210450 +   0.361787209777*_Complex_I /* ( 1, 3) */,
   -1.049795781222 +  -9.317515018345*_Complex_I /* ( 2, 0) */,
    6.914587648894 +  -0.110888488534*_Complex_I /* ( 2, 1) */,
    1.672484488523 +   2.446622681596*_Complex_I /* ( 2, 2) */,
   -2.591648390404 +  -1.678750072577*_Complex_I /* ( 2, 3) */,
   -6.923890470327 +   1.308742276041*_Complex_I /* ( 3, 0) */,
   -1.585896210450 +   0.361787209777*_Complex_I /* ( 3, 1) */,
   -2.591648390404 +  -1.678750072577*_Complex_I /* ( 3, 2) */,
   -4.641352652692 +   5.522450469852*_Complex_I /* ( 3, 3) */};

