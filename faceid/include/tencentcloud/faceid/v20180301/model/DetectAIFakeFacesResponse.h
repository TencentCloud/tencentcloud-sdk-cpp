/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTAIFAKEFACESRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTAIFAKEFACESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/AttackRiskDetail.h>
#include <tencentcloud/faceid/v20180301/model/ExtraInfo.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * DetectAIFakeFaces返回参数结构体
                */
                class DetectAIFakeFacesResponse : public AbstractModel
                {
                public:
                    DetectAIFakeFacesResponse();
                    ~DetectAIFakeFacesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取检测到的图片是否存在攻击。
- Low：无攻击风险。
- Mid：中度疑似攻击。
- High：高度疑似攻击。
                     * @return AttackRiskLevel 检测到的图片是否存在攻击。
- Low：无攻击风险。
- Mid：中度疑似攻击。
- High：高度疑似攻击。
                     * 
                     */
                    std::string GetAttackRiskLevel() const;

                    /**
                     * 判断参数 AttackRiskLevel 是否已赋值
                     * @return AttackRiskLevel 是否已赋值
                     * 
                     */
                    bool AttackRiskLevelHasBeenSet() const;

                    /**
                     * 获取检测到疑似的攻击痕迹列表。
- 说明：未检测到攻击痕迹时，返回空数组。
- 此出参仅作为结果判断的参考，实际应用仍建议使用AttackRiskLevel的结果。
                     * @return AttackRiskDetailList 检测到疑似的攻击痕迹列表。
- 说明：未检测到攻击痕迹时，返回空数组。
- 此出参仅作为结果判断的参考，实际应用仍建议使用AttackRiskLevel的结果。
                     * 
                     */
                    std::vector<AttackRiskDetail> GetAttackRiskDetailList() const;

                    /**
                     * 判断参数 AttackRiskDetailList 是否已赋值
                     * @return AttackRiskDetailList 是否已赋值
                     * 
                     */
                    bool AttackRiskDetailListHasBeenSet() const;

                    /**
                     * 获取额外信息。
                     * @return ExtraInfo 额外信息。
                     * 
                     */
                    ExtraInfo GetExtraInfo() const;

                    /**
                     * 判断参数 ExtraInfo 是否已赋值
                     * @return ExtraInfo 是否已赋值
                     * 
                     */
                    bool ExtraInfoHasBeenSet() const;

                private:

                    /**
                     * 检测到的图片是否存在攻击。
- Low：无攻击风险。
- Mid：中度疑似攻击。
- High：高度疑似攻击。
                     */
                    std::string m_attackRiskLevel;
                    bool m_attackRiskLevelHasBeenSet;

                    /**
                     * 检测到疑似的攻击痕迹列表。
- 说明：未检测到攻击痕迹时，返回空数组。
- 此出参仅作为结果判断的参考，实际应用仍建议使用AttackRiskLevel的结果。
                     */
                    std::vector<AttackRiskDetail> m_attackRiskDetailList;
                    bool m_attackRiskDetailListHasBeenSet;

                    /**
                     * 额外信息。
                     */
                    ExtraInfo m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTAIFAKEFACESRESPONSE_H_
