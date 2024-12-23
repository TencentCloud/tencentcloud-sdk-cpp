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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_SUGGESTRISKLEVELMATRIXITEM_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_SUGGESTRISKLEVELMATRIXITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/RiskMatrixLevel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 建议生成的二位矩阵的第二层
                */
                class SuggestRiskLevelMatrixItem : public AbstractModel
                {
                public:
                    SuggestRiskLevelMatrixItem();
                    ~SuggestRiskLevelMatrixItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分类分级等级
                     * @return SensitiveLevel 分类分级等级
                     * 
                     */
                    RiskMatrixLevel GetSensitiveLevel() const;

                    /**
                     * 设置分类分级等级
                     * @param _sensitiveLevel 分类分级等级
                     * 
                     */
                    void SetSensitiveLevel(const RiskMatrixLevel& _sensitiveLevel);

                    /**
                     * 判断参数 SensitiveLevel 是否已赋值
                     * @return SensitiveLevel 是否已赋值
                     * 
                     */
                    bool SensitiveLevelHasBeenSet() const;

                    /**
                     * 获取脆弱项等级
                     * @return VulnerabilityLevel 脆弱项等级
                     * 
                     */
                    RiskMatrixLevel GetVulnerabilityLevel() const;

                    /**
                     * 设置脆弱项等级
                     * @param _vulnerabilityLevel 脆弱项等级
                     * 
                     */
                    void SetVulnerabilityLevel(const RiskMatrixLevel& _vulnerabilityLevel);

                    /**
                     * 判断参数 VulnerabilityLevel 是否已赋值
                     * @return VulnerabilityLevel 是否已赋值
                     * 
                     */
                    bool VulnerabilityLevelHasBeenSet() const;

                    /**
                     * 获取风险名
                     * @return RiskName 风险名
                     * 
                     */
                    std::string GetRiskName() const;

                    /**
                     * 设置风险名
                     * @param _riskName 风险名
                     * 
                     */
                    void SetRiskName(const std::string& _riskName);

                    /**
                     * 判断参数 RiskName 是否已赋值
                     * @return RiskName 是否已赋值
                     * 
                     */
                    bool RiskNameHasBeenSet() const;

                    /**
                     * 获取分数
                     * @return RiskScore 分数
                     * 
                     */
                    double GetRiskScore() const;

                    /**
                     * 设置分数
                     * @param _riskScore 分数
                     * 
                     */
                    void SetRiskScore(const double& _riskScore);

                    /**
                     * 判断参数 RiskScore 是否已赋值
                     * @return RiskScore 是否已赋值
                     * 
                     */
                    bool RiskScoreHasBeenSet() const;

                private:

                    /**
                     * 分类分级等级
                     */
                    RiskMatrixLevel m_sensitiveLevel;
                    bool m_sensitiveLevelHasBeenSet;

                    /**
                     * 脆弱项等级
                     */
                    RiskMatrixLevel m_vulnerabilityLevel;
                    bool m_vulnerabilityLevelHasBeenSet;

                    /**
                     * 风险名
                     */
                    std::string m_riskName;
                    bool m_riskNameHasBeenSet;

                    /**
                     * 分数
                     */
                    double m_riskScore;
                    bool m_riskScoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_SUGGESTRISKLEVELMATRIXITEM_H_
