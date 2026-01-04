/****************************************************************************************************************************************************************************************
 * @file    :bitfield_macro.h
 * @brief   :gpio macro configuration file for stm32f10x
 * @author  :lu-05-cmd
 * @date    :December, 27 2025 
 * @note    :file is macro configuration for peripheral
 *****************************************************************************************************************************************************************************************/

#ifndef STM32F103_BITFIELD_MACRO_H
#define STM32F103_BITFIELD_MACRO_H

/***********************************************************************************************************************************************************/
/********************************************************---- START MACRO HEPLER ----***********************************************************************/
/***********************************************************************************************************************************************************/

#define PARAMS_COUNT(\
_1,_2,_3,_4,_5,_6,_7,_8,_9,_10,_11,_12,_13,_14,_15,_16,_17,_18,_19,_20,\
_21,_22,_23,_24,_25,_26,_27,_28,_29,_30,_31,_32,_33,_34,_35,_36,_37,_38,_39,_40,\
_41,_42,_43,_44,_45,_46,_47,_48,_49,_50,_51,_52,_53,_54,_55,_56,_57,_58,_59,_60,\
_61,_62,_63,_64,_65,_66,_67,_68,_69,_70,_71,_72,_73,_74,_75,_76,_77,_78,_79,_80,\
_81,_82,_83,_84,_85,_86,_87,_88,_89,_90,_91,_92,_93,_94,_95,_96,_97,_98,_99,_100,\
_101,_102,_103,_104,_105,_106,_107,_108,_109,_110,_111,_112,_113,_114,_115,_116,_117,_118,_119,_120,\
_121,_122,_123,_124,_125,_126,_127,_128,_129,_130,_131,_132,_133,_134,_135,_136,_137,_138,_139,_140,\
_141,_142,_143,_144,_145,_146,_147,_148,_149,_150,_151,_152,_153,_154,_155,_156,_157,_158,_159,_160,\
_161,_162,_163,_164,_165,_166,_167,_168,_169,_170,_171,_172,_173,_174,_175,_176,_177,_178,_179,_180,\
_181,_182,_183,_184,_185,_186,_187,_188,_189,_190,_191,_192,_193,_194,_195,_196,_197,_198,_199,_200,\
_201,_202,_203,_204,_205, N, ...) N

#define PARAMS_COUNT_MASK(...)     PARAMS_COUNT(__VA_ARGS__,\
_205,_204,_203,_202,_201,_200,_199,_198,_197,_196,_195,_194,_193,_192,_191,_190,_189,_188,_187,_186,\
_185,_184,_183,_182,_181,_180,_179,_178,_177,_176,_175,_174,_173,_172,_171,_170,_169,_168,_167,_166,\
_165,_164,_163,_162,_161,_160,_159,_158,_157,_156,_155,_154,_153,_152,_151,_150,_149,_148,_147,_146,\
_145,_144,_143,_142,_141,_140,_139,_138,_137,_136,_135,_134,_133,_132,_131,_130,_129,_128,_127,_126,\
_125,_124,_123,_122,_121,_120,_119,_118,_117,_116,_115,_114,_113,_112,_111,_110,_109,_108,_107,_106,\
_105,_104,_103,_102,_101,_100,_99,_98,_97,_96,_95,_94,_93,_92,_91,_90,_89,_88,_87,_86,\
_85,_84,_83,_82,_81,_80,_79,_78,_77,_76,_75,_74,_73,_72,_71,_70,_69,_68,_67,_66,\
_65,_64,_63,_62,_61,_60,_59,_58,_57,_56,_55,_54,_53,_52,_51,_50,_49,_48,_47,_46,\
_45,_44,_43,_42,_41,_40,_39,_38,_37,_36,_35,_34,_33,_32,_31,_30,_29,_28,_27,_26,\
_25,_24,_23,_22,_21,_20,_19,_18,_17,_16,_15,_14,_13,_12,_11,_10,_9,_8,_7,_6,\
_5,_4,_3,_2,_1,_0)
//----------------------------------------------------------------------------------------------------------------------------------

#define PARAMS_0(_0, ...)         _0
#define PARAMS_1(_0, ...)         PARAMS_0(__VA_ARGS__) 
#define PARAMS_2(_0, ...)         PARAMS_1(__VA_ARGS__) 
#define PARAMS_3(_0, ...)         PARAMS_2(__VA_ARGS__) 
#define PARAMS_4(_0, ...)         PARAMS_3(__VA_ARGS__) 
#define PARAMS_5(_0, ...)         PARAMS_4(__VA_ARGS__) 
#define PARAMS_6(_0, ...)         PARAMS_5(__VA_ARGS__) 
#define PARAMS_7(_0, ...)         PARAMS_6(__VA_ARGS__)
#define PARAMS_8(_0, ...)         PARAMS_7(__VA_ARGS__)
#define PARAMS_9(_0, ...)         PARAMS_8(__VA_ARGS__)
#define PARAMS_10(_0, ...)        PARAMS_9(__VA_ARGS__)
#define PARAMS_11(_0, ...)        PARAMS_10(__VA_ARGS__)
#define PARAMS_12(_0, ...)        PARAMS_11(__VA_ARGS__)
#define PARAMS_13(_0, ...)        PARAMS_12(__VA_ARGS__)
#define PARAMS_14(_0, ...)        PARAMS_13(__VA_ARGS__)
#define PARAMS_15(_0, ...)        PARAMS_14(__VA_ARGS__)
#define PARAMS_16(_0, ...)        PARAMS_15(__VA_ARGS__)
#define PARAMS_17(_0, ...)        PARAMS_16(__VA_ARGS__)
#define PARAMS_18(_0, ...)        PARAMS_17(__VA_ARGS__)
#define PARAMS_19(_0, ...)        PARAMS_18(__VA_ARGS__)
#define PARAMS_20(_0, ...)        PARAMS_19(__VA_ARGS__)
#define PARAMS_21(_0, ...)        PARAMS_20(__VA_ARGS__)
#define PARAMS_22(_0, ...)        PARAMS_21(__VA_ARGS__)
#define PARAMS_23(_0, ...)        PARAMS_22(__VA_ARGS__)
#define PARAMS_24(_0, ...)        PARAMS_23(__VA_ARGS__)
#define PARAMS_25(_0, ...)        PARAMS_24(__VA_ARGS__)
#define PARAMS_26(_0, ...)        PARAMS_25(__VA_ARGS__)
#define PARAMS_27(_0, ...)        PARAMS_26(__VA_ARGS__)
#define PARAMS_28(_0, ...)        PARAMS_27(__VA_ARGS__)
#define PARAMS_29(_0, ...)        PARAMS_28(__VA_ARGS__)
#define PARAMS_30(_0, ...)        PARAMS_29(__VA_ARGS__)
#define PARAMS_31(_0, ...)        PARAMS_30(__VA_ARGS__)
#define PARAMS_32(_0, ...)        PARAMS_31(__VA_ARGS__)
#define PARAMS_33(_0, ...)        PARAMS_32(__VA_ARGS__)
#define PARAMS_34(_0, ...)        PARAMS_33(__VA_ARGS__)
#define PARAMS_35(_0, ...)        PARAMS_34(__VA_ARGS__)
#define PARAMS_36(_0, ...)        PARAMS_35(__VA_ARGS__)
#define PARAMS_37(_0, ...)        PARAMS_36(__VA_ARGS__)
#define PARAMS_38(_0, ...)        PARAMS_37(__VA_ARGS__)
#define PARAMS_39(_0, ...)        PARAMS_38(__VA_ARGS__)
#define PARAMS_40(_0, ...)        PARAMS_39(__VA_ARGS__)
#define PARAMS_41(_0, ...)        PARAMS_40(__VA_ARGS__)
#define PARAMS_42(_0, ...)        PARAMS_41(__VA_ARGS__)
#define PARAMS_43(_0, ...)        PARAMS_42(__VA_ARGS__)
#define PARAMS_44(_0, ...)        PARAMS_43(__VA_ARGS__)
#define PARAMS_45(_0, ...)        PARAMS_44(__VA_ARGS__)
#define PARAMS_46(_0, ...)        PARAMS_45(__VA_ARGS__)
#define PARAMS_47(_0, ...)        PARAMS_46(__VA_ARGS__)
#define PARAMS_48(_0, ...)        PARAMS_47(__VA_ARGS__)
#define PARAMS_49(_0, ...)        PARAMS_48(__VA_ARGS__)
#define PARAMS_50(_0, ...)        PARAMS_49(__VA_ARGS__)
#define PARAMS_51(_0, ...)        PARAMS_50(__VA_ARGS__)
#define PARAMS_52(_0, ...)        PARAMS_51(__VA_ARGS__)
#define PARAMS_53(_0, ...)        PARAMS_52(__VA_ARGS__)
#define PARAMS_54(_0, ...)        PARAMS_53(__VA_ARGS__)
#define PARAMS_55(_0, ...)        PARAMS_54(__VA_ARGS__)
#define PARAMS_56(_0, ...)        PARAMS_55(__VA_ARGS__)
#define PARAMS_57(_0, ...)        PARAMS_56(__VA_ARGS__)
#define PARAMS_58(_0, ...)        PARAMS_57(__VA_ARGS__)
#define PARAMS_59(_0, ...)        PARAMS_58(__VA_ARGS__)
#define PARAMS_60(_0, ...)        PARAMS_59(__VA_ARGS__)
#define PARAMS_61(_0, ...)        PARAMS_60(__VA_ARGS__)
#define PARAMS_62(_0, ...)        PARAMS_61(__VA_ARGS__)
#define PARAMS_63(_0, ...)        PARAMS_62(__VA_ARGS__)
#define PARAMS_64(_0, ...)        PARAMS_63(__VA_ARGS__)
#define PARAMS_65(_0, ...)        PARAMS_64(__VA_ARGS__)
#define PARAMS_66(_0, ...)        PARAMS_65(__VA_ARGS__)
#define PARAMS_67(_0, ...)        PARAMS_66(__VA_ARGS__)
#define PARAMS_68(_0, ...)        PARAMS_67(__VA_ARGS__)
#define PARAMS_69(_0, ...)        PARAMS_68(__VA_ARGS__)
#define PARAMS_70(_0, ...)        PARAMS_69(__VA_ARGS__)
#define PARAMS_71(_0, ...)        PARAMS_70(__VA_ARGS__)
#define PARAMS_72(_0, ...)        PARAMS_71(__VA_ARGS__)
#define PARAMS_73(_0, ...)        PARAMS_72(__VA_ARGS__)
#define PARAMS_74(_0, ...)        PARAMS_73(__VA_ARGS__)
#define PARAMS_75(_0, ...)        PARAMS_74(__VA_ARGS__)
#define PARAMS_76(_0, ...)        PARAMS_75(__VA_ARGS__)
#define PARAMS_77(_0, ...)        PARAMS_76(__VA_ARGS__)
#define PARAMS_78(_0, ...)        PARAMS_77(__VA_ARGS__)
#define PARAMS_79(_0, ...)        PARAMS_78(__VA_ARGS__)
#define PARAMS_80(_0, ...)        PARAMS_79(__VA_ARGS__)
#define PARAMS_81(_0, ...)        PARAMS_80(__VA_ARGS__)
#define PARAMS_82(_0, ...)        PARAMS_81(__VA_ARGS__)
#define PARAMS_83(_0, ...)        PARAMS_82(__VA_ARGS__)
#define PARAMS_84(_0, ...)        PARAMS_83(__VA_ARGS__)
#define PARAMS_85(_0, ...)        PARAMS_84(__VA_ARGS__)
#define PARAMS_86(_0, ...)        PARAMS_85(__VA_ARGS__)
#define PARAMS_87(_0, ...)        PARAMS_86(__VA_ARGS__)
#define PARAMS_88(_0, ...)        PARAMS_87(__VA_ARGS__)
#define PARAMS_89(_0, ...)        PARAMS_88(__VA_ARGS__)
#define PARAMS_90(_0, ...)        PARAMS_89(__VA_ARGS__)
#define PARAMS_91(_0, ...)        PARAMS_90(__VA_ARGS__)
#define PARAMS_92(_0, ...)        PARAMS_91(__VA_ARGS__)
#define PARAMS_93(_0, ...)        PARAMS_92(__VA_ARGS__)
#define PARAMS_94(_0, ...)        PARAMS_93(__VA_ARGS__)
#define PARAMS_95(_0, ...)        PARAMS_94(__VA_ARGS__)
#define PARAMS_96(_0, ...)        PARAMS_95(__VA_ARGS__)
#define PARAMS_97(_0, ...)        PARAMS_96(__VA_ARGS__)
#define PARAMS_98(_0, ...)        PARAMS_97(__VA_ARGS__)
#define PARAMS_99(_0, ...)        PARAMS_98(__VA_ARGS__)
#define PARAMS_100(_0, ...)       PARAMS_99(__VA_ARGS__)
#define PARAMS_101(_0, ...)       PARAMS_100(__VA_ARGS__)
#define PARAMS_102(_0, ...)       PARAMS_101(__VA_ARGS__)
#define PARAMS_103(_0, ...)       PARAMS_102(__VA_ARGS__)
#define PARAMS_104(_0, ...)       PARAMS_103(__VA_ARGS__)
#define PARAMS_105(_0, ...)       PARAMS_104(__VA_ARGS__)
#define PARAMS_106(_0, ...)       PARAMS_105(__VA_ARGS__)
#define PARAMS_107(_0, ...)       PARAMS_106(__VA_ARGS__)
#define PARAMS_108(_0, ...)       PARAMS_107(__VA_ARGS__)
#define PARAMS_109(_0, ...)       PARAMS_108(__VA_ARGS__)
#define PARAMS_110(_0, ...)       PARAMS_109(__VA_ARGS__)
#define PARAMS_111(_0, ...)       PARAMS_110(__VA_ARGS__)
#define PARAMS_112(_0, ...)       PARAMS_111(__VA_ARGS__)
#define PARAMS_113(_0, ...)       PARAMS_112(__VA_ARGS__)
#define PARAMS_114(_0, ...)       PARAMS_113(__VA_ARGS__)
#define PARAMS_115(_0, ...)       PARAMS_114(__VA_ARGS__)
#define PARAMS_116(_0, ...)       PARAMS_115(__VA_ARGS__)
#define PARAMS_117(_0, ...)       PARAMS_116(__VA_ARGS__)
#define PARAMS_118(_0, ...)       PARAMS_117(__VA_ARGS__)
#define PARAMS_119(_0, ...)       PARAMS_118(__VA_ARGS__)
#define PARAMS_120(_0, ...)       PARAMS_119(__VA_ARGS__)
#define PARAMS_121(_0, ...)       PARAMS_120(__VA_ARGS__)
#define PARAMS_122(_0, ...)       PARAMS_121(__VA_ARGS__)
#define PARAMS_123(_0, ...)       PARAMS_122(__VA_ARGS__)
#define PARAMS_124(_0, ...)       PARAMS_123(__VA_ARGS__)
#define PARAMS_125(_0, ...)       PARAMS_124(__VA_ARGS__)
#define PARAMS_126(_0, ...)       PARAMS_125(__VA_ARGS__)
#define PARAMS_127(_0, ...)       PARAMS_126(__VA_ARGS__)
#define PARAMS_128(_0, ...)       PARAMS_127(__VA_ARGS__)
#define PARAMS_129(_0, ...)       PARAMS_128(__VA_ARGS__)
#define PARAMS_130(_0, ...)       PARAMS_129(__VA_ARGS__)
#define PARAMS_131(_0, ...)       PARAMS_130(__VA_ARGS__)
#define PARAMS_132(_0, ...)       PARAMS_131(__VA_ARGS__)
#define PARAMS_133(_0, ...)       PARAMS_132(__VA_ARGS__)
#define PARAMS_134(_0, ...)       PARAMS_133(__VA_ARGS__)
#define PARAMS_135(_0, ...)       PARAMS_134(__VA_ARGS__)
#define PARAMS_136(_0, ...)       PARAMS_135(__VA_ARGS__)
#define PARAMS_137(_0, ...)       PARAMS_136(__VA_ARGS__)
#define PARAMS_138(_0, ...)       PARAMS_137(__VA_ARGS__)
#define PARAMS_139(_0, ...)       PARAMS_138(__VA_ARGS__)
#define PARAMS_140(_0, ...)       PARAMS_139(__VA_ARGS__)
#define PARAMS_141(_0, ...)       PARAMS_140(__VA_ARGS__)
#define PARAMS_142(_0, ...)       PARAMS_141(__VA_ARGS__)
#define PARAMS_143(_0, ...)       PARAMS_142(__VA_ARGS__)
#define PARAMS_144(_0, ...)       PARAMS_143(__VA_ARGS__)
#define PARAMS_145(_0, ...)       PARAMS_144(__VA_ARGS__)
#define PARAMS_146(_0, ...)       PARAMS_145(__VA_ARGS__)
#define PARAMS_147(_0, ...)       PARAMS_146(__VA_ARGS__)
#define PARAMS_148(_0, ...)       PARAMS_147(__VA_ARGS__)
#define PARAMS_149(_0, ...)       PARAMS_148(__VA_ARGS__)
#define PARAMS_150(_0, ...)       PARAMS_149(__VA_ARGS__)
#define PARAMS_151(_0, ...)       PARAMS_150(__VA_ARGS__)
#define PARAMS_152(_0, ...)       PARAMS_151(__VA_ARGS__)
#define PARAMS_153(_0, ...)       PARAMS_152(__VA_ARGS__)
#define PARAMS_154(_0, ...)       PARAMS_153(__VA_ARGS__)
#define PARAMS_155(_0, ...)       PARAMS_154(__VA_ARGS__)
#define PARAMS_156(_0, ...)       PARAMS_155(__VA_ARGS__)
#define PARAMS_157(_0, ...)       PARAMS_156(__VA_ARGS__)
#define PARAMS_158(_0, ...)       PARAMS_157(__VA_ARGS__)
#define PARAMS_159(_0, ...)       PARAMS_158(__VA_ARGS__)
#define PARAMS_160(_0, ...)       PARAMS_159(__VA_ARGS__)
#define PARAMS_161(_0, ...)       PARAMS_160(__VA_ARGS__)
#define PARAMS_162(_0, ...)       PARAMS_161(__VA_ARGS__)
#define PARAMS_163(_0, ...)       PARAMS_162(__VA_ARGS__)
#define PARAMS_164(_0, ...)       PARAMS_163(__VA_ARGS__)
#define PARAMS_165(_0, ...)       PARAMS_164(__VA_ARGS__)
#define PARAMS_166(_0, ...)       PARAMS_165(__VA_ARGS__)
#define PARAMS_167(_0, ...)       PARAMS_166(__VA_ARGS__)
#define PARAMS_168(_0, ...)       PARAMS_167(__VA_ARGS__)
#define PARAMS_169(_0, ...)       PARAMS_168(__VA_ARGS__)
#define PARAMS_170(_0, ...)       PARAMS_169(__VA_ARGS__)
#define PARAMS_171(_0, ...)       PARAMS_170(__VA_ARGS__)
#define PARAMS_172(_0, ...)       PARAMS_171(__VA_ARGS__)
#define PARAMS_173(_0, ...)       PARAMS_172(__VA_ARGS__)
#define PARAMS_174(_0, ...)       PARAMS_173(__VA_ARGS__)
#define PARAMS_175(_0, ...)       PARAMS_174(__VA_ARGS__)
#define PARAMS_176(_0, ...)       PARAMS_175(__VA_ARGS__)
#define PARAMS_177(_0, ...)       PARAMS_176(__VA_ARGS__)
#define PARAMS_178(_0, ...)       PARAMS_177(__VA_ARGS__)
#define PARAMS_179(_0, ...)       PARAMS_178(__VA_ARGS__)
#define PARAMS_180(_0, ...)       PARAMS_179(__VA_ARGS__)
#define PARAMS_181(_0, ...)       PARAMS_180(__VA_ARGS__)
#define PARAMS_182(_0, ...)       PARAMS_181(__VA_ARGS__)
#define PARAMS_183(_0, ...)       PARAMS_182(__VA_ARGS__)
#define PARAMS_184(_0, ...)       PARAMS_183(__VA_ARGS__)
#define PARAMS_185(_0, ...)       PARAMS_184(__VA_ARGS__)
#define PARAMS_186(_0, ...)       PARAMS_185(__VA_ARGS__)
#define PARAMS_187(_0, ...)       PARAMS_186(__VA_ARGS__)
#define PARAMS_188(_0, ...)       PARAMS_187(__VA_ARGS__)
#define PARAMS_189(_0, ...)       PARAMS_188(__VA_ARGS__)
#define PARAMS_190(_0, ...)       PARAMS_189(__VA_ARGS__)
#define PARAMS_191(_0, ...)       PARAMS_190(__VA_ARGS__)
#define PARAMS_192(_0, ...)       PARAMS_191(__VA_ARGS__)
#define PARAMS_193(_0, ...)       PARAMS_192(__VA_ARGS__)
#define PARAMS_194(_0, ...)       PARAMS_193(__VA_ARGS__)
#define PARAMS_195(_0, ...)       PARAMS_194(__VA_ARGS__)
#define PARAMS_196(_0, ...)       PARAMS_195(__VA_ARGS__)
#define PARAMS_197(_0, ...)       PARAMS_196(__VA_ARGS__)
#define PARAMS_198(_0, ...)       PARAMS_197(__VA_ARGS__)
#define PARAMS_199(_0, ...)       PARAMS_198(__VA_ARGS__)
#define PARAMS_200(_0, ...)       PARAMS_199(__VA_ARGS__)
#define PARAMS_201(_0, ...)       PARAMS_200(__VA_ARGS__)
#define PARAMS_202(_0, ...)       PARAMS_201(__VA_ARGS__)
#define PARAMS_203(_0, ...)       PARAMS_202(__VA_ARGS__)
#define PARAMS_204(_0, ...)       PARAMS_203(__VA_ARGS__)
#define PARAMS_205(_0, ...)       PARAMS_204(__VA_ARGS__)

#define PARAMS_MASK(index)               PARAMS_##index(__va_args__)
#define PARAMS(number_of_params, ...)    PARAMS_MASK(number_of_params,__VA_ARGS__)

//----------------------------------------------------------------------------------------------------------------------------------
#define PARAMS_GET_FROM_0(...) __VA_ARGS__
#define PARAMS_GET_FROM_1(_0, ...) __VA_ARGS__
#define PARAMS_GET_FROM_2(_0, ...) PARAMS_GET_FROM_1(__VA_ARGS__)
#define PARAMS_GET_FROM_3(_0, ...) PARAMS_GET_FROM_2(__VA_ARGS__)
#define PARAMS_GET_FROM_4(_0, ...) PARAMS_GET_FROM_3(__VA_ARGS__)
#define PARAMS_GET_FROM_5(_0, ...) PARAMS_GET_FROM_4(__VA_ARGS__)
#define PARAMS_GET_FROM_6(_0, ...) PARAMS_GET_FROM_5(__VA_ARGS__)
#define PARAMS_GET_FROM_7(_0, ...) PARAMS_GET_FROM_6(__VA_ARGS__)
#define PARAMS_GET_FROM_8(_0, ...) PARAMS_GET_FROM_7(__VA_ARGS__)
#define PARAMS_GET_FROM_9(_0, ...) PARAMS_GET_FROM_8(__VA_ARGS__)
#define PARAMS_GET_FROM_10(_0, ...) PARAMS_GET_FROM_9(__VA_ARGS__)
#define PARAMS_GET_FROM_11(_0, ...) PARAMS_GET_FROM_10(__VA_ARGS__)
#define PARAMS_GET_FROM_12(_0, ...) PARAMS_GET_FROM_11(__VA_ARGS__)
#define PARAMS_GET_FROM_13(_0, ...) PARAMS_GET_FROM_12(__VA_ARGS__)
#define PARAMS_GET_FROM_14(_0, ...) PARAMS_GET_FROM_13(__VA_ARGS__)
#define PARAMS_GET_FROM_15(_0, ...) PARAMS_GET_FROM_14(__VA_ARGS__)
#define PARAMS_GET_FROM_16(_0, ...) PARAMS_GET_FROM_15(__VA_ARGS__)
#define PARAMS_GET_FROM_17(_0, ...) PARAMS_GET_FROM_16(__VA_ARGS__)
#define PARAMS_GET_FROM_18(_0, ...) PARAMS_GET_FROM_17(__VA_ARGS__)
#define PARAMS_GET_FROM_19(_0, ...) PARAMS_GET_FROM_18(__VA_ARGS__)
#define PARAMS_GET_FROM_20(_0, ...) PARAMS_GET_FROM_19(__VA_ARGS__)
#define PARAMS_GET_FROM_21(_0, ...) PARAMS_GET_FROM_20(__VA_ARGS__)
#define PARAMS_GET_FROM_22(_0, ...) PARAMS_GET_FROM_21(__VA_ARGS__)
#define PARAMS_GET_FROM_23(_0, ...) PARAMS_GET_FROM_22(__VA_ARGS__)
#define PARAMS_GET_FROM_24(_0, ...) PARAMS_GET_FROM_23(__VA_ARGS__)
#define PARAMS_GET_FROM_25(_0, ...) PARAMS_GET_FROM_24(__VA_ARGS__)
#define PARAMS_GET_FROM_26(_0, ...) PARAMS_GET_FROM_25(__VA_ARGS__)
#define PARAMS_GET_FROM_27(_0, ...) PARAMS_GET_FROM_26(__VA_ARGS__)
#define PARAMS_GET_FROM_28(_0, ...) PARAMS_GET_FROM_27(__VA_ARGS__)
#define PARAMS_GET_FROM_29(_0, ...) PARAMS_GET_FROM_28(__VA_ARGS__)
#define PARAMS_GET_FROM_30(_0, ...) PARAMS_GET_FROM_29(__VA_ARGS__)
#define PARAMS_GET_FROM_31(_0, ...) PARAMS_GET_FROM_30(__VA_ARGS__)
#define PARAMS_GET_FROM_32(_0, ...) PARAMS_GET_FROM_31(__VA_ARGS__)
#define PARAMS_GET_FROM_33(_0, ...) PARAMS_GET_FROM_32(__VA_ARGS__)
#define PARAMS_GET_FROM_34(_0, ...) PARAMS_GET_FROM_33(__VA_ARGS__)
#define PARAMS_GET_FROM_35(_0, ...) PARAMS_GET_FROM_34(__VA_ARGS__)
#define PARAMS_GET_FROM_36(_0, ...) PARAMS_GET_FROM_35(__VA_ARGS__)
#define PARAMS_GET_FROM_37(_0, ...) PARAMS_GET_FROM_36(__VA_ARGS__)
#define PARAMS_GET_FROM_38(_0, ...) PARAMS_GET_FROM_37(__VA_ARGS__)
#define PARAMS_GET_FROM_39(_0, ...) PARAMS_GET_FROM_38(__VA_ARGS__)
#define PARAMS_GET_FROM_40(_0, ...) PARAMS_GET_FROM_39(__VA_ARGS__)
#define PARAMS_GET_FROM_41(_0, ...) PARAMS_GET_FROM_40(__VA_ARGS__)
#define PARAMS_GET_FROM_42(_0, ...) PARAMS_GET_FROM_41(__VA_ARGS__)
#define PARAMS_GET_FROM_43(_0, ...) PARAMS_GET_FROM_42(__VA_ARGS__)
#define PARAMS_GET_FROM_44(_0, ...) PARAMS_GET_FROM_43(__VA_ARGS__)
#define PARAMS_GET_FROM_45(_0, ...) PARAMS_GET_FROM_44(__VA_ARGS__)
#define PARAMS_GET_FROM_46(_0, ...) PARAMS_GET_FROM_45(__VA_ARGS__)
#define PARAMS_GET_FROM_47(_0, ...) PARAMS_GET_FROM_46(__VA_ARGS__)
#define PARAMS_GET_FROM_48(_0, ...) PARAMS_GET_FROM_47(__VA_ARGS__)
#define PARAMS_GET_FROM_49(_0, ...) PARAMS_GET_FROM_48(__VA_ARGS__)
#define PARAMS_GET_FROM_50(_0, ...) PARAMS_GET_FROM_49(__VA_ARGS__)
#define PARAMS_GET_FROM_51(_0, ...) PARAMS_GET_FROM_50(__VA_ARGS__)
#define PARAMS_GET_FROM_52(_0, ...) PARAMS_GET_FROM_51(__VA_ARGS__)
#define PARAMS_GET_FROM_53(_0, ...) PARAMS_GET_FROM_52(__VA_ARGS__)
#define PARAMS_GET_FROM_54(_0, ...) PARAMS_GET_FROM_53(__VA_ARGS__)
#define PARAMS_GET_FROM_55(_0, ...) PARAMS_GET_FROM_54(__VA_ARGS__)
#define PARAMS_GET_FROM_56(_0, ...) PARAMS_GET_FROM_55(__VA_ARGS__)
#define PARAMS_GET_FROM_57(_0, ...) PARAMS_GET_FROM_56(__VA_ARGS__)
#define PARAMS_GET_FROM_58(_0, ...) PARAMS_GET_FROM_57(__VA_ARGS__)
#define PARAMS_GET_FROM_59(_0, ...) PARAMS_GET_FROM_58(__VA_ARGS__)
#define PARAMS_GET_FROM_60(_0, ...) PARAMS_GET_FROM_59(__VA_ARGS__)
#define PARAMS_GET_FROM_61(_0, ...) PARAMS_GET_FROM_60(__VA_ARGS__)
#define PARAMS_GET_FROM_62(_0, ...) PARAMS_GET_FROM_61(__VA_ARGS__)
#define PARAMS_GET_FROM_63(_0, ...) PARAMS_GET_FROM_62(__VA_ARGS__)
#define PARAMS_GET_FROM_64(_0, ...) PARAMS_GET_FROM_63(__VA_ARGS__)
#define PARAMS_GET_FROM_65(_0, ...) PARAMS_GET_FROM_64(__VA_ARGS__)
#define PARAMS_GET_FROM_66(_0, ...) PARAMS_GET_FROM_65(__VA_ARGS__)
#define PARAMS_GET_FROM_67(_0, ...) PARAMS_GET_FROM_66(__VA_ARGS__)
#define PARAMS_GET_FROM_68(_0, ...) PARAMS_GET_FROM_67(__VA_ARGS__)
#define PARAMS_GET_FROM_69(_0, ...) PARAMS_GET_FROM_68(__VA_ARGS__)
#define PARAMS_GET_FROM_70(_0, ...) PARAMS_GET_FROM_69(__VA_ARGS__)
#define PARAMS_GET_FROM_71(_0, ...) PARAMS_GET_FROM_70(__VA_ARGS__)
#define PARAMS_GET_FROM_72(_0, ...) PARAMS_GET_FROM_71(__VA_ARGS__)
#define PARAMS_GET_FROM_73(_0, ...) PARAMS_GET_FROM_72(__VA_ARGS__)
#define PARAMS_GET_FROM_74(_0, ...) PARAMS_GET_FROM_73(__VA_ARGS__)
#define PARAMS_GET_FROM_75(_0, ...) PARAMS_GET_FROM_74(__VA_ARGS__)
#define PARAMS_GET_FROM_76(_0, ...) PARAMS_GET_FROM_75(__VA_ARGS__)
#define PARAMS_GET_FROM_77(_0, ...) PARAMS_GET_FROM_76(__VA_ARGS__)
#define PARAMS_GET_FROM_78(_0, ...) PARAMS_GET_FROM_77(__VA_ARGS__)
#define PARAMS_GET_FROM_79(_0, ...) PARAMS_GET_FROM_78(__VA_ARGS__)
#define PARAMS_GET_FROM_80(_0, ...) PARAMS_GET_FROM_79(__VA_ARGS__)
#define PARAMS_GET_FROM_81(_0, ...) PARAMS_GET_FROM_80(__VA_ARGS__)
#define PARAMS_GET_FROM_82(_0, ...) PARAMS_GET_FROM_81(__VA_ARGS__)
#define PARAMS_GET_FROM_83(_0, ...) PARAMS_GET_FROM_82(__VA_ARGS__)
#define PARAMS_GET_FROM_84(_0, ...) PARAMS_GET_FROM_83(__VA_ARGS__)
#define PARAMS_GET_FROM_85(_0, ...) PARAMS_GET_FROM_84(__VA_ARGS__)
#define PARAMS_GET_FROM_86(_0, ...) PARAMS_GET_FROM_85(__VA_ARGS__)
#define PARAMS_GET_FROM_87(_0, ...) PARAMS_GET_FROM_86(__VA_ARGS__)
#define PARAMS_GET_FROM_88(_0, ...) PARAMS_GET_FROM_87(__VA_ARGS__)
#define PARAMS_GET_FROM_89(_0, ...) PARAMS_GET_FROM_88(__VA_ARGS__)
#define PARAMS_GET_FROM_90(_0, ...) PARAMS_GET_FROM_89(__VA_ARGS__)
#define PARAMS_GET_FROM_91(_0, ...) PARAMS_GET_FROM_90(__VA_ARGS__)
#define PARAMS_GET_FROM_92(_0, ...) PARAMS_GET_FROM_91(__VA_ARGS__)
#define PARAMS_GET_FROM_93(_0, ...) PARAMS_GET_FROM_92(__VA_ARGS__)
#define PARAMS_GET_FROM_94(_0, ...) PARAMS_GET_FROM_93(__VA_ARGS__)
#define PARAMS_GET_FROM_95(_0, ...) PARAMS_GET_FROM_94(__VA_ARGS__)
#define PARAMS_GET_FROM_96(_0, ...) PARAMS_GET_FROM_95(__VA_ARGS__)
#define PARAMS_GET_FROM_97(_0, ...) PARAMS_GET_FROM_96(__VA_ARGS__)
#define PARAMS_GET_FROM_98(_0, ...) PARAMS_GET_FROM_97(__VA_ARGS__)
#define PARAMS_GET_FROM_99(_0, ...) PARAMS_GET_FROM_98(__VA_ARGS__)
#define PARAMS_GET_FROM_100(_0, ...) PARAMS_GET_FROM_99(__VA_ARGS__)
#define PARAMS_GET_FROM_101(_0, ...) PARAMS_GET_FROM_100(__VA_ARGS__)
#define PARAMS_GET_FROM_102(_0, ...) PARAMS_GET_FROM_101(__VA_ARGS__)
#define PARAMS_GET_FROM_103(_0, ...) PARAMS_GET_FROM_102(__VA_ARGS__)
#define PARAMS_GET_FROM_104(_0, ...) PARAMS_GET_FROM_103(__VA_ARGS__)
#define PARAMS_GET_FROM_105(_0, ...) PARAMS_GET_FROM_104(__VA_ARGS__)
#define PARAMS_GET_FROM_106(_0, ...) PARAMS_GET_FROM_105(__VA_ARGS__)
#define PARAMS_GET_FROM_107(_0, ...) PARAMS_GET_FROM_106(__VA_ARGS__)
#define PARAMS_GET_FROM_108(_0, ...) PARAMS_GET_FROM_107(__VA_ARGS__)
#define PARAMS_GET_FROM_109(_0, ...) PARAMS_GET_FROM_108(__VA_ARGS__)
#define PARAMS_GET_FROM_110(_0, ...) PARAMS_GET_FROM_109(__VA_ARGS__)
#define PARAMS_GET_FROM_111(_0, ...) PARAMS_GET_FROM_110(__VA_ARGS__)
#define PARAMS_GET_FROM_112(_0, ...) PARAMS_GET_FROM_111(__VA_ARGS__)
#define PARAMS_GET_FROM_113(_0, ...) PARAMS_GET_FROM_112(__VA_ARGS__)
#define PARAMS_GET_FROM_114(_0, ...) PARAMS_GET_FROM_113(__VA_ARGS__)
#define PARAMS_GET_FROM_115(_0, ...) PARAMS_GET_FROM_114(__VA_ARGS__)
#define PARAMS_GET_FROM_116(_0, ...) PARAMS_GET_FROM_115(__VA_ARGS__)
#define PARAMS_GET_FROM_117(_0, ...) PARAMS_GET_FROM_116(__VA_ARGS__)
#define PARAMS_GET_FROM_118(_0, ...) PARAMS_GET_FROM_117(__VA_ARGS__)
#define PARAMS_GET_FROM_119(_0, ...) PARAMS_GET_FROM_118(__VA_ARGS__)
#define PARAMS_GET_FROM_120(_0, ...) PARAMS_GET_FROM_119(__VA_ARGS__)
#define PARAMS_GET_FROM_121(_0, ...) PARAMS_GET_FROM_120(__VA_ARGS__)
#define PARAMS_GET_FROM_122(_0, ...) PARAMS_GET_FROM_121(__VA_ARGS__)
#define PARAMS_GET_FROM_123(_0, ...) PARAMS_GET_FROM_122(__VA_ARGS__)
#define PARAMS_GET_FROM_124(_0, ...) PARAMS_GET_FROM_123(__VA_ARGS__)
#define PARAMS_GET_FROM_125(_0, ...) PARAMS_GET_FROM_124(__VA_ARGS__)
#define PARAMS_GET_FROM_126(_0, ...) PARAMS_GET_FROM_125(__VA_ARGS__)
#define PARAMS_GET_FROM_127(_0, ...) PARAMS_GET_FROM_126(__VA_ARGS__)
#define PARAMS_GET_FROM_128(_0, ...) PARAMS_GET_FROM_127(__VA_ARGS__)
#define PARAMS_GET_FROM_129(_0, ...) PARAMS_GET_FROM_128(__VA_ARGS__)
#define PARAMS_GET_FROM_130(_0, ...) PARAMS_GET_FROM_129(__VA_ARGS__)
#define PARAMS_GET_FROM_131(_0, ...) PARAMS_GET_FROM_130(__VA_ARGS__)
#define PARAMS_GET_FROM_132(_0, ...) PARAMS_GET_FROM_131(__VA_ARGS__)
#define PARAMS_GET_FROM_133(_0, ...) PARAMS_GET_FROM_132(__VA_ARGS__)
#define PARAMS_GET_FROM_134(_0, ...) PARAMS_GET_FROM_133(__VA_ARGS__)
#define PARAMS_GET_FROM_135(_0, ...) PARAMS_GET_FROM_134(__VA_ARGS__)
#define PARAMS_GET_FROM_136(_0, ...) PARAMS_GET_FROM_135(__VA_ARGS__)
#define PARAMS_GET_FROM_137(_0, ...) PARAMS_GET_FROM_136(__VA_ARGS__)
#define PARAMS_GET_FROM_138(_0, ...) PARAMS_GET_FROM_137(__VA_ARGS__)
#define PARAMS_GET_FROM_139(_0, ...) PARAMS_GET_FROM_138(__VA_ARGS__)
#define PARAMS_GET_FROM_140(_0, ...) PARAMS_GET_FROM_139(__VA_ARGS__)
#define PARAMS_GET_FROM_141(_0, ...) PARAMS_GET_FROM_140(__VA_ARGS__)
#define PARAMS_GET_FROM_142(_0, ...) PARAMS_GET_FROM_141(__VA_ARGS__)
#define PARAMS_GET_FROM_143(_0, ...) PARAMS_GET_FROM_142(__VA_ARGS__)
#define PARAMS_GET_FROM_144(_0, ...) PARAMS_GET_FROM_143(__VA_ARGS__)
#define PARAMS_GET_FROM_145(_0, ...) PARAMS_GET_FROM_144(__VA_ARGS__)
#define PARAMS_GET_FROM_146(_0, ...) PARAMS_GET_FROM_145(__VA_ARGS__)
#define PARAMS_GET_FROM_147(_0, ...) PARAMS_GET_FROM_146(__VA_ARGS__)
#define PARAMS_GET_FROM_148(_0, ...) PARAMS_GET_FROM_147(__VA_ARGS__)
#define PARAMS_GET_FROM_149(_0, ...) PARAMS_GET_FROM_148(__VA_ARGS__)
#define PARAMS_GET_FROM_150(_0, ...) PARAMS_GET_FROM_149(__VA_ARGS__)
#define PARAMS_GET_FROM_151(_0, ...) PARAMS_GET_FROM_150(__VA_ARGS__)
#define PARAMS_GET_FROM_152(_0, ...) PARAMS_GET_FROM_151(__VA_ARGS__)
#define PARAMS_GET_FROM_153(_0, ...) PARAMS_GET_FROM_152(__VA_ARGS__)
#define PARAMS_GET_FROM_154(_0, ...) PARAMS_GET_FROM_153(__VA_ARGS__)
#define PARAMS_GET_FROM_155(_0, ...) PARAMS_GET_FROM_154(__VA_ARGS__)
#define PARAMS_GET_FROM_156(_0, ...) PARAMS_GET_FROM_155(__VA_ARGS__)
#define PARAMS_GET_FROM_157(_0, ...) PARAMS_GET_FROM_156(__VA_ARGS__)
#define PARAMS_GET_FROM_158(_0, ...) PARAMS_GET_FROM_157(__VA_ARGS__)
#define PARAMS_GET_FROM_159(_0, ...) PARAMS_GET_FROM_158(__VA_ARGS__)
#define PARAMS_GET_FROM_160(_0, ...) PARAMS_GET_FROM_159(__VA_ARGS__)
#define PARAMS_GET_FROM_161(_0, ...) PARAMS_GET_FROM_160(__VA_ARGS__)
#define PARAMS_GET_FROM_162(_0, ...) PARAMS_GET_FROM_161(__VA_ARGS__)
#define PARAMS_GET_FROM_163(_0, ...) PARAMS_GET_FROM_162(__VA_ARGS__)
#define PARAMS_GET_FROM_164(_0, ...) PARAMS_GET_FROM_163(__VA_ARGS__)
#define PARAMS_GET_FROM_165(_0, ...) PARAMS_GET_FROM_164(__VA_ARGS__)
#define PARAMS_GET_FROM_166(_0, ...) PARAMS_GET_FROM_165(__VA_ARGS__)
#define PARAMS_GET_FROM_167(_0, ...) PARAMS_GET_FROM_166(__VA_ARGS__)
#define PARAMS_GET_FROM_168(_0, ...) PARAMS_GET_FROM_167(__VA_ARGS__)
#define PARAMS_GET_FROM_169(_0, ...) PARAMS_GET_FROM_168(__VA_ARGS__)
#define PARAMS_GET_FROM_170(_0, ...) PARAMS_GET_FROM_169(__VA_ARGS__)
#define PARAMS_GET_FROM_171(_0, ...) PARAMS_GET_FROM_170(__VA_ARGS__)
#define PARAMS_GET_FROM_172(_0, ...) PARAMS_GET_FROM_171(__VA_ARGS__)
#define PARAMS_GET_FROM_173(_0, ...) PARAMS_GET_FROM_172(__VA_ARGS__)
#define PARAMS_GET_FROM_174(_0, ...) PARAMS_GET_FROM_173(__VA_ARGS__)
#define PARAMS_GET_FROM_175(_0, ...) PARAMS_GET_FROM_174(__VA_ARGS__)
#define PARAMS_GET_FROM_176(_0, ...) PARAMS_GET_FROM_175(__VA_ARGS__)
#define PARAMS_GET_FROM_177(_0, ...) PARAMS_GET_FROM_176(__VA_ARGS__)
#define PARAMS_GET_FROM_178(_0, ...) PARAMS_GET_FROM_177(__VA_ARGS__)
#define PARAMS_GET_FROM_179(_0, ...) PARAMS_GET_FROM_178(__VA_ARGS__)
#define PARAMS_GET_FROM_180(_0, ...) PARAMS_GET_FROM_179(__VA_ARGS__)
#define PARAMS_GET_FROM_181(_0, ...) PARAMS_GET_FROM_180(__VA_ARGS__)
#define PARAMS_GET_FROM_182(_0, ...) PARAMS_GET_FROM_181(__VA_ARGS__)
#define PARAMS_GET_FROM_183(_0, ...) PARAMS_GET_FROM_182(__VA_ARGS__)
#define PARAMS_GET_FROM_184(_0, ...) PARAMS_GET_FROM_183(__VA_ARGS__)
#define PARAMS_GET_FROM_185(_0, ...) PARAMS_GET_FROM_184(__VA_ARGS__)
#define PARAMS_GET_FROM_186(_0, ...) PARAMS_GET_FROM_185(__VA_ARGS__)
#define PARAMS_GET_FROM_187(_0, ...) PARAMS_GET_FROM_186(__VA_ARGS__)
#define PARAMS_GET_FROM_188(_0, ...) PARAMS_GET_FROM_187(__VA_ARGS__)
#define PARAMS_GET_FROM_189(_0, ...) PARAMS_GET_FROM_188(__VA_ARGS__)
#define PARAMS_GET_FROM_190(_0, ...) PARAMS_GET_FROM_189(__VA_ARGS__)
#define PARAMS_GET_FROM_191(_0, ...) PARAMS_GET_FROM_190(__VA_ARGS__)
#define PARAMS_GET_FROM_192(_0, ...) PARAMS_GET_FROM_191(__VA_ARGS__)
#define PARAMS_GET_FROM_193(_0, ...) PARAMS_GET_FROM_192(__VA_ARGS__)
#define PARAMS_GET_FROM_194(_0, ...) PARAMS_GET_FROM_193(__VA_ARGS__)
#define PARAMS_GET_FROM_195(_0, ...) PARAMS_GET_FROM_194(__VA_ARGS__)
#define PARAMS_GET_FROM_196(_0, ...) PARAMS_GET_FROM_195(__VA_ARGS__)
#define PARAMS_GET_FROM_197(_0, ...) PARAMS_GET_FROM_196(__VA_ARGS__)
#define PARAMS_GET_FROM_198(_0, ...) PARAMS_GET_FROM_197(__VA_ARGS__)
#define PARAMS_GET_FROM_199(_0, ...) PARAMS_GET_FROM_198(__VA_ARGS__)
#define PARAMS_GET_FROM_200(_0, ...) PARAMS_GET_FROM_199(__VA_ARGS__)
#define PARAMS_GET_FROM_201(_0, ...) PARAMS_GET_FROM_200(__VA_ARGS__)
#define PARAMS_GET_FROM_202(_0, ...) PARAMS_GET_FROM_201(__VA_ARGS__)
#define PARAMS_GET_FROM_203(_0, ...) PARAMS_GET_FROM_202(__VA_ARGS__)
#define PARAMS_GET_FROM_204(_0, ...) PARAMS_GET_FROM_203(__VA_ARGS__)
#define PARAMS_GET_FROM_205(_0, ...) PARAMS_GET_FROM_204(__VA_ARGS__)


#define PARAMS_GET_FROM_MASK(from, ...)   PARAMS_GET_FROM_##from(__VA_ARGS__)
#define PARAMS_GET_FROM(from, ...)   PARAMS_GET_FROM_MASK(from,__VA_ARGS__)

//----------------------------------------------------------------------------------------------------------------------------------
#define PARAMS_GET_TO_1(_0, ...)    _0
#define PARAMS_GET_TO_2(_0, ...)    _0,PARAMS_GET_TO_1(__VA_ARGS__)
#define PARAMS_GET_TO_3(_0, ...)    _0,PARAMS_GET_TO_2(__VA_ARGS__)
#define PARAMS_GET_TO_4(_0, ...)    _0,PARAMS_GET_TO_3(__VA_ARGS__)
#define PARAMS_GET_TO_5(_0, ...)    _0,PARAMS_GET_TO_4(__VA_ARGS__)
#define PARAMS_GET_TO_6(_0, ...)    _0,PARAMS_GET_TO_5(__VA_ARGS__)
#define PARAMS_GET_TO_7(_0, ...)    _0,PARAMS_GET_TO_6(__VA_ARGS__)
#define PARAMS_GET_TO_8(_0, ...)    _0,PARAMS_GET_TO_7(__VA_ARGS__)
#define PARAMS_GET_TO_9(_0, ...)    _0,PARAMS_GET_TO_8(__VA_ARGS__)
#define PARAMS_GET_TO_10(_0, ...)    _0,PARAMS_GET_TO_9(__VA_ARGS__)
#define PARAMS_GET_TO_11(_0, ...)    _0,PARAMS_GET_TO_10(__VA_ARGS__)
#define PARAMS_GET_TO_12(_0, ...)    _0,PARAMS_GET_TO_11(__VA_ARGS__)
#define PARAMS_GET_TO_13(_0, ...)    _0,PARAMS_GET_TO_12(__VA_ARGS__)
#define PARAMS_GET_TO_14(_0, ...)    _0,PARAMS_GET_TO_13(__VA_ARGS__)
#define PARAMS_GET_TO_15(_0, ...)    _0,PARAMS_GET_TO_14(__VA_ARGS__)
#define PARAMS_GET_TO_16(_0, ...)    _0,PARAMS_GET_TO_15(__VA_ARGS__)
#define PARAMS_GET_TO_17(_0, ...)    _0,PARAMS_GET_TO_16(__VA_ARGS__)
#define PARAMS_GET_TO_18(_0, ...)    _0,PARAMS_GET_TO_17(__VA_ARGS__)
#define PARAMS_GET_TO_19(_0, ...)    _0,PARAMS_GET_TO_18(__VA_ARGS__)
#define PARAMS_GET_TO_20(_0, ...)    _0,PARAMS_GET_TO_19(__VA_ARGS__)
#define PARAMS_GET_TO_21(_0, ...)    _0,PARAMS_GET_TO_20(__VA_ARGS__)
#define PARAMS_GET_TO_22(_0, ...)    _0,PARAMS_GET_TO_21(__VA_ARGS__)
#define PARAMS_GET_TO_23(_0, ...)    _0,PARAMS_GET_TO_22(__VA_ARGS__)
#define PARAMS_GET_TO_24(_0, ...)    _0,PARAMS_GET_TO_23(__VA_ARGS__)
#define PARAMS_GET_TO_25(_0, ...)    _0,PARAMS_GET_TO_24(__VA_ARGS__)
#define PARAMS_GET_TO_26(_0, ...)    _0,PARAMS_GET_TO_25(__VA_ARGS__)
#define PARAMS_GET_TO_27(_0, ...)    _0,PARAMS_GET_TO_26(__VA_ARGS__)
#define PARAMS_GET_TO_28(_0, ...)    _0,PARAMS_GET_TO_27(__VA_ARGS__)
#define PARAMS_GET_TO_29(_0, ...)    _0,PARAMS_GET_TO_28(__VA_ARGS__)
#define PARAMS_GET_TO_30(_0, ...)    _0,PARAMS_GET_TO_29(__VA_ARGS__)
#define PARAMS_GET_TO_31(_0, ...)    _0,PARAMS_GET_TO_30(__VA_ARGS__)
#define PARAMS_GET_TO_32(_0, ...)    _0,PARAMS_GET_TO_31(__VA_ARGS__)
#define PARAMS_GET_TO_33(_0, ...)    _0,PARAMS_GET_TO_32(__VA_ARGS__)
#define PARAMS_GET_TO_34(_0, ...)    _0,PARAMS_GET_TO_33(__VA_ARGS__)
#define PARAMS_GET_TO_35(_0, ...)    _0,PARAMS_GET_TO_34(__VA_ARGS__)
#define PARAMS_GET_TO_36(_0, ...)    _0,PARAMS_GET_TO_35(__VA_ARGS__)
#define PARAMS_GET_TO_37(_0, ...)    _0,PARAMS_GET_TO_36(__VA_ARGS__)
#define PARAMS_GET_TO_38(_0, ...)    _0,PARAMS_GET_TO_37(__VA_ARGS__)
#define PARAMS_GET_TO_39(_0, ...)    _0,PARAMS_GET_TO_38(__VA_ARGS__)
#define PARAMS_GET_TO_40(_0, ...)    _0,PARAMS_GET_TO_39(__VA_ARGS__)
#define PARAMS_GET_TO_41(_0, ...)    _0,PARAMS_GET_TO_40(__VA_ARGS__)
#define PARAMS_GET_TO_42(_0, ...)    _0,PARAMS_GET_TO_41(__VA_ARGS__)
#define PARAMS_GET_TO_43(_0, ...)    _0,PARAMS_GET_TO_42(__VA_ARGS__)
#define PARAMS_GET_TO_44(_0, ...)    _0,PARAMS_GET_TO_43(__VA_ARGS__)
#define PARAMS_GET_TO_45(_0, ...)    _0,PARAMS_GET_TO_44(__VA_ARGS__)
#define PARAMS_GET_TO_46(_0, ...)    _0,PARAMS_GET_TO_45(__VA_ARGS__)
#define PARAMS_GET_TO_47(_0, ...)    _0,PARAMS_GET_TO_46(__VA_ARGS__)
#define PARAMS_GET_TO_48(_0, ...)    _0,PARAMS_GET_TO_47(__VA_ARGS__)
#define PARAMS_GET_TO_49(_0, ...)    _0,PARAMS_GET_TO_48(__VA_ARGS__)
#define PARAMS_GET_TO_50(_0, ...)    _0,PARAMS_GET_TO_49(__VA_ARGS__)
#define PARAMS_GET_TO_51(_0, ...)    _0,PARAMS_GET_TO_50(__VA_ARGS__)
#define PARAMS_GET_TO_52(_0, ...)    _0,PARAMS_GET_TO_51(__VA_ARGS__)
#define PARAMS_GET_TO_53(_0, ...)    _0,PARAMS_GET_TO_52(__VA_ARGS__)
#define PARAMS_GET_TO_54(_0, ...)    _0,PARAMS_GET_TO_53(__VA_ARGS__)
#define PARAMS_GET_TO_55(_0, ...)    _0,PARAMS_GET_TO_54(__VA_ARGS__)
#define PARAMS_GET_TO_56(_0, ...)    _0,PARAMS_GET_TO_55(__VA_ARGS__)
#define PARAMS_GET_TO_57(_0, ...)    _0,PARAMS_GET_TO_56(__VA_ARGS__)
#define PARAMS_GET_TO_58(_0, ...)    _0,PARAMS_GET_TO_57(__VA_ARGS__)
#define PARAMS_GET_TO_59(_0, ...)    _0,PARAMS_GET_TO_58(__VA_ARGS__)
#define PARAMS_GET_TO_60(_0, ...)    _0,PARAMS_GET_TO_59(__VA_ARGS__)
#define PARAMS_GET_TO_61(_0, ...)    _0,PARAMS_GET_TO_60(__VA_ARGS__)
#define PARAMS_GET_TO_62(_0, ...)    _0,PARAMS_GET_TO_61(__VA_ARGS__)
#define PARAMS_GET_TO_63(_0, ...)    _0,PARAMS_GET_TO_62(__VA_ARGS__)
#define PARAMS_GET_TO_64(_0, ...)    _0,PARAMS_GET_TO_63(__VA_ARGS__)
#define PARAMS_GET_TO_65(_0, ...)    _0,PARAMS_GET_TO_64(__VA_ARGS__)
#define PARAMS_GET_TO_66(_0, ...)    _0,PARAMS_GET_TO_65(__VA_ARGS__)
#define PARAMS_GET_TO_67(_0, ...)    _0,PARAMS_GET_TO_66(__VA_ARGS__)
#define PARAMS_GET_TO_68(_0, ...)    _0,PARAMS_GET_TO_67(__VA_ARGS__)
#define PARAMS_GET_TO_69(_0, ...)    _0,PARAMS_GET_TO_68(__VA_ARGS__)
#define PARAMS_GET_TO_70(_0, ...)    _0,PARAMS_GET_TO_69(__VA_ARGS__)
#define PARAMS_GET_TO_71(_0, ...)    _0,PARAMS_GET_TO_70(__VA_ARGS__)
#define PARAMS_GET_TO_72(_0, ...)    _0,PARAMS_GET_TO_71(__VA_ARGS__)
#define PARAMS_GET_TO_73(_0, ...)    _0,PARAMS_GET_TO_72(__VA_ARGS__)
#define PARAMS_GET_TO_74(_0, ...)    _0,PARAMS_GET_TO_73(__VA_ARGS__)
#define PARAMS_GET_TO_75(_0, ...)    _0,PARAMS_GET_TO_74(__VA_ARGS__)
#define PARAMS_GET_TO_76(_0, ...)    _0,PARAMS_GET_TO_75(__VA_ARGS__)
#define PARAMS_GET_TO_77(_0, ...)    _0,PARAMS_GET_TO_76(__VA_ARGS__)
#define PARAMS_GET_TO_78(_0, ...)    _0,PARAMS_GET_TO_77(__VA_ARGS__)
#define PARAMS_GET_TO_79(_0, ...)    _0,PARAMS_GET_TO_78(__VA_ARGS__)
#define PARAMS_GET_TO_80(_0, ...)    _0,PARAMS_GET_TO_79(__VA_ARGS__)
#define PARAMS_GET_TO_81(_0, ...)    _0,PARAMS_GET_TO_80(__VA_ARGS__)
#define PARAMS_GET_TO_82(_0, ...)    _0,PARAMS_GET_TO_81(__VA_ARGS__)
#define PARAMS_GET_TO_83(_0, ...)    _0,PARAMS_GET_TO_82(__VA_ARGS__)
#define PARAMS_GET_TO_84(_0, ...)    _0,PARAMS_GET_TO_83(__VA_ARGS__)
#define PARAMS_GET_TO_85(_0, ...)    _0,PARAMS_GET_TO_84(__VA_ARGS__)
#define PARAMS_GET_TO_86(_0, ...)    _0,PARAMS_GET_TO_85(__VA_ARGS__)
#define PARAMS_GET_TO_87(_0, ...)    _0,PARAMS_GET_TO_86(__VA_ARGS__)
#define PARAMS_GET_TO_88(_0, ...)    _0,PARAMS_GET_TO_87(__VA_ARGS__)
#define PARAMS_GET_TO_89(_0, ...)    _0,PARAMS_GET_TO_88(__VA_ARGS__)
#define PARAMS_GET_TO_90(_0, ...)    _0,PARAMS_GET_TO_89(__VA_ARGS__)
#define PARAMS_GET_TO_91(_0, ...)    _0,PARAMS_GET_TO_90(__VA_ARGS__)
#define PARAMS_GET_TO_92(_0, ...)    _0,PARAMS_GET_TO_91(__VA_ARGS__)
#define PARAMS_GET_TO_93(_0, ...)    _0,PARAMS_GET_TO_92(__VA_ARGS__)
#define PARAMS_GET_TO_94(_0, ...)    _0,PARAMS_GET_TO_93(__VA_ARGS__)
#define PARAMS_GET_TO_95(_0, ...)    _0,PARAMS_GET_TO_94(__VA_ARGS__)
#define PARAMS_GET_TO_96(_0, ...)    _0,PARAMS_GET_TO_95(__VA_ARGS__)
#define PARAMS_GET_TO_97(_0, ...)    _0,PARAMS_GET_TO_96(__VA_ARGS__)
#define PARAMS_GET_TO_98(_0, ...)    _0,PARAMS_GET_TO_97(__VA_ARGS__)
#define PARAMS_GET_TO_99(_0, ...)    _0,PARAMS_GET_TO_98(__VA_ARGS__)
#define PARAMS_GET_TO_100(_0, ...)    _0,PARAMS_GET_TO_99(__VA_ARGS__)
#define PARAMS_GET_TO_101(_0, ...)    _0,PARAMS_GET_TO_100(__VA_ARGS__)
#define PARAMS_GET_TO_102(_0, ...)    _0,PARAMS_GET_TO_101(__VA_ARGS__)
#define PARAMS_GET_TO_103(_0, ...)    _0,PARAMS_GET_TO_102(__VA_ARGS__)
#define PARAMS_GET_TO_104(_0, ...)    _0,PARAMS_GET_TO_103(__VA_ARGS__)
#define PARAMS_GET_TO_105(_0, ...)    _0,PARAMS_GET_TO_104(__VA_ARGS__)
#define PARAMS_GET_TO_106(_0, ...)    _0,PARAMS_GET_TO_105(__VA_ARGS__)
#define PARAMS_GET_TO_107(_0, ...)    _0,PARAMS_GET_TO_106(__VA_ARGS__)
#define PARAMS_GET_TO_108(_0, ...)    _0,PARAMS_GET_TO_107(__VA_ARGS__)
#define PARAMS_GET_TO_109(_0, ...)    _0,PARAMS_GET_TO_108(__VA_ARGS__)
#define PARAMS_GET_TO_110(_0, ...)    _0,PARAMS_GET_TO_109(__VA_ARGS__)
#define PARAMS_GET_TO_111(_0, ...)    _0,PARAMS_GET_TO_110(__VA_ARGS__)
#define PARAMS_GET_TO_112(_0, ...)    _0,PARAMS_GET_TO_111(__VA_ARGS__)
#define PARAMS_GET_TO_113(_0, ...)    _0,PARAMS_GET_TO_112(__VA_ARGS__)
#define PARAMS_GET_TO_114(_0, ...)    _0,PARAMS_GET_TO_113(__VA_ARGS__)
#define PARAMS_GET_TO_115(_0, ...)    _0,PARAMS_GET_TO_114(__VA_ARGS__)
#define PARAMS_GET_TO_116(_0, ...)    _0,PARAMS_GET_TO_115(__VA_ARGS__)
#define PARAMS_GET_TO_117(_0, ...)    _0,PARAMS_GET_TO_116(__VA_ARGS__)
#define PARAMS_GET_TO_118(_0, ...)    _0,PARAMS_GET_TO_117(__VA_ARGS__)
#define PARAMS_GET_TO_119(_0, ...)    _0,PARAMS_GET_TO_118(__VA_ARGS__)
#define PARAMS_GET_TO_120(_0, ...)    _0,PARAMS_GET_TO_119(__VA_ARGS__)
#define PARAMS_GET_TO_121(_0, ...)    _0,PARAMS_GET_TO_120(__VA_ARGS__)
#define PARAMS_GET_TO_122(_0, ...)    _0,PARAMS_GET_TO_121(__VA_ARGS__)
#define PARAMS_GET_TO_123(_0, ...)    _0,PARAMS_GET_TO_122(__VA_ARGS__)
#define PARAMS_GET_TO_124(_0, ...)    _0,PARAMS_GET_TO_123(__VA_ARGS__)
#define PARAMS_GET_TO_125(_0, ...)    _0,PARAMS_GET_TO_124(__VA_ARGS__)
#define PARAMS_GET_TO_126(_0, ...)    _0,PARAMS_GET_TO_125(__VA_ARGS__)
#define PARAMS_GET_TO_127(_0, ...)    _0,PARAMS_GET_TO_126(__VA_ARGS__)
#define PARAMS_GET_TO_128(_0, ...)    _0,PARAMS_GET_TO_127(__VA_ARGS__)
#define PARAMS_GET_TO_129(_0, ...)    _0,PARAMS_GET_TO_128(__VA_ARGS__)
#define PARAMS_GET_TO_130(_0, ...)    _0,PARAMS_GET_TO_129(__VA_ARGS__)
#define PARAMS_GET_TO_131(_0, ...)    _0,PARAMS_GET_TO_130(__VA_ARGS__)
#define PARAMS_GET_TO_132(_0, ...)    _0,PARAMS_GET_TO_131(__VA_ARGS__)
#define PARAMS_GET_TO_133(_0, ...)    _0,PARAMS_GET_TO_132(__VA_ARGS__)
#define PARAMS_GET_TO_134(_0, ...)    _0,PARAMS_GET_TO_133(__VA_ARGS__)
#define PARAMS_GET_TO_135(_0, ...)    _0,PARAMS_GET_TO_134(__VA_ARGS__)
#define PARAMS_GET_TO_136(_0, ...)    _0,PARAMS_GET_TO_135(__VA_ARGS__)
#define PARAMS_GET_TO_137(_0, ...)    _0,PARAMS_GET_TO_136(__VA_ARGS__)
#define PARAMS_GET_TO_138(_0, ...)    _0,PARAMS_GET_TO_137(__VA_ARGS__)
#define PARAMS_GET_TO_139(_0, ...)    _0,PARAMS_GET_TO_138(__VA_ARGS__)
#define PARAMS_GET_TO_140(_0, ...)    _0,PARAMS_GET_TO_139(__VA_ARGS__)
#define PARAMS_GET_TO_141(_0, ...)    _0,PARAMS_GET_TO_140(__VA_ARGS__)
#define PARAMS_GET_TO_142(_0, ...)    _0,PARAMS_GET_TO_141(__VA_ARGS__)
#define PARAMS_GET_TO_143(_0, ...)    _0,PARAMS_GET_TO_142(__VA_ARGS__)
#define PARAMS_GET_TO_144(_0, ...)    _0,PARAMS_GET_TO_143(__VA_ARGS__)
#define PARAMS_GET_TO_145(_0, ...)    _0,PARAMS_GET_TO_144(__VA_ARGS__)
#define PARAMS_GET_TO_146(_0, ...)    _0,PARAMS_GET_TO_145(__VA_ARGS__)
#define PARAMS_GET_TO_147(_0, ...)    _0,PARAMS_GET_TO_146(__VA_ARGS__)
#define PARAMS_GET_TO_148(_0, ...)    _0,PARAMS_GET_TO_147(__VA_ARGS__)
#define PARAMS_GET_TO_149(_0, ...)    _0,PARAMS_GET_TO_148(__VA_ARGS__)
#define PARAMS_GET_TO_150(_0, ...)    _0,PARAMS_GET_TO_149(__VA_ARGS__)
#define PARAMS_GET_TO_151(_0, ...)    _0,PARAMS_GET_TO_150(__VA_ARGS__)
#define PARAMS_GET_TO_152(_0, ...)    _0,PARAMS_GET_TO_151(__VA_ARGS__)
#define PARAMS_GET_TO_153(_0, ...)    _0,PARAMS_GET_TO_152(__VA_ARGS__)
#define PARAMS_GET_TO_154(_0, ...)    _0,PARAMS_GET_TO_153(__VA_ARGS__)
#define PARAMS_GET_TO_155(_0, ...)    _0,PARAMS_GET_TO_154(__VA_ARGS__)
#define PARAMS_GET_TO_156(_0, ...)    _0,PARAMS_GET_TO_155(__VA_ARGS__)
#define PARAMS_GET_TO_157(_0, ...)    _0,PARAMS_GET_TO_156(__VA_ARGS__)
#define PARAMS_GET_TO_158(_0, ...)    _0,PARAMS_GET_TO_157(__VA_ARGS__)
#define PARAMS_GET_TO_159(_0, ...)    _0,PARAMS_GET_TO_158(__VA_ARGS__)
#define PARAMS_GET_TO_160(_0, ...)    _0,PARAMS_GET_TO_159(__VA_ARGS__)
#define PARAMS_GET_TO_161(_0, ...)    _0,PARAMS_GET_TO_160(__VA_ARGS__)
#define PARAMS_GET_TO_162(_0, ...)    _0,PARAMS_GET_TO_161(__VA_ARGS__)
#define PARAMS_GET_TO_163(_0, ...)    _0,PARAMS_GET_TO_162(__VA_ARGS__)
#define PARAMS_GET_TO_164(_0, ...)    _0,PARAMS_GET_TO_163(__VA_ARGS__)
#define PARAMS_GET_TO_165(_0, ...)    _0,PARAMS_GET_TO_164(__VA_ARGS__)
#define PARAMS_GET_TO_166(_0, ...)    _0,PARAMS_GET_TO_165(__VA_ARGS__)
#define PARAMS_GET_TO_167(_0, ...)    _0,PARAMS_GET_TO_166(__VA_ARGS__)
#define PARAMS_GET_TO_168(_0, ...)    _0,PARAMS_GET_TO_167(__VA_ARGS__)
#define PARAMS_GET_TO_169(_0, ...)    _0,PARAMS_GET_TO_168(__VA_ARGS__)
#define PARAMS_GET_TO_170(_0, ...)    _0,PARAMS_GET_TO_169(__VA_ARGS__)
#define PARAMS_GET_TO_171(_0, ...)    _0,PARAMS_GET_TO_170(__VA_ARGS__)
#define PARAMS_GET_TO_172(_0, ...)    _0,PARAMS_GET_TO_171(__VA_ARGS__)
#define PARAMS_GET_TO_173(_0, ...)    _0,PARAMS_GET_TO_172(__VA_ARGS__)
#define PARAMS_GET_TO_174(_0, ...)    _0,PARAMS_GET_TO_173(__VA_ARGS__)
#define PARAMS_GET_TO_175(_0, ...)    _0,PARAMS_GET_TO_174(__VA_ARGS__)
#define PARAMS_GET_TO_176(_0, ...)    _0,PARAMS_GET_TO_175(__VA_ARGS__)
#define PARAMS_GET_TO_177(_0, ...)    _0,PARAMS_GET_TO_176(__VA_ARGS__)
#define PARAMS_GET_TO_178(_0, ...)    _0,PARAMS_GET_TO_177(__VA_ARGS__)
#define PARAMS_GET_TO_179(_0, ...)    _0,PARAMS_GET_TO_178(__VA_ARGS__)
#define PARAMS_GET_TO_180(_0, ...)    _0,PARAMS_GET_TO_179(__VA_ARGS__)
#define PARAMS_GET_TO_181(_0, ...)    _0,PARAMS_GET_TO_180(__VA_ARGS__)
#define PARAMS_GET_TO_182(_0, ...)    _0,PARAMS_GET_TO_181(__VA_ARGS__)
#define PARAMS_GET_TO_183(_0, ...)    _0,PARAMS_GET_TO_182(__VA_ARGS__)
#define PARAMS_GET_TO_184(_0, ...)    _0,PARAMS_GET_TO_183(__VA_ARGS__)
#define PARAMS_GET_TO_185(_0, ...)    _0,PARAMS_GET_TO_184(__VA_ARGS__)
#define PARAMS_GET_TO_186(_0, ...)    _0,PARAMS_GET_TO_185(__VA_ARGS__)
#define PARAMS_GET_TO_187(_0, ...)    _0,PARAMS_GET_TO_186(__VA_ARGS__)
#define PARAMS_GET_TO_188(_0, ...)    _0,PARAMS_GET_TO_187(__VA_ARGS__)
#define PARAMS_GET_TO_189(_0, ...)    _0,PARAMS_GET_TO_188(__VA_ARGS__)
#define PARAMS_GET_TO_190(_0, ...)    _0,PARAMS_GET_TO_189(__VA_ARGS__)
#define PARAMS_GET_TO_191(_0, ...)    _0,PARAMS_GET_TO_190(__VA_ARGS__)
#define PARAMS_GET_TO_192(_0, ...)    _0,PARAMS_GET_TO_191(__VA_ARGS__)
#define PARAMS_GET_TO_193(_0, ...)    _0,PARAMS_GET_TO_192(__VA_ARGS__)
#define PARAMS_GET_TO_194(_0, ...)    _0,PARAMS_GET_TO_193(__VA_ARGS__)
#define PARAMS_GET_TO_195(_0, ...)    _0,PARAMS_GET_TO_194(__VA_ARGS__)
#define PARAMS_GET_TO_196(_0, ...)    _0,PARAMS_GET_TO_195(__VA_ARGS__)
#define PARAMS_GET_TO_197(_0, ...)    _0,PARAMS_GET_TO_196(__VA_ARGS__)
#define PARAMS_GET_TO_198(_0, ...)    _0,PARAMS_GET_TO_197(__VA_ARGS__)
#define PARAMS_GET_TO_199(_0, ...)    _0,PARAMS_GET_TO_198(__VA_ARGS__)
#define PARAMS_GET_TO_200(_0, ...)    _0,PARAMS_GET_TO_199(__VA_ARGS__)
#define PARAMS_GET_TO_201(_0, ...)    _0,PARAMS_GET_TO_200(__VA_ARGS__)
#define PARAMS_GET_TO_202(_0, ...)    _0,PARAMS_GET_TO_201(__VA_ARGS__)
#define PARAMS_GET_TO_203(_0, ...)    _0,PARAMS_GET_TO_202(__VA_ARGS__)
#define PARAMS_GET_TO_204(_0, ...)    _0,PARAMS_GET_TO_203(__VA_ARGS__)
#define PARAMS_GET_TO_205(_0, ...)    _0,PARAMS_GET_TO_204(__VA_ARGS__)

#define PARAMS_GET_TO_MASK(to, ...)              PARAMS_GET_TO_##to(__VA_ARGS__)
#define PARAMS_GET_TO(to, ...)                   PARAMS_GET_TO_MASK(to,__VA_ARGS__)
#define PARAMS_GET_TO_A1_MASK(to,_0, ...)        _0,PARAMS_GET_TO_MASK(to,__VA_ARGS__)
#define PARAMS_GET_TO_A1(to, ...)                PARAMS_GET_TO_A1_MASK(to,__VA_ARGS__)
#define PARAMS_GET_TO_A2_MASK(to,_0, _1, ...)    _0, _1,PARAMS_GET_TO_MASK(to,__VA_ARGS__)
#define PARAMS_GET_TO_A2(to, ...)                PARAMS_GET_TO_A2_MASK(to,__VA_ARGS__)

//----------------------------------------------------------------------------------------------------------------------------------
#define REPLACE_COMMA_1(separator, _0)  _0
#define REPLACE_COMMA_2(reparator, _0, ...)  _0 reparator  REPLACE_COMMA_1(reparator,__VA_ARGS__)
#define REPLACE_COMMA_3(reparator, _0, ...) _0 reparator   REPLACE_COMMA_2(reparator,__VA_ARGS__)
#define REPLACE_COMMA_4(reparator, _0, ...) _0 reparator   REPLACE_COMMA_3(reparator,__VA_ARGS__)
#define REPLACE_COMMA_5(reparator, _0, ...) _0 reparator   REPLACE_COMMA_4(reparator,__VA_ARGS__)
#define REPLACE_COMMA_6(reparator, _0, ...) _0 reparator   REPLACE_COMMA_5(reparator,__VA_ARGS__)
#define REPLACE_COMMA_7(reparator, _0, ...) _0 reparator   REPLACE_COMMA_6(reparator,__VA_ARGS__)
#define REPLACE_COMMA_8(reparator, _0, ...) _0 reparator   REPLACE_COMMA_7(reparator,__VA_ARGS__)
#define REPLACE_COMMA_9(reparator, _0, ...) _0 reparator   REPLACE_COMMA_8(reparator,__VA_ARGS__)
#define REPLACE_COMMA_10(reparator, _0, ...) _0 reparator   REPLACE_COMMA_9(reparator,__VA_ARGS__)
#define REPLACE_COMMA_11(reparator, _0, ...) _0 reparator   REPLACE_COMMA_10(reparator,__VA_ARGS__)
#define REPLACE_COMMA_12(reparator, _0, ...) _0 reparator   REPLACE_COMMA_11(reparator,__VA_ARGS__)
#define REPLACE_COMMA_13(reparator, _0, ...) _0 reparator   REPLACE_COMMA_12(reparator,__VA_ARGS__)
#define REPLACE_COMMA_14(reparator, _0, ...) _0 reparator   REPLACE_COMMA_13(reparator,__VA_ARGS__)
#define REPLACE_COMMA_15(reparator, _0, ...) _0 reparator   REPLACE_COMMA_14(reparator,__VA_ARGS__)
#define REPLACE_COMMA_16(reparator, _0, ...) _0 reparator   REPLACE_COMMA_15(reparator,__VA_ARGS__)
#define REPLACE_COMMA_17(reparator, _0, ...) _0 reparator   REPLACE_COMMA_16(reparator,__VA_ARGS__)
#define REPLACE_COMMA_18(reparator, _0, ...) _0 reparator   REPLACE_COMMA_17(reparator,__VA_ARGS__)
#define REPLACE_COMMA_19(reparator, _0, ...) _0 reparator   REPLACE_COMMA_18(reparator,__VA_ARGS__)
#define REPLACE_COMMA_20(reparator, _0, ...) _0 reparator   REPLACE_COMMA_19(reparator,__VA_ARGS__)
#define REPLACE_COMMA_21(reparator, _0, ...) _0 reparator   REPLACE_COMMA_20(reparator,__VA_ARGS__)
#define REPLACE_COMMA_22(reparator, _0, ...) _0 reparator   REPLACE_COMMA_21(reparator,__VA_ARGS__)
#define REPLACE_COMMA_23(reparator, _0, ...) _0 reparator   REPLACE_COMMA_22(reparator,__VA_ARGS__)
#define REPLACE_COMMA_24(reparator, _0, ...) _0 reparator   REPLACE_COMMA_23(reparator,__VA_ARGS__)
#define REPLACE_COMMA_25(reparator, _0, ...) _0 reparator   REPLACE_COMMA_24(reparator,__VA_ARGS__)
#define REPLACE_COMMA_26(reparator, _0, ...) _0 reparator   REPLACE_COMMA_25(reparator,__VA_ARGS__)
#define REPLACE_COMMA_27(reparator, _0, ...) _0 reparator   REPLACE_COMMA_26(reparator,__VA_ARGS__)
#define REPLACE_COMMA_28(reparator, _0, ...) _0 reparator   REPLACE_COMMA_27(reparator,__VA_ARGS__)
#define REPLACE_COMMA_29(reparator, _0, ...) _0 reparator   REPLACE_COMMA_28(reparator,__VA_ARGS__)
#define REPLACE_COMMA_30(reparator, _0, ...) _0 reparator   REPLACE_COMMA_29(reparator,__VA_ARGS__)
#define REPLACE_COMMA_31(reparator, _0, ...) _0 reparator   REPLACE_COMMA_30(reparator,__VA_ARGS__)
#define REPLACE_COMMA_32(reparator, _0, ...) _0 reparator   REPLACE_COMMA_31(reparator,__VA_ARGS__)
#define REPLACE_COMMA_33(reparator, _0, ...) _0 reparator   REPLACE_COMMA_32(reparator,__VA_ARGS__)
#define REPLACE_COMMA_34(reparator, _0, ...) _0 reparator   REPLACE_COMMA_33(reparator,__VA_ARGS__)
#define REPLACE_COMMA_35(reparator, _0, ...) _0 reparator   REPLACE_COMMA_34(reparator,__VA_ARGS__)
#define REPLACE_COMMA_36(reparator, _0, ...) _0 reparator   REPLACE_COMMA_35(reparator,__VA_ARGS__)
#define REPLACE_COMMA_37(reparator, _0, ...) _0 reparator   REPLACE_COMMA_36(reparator,__VA_ARGS__)
#define REPLACE_COMMA_38(reparator, _0, ...) _0 reparator   REPLACE_COMMA_37(reparator,__VA_ARGS__)
#define REPLACE_COMMA_39(reparator, _0, ...) _0 reparator   REPLACE_COMMA_38(reparator,__VA_ARGS__)
#define REPLACE_COMMA_40(reparator, _0, ...) _0 reparator   REPLACE_COMMA_39(reparator,__VA_ARGS__)
#define REPLACE_COMMA_41(reparator, _0, ...) _0 reparator   REPLACE_COMMA_40(reparator,__VA_ARGS__)
#define REPLACE_COMMA_42(reparator, _0, ...) _0 reparator   REPLACE_COMMA_41(reparator,__VA_ARGS__)
#define REPLACE_COMMA_43(reparator, _0, ...) _0 reparator   REPLACE_COMMA_42(reparator,__VA_ARGS__)
#define REPLACE_COMMA_44(reparator, _0, ...) _0 reparator   REPLACE_COMMA_43(reparator,__VA_ARGS__)
#define REPLACE_COMMA_45(reparator, _0, ...) _0 reparator   REPLACE_COMMA_44(reparator,__VA_ARGS__)
#define REPLACE_COMMA_46(reparator, _0, ...) _0 reparator   REPLACE_COMMA_45(reparator,__VA_ARGS__)
#define REPLACE_COMMA_47(reparator, _0, ...) _0 reparator   REPLACE_COMMA_46(reparator,__VA_ARGS__)
#define REPLACE_COMMA_48(reparator, _0, ...) _0 reparator   REPLACE_COMMA_47(reparator,__VA_ARGS__)
#define REPLACE_COMMA_49(reparator, _0, ...) _0 reparator   REPLACE_COMMA_48(reparator,__VA_ARGS__)
#define REPLACE_COMMA_50(reparator, _0, ...) _0 reparator   REPLACE_COMMA_49(reparator,__VA_ARGS__)
#define REPLACE_COMMA_51(reparator, _0, ...) _0 reparator   REPLACE_COMMA_50(reparator,__VA_ARGS__)
#define REPLACE_COMMA_52(reparator, _0, ...) _0 reparator   REPLACE_COMMA_51(reparator,__VA_ARGS__)
#define REPLACE_COMMA_53(reparator, _0, ...) _0 reparator   REPLACE_COMMA_52(reparator,__VA_ARGS__)
#define REPLACE_COMMA_54(reparator, _0, ...) _0 reparator   REPLACE_COMMA_53(reparator,__VA_ARGS__)
#define REPLACE_COMMA_55(reparator, _0, ...) _0 reparator   REPLACE_COMMA_54(reparator,__VA_ARGS__)
#define REPLACE_COMMA_56(reparator, _0, ...) _0 reparator   REPLACE_COMMA_55(reparator,__VA_ARGS__)
#define REPLACE_COMMA_57(reparator, _0, ...) _0 reparator   REPLACE_COMMA_56(reparator,__VA_ARGS__)
#define REPLACE_COMMA_58(reparator, _0, ...) _0 reparator   REPLACE_COMMA_57(reparator,__VA_ARGS__)
#define REPLACE_COMMA_59(reparator, _0, ...) _0 reparator   REPLACE_COMMA_58(reparator,__VA_ARGS__)
#define REPLACE_COMMA_60(reparator, _0, ...) _0 reparator   REPLACE_COMMA_59(reparator,__VA_ARGS__)
#define REPLACE_COMMA_61(reparator, _0, ...) _0 reparator   REPLACE_COMMA_60(reparator,__VA_ARGS__)
#define REPLACE_COMMA_62(reparator, _0, ...) _0 reparator   REPLACE_COMMA_61(reparator,__VA_ARGS__)
#define REPLACE_COMMA_63(reparator, _0, ...) _0 reparator   REPLACE_COMMA_62(reparator,__VA_ARGS__)
#define REPLACE_COMMA_64(reparator, _0, ...) _0 reparator   REPLACE_COMMA_63(reparator,__VA_ARGS__)
#define REPLACE_COMMA_65(reparator, _0, ...) _0 reparator   REPLACE_COMMA_64(reparator,__VA_ARGS__)
#define REPLACE_COMMA_66(reparator, _0, ...) _0 reparator   REPLACE_COMMA_65(reparator,__VA_ARGS__)
#define REPLACE_COMMA_67(reparator, _0, ...) _0 reparator   REPLACE_COMMA_66(reparator,__VA_ARGS__)
#define REPLACE_COMMA_68(reparator, _0, ...) _0 reparator   REPLACE_COMMA_67(reparator,__VA_ARGS__)
#define REPLACE_COMMA_69(reparator, _0, ...) _0 reparator   REPLACE_COMMA_68(reparator,__VA_ARGS__)
#define REPLACE_COMMA_70(reparator, _0, ...) _0 reparator   REPLACE_COMMA_69(reparator,__VA_ARGS__)
#define REPLACE_COMMA_71(reparator, _0, ...) _0 reparator   REPLACE_COMMA_70(reparator,__VA_ARGS__)
#define REPLACE_COMMA_72(reparator, _0, ...) _0 reparator   REPLACE_COMMA_71(reparator,__VA_ARGS__)
#define REPLACE_COMMA_73(reparator, _0, ...) _0 reparator   REPLACE_COMMA_72(reparator,__VA_ARGS__)
#define REPLACE_COMMA_74(reparator, _0, ...) _0 reparator   REPLACE_COMMA_73(reparator,__VA_ARGS__)
#define REPLACE_COMMA_75(reparator, _0, ...) _0 reparator   REPLACE_COMMA_74(reparator,__VA_ARGS__)
#define REPLACE_COMMA_76(reparator, _0, ...) _0 reparator   REPLACE_COMMA_75(reparator,__VA_ARGS__)
#define REPLACE_COMMA_77(reparator, _0, ...) _0 reparator   REPLACE_COMMA_76(reparator,__VA_ARGS__)
#define REPLACE_COMMA_78(reparator, _0, ...) _0 reparator   REPLACE_COMMA_77(reparator,__VA_ARGS__)
#define REPLACE_COMMA_79(reparator, _0, ...) _0 reparator   REPLACE_COMMA_78(reparator,__VA_ARGS__)
#define REPLACE_COMMA_80(reparator, _0, ...) _0 reparator   REPLACE_COMMA_79(reparator,__VA_ARGS__)
#define REPLACE_COMMA_81(reparator, _0, ...) _0 reparator   REPLACE_COMMA_80(reparator,__VA_ARGS__)
#define REPLACE_COMMA_82(reparator, _0, ...) _0 reparator   REPLACE_COMMA_81(reparator,__VA_ARGS__)
#define REPLACE_COMMA_83(reparator, _0, ...) _0 reparator   REPLACE_COMMA_82(reparator,__VA_ARGS__)
#define REPLACE_COMMA_84(reparator, _0, ...) _0 reparator   REPLACE_COMMA_83(reparator,__VA_ARGS__)
#define REPLACE_COMMA_85(reparator, _0, ...) _0 reparator   REPLACE_COMMA_84(reparator,__VA_ARGS__)
#define REPLACE_COMMA_86(reparator, _0, ...) _0 reparator   REPLACE_COMMA_85(reparator,__VA_ARGS__)
#define REPLACE_COMMA_87(reparator, _0, ...) _0 reparator   REPLACE_COMMA_86(reparator,__VA_ARGS__)
#define REPLACE_COMMA_88(reparator, _0, ...) _0 reparator   REPLACE_COMMA_87(reparator,__VA_ARGS__)
#define REPLACE_COMMA_89(reparator, _0, ...) _0 reparator   REPLACE_COMMA_88(reparator,__VA_ARGS__)
#define REPLACE_COMMA_90(reparator, _0, ...) _0 reparator   REPLACE_COMMA_89(reparator,__VA_ARGS__)
#define REPLACE_COMMA_91(reparator, _0, ...) _0 reparator   REPLACE_COMMA_90(reparator,__VA_ARGS__)
#define REPLACE_COMMA_92(reparator, _0, ...) _0 reparator   REPLACE_COMMA_91(reparator,__VA_ARGS__)
#define REPLACE_COMMA_93(reparator, _0, ...) _0 reparator   REPLACE_COMMA_92(reparator,__VA_ARGS__)
#define REPLACE_COMMA_94(reparator, _0, ...) _0 reparator   REPLACE_COMMA_93(reparator,__VA_ARGS__)
#define REPLACE_COMMA_95(reparator, _0, ...) _0 reparator   REPLACE_COMMA_94(reparator,__VA_ARGS__)
#define REPLACE_COMMA_96(reparator, _0, ...) _0 reparator   REPLACE_COMMA_95(reparator,__VA_ARGS__)
#define REPLACE_COMMA_97(reparator, _0, ...) _0 reparator   REPLACE_COMMA_96(reparator,__VA_ARGS__)
#define REPLACE_COMMA_98(reparator, _0, ...) _0 reparator   REPLACE_COMMA_97(reparator,__VA_ARGS__)
#define REPLACE_COMMA_99(reparator, _0, ...) _0 reparator   REPLACE_COMMA_98(reparator,__VA_ARGS__)
#define REPLACE_COMMA_100(reparator, _0, ...) _0 reparator   REPLACE_COMMA_99(reparator,__VA_ARGS__)
#define REPLACE_COMMA_101(reparator, _0, ...) _0 reparator   REPLACE_COMMA_100(reparator,__VA_ARGS__)
#define REPLACE_COMMA_102(reparator, _0, ...) _0 reparator   REPLACE_COMMA_101(reparator,__VA_ARGS__)
#define REPLACE_COMMA_103(reparator, _0, ...) _0 reparator   REPLACE_COMMA_102(reparator,__VA_ARGS__)
#define REPLACE_COMMA_104(reparator, _0, ...) _0 reparator   REPLACE_COMMA_103(reparator,__VA_ARGS__)
#define REPLACE_COMMA_105(reparator, _0, ...) _0 reparator   REPLACE_COMMA_104(reparator,__VA_ARGS__)
#define REPLACE_COMMA_106(reparator, _0, ...) _0 reparator   REPLACE_COMMA_105(reparator,__VA_ARGS__)
#define REPLACE_COMMA_107(reparator, _0, ...) _0 reparator   REPLACE_COMMA_106(reparator,__VA_ARGS__)
#define REPLACE_COMMA_108(reparator, _0, ...) _0 reparator   REPLACE_COMMA_107(reparator,__VA_ARGS__)
#define REPLACE_COMMA_109(reparator, _0, ...) _0 reparator   REPLACE_COMMA_108(reparator,__VA_ARGS__)
#define REPLACE_COMMA_110(reparator, _0, ...) _0 reparator   REPLACE_COMMA_109(reparator,__VA_ARGS__)
#define REPLACE_COMMA_111(reparator, _0, ...) _0 reparator   REPLACE_COMMA_110(reparator,__VA_ARGS__)
#define REPLACE_COMMA_112(reparator, _0, ...) _0 reparator   REPLACE_COMMA_111(reparator,__VA_ARGS__)
#define REPLACE_COMMA_113(reparator, _0, ...) _0 reparator   REPLACE_COMMA_112(reparator,__VA_ARGS__)
#define REPLACE_COMMA_114(reparator, _0, ...) _0 reparator   REPLACE_COMMA_113(reparator,__VA_ARGS__)
#define REPLACE_COMMA_115(reparator, _0, ...) _0 reparator   REPLACE_COMMA_114(reparator,__VA_ARGS__)
#define REPLACE_COMMA_116(reparator, _0, ...) _0 reparator   REPLACE_COMMA_115(reparator,__VA_ARGS__)
#define REPLACE_COMMA_117(reparator, _0, ...) _0 reparator   REPLACE_COMMA_116(reparator,__VA_ARGS__)
#define REPLACE_COMMA_118(reparator, _0, ...) _0 reparator   REPLACE_COMMA_117(reparator,__VA_ARGS__)
#define REPLACE_COMMA_119(reparator, _0, ...) _0 reparator   REPLACE_COMMA_118(reparator,__VA_ARGS__)
#define REPLACE_COMMA_120(reparator, _0, ...) _0 reparator   REPLACE_COMMA_119(reparator,__VA_ARGS__)
#define REPLACE_COMMA_121(reparator, _0, ...) _0 reparator   REPLACE_COMMA_120(reparator,__VA_ARGS__)
#define REPLACE_COMMA_122(reparator, _0, ...) _0 reparator   REPLACE_COMMA_121(reparator,__VA_ARGS__)
#define REPLACE_COMMA_123(reparator, _0, ...) _0 reparator   REPLACE_COMMA_122(reparator,__VA_ARGS__)
#define REPLACE_COMMA_124(reparator, _0, ...) _0 reparator   REPLACE_COMMA_123(reparator,__VA_ARGS__)
#define REPLACE_COMMA_125(reparator, _0, ...) _0 reparator   REPLACE_COMMA_124(reparator,__VA_ARGS__)
#define REPLACE_COMMA_126(reparator, _0, ...) _0 reparator   REPLACE_COMMA_125(reparator,__VA_ARGS__)
#define REPLACE_COMMA_127(reparator, _0, ...) _0 reparator   REPLACE_COMMA_126(reparator,__VA_ARGS__)
#define REPLACE_COMMA_128(reparator, _0, ...) _0 reparator   REPLACE_COMMA_127(reparator,__VA_ARGS__)
#define REPLACE_COMMA_129(reparator, _0, ...) _0 reparator   REPLACE_COMMA_128(reparator,__VA_ARGS__)
#define REPLACE_COMMA_130(reparator, _0, ...) _0 reparator   REPLACE_COMMA_129(reparator,__VA_ARGS__)
#define REPLACE_COMMA_131(reparator, _0, ...) _0 reparator   REPLACE_COMMA_130(reparator,__VA_ARGS__)
#define REPLACE_COMMA_132(reparator, _0, ...) _0 reparator   REPLACE_COMMA_131(reparator,__VA_ARGS__)
#define REPLACE_COMMA_133(reparator, _0, ...) _0 reparator   REPLACE_COMMA_132(reparator,__VA_ARGS__)
#define REPLACE_COMMA_134(reparator, _0, ...) _0 reparator   REPLACE_COMMA_133(reparator,__VA_ARGS__)
#define REPLACE_COMMA_135(reparator, _0, ...) _0 reparator   REPLACE_COMMA_134(reparator,__VA_ARGS__)
#define REPLACE_COMMA_136(reparator, _0, ...) _0 reparator   REPLACE_COMMA_135(reparator,__VA_ARGS__)
#define REPLACE_COMMA_137(reparator, _0, ...) _0 reparator   REPLACE_COMMA_136(reparator,__VA_ARGS__)
#define REPLACE_COMMA_138(reparator, _0, ...) _0 reparator   REPLACE_COMMA_137(reparator,__VA_ARGS__)
#define REPLACE_COMMA_139(reparator, _0, ...) _0 reparator   REPLACE_COMMA_138(reparator,__VA_ARGS__)
#define REPLACE_COMMA_140(reparator, _0, ...) _0 reparator   REPLACE_COMMA_139(reparator,__VA_ARGS__)
#define REPLACE_COMMA_141(reparator, _0, ...) _0 reparator   REPLACE_COMMA_140(reparator,__VA_ARGS__)
#define REPLACE_COMMA_142(reparator, _0, ...) _0 reparator   REPLACE_COMMA_141(reparator,__VA_ARGS__)
#define REPLACE_COMMA_143(reparator, _0, ...) _0 reparator   REPLACE_COMMA_142(reparator,__VA_ARGS__)
#define REPLACE_COMMA_144(reparator, _0, ...) _0 reparator   REPLACE_COMMA_143(reparator,__VA_ARGS__)
#define REPLACE_COMMA_145(reparator, _0, ...) _0 reparator   REPLACE_COMMA_144(reparator,__VA_ARGS__)
#define REPLACE_COMMA_146(reparator, _0, ...) _0 reparator   REPLACE_COMMA_145(reparator,__VA_ARGS__)
#define REPLACE_COMMA_147(reparator, _0, ...) _0 reparator   REPLACE_COMMA_146(reparator,__VA_ARGS__)
#define REPLACE_COMMA_148(reparator, _0, ...) _0 reparator   REPLACE_COMMA_147(reparator,__VA_ARGS__)
#define REPLACE_COMMA_149(reparator, _0, ...) _0 reparator   REPLACE_COMMA_148(reparator,__VA_ARGS__)
#define REPLACE_COMMA_150(reparator, _0, ...) _0 reparator   REPLACE_COMMA_149(reparator,__VA_ARGS__)
#define REPLACE_COMMA_151(reparator, _0, ...) _0 reparator   REPLACE_COMMA_150(reparator,__VA_ARGS__)
#define REPLACE_COMMA_152(reparator, _0, ...) _0 reparator   REPLACE_COMMA_151(reparator,__VA_ARGS__)
#define REPLACE_COMMA_153(reparator, _0, ...) _0 reparator   REPLACE_COMMA_152(reparator,__VA_ARGS__)
#define REPLACE_COMMA_154(reparator, _0, ...) _0 reparator   REPLACE_COMMA_153(reparator,__VA_ARGS__)
#define REPLACE_COMMA_155(reparator, _0, ...) _0 reparator   REPLACE_COMMA_154(reparator,__VA_ARGS__)
#define REPLACE_COMMA_156(reparator, _0, ...) _0 reparator   REPLACE_COMMA_155(reparator,__VA_ARGS__)
#define REPLACE_COMMA_157(reparator, _0, ...) _0 reparator   REPLACE_COMMA_156(reparator,__VA_ARGS__)
#define REPLACE_COMMA_158(reparator, _0, ...) _0 reparator   REPLACE_COMMA_157(reparator,__VA_ARGS__)
#define REPLACE_COMMA_159(reparator, _0, ...) _0 reparator   REPLACE_COMMA_158(reparator,__VA_ARGS__)
#define REPLACE_COMMA_160(reparator, _0, ...) _0 reparator   REPLACE_COMMA_159(reparator,__VA_ARGS__)
#define REPLACE_COMMA_161(reparator, _0, ...) _0 reparator   REPLACE_COMMA_160(reparator,__VA_ARGS__)
#define REPLACE_COMMA_162(reparator, _0, ...) _0 reparator   REPLACE_COMMA_161(reparator,__VA_ARGS__)
#define REPLACE_COMMA_163(reparator, _0, ...) _0 reparator   REPLACE_COMMA_162(reparator,__VA_ARGS__)
#define REPLACE_COMMA_164(reparator, _0, ...) _0 reparator   REPLACE_COMMA_163(reparator,__VA_ARGS__)
#define REPLACE_COMMA_165(reparator, _0, ...) _0 reparator   REPLACE_COMMA_164(reparator,__VA_ARGS__)
#define REPLACE_COMMA_166(reparator, _0, ...) _0 reparator   REPLACE_COMMA_165(reparator,__VA_ARGS__)
#define REPLACE_COMMA_167(reparator, _0, ...) _0 reparator   REPLACE_COMMA_166(reparator,__VA_ARGS__)
#define REPLACE_COMMA_168(reparator, _0, ...) _0 reparator   REPLACE_COMMA_167(reparator,__VA_ARGS__)
#define REPLACE_COMMA_169(reparator, _0, ...) _0 reparator   REPLACE_COMMA_168(reparator,__VA_ARGS__)
#define REPLACE_COMMA_170(reparator, _0, ...) _0 reparator   REPLACE_COMMA_169(reparator,__VA_ARGS__)
#define REPLACE_COMMA_171(reparator, _0, ...) _0 reparator   REPLACE_COMMA_170(reparator,__VA_ARGS__)
#define REPLACE_COMMA_172(reparator, _0, ...) _0 reparator   REPLACE_COMMA_171(reparator,__VA_ARGS__)
#define REPLACE_COMMA_173(reparator, _0, ...) _0 reparator   REPLACE_COMMA_172(reparator,__VA_ARGS__)
#define REPLACE_COMMA_174(reparator, _0, ...) _0 reparator   REPLACE_COMMA_173(reparator,__VA_ARGS__)
#define REPLACE_COMMA_175(reparator, _0, ...) _0 reparator   REPLACE_COMMA_174(reparator,__VA_ARGS__)
#define REPLACE_COMMA_176(reparator, _0, ...) _0 reparator   REPLACE_COMMA_175(reparator,__VA_ARGS__)
#define REPLACE_COMMA_177(reparator, _0, ...) _0 reparator   REPLACE_COMMA_176(reparator,__VA_ARGS__)
#define REPLACE_COMMA_178(reparator, _0, ...) _0 reparator   REPLACE_COMMA_177(reparator,__VA_ARGS__)
#define REPLACE_COMMA_179(reparator, _0, ...) _0 reparator   REPLACE_COMMA_178(reparator,__VA_ARGS__)
#define REPLACE_COMMA_180(reparator, _0, ...) _0 reparator   REPLACE_COMMA_179(reparator,__VA_ARGS__)
#define REPLACE_COMMA_181(reparator, _0, ...) _0 reparator   REPLACE_COMMA_180(reparator,__VA_ARGS__)
#define REPLACE_COMMA_182(reparator, _0, ...) _0 reparator   REPLACE_COMMA_181(reparator,__VA_ARGS__)
#define REPLACE_COMMA_183(reparator, _0, ...) _0 reparator   REPLACE_COMMA_182(reparator,__VA_ARGS__)
#define REPLACE_COMMA_184(reparator, _0, ...) _0 reparator   REPLACE_COMMA_183(reparator,__VA_ARGS__)
#define REPLACE_COMMA_185(reparator, _0, ...) _0 reparator   REPLACE_COMMA_184(reparator,__VA_ARGS__)
#define REPLACE_COMMA_186(reparator, _0, ...) _0 reparator   REPLACE_COMMA_185(reparator,__VA_ARGS__)
#define REPLACE_COMMA_187(reparator, _0, ...) _0 reparator   REPLACE_COMMA_186(reparator,__VA_ARGS__)
#define REPLACE_COMMA_188(reparator, _0, ...) _0 reparator   REPLACE_COMMA_187(reparator,__VA_ARGS__)
#define REPLACE_COMMA_189(reparator, _0, ...) _0 reparator   REPLACE_COMMA_188(reparator,__VA_ARGS__)
#define REPLACE_COMMA_190(reparator, _0, ...) _0 reparator   REPLACE_COMMA_189(reparator,__VA_ARGS__)
#define REPLACE_COMMA_191(reparator, _0, ...) _0 reparator   REPLACE_COMMA_190(reparator,__VA_ARGS__)
#define REPLACE_COMMA_192(reparator, _0, ...) _0 reparator   REPLACE_COMMA_191(reparator,__VA_ARGS__)
#define REPLACE_COMMA_193(reparator, _0, ...) _0 reparator   REPLACE_COMMA_192(reparator,__VA_ARGS__)
#define REPLACE_COMMA_194(reparator, _0, ...) _0 reparator   REPLACE_COMMA_193(reparator,__VA_ARGS__)
#define REPLACE_COMMA_195(reparator, _0, ...) _0 reparator   REPLACE_COMMA_194(reparator,__VA_ARGS__)
#define REPLACE_COMMA_196(reparator, _0, ...) _0 reparator   REPLACE_COMMA_195(reparator,__VA_ARGS__)
#define REPLACE_COMMA_197(reparator, _0, ...) _0 reparator   REPLACE_COMMA_196(reparator,__VA_ARGS__)
#define REPLACE_COMMA_198(reparator, _0, ...) _0 reparator   REPLACE_COMMA_197(reparator,__VA_ARGS__)
#define REPLACE_COMMA_199(reparator, _0, ...) _0 reparator   REPLACE_COMMA_198(reparator,__VA_ARGS__)
#define REPLACE_COMMA_200(reparator, _0, ...) _0 reparator   REPLACE_COMMA_199(reparator,__VA_ARGS__)
#define REPLACE_COMMA_201(reparator, _0, ...) _0 reparator   REPLACE_COMMA_200(reparator,__VA_ARGS__)
#define REPLACE_COMMA_202(reparator, _0, ...) _0 reparator   REPLACE_COMMA_201(reparator,__VA_ARGS__)
#define REPLACE_COMMA_203(reparator, _0, ...) _0 reparator   REPLACE_COMMA_202(reparator,__VA_ARGS__)
#define REPLACE_COMMA_204(reparator, _0, ...) _0 reparator   REPLACE_COMMA_203(reparator,__VA_ARGS__)
#define REPLACE_COMMA_205(reparator, _0, ...) _0 reparator   REPLACE_COMMA_204(reparator,__VA_ARGS__)

#define REPLACE_COMMA_MASK(number_of_params, reparator, ...)     REPLACE_COMMA##number_of_params(reparator,__VA_ARGS__)
#define REPLACE_COMMA(number_of_params, reparator, ...)         REPLACE_COMMA_MASK(number_of_params,reparator,__VA_ARGS__)

//----------------------------------------------------------------------------------------------------------------------------------
#define DECLARE_BIT_2(type, name, size_bit)           type name : size_bit;
#define DECLARE_BIT_4(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_2(type,__VA_ARGS__)
#define DECLARE_BIT_6(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_4(type,__VA_ARGS__)
#define DECLARE_BIT_8(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_6(type,__VA_ARGS__)
#define DECLARE_BIT_10(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_8(type,__VA_ARGS__)
#define DECLARE_BIT_12(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_10(type,__VA_ARGS__)
#define DECLARE_BIT_14(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_12(type,__VA_ARGS__)
#define DECLARE_BIT_16(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_14(type,__VA_ARGS__)
#define DECLARE_BIT_18(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_16(type,__VA_ARGS__)
#define DECLARE_BIT_20(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_18(type,__VA_ARGS__)
#define DECLARE_BIT_22(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_20(type,__VA_ARGS__)
#define DECLARE_BIT_24(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_22(type,__VA_ARGS__)
#define DECLARE_BIT_26(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_24(type,__VA_ARGS__)
#define DECLARE_BIT_28(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_26(type,__VA_ARGS__)
#define DECLARE_BIT_30(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_28(type,__VA_ARGS__)
#define DECLARE_BIT_32(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_30(type,__VA_ARGS__)
#define DECLARE_BIT_34(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_32(type,__VA_ARGS__)
#define DECLARE_BIT_36(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_34(type,__VA_ARGS__)
#define DECLARE_BIT_38(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_36(type,__VA_ARGS__)
#define DECLARE_BIT_40(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_38(type,__VA_ARGS__)
#define DECLARE_BIT_42(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_40(type,__VA_ARGS__)
#define DECLARE_BIT_44(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_42(type,__VA_ARGS__)
#define DECLARE_BIT_46(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_44(type,__VA_ARGS__)
#define DECLARE_BIT_48(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_46(type,__VA_ARGS__)
#define DECLARE_BIT_50(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_48(type,__VA_ARGS__)
#define DECLARE_BIT_52(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_50(type,__VA_ARGS__)
#define DECLARE_BIT_54(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_52(type,__VA_ARGS__)
#define DECLARE_BIT_56(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_54(type,__VA_ARGS__)
#define DECLARE_BIT_58(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_56(type,__VA_ARGS__)
#define DECLARE_BIT_60(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_58(type,__VA_ARGS__)
#define DECLARE_BIT_62(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_60(type,__VA_ARGS__)
#define DECLARE_BIT_64(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_62(type,__VA_ARGS__)
#define DECLARE_BIT_66(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_64(type,__VA_ARGS__)
#define DECLARE_BIT_68(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_66(type,__VA_ARGS__)
#define DECLARE_BIT_70(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_68(type,__VA_ARGS__)
#define DECLARE_BIT_72(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_70(type,__VA_ARGS__)
#define DECLARE_BIT_74(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_72(type,__VA_ARGS__)
#define DECLARE_BIT_76(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_74(type,__VA_ARGS__)
#define DECLARE_BIT_78(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_76(type,__VA_ARGS__)
#define DECLARE_BIT_80(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_78(type,__VA_ARGS__)
#define DECLARE_BIT_82(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_80(type,__VA_ARGS__)
#define DECLARE_BIT_84(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_82(type,__VA_ARGS__)
#define DECLARE_BIT_86(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_84(type,__VA_ARGS__)
#define DECLARE_BIT_88(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_86(type,__VA_ARGS__)
#define DECLARE_BIT_90(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_88(type,__VA_ARGS__)
#define DECLARE_BIT_92(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_90(type,__VA_ARGS__)
#define DECLARE_BIT_94(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_92(type,__VA_ARGS__)
#define DECLARE_BIT_96(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_94(type,__VA_ARGS__)
#define DECLARE_BIT_98(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_96(type,__VA_ARGS__)
#define DECLARE_BIT_100(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_98(type,__VA_ARGS__)
#define DECLARE_BIT_102(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_100(type,__VA_ARGS__)
#define DECLARE_BIT_104(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_102(type,__VA_ARGS__)
#define DECLARE_BIT_106(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_104(type,__VA_ARGS__)
#define DECLARE_BIT_108(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_106(type,__VA_ARGS__)
#define DECLARE_BIT_110(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_108(type,__VA_ARGS__)
#define DECLARE_BIT_112(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_110(type,__VA_ARGS__)
#define DECLARE_BIT_114(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_112(type,__VA_ARGS__)
#define DECLARE_BIT_116(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_114(type,__VA_ARGS__)
#define DECLARE_BIT_118(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_116(type,__VA_ARGS__)
#define DECLARE_BIT_120(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_118(type,__VA_ARGS__)
#define DECLARE_BIT_122(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_120(type,__VA_ARGS__)
#define DECLARE_BIT_124(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_122(type,__VA_ARGS__)
#define DECLARE_BIT_126(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_124(type,__VA_ARGS__)
#define DECLARE_BIT_128(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_126(type,__VA_ARGS__)
#define DECLARE_BIT_130(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_128(type,__VA_ARGS__)
#define DECLARE_BIT_132(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_130(type,__VA_ARGS__)
#define DECLARE_BIT_134(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_132(type,__VA_ARGS__)
#define DECLARE_BIT_136(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_134(type,__VA_ARGS__)
#define DECLARE_BIT_138(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_136(type,__VA_ARGS__)
#define DECLARE_BIT_140(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_138(type,__VA_ARGS__)
#define DECLARE_BIT_142(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_140(type,__VA_ARGS__)
#define DECLARE_BIT_144(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_142(type,__VA_ARGS__)
#define DECLARE_BIT_146(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_144(type,__VA_ARGS__)
#define DECLARE_BIT_148(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_146(type,__VA_ARGS__)
#define DECLARE_BIT_150(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_148(type,__VA_ARGS__)
#define DECLARE_BIT_152(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_150(type,__VA_ARGS__)
#define DECLARE_BIT_154(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_152(type,__VA_ARGS__)
#define DECLARE_BIT_156(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_154(type,__VA_ARGS__)
#define DECLARE_BIT_158(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_156(type,__VA_ARGS__)
#define DECLARE_BIT_160(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_158(type,__VA_ARGS__)
#define DECLARE_BIT_162(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_160(type,__VA_ARGS__)
#define DECLARE_BIT_164(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_162(type,__VA_ARGS__)
#define DECLARE_BIT_166(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_164(type,__VA_ARGS__)
#define DECLARE_BIT_168(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_166(type,__VA_ARGS__)
#define DECLARE_BIT_170(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_168(type,__VA_ARGS__)
#define DECLARE_BIT_172(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_170(type,__VA_ARGS__)
#define DECLARE_BIT_174(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_172(type,__VA_ARGS__)
#define DECLARE_BIT_176(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_174(type,__VA_ARGS__)
#define DECLARE_BIT_178(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_176(type,__VA_ARGS__)
#define DECLARE_BIT_180(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_178(type,__VA_ARGS__)
#define DECLARE_BIT_182(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_180(type,__VA_ARGS__)
#define DECLARE_BIT_184(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_182(type,__VA_ARGS__)
#define DECLARE_BIT_186(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_184(type,__VA_ARGS__)
#define DECLARE_BIT_188(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_186(type,__VA_ARGS__)
#define DECLARE_BIT_190(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_188(type,__VA_ARGS__)
#define DECLARE_BIT_192(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_190(type,__VA_ARGS__)
#define DECLARE_BIT_194(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_192(type,__VA_ARGS__)
#define DECLARE_BIT_196(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_194(type,__VA_ARGS__)
#define DECLARE_BIT_198(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_196(type,__VA_ARGS__)
#define DECLARE_BIT_200(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_198(type,__VA_ARGS__)
#define DECLARE_BIT_202(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_200(type,__VA_ARGS__)
#define DECLARE_BIT_204(type, name, size_bit, ...)      type name : size_bit;\
DECLARE_BIT_202(type,__VA_ARGS__)



#define DECLARE_BIT_MASK(number_of_params, type,...)       DECLARE_BIT##number_of_params(type, __VA_ARGS__)
#define DECLARE_BIT(number_of_params, type, ...)     DECLARE_BIT_MASK(number_of_params, type, __VA_ARGS__)
//----------------------------------------------------------------------------------------------------------------------------------
#define NUMBER_MULTI_2_0 0
#define NUMBER_MULTI_2_1 2
#define NUMBER_MULTI_2_2 4
#define NUMBER_MULTI_2_3 6
#define NUMBER_MULTI_2_4 8
#define NUMBER_MULTI_2_5 10
#define NUMBER_MULTI_2_6 12
#define NUMBER_MULTI_2_7 14
#define NUMBER_MULTI_2_8 16
#define NUMBER_MULTI_2_9 18
#define NUMBER_MULTI_2_10 20
#define NUMBER_MULTI_2_11 22
#define NUMBER_MULTI_2_12 24
#define NUMBER_MULTI_2_13 26
#define NUMBER_MULTI_2_14 28
#define NUMBER_MULTI_2_15 30
#define NUMBER_MULTI_2_16 32
#define NUMBER_MULTI_2_17 34
#define NUMBER_MULTI_2_18 36
#define NUMBER_MULTI_2_19 38
#define NUMBER_MULTI_2_20 40
#define NUMBER_MULTI_2_21 42
#define NUMBER_MULTI_2_22 44
#define NUMBER_MULTI_2_23 46
#define NUMBER_MULTI_2_24 48
#define NUMBER_MULTI_2_25 50
#define NUMBER_MULTI_2_26 52
#define NUMBER_MULTI_2_27 54
#define NUMBER_MULTI_2_28 56
#define NUMBER_MULTI_2_29 58
#define NUMBER_MULTI_2_30 60
#define NUMBER_MULTI_2_31 62
#define NUMBER_MULTI_2_32 64
#define NUMBER_MULTI_2_33 66
#define NUMBER_MULTI_2_34 68
#define NUMBER_MULTI_2_35 70
#define NUMBER_MULTI_2_36 72
#define NUMBER_MULTI_2_37 74
#define NUMBER_MULTI_2_38 76
#define NUMBER_MULTI_2_39 78
#define NUMBER_MULTI_2_40 80
#define NUMBER_MULTI_2_41 82
#define NUMBER_MULTI_2_42 84
#define NUMBER_MULTI_2_47 94
#define NUMBER_MULTI_2_48 96
#define NUMBER_MULTI_2_49 98
#define NUMBER_MULTI_2_50 100
#define NUMBER_MULTI_2_51 102
#define NUMBER_MULTI_2_52 104
#define NUMBER_MULTI_2_53 106
#define NUMBER_MULTI_2_54 108
#define NUMBER_MULTI_2_55 110
#define NUMBER_MULTI_2_56 112
#define NUMBER_MULTI_2_57 114
#define NUMBER_MULTI_2_58 116
#define NUMBER_MULTI_2_59 118
#define NUMBER_MULTI_2_60 120
#define NUMBER_MULTI_2_61 122
#define NUMBER_MULTI_2_62 124
#define NUMBER_MULTI_2_63 126
#define NUMBER_MULTI_2_64 128

#define NUMBER_MULTI_2(numbers)    NUMBER_MULTI_2_##numbers
//----------------------------------------------------------------------------------------------------------------------------------

#define xBIT_DATA_B(name,size_bit)\
name##0,size_bit,\
name##1,size_bit,\
name##2,size_bit,\
name##3,size_bit,\
name##4,size_bit,\
name##5,size_bit,\
name##6,size_bit,\
name##7,size_bit,\
name##8,size_bit,\
name##9,size_bit,\
name##10,size_bit,\
name##11,size_bit,\
name##12,size_bit,\
name##13,size_bit,\
name##14,size_bit,\
name##15,size_bit,\
name##16,size_bit,\
name##17,size_bit,\
name##18,size_bit,\
name##19,size_bit,\
name##20,size_bit,\
name##21,size_bit,\
name##22,size_bit,\
name##23,size_bit,\
name##24,size_bit,\
name##25,size_bit,\
name##26,size_bit,\
name##27,size_bit,\
name##28,size_bit,\
name##29,size_bit,\
name##30,size_bit,\
name##31,size_bit,\
name##32,size_bit,\
name##33,size_bit,\
name##34,size_bit,\
name##35,size_bit,\
name##36,size_bit,\
name##37,size_bit,\
name##38,size_bit,\
name##39,size_bit,\
name##40,size_bit,\
name##41,size_bit,\
name##42,size_bit,\
name##43,size_bit,\
name##44,size_bit,\
name##45,size_bit,\
name##46,size_bit,\
name##47,size_bit,\
name##48,size_bit,\
name##49,size_bit,\
name##50,size_bit,\
name##51,size_bit,\
name##52,size_bit,\
name##53,size_bit,\
name##54,size_bit,\
name##55,size_bit,\
name##56,size_bit,\
name##57,size_bit,\
name##58,size_bit,\
name##59,size_bit,\
name##60,size_bit,\
name##61,size_bit,\
name##62,size_bit,\
name##63,size_bit,

//----------------------------------------------------------------------------------------------------------------------------------
#define xBITS_DATA(type, name, size_bit)\
type name##0 : size_bit,\
type name##1 : size_bit,\
type name##2 : size_bit,\
type name##3 : size_bit,\
type name##4 : size_bit,\
type name##5 : size_bit,\
type name##6 : size_bit,\
type name##7 : size_bit,\
type name##8 : size_bit,\
type name##9 : size_bit,\
type name##10 : size_bit,\
type name##11 : size_bit,\
type name##12 : size_bit,\
type name##13 : size_bit,\
type name##14 : size_bit,\
type name##15 : size_bit,\
type name##16 : size_bit,\
type name##17 : size_bit,\
type name##18 : size_bit,\
type name##19 : size_bit,\
type name##20 : size_bit,\
type name##21 : size_bit,\
type name##22 : size_bit,\
type name##23 : size_bit,\
type name##24 : size_bit,\
type name##25 : size_bit,\
type name##26 : size_bit,\
type name##27 : size_bit,\
type name##28 : size_bit,\
type name##29 : size_bit,\
type name##30 : size_bit,\
type name##31 : size_bit,\
type name##32 : size_bit,\
type name##33 : size_bit,\
type name##34 : size_bit,\
type name##35 : size_bit,\
type name##36 : size_bit,\
type name##37 : size_bit,\
type name##38 : size_bit,\
type name##39 : size_bit,\
type name##40 : size_bit,\
type name##41 : size_bit,\
type name##42 : size_bit,\
type name##43 : size_bit,\
type name##44 : size_bit,\
type name##45 : size_bit,\
type name##46 : size_bit,\
type name##47 : size_bit,\
type name##48 : size_bit,\
type name##49 : size_bit,\
type name##50 : size_bit,\
type name##51 : size_bit,\
type name##52 : size_bit,\
type name##53 : size_bit,\
type name##54 : size_bit,\
type name##55 : size_bit,\
type name##56 : size_bit,\
type name##57 : size_bit,\
type name##58 : size_bit,\
type name##59 : size_bit,\
type name##60 : size_bit,\
type name##61 : size_bit,\
type name##62 : size_bit,\
type name##63 : size_bit,

/***********************************************************************************************************************************************************/
/********************************************************---- END MACRO HEPLER ----*************************************************************************/
/***********************************************************************************************************************************************************/
/************************************************---- START CONFIGURATION THE GPIO MACRO ----***************************************************************/
/***********************************************************************************************************************************************************/

#define BITS(type,...)       DECLARE_BIT(PARAMS_COUNT_MASK(__VA_ARGS__), type, __VA_ARGS__)
/*Display
        ->  BITS(unsigned uint32_t,
                _1,     1
                _2,     1
                ...
            )
        =>  unsigned uint32_t   _1 : 1;
            unsigned uint32_t   _2 : 1;
            ...
*/
#define BSTRUCT(name_str, type, ...) \
struct{\
  BITS(type, __VA_ARGS__)\
} name_str;

#define BUNION(name_uni, type, ...) \
union\
{\
  type REG;\
  BSTRUCT(BITS, type, __VA_ARGS__)\
} name_uni;

//---------------------------------------------------------------------------------------------------------------------------------------
#define xBIT_B(name_bit, index_start, index_end, size_bit)\
  PARAMS_GET_FROM(NUMBER_MULTI_2(index_start),PARAMS_GET_TO_A2(NUMBER_MULTI_2(index_end),xBIT_DATA_B(name_bit,size_bit)))
/*Display
                 xBITS_B(b, 1, 3, 2),
            
            ->      b1, 2,
                    b2, 2,
                    b3, 2,        
*/
//---------------------------------------------------------------------------------------------------------------------------------------
#define xBITS(type, name, index_start, index_end, size_bit)\
  REPLACE_COMMA(PARAMS_COUNT_MASK(PARAMS_GET_FROM(index_start,PARAMS_GET_TO_A1(index_end,xBITS_DATA(type, name, size_bit)))),;,PARAMS_GET_FROM(index_start, PARAMS_GET_TO_A1(index_end, xBITS_DATA(type, name, size_bit))))         

/*Display  
            xBITS(unsigned char, b, 4, 7, 2);

        ->  unsigned char b4 : 2;
            unsigned char b5 : 2;
            unsigned char b6 : 2;
            unsigned char b7 : 2;
*/
//---------------------------------------------------------------------------------------------------------------------------------------

#define xBSTRUCT(name_str, type, index_start, index_end, name_bit, size_bit) \
struct{\
  xBITS(type, name_bit, index_start, index_end, size_bit);\
} name_str;

#define xBUNION(name_uni, type, index_start, index_end, name_bit, size_bit) \
union{\
  type REG;\
  xBSTRUCT(BITS, type, index_start, index_end, name_bit, size_bit)\
} name_uni;


#endif  /*  STM32F103_BITFIELD_MACRO_H  */