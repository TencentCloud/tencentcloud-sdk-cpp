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

#ifndef TENCENTCLOUD_RKP_V20191209_MODEL_DEVINFOQ_H_
#define TENCENTCLOUD_RKP_V20191209_MODEL_DEVINFOQ_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rkp/v20191209/model/RiskDetail.h>


namespace TencentCloud
{
    namespace Rkp
    {
        namespace V20191209
        {
            namespace Model
            {
                /**
                * 设备信息
                */
                class DevInfoQ : public AbstractModel
                {
                public:
                    DevInfoQ();
                    ~DevInfoQ() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取devid
                     * @return OpenId devid
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置devid
                     * @param _openId devid
                     * 
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     * 
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取风险值
                     * @return RiskScore 风险值
                     * 
                     */
                    int64_t GetRiskScore() const;

                    /**
                     * 设置风险值
                     * @param _riskScore 风险值
                     * 
                     */
                    void SetRiskScore(const int64_t& _riskScore);

                    /**
                     * 判断参数 RiskScore 是否已赋值
                     * @return RiskScore 是否已赋值
                     * 
                     */
                    bool RiskScoreHasBeenSet() const;

                    /**
                     * 获取风险详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskInfo 风险详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RiskDetail> GetRiskInfo() const;

                    /**
                     * 设置风险详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _riskInfo 风险详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRiskInfo(const std::vector<RiskDetail>& _riskInfo);

                    /**
                     * 判断参数 RiskInfo 是否已赋值
                     * @return RiskInfo 是否已赋值
                     * 
                     */
                    bool RiskInfoHasBeenSet() const;

                    /**
                     * 获取概率值
                     * @return Probability 概率值
                     * 
                     */
                    double GetProbability() const;

                    /**
                     * 设置概率值
                     * @param _probability 概率值
                     * 
                     */
                    void SetProbability(const double& _probability);

                    /**
                     * 判断参数 Probability 是否已赋值
                     * @return Probability 是否已赋值
                     * 
                     */
                    bool ProbabilityHasBeenSet() const;

                private:

                    /**
                     * devid
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 风险值
                     */
                    int64_t m_riskScore;
                    bool m_riskScoreHasBeenSet;

                    /**
                     * 风险详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RiskDetail> m_riskInfo;
                    bool m_riskInfoHasBeenSet;

                    /**
                     * 概率值
                     */
                    double m_probability;
                    bool m_probabilityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RKP_V20191209_MODEL_DEVINFOQ_H_
