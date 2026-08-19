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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEXPOSURESTATISTICSITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEXPOSURESTATISTICSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 云边界风险待治理风险信息
                */
                class DescribeExposureStatisticsItem : public AbstractModel
                {
                public:
                    DescribeExposureStatisticsItem();
                    ~DescribeExposureStatisticsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取风险标题
                     * @return Title 风险标题
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置风险标题
                     * @param _title 风险标题
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取风险等级
                     * @return Severity 风险等级
                     * 
                     */
                    std::string GetSeverity() const;

                    /**
                     * 设置风险等级
                     * @param _severity 风险等级
                     * 
                     */
                    void SetSeverity(const std::string& _severity);

                    /**
                     * 判断参数 Severity 是否已赋值
                     * @return Severity 是否已赋值
                     * 
                     */
                    bool SeverityHasBeenSet() const;

                    /**
                     * 获取风险类型
                     * @return RuleType 风险类型
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置风险类型
                     * @param _ruleType 风险类型
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
                     * 获取关联风险数量
                     * @return RiskCount 关联风险数量
                     * 
                     */
                    uint64_t GetRiskCount() const;

                    /**
                     * 设置关联风险数量
                     * @param _riskCount 关联风险数量
                     * 
                     */
                    void SetRiskCount(const uint64_t& _riskCount);

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                private:

                    /**
                     * 风险标题
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 风险等级
                     */
                    std::string m_severity;
                    bool m_severityHasBeenSet;

                    /**
                     * 风险类型
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 关联风险数量
                     */
                    uint64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEXPOSURESTATISTICSITEM_H_
