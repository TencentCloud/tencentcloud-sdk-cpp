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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SEVERITYITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SEVERITYITEM_H_

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
                * 等级扣分明细
                */
                class SeverityItem : public AbstractModel
                {
                public:
                    SeverityItem();
                    ~SeverityItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取风险等级
枚举值：
critical：严重
high：高危
medium：中危
low：低危
                     * @return Severity 风险等级
枚举值：
critical：严重
high：高危
medium：中危
low：低危
                     * 
                     */
                    std::string GetSeverity() const;

                    /**
                     * 设置风险等级
枚举值：
critical：严重
high：高危
medium：中危
low：低危
                     * @param _severity 风险等级
枚举值：
critical：严重
high：高危
medium：中危
low：低危
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
                     * 获取等级中文名
                     * @return SeverityName 等级中文名
                     * 
                     */
                    std::string GetSeverityName() const;

                    /**
                     * 设置等级中文名
                     * @param _severityName 等级中文名
                     * 
                     */
                    void SetSeverityName(const std::string& _severityName);

                    /**
                     * 判断参数 SeverityName 是否已赋值
                     * @return SeverityName 是否已赋值
                     * 
                     */
                    bool SeverityNameHasBeenSet() const;

                    /**
                     * 获取该等级风险数量
                     * @return RiskCount 该等级风险数量
                     * 
                     */
                    int64_t GetRiskCount() const;

                    /**
                     * 设置该等级风险数量
                     * @param _riskCount 该等级风险数量
                     * 
                     */
                    void SetRiskCount(const int64_t& _riskCount);

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                    /**
                     * 获取单次扣分
                     * @return DeductPerItem 单次扣分
                     * 
                     */
                    int64_t GetDeductPerItem() const;

                    /**
                     * 设置单次扣分
                     * @param _deductPerItem 单次扣分
                     * 
                     */
                    void SetDeductPerItem(const int64_t& _deductPerItem);

                    /**
                     * 判断参数 DeductPerItem 是否已赋值
                     * @return DeductPerItem 是否已赋值
                     * 
                     */
                    bool DeductPerItemHasBeenSet() const;

                    /**
                     * 获取等级扣分上限
                     * @return MaxDeductScore 等级扣分上限
                     * 
                     */
                    int64_t GetMaxDeductScore() const;

                    /**
                     * 设置等级扣分上限
                     * @param _maxDeductScore 等级扣分上限
                     * 
                     */
                    void SetMaxDeductScore(const int64_t& _maxDeductScore);

                    /**
                     * 判断参数 MaxDeductScore 是否已赋值
                     * @return MaxDeductScore 是否已赋值
                     * 
                     */
                    bool MaxDeductScoreHasBeenSet() const;

                    /**
                     * 获取实际扣分
                     * @return DeductScore 实际扣分
                     * 
                     */
                    int64_t GetDeductScore() const;

                    /**
                     * 设置实际扣分
                     * @param _deductScore 实际扣分
                     * 
                     */
                    void SetDeductScore(const int64_t& _deductScore);

                    /**
                     * 判断参数 DeductScore 是否已赋值
                     * @return DeductScore 是否已赋值
                     * 
                     */
                    bool DeductScoreHasBeenSet() const;

                private:

                    /**
                     * 风险等级
枚举值：
critical：严重
high：高危
medium：中危
low：低危
                     */
                    std::string m_severity;
                    bool m_severityHasBeenSet;

                    /**
                     * 等级中文名
                     */
                    std::string m_severityName;
                    bool m_severityNameHasBeenSet;

                    /**
                     * 该等级风险数量
                     */
                    int64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * 单次扣分
                     */
                    int64_t m_deductPerItem;
                    bool m_deductPerItemHasBeenSet;

                    /**
                     * 等级扣分上限
                     */
                    int64_t m_maxDeductScore;
                    bool m_maxDeductScoreHasBeenSet;

                    /**
                     * 实际扣分
                     */
                    int64_t m_deductScore;
                    bool m_deductScoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SEVERITYITEM_H_
