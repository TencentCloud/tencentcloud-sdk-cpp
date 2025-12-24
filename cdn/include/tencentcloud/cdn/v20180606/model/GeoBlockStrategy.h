/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_GEOBLOCKSTRATEGY_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_GEOBLOCKSTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 区域访问控制策略
                */
                class GeoBlockStrategy : public AbstractModel
                {
                public:
                    GeoBlockStrategy();
                    ~GeoBlockStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则类型
whitelist: 白名单
blacklist: 黑名单
                     * @return BlockType 规则类型
whitelist: 白名单
blacklist: 黑名单
                     * 
                     */
                    std::string GetBlockType() const;

                    /**
                     * 设置规则类型
whitelist: 白名单
blacklist: 黑名单
                     * @param _blockType 规则类型
whitelist: 白名单
blacklist: 黑名单
                     * 
                     */
                    void SetBlockType(const std::string& _blockType);

                    /**
                     * 判断参数 BlockType 是否已赋值
                     * @return BlockType 是否已赋值
                     * 
                     */
                    bool BlockTypeHasBeenSet() const;

                    /**
                     * 获取生效规则
                     * @return RulePaths 生效规则
                     * 
                     */
                    std::vector<std::string> GetRulePaths() const;

                    /**
                     * 设置生效规则
                     * @param _rulePaths 生效规则
                     * 
                     */
                    void SetRulePaths(const std::vector<std::string>& _rulePaths);

                    /**
                     * 判断参数 RulePaths 是否已赋值
                     * @return RulePaths 是否已赋值
                     * 
                     */
                    bool RulePathsHasBeenSet() const;

                    /**
                     * 获取生效类型
all: 全部
directory: 目录
                     * @return RuleType 生效类型
all: 全部
directory: 目录
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置生效类型
all: 全部
directory: 目录
                     * @param _ruleType 生效类型
all: 全部
directory: 目录
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取生效区域，可选值有: CN-AH CN-BJ CN-CQ CN-FJ CN-GD CN-GS CN-GX CN-GZ CN-HA CN-HB CN-HE CN-HI CN-HK CN-HL CN-HN CN-JL CN-JS CN-JX CN-LN CN-MO CN-NM CN-NX CN-QH CN-SC CN-SD CN-SH CN-SN CN-SX CN-TJ CN-TW CN-XJ CN-XZ CN-YN CN-ZJ AF AX AL DZ AS AD AO AI AQ AG AR AM AW AU AT AZ BS BH BD BB BY BE BZ BJ BM BT BO BQ BA BW BV BR IO BN BG BF BI CV KH CM CA KY CF TD CL CN CX CC CO KM CG CD CK CR CI HR CU CW CY CZ DK DJ DM DO EC EG SV GQ ER EE SZ ET FK FO FJ FI FR GF PF TF GA GM GE DE GH GI GR GL GD GP GU GT GG GN GW GY HT HM VA HN HK HU IS IN ID IR IQ IE IM IL IT JM JP JE JO KZ KE KI KP KR KW KG LA LV LB LS LR LY LI LT LU MO MG MW MY MV ML MT MH MQ MR MU YT MX FM MD MC MN ME MS MA MZ MM NA NR NP NL NC NZ NI NE NG NU NF MK MP NO OM PK PW PS PA PG PY PE PH PN PL PT PR QA RE RO RU RW BL SH KN LC MF PM VC WS SM ST SA SN RS SC SL SG SX SK SI SB SO ZA GS SS ES LK SD SR SJ SE CH SY TW TJ TZ TH TL TG TK TO TT TN TR TM TC TV UG UA AE GB US UM UY UZ VU VE VN VG VI WF EH YE ZM ZW
                     * @return Districts 生效区域，可选值有: CN-AH CN-BJ CN-CQ CN-FJ CN-GD CN-GS CN-GX CN-GZ CN-HA CN-HB CN-HE CN-HI CN-HK CN-HL CN-HN CN-JL CN-JS CN-JX CN-LN CN-MO CN-NM CN-NX CN-QH CN-SC CN-SD CN-SH CN-SN CN-SX CN-TJ CN-TW CN-XJ CN-XZ CN-YN CN-ZJ AF AX AL DZ AS AD AO AI AQ AG AR AM AW AU AT AZ BS BH BD BB BY BE BZ BJ BM BT BO BQ BA BW BV BR IO BN BG BF BI CV KH CM CA KY CF TD CL CN CX CC CO KM CG CD CK CR CI HR CU CW CY CZ DK DJ DM DO EC EG SV GQ ER EE SZ ET FK FO FJ FI FR GF PF TF GA GM GE DE GH GI GR GL GD GP GU GT GG GN GW GY HT HM VA HN HK HU IS IN ID IR IQ IE IM IL IT JM JP JE JO KZ KE KI KP KR KW KG LA LV LB LS LR LY LI LT LU MO MG MW MY MV ML MT MH MQ MR MU YT MX FM MD MC MN ME MS MA MZ MM NA NR NP NL NC NZ NI NE NG NU NF MK MP NO OM PK PW PS PA PG PY PE PH PN PL PT PR QA RE RO RU RW BL SH KN LC MF PM VC WS SM ST SA SN RS SC SL SG SX SK SI SB SO ZA GS SS ES LK SD SR SJ SE CH SY TW TJ TZ TH TL TG TK TO TT TN TR TM TC TV UG UA AE GB US UM UY UZ VU VE VN VG VI WF EH YE ZM ZW
                     * 
                     */
                    std::vector<std::string> GetDistricts() const;

                    /**
                     * 设置生效区域，可选值有: CN-AH CN-BJ CN-CQ CN-FJ CN-GD CN-GS CN-GX CN-GZ CN-HA CN-HB CN-HE CN-HI CN-HK CN-HL CN-HN CN-JL CN-JS CN-JX CN-LN CN-MO CN-NM CN-NX CN-QH CN-SC CN-SD CN-SH CN-SN CN-SX CN-TJ CN-TW CN-XJ CN-XZ CN-YN CN-ZJ AF AX AL DZ AS AD AO AI AQ AG AR AM AW AU AT AZ BS BH BD BB BY BE BZ BJ BM BT BO BQ BA BW BV BR IO BN BG BF BI CV KH CM CA KY CF TD CL CN CX CC CO KM CG CD CK CR CI HR CU CW CY CZ DK DJ DM DO EC EG SV GQ ER EE SZ ET FK FO FJ FI FR GF PF TF GA GM GE DE GH GI GR GL GD GP GU GT GG GN GW GY HT HM VA HN HK HU IS IN ID IR IQ IE IM IL IT JM JP JE JO KZ KE KI KP KR KW KG LA LV LB LS LR LY LI LT LU MO MG MW MY MV ML MT MH MQ MR MU YT MX FM MD MC MN ME MS MA MZ MM NA NR NP NL NC NZ NI NE NG NU NF MK MP NO OM PK PW PS PA PG PY PE PH PN PL PT PR QA RE RO RU RW BL SH KN LC MF PM VC WS SM ST SA SN RS SC SL SG SX SK SI SB SO ZA GS SS ES LK SD SR SJ SE CH SY TW TJ TZ TH TL TG TK TO TT TN TR TM TC TV UG UA AE GB US UM UY UZ VU VE VN VG VI WF EH YE ZM ZW
                     * @param _districts 生效区域，可选值有: CN-AH CN-BJ CN-CQ CN-FJ CN-GD CN-GS CN-GX CN-GZ CN-HA CN-HB CN-HE CN-HI CN-HK CN-HL CN-HN CN-JL CN-JS CN-JX CN-LN CN-MO CN-NM CN-NX CN-QH CN-SC CN-SD CN-SH CN-SN CN-SX CN-TJ CN-TW CN-XJ CN-XZ CN-YN CN-ZJ AF AX AL DZ AS AD AO AI AQ AG AR AM AW AU AT AZ BS BH BD BB BY BE BZ BJ BM BT BO BQ BA BW BV BR IO BN BG BF BI CV KH CM CA KY CF TD CL CN CX CC CO KM CG CD CK CR CI HR CU CW CY CZ DK DJ DM DO EC EG SV GQ ER EE SZ ET FK FO FJ FI FR GF PF TF GA GM GE DE GH GI GR GL GD GP GU GT GG GN GW GY HT HM VA HN HK HU IS IN ID IR IQ IE IM IL IT JM JP JE JO KZ KE KI KP KR KW KG LA LV LB LS LR LY LI LT LU MO MG MW MY MV ML MT MH MQ MR MU YT MX FM MD MC MN ME MS MA MZ MM NA NR NP NL NC NZ NI NE NG NU NF MK MP NO OM PK PW PS PA PG PY PE PH PN PL PT PR QA RE RO RU RW BL SH KN LC MF PM VC WS SM ST SA SN RS SC SL SG SX SK SI SB SO ZA GS SS ES LK SD SR SJ SE CH SY TW TJ TZ TH TL TG TK TO TT TN TR TM TC TV UG UA AE GB US UM UY UZ VU VE VN VG VI WF EH YE ZM ZW
                     * 
                     */
                    void SetDistricts(const std::vector<std::string>& _districts);

                    /**
                     * 判断参数 Districts 是否已赋值
                     * @return Districts 是否已赋值
                     * 
                     */
                    bool DistrictsHasBeenSet() const;

                private:

                    /**
                     * 规则类型
whitelist: 白名单
blacklist: 黑名单
                     */
                    std::string m_blockType;
                    bool m_blockTypeHasBeenSet;

                    /**
                     * 生效规则
                     */
                    std::vector<std::string> m_rulePaths;
                    bool m_rulePathsHasBeenSet;

                    /**
                     * 生效类型
all: 全部
directory: 目录
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 生效区域，可选值有: CN-AH CN-BJ CN-CQ CN-FJ CN-GD CN-GS CN-GX CN-GZ CN-HA CN-HB CN-HE CN-HI CN-HK CN-HL CN-HN CN-JL CN-JS CN-JX CN-LN CN-MO CN-NM CN-NX CN-QH CN-SC CN-SD CN-SH CN-SN CN-SX CN-TJ CN-TW CN-XJ CN-XZ CN-YN CN-ZJ AF AX AL DZ AS AD AO AI AQ AG AR AM AW AU AT AZ BS BH BD BB BY BE BZ BJ BM BT BO BQ BA BW BV BR IO BN BG BF BI CV KH CM CA KY CF TD CL CN CX CC CO KM CG CD CK CR CI HR CU CW CY CZ DK DJ DM DO EC EG SV GQ ER EE SZ ET FK FO FJ FI FR GF PF TF GA GM GE DE GH GI GR GL GD GP GU GT GG GN GW GY HT HM VA HN HK HU IS IN ID IR IQ IE IM IL IT JM JP JE JO KZ KE KI KP KR KW KG LA LV LB LS LR LY LI LT LU MO MG MW MY MV ML MT MH MQ MR MU YT MX FM MD MC MN ME MS MA MZ MM NA NR NP NL NC NZ NI NE NG NU NF MK MP NO OM PK PW PS PA PG PY PE PH PN PL PT PR QA RE RO RU RW BL SH KN LC MF PM VC WS SM ST SA SN RS SC SL SG SX SK SI SB SO ZA GS SS ES LK SD SR SJ SE CH SY TW TJ TZ TH TL TG TK TO TT TN TR TM TC TV UG UA AE GB US UM UY UZ VU VE VN VG VI WF EH YE ZM ZW
                     */
                    std::vector<std::string> m_districts;
                    bool m_districtsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_GEOBLOCKSTRATEGY_H_
