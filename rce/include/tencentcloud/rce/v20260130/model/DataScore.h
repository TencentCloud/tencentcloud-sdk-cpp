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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_DATASCORE_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_DATASCORE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/RiskLabel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 风险分信息
                */
                class DataScore : public AbstractModel
                {
                public:
                    DataScore();
                    ~DataScore() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>风险等级</p>
                     * @return RiskLevel <p>风险等级</p>
                     * 
                     */
                    int64_t GetRiskLevel() const;

                    /**
                     * 设置<p>风险等级</p>
                     * @param _riskLevel <p>风险等级</p>
                     * 
                     */
                    void SetRiskLevel(const int64_t& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取<p>风险标签</p>
                     * @return RiskLabels <p>风险标签</p>
                     * 
                     */
                    std::vector<RiskLabel> GetRiskLabels() const;

                    /**
                     * 设置<p>风险标签</p>
                     * @param _riskLabels <p>风险标签</p>
                     * 
                     */
                    void SetRiskLabels(const std::vector<RiskLabel>& _riskLabels);

                    /**
                     * 判断参数 RiskLabels 是否已赋值
                     * @return RiskLabels 是否已赋值
                     * 
                     */
                    bool RiskLabelsHasBeenSet() const;

                private:

                    /**
                     * <p>风险等级</p>
                     */
                    int64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>风险标签</p>
                     */
                    std::vector<RiskLabel> m_riskLabels;
                    bool m_riskLabelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_DATASCORE_H_
