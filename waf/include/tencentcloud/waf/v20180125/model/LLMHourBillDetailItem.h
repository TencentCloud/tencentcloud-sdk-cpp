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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_LLMHOURBILLDETAILITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_LLMHOURBILLDETAILITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 大模型安全按小时账单明细行
                */
                class LLMHourBillDetailItem : public AbstractModel
                {
                public:
                    LLMHourBillDetailItem();
                    ~LLMHourBillDetailItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取小时区间，如00:00-01:00
                     * @return TimeRange 小时区间，如00:00-01:00
                     * 
                     */
                    std::string GetTimeRange() const;

                    /**
                     * 设置小时区间，如00:00-01:00
                     * @param _timeRange 小时区间，如00:00-01:00
                     * 
                     */
                    void SetTimeRange(const std::string& _timeRange);

                    /**
                     * 判断参数 TimeRange 是否已赋值
                     * @return TimeRange 是否已赋值
                     * 
                     */
                    bool TimeRangeHasBeenSet() const;

                    /**
                     * 获取提示词攻击防护计量值（token）
                     * @return PromptAttackUsage 提示词攻击防护计量值（token）
                     * 
                     */
                    int64_t GetPromptAttackUsage() const;

                    /**
                     * 设置提示词攻击防护计量值（token）
                     * @param _promptAttackUsage 提示词攻击防护计量值（token）
                     * 
                     */
                    void SetPromptAttackUsage(const int64_t& _promptAttackUsage);

                    /**
                     * 判断参数 PromptAttackUsage 是否已赋值
                     * @return PromptAttackUsage 是否已赋值
                     * 
                     */
                    bool PromptAttackUsageHasBeenSet() const;

                    /**
                     * 获取内容合规检测（文本）计量值（token）
                     * @return ContentTextUsage 内容合规检测（文本）计量值（token）
                     * 
                     */
                    int64_t GetContentTextUsage() const;

                    /**
                     * 设置内容合规检测（文本）计量值（token）
                     * @param _contentTextUsage 内容合规检测（文本）计量值（token）
                     * 
                     */
                    void SetContentTextUsage(const int64_t& _contentTextUsage);

                    /**
                     * 判断参数 ContentTextUsage 是否已赋值
                     * @return ContentTextUsage 是否已赋值
                     * 
                     */
                    bool ContentTextUsageHasBeenSet() const;

                    /**
                     * 获取内容合规检测（图片）计量值（张）
                     * @return ContentImageUsage 内容合规检测（图片）计量值（张）
                     * 
                     */
                    int64_t GetContentImageUsage() const;

                    /**
                     * 设置内容合规检测（图片）计量值（张）
                     * @param _contentImageUsage 内容合规检测（图片）计量值（张）
                     * 
                     */
                    void SetContentImageUsage(const int64_t& _contentImageUsage);

                    /**
                     * 判断参数 ContentImageUsage 是否已赋值
                     * @return ContentImageUsage 是否已赋值
                     * 
                     */
                    bool ContentImageUsageHasBeenSet() const;

                    /**
                     * 获取敏感数据检测计量值（token）
                     * @return SensitiveDataUsage 敏感数据检测计量值（token）
                     * 
                     */
                    int64_t GetSensitiveDataUsage() const;

                    /**
                     * 设置敏感数据检测计量值（token）
                     * @param _sensitiveDataUsage 敏感数据检测计量值（token）
                     * 
                     */
                    void SetSensitiveDataUsage(const int64_t& _sensitiveDataUsage);

                    /**
                     * 判断参数 SensitiveDataUsage 是否已赋值
                     * @return SensitiveDataUsage 是否已赋值
                     * 
                     */
                    bool SensitiveDataUsageHasBeenSet() const;

                    /**
                     * 获取该小时提示词攻击防护费用（元）
                     * @return PromptAttackFee 该小时提示词攻击防护费用（元）
                     * 
                     */
                    std::string GetPromptAttackFee() const;

                    /**
                     * 设置该小时提示词攻击防护费用（元）
                     * @param _promptAttackFee 该小时提示词攻击防护费用（元）
                     * 
                     */
                    void SetPromptAttackFee(const std::string& _promptAttackFee);

                    /**
                     * 判断参数 PromptAttackFee 是否已赋值
                     * @return PromptAttackFee 是否已赋值
                     * 
                     */
                    bool PromptAttackFeeHasBeenSet() const;

                    /**
                     * 获取该小时内容合规检测（文本）费用（元）
                     * @return ContentTextFee 该小时内容合规检测（文本）费用（元）
                     * 
                     */
                    std::string GetContentTextFee() const;

                    /**
                     * 设置该小时内容合规检测（文本）费用（元）
                     * @param _contentTextFee 该小时内容合规检测（文本）费用（元）
                     * 
                     */
                    void SetContentTextFee(const std::string& _contentTextFee);

                    /**
                     * 判断参数 ContentTextFee 是否已赋值
                     * @return ContentTextFee 是否已赋值
                     * 
                     */
                    bool ContentTextFeeHasBeenSet() const;

                    /**
                     * 获取该小时内容合规检测（图片）费用（元）
                     * @return ContentImageFee 该小时内容合规检测（图片）费用（元）
                     * 
                     */
                    std::string GetContentImageFee() const;

                    /**
                     * 设置该小时内容合规检测（图片）费用（元）
                     * @param _contentImageFee 该小时内容合规检测（图片）费用（元）
                     * 
                     */
                    void SetContentImageFee(const std::string& _contentImageFee);

                    /**
                     * 判断参数 ContentImageFee 是否已赋值
                     * @return ContentImageFee 是否已赋值
                     * 
                     */
                    bool ContentImageFeeHasBeenSet() const;

                    /**
                     * 获取该小时敏感数据检测费用（元）
                     * @return SensitiveDataFee 该小时敏感数据检测费用（元）
                     * 
                     */
                    std::string GetSensitiveDataFee() const;

                    /**
                     * 设置该小时敏感数据检测费用（元）
                     * @param _sensitiveDataFee 该小时敏感数据检测费用（元）
                     * 
                     */
                    void SetSensitiveDataFee(const std::string& _sensitiveDataFee);

                    /**
                     * 判断参数 SensitiveDataFee 是否已赋值
                     * @return SensitiveDataFee 是否已赋值
                     * 
                     */
                    bool SensitiveDataFeeHasBeenSet() const;

                    /**
                     * 获取该小时账单总额（元，净费用）
                     * @return TotalFee 该小时账单总额（元，净费用）
                     * 
                     */
                    std::string GetTotalFee() const;

                    /**
                     * 设置该小时账单总额（元，净费用）
                     * @param _totalFee 该小时账单总额（元，净费用）
                     * 
                     */
                    void SetTotalFee(const std::string& _totalFee);

                    /**
                     * 判断参数 TotalFee 是否已赋值
                     * @return TotalFee 是否已赋值
                     * 
                     */
                    bool TotalFeeHasBeenSet() const;

                private:

                    /**
                     * 小时区间，如00:00-01:00
                     */
                    std::string m_timeRange;
                    bool m_timeRangeHasBeenSet;

                    /**
                     * 提示词攻击防护计量值（token）
                     */
                    int64_t m_promptAttackUsage;
                    bool m_promptAttackUsageHasBeenSet;

                    /**
                     * 内容合规检测（文本）计量值（token）
                     */
                    int64_t m_contentTextUsage;
                    bool m_contentTextUsageHasBeenSet;

                    /**
                     * 内容合规检测（图片）计量值（张）
                     */
                    int64_t m_contentImageUsage;
                    bool m_contentImageUsageHasBeenSet;

                    /**
                     * 敏感数据检测计量值（token）
                     */
                    int64_t m_sensitiveDataUsage;
                    bool m_sensitiveDataUsageHasBeenSet;

                    /**
                     * 该小时提示词攻击防护费用（元）
                     */
                    std::string m_promptAttackFee;
                    bool m_promptAttackFeeHasBeenSet;

                    /**
                     * 该小时内容合规检测（文本）费用（元）
                     */
                    std::string m_contentTextFee;
                    bool m_contentTextFeeHasBeenSet;

                    /**
                     * 该小时内容合规检测（图片）费用（元）
                     */
                    std::string m_contentImageFee;
                    bool m_contentImageFeeHasBeenSet;

                    /**
                     * 该小时敏感数据检测费用（元）
                     */
                    std::string m_sensitiveDataFee;
                    bool m_sensitiveDataFeeHasBeenSet;

                    /**
                     * 该小时账单总额（元，净费用）
                     */
                    std::string m_totalFee;
                    bool m_totalFeeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_LLMHOURBILLDETAILITEM_H_
