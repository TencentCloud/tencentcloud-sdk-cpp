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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_AIGWLLMQUOTAFALLBACKTRIGGER_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_AIGWLLMQUOTAFALLBACKTRIGGER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 云原生网关模型API 配额降级触发条件信息
                */
                class AIGWLLMQuotaFallbackTrigger : public AbstractModel
                {
                public:
                    AIGWLLMQuotaFallbackTrigger();
                    ~AIGWLLMQuotaFallbackTrigger() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>配额感知阈值百分比（RPM 与 TPM 共用）</p><p>取值范围：[0, 99]</p>
                     * @return ThresholdPercent <p>配额感知阈值百分比（RPM 与 TPM 共用）</p><p>取值范围：[0, 99]</p>
                     * 
                     */
                    int64_t GetThresholdPercent() const;

                    /**
                     * 设置<p>配额感知阈值百分比（RPM 与 TPM 共用）</p><p>取值范围：[0, 99]</p>
                     * @param _thresholdPercent <p>配额感知阈值百分比（RPM 与 TPM 共用）</p><p>取值范围：[0, 99]</p>
                     * 
                     */
                    void SetThresholdPercent(const int64_t& _thresholdPercent);

                    /**
                     * 判断参数 ThresholdPercent 是否已赋值
                     * @return ThresholdPercent 是否已赋值
                     * 
                     */
                    bool ThresholdPercentHasBeenSet() const;

                    /**
                     * 获取<p>检查维度策略</p><p>枚举值：</p><ul><li>AnyInsufficient：  RPM 或 TPM 任一不足即触发</li><li>AllInsufficient： RPM 和 TPM 同时不足才触发</li></ul>
                     * @return CheckDimension <p>检查维度策略</p><p>枚举值：</p><ul><li>AnyInsufficient：  RPM 或 TPM 任一不足即触发</li><li>AllInsufficient： RPM 和 TPM 同时不足才触发</li></ul>
                     * 
                     */
                    std::string GetCheckDimension() const;

                    /**
                     * 设置<p>检查维度策略</p><p>枚举值：</p><ul><li>AnyInsufficient：  RPM 或 TPM 任一不足即触发</li><li>AllInsufficient： RPM 和 TPM 同时不足才触发</li></ul>
                     * @param _checkDimension <p>检查维度策略</p><p>枚举值：</p><ul><li>AnyInsufficient：  RPM 或 TPM 任一不足即触发</li><li>AllInsufficient： RPM 和 TPM 同时不足才触发</li></ul>
                     * 
                     */
                    void SetCheckDimension(const std::string& _checkDimension);

                    /**
                     * 判断参数 CheckDimension 是否已赋值
                     * @return CheckDimension 是否已赋值
                     * 
                     */
                    bool CheckDimensionHasBeenSet() const;

                private:

                    /**
                     * <p>配额感知阈值百分比（RPM 与 TPM 共用）</p><p>取值范围：[0, 99]</p>
                     */
                    int64_t m_thresholdPercent;
                    bool m_thresholdPercentHasBeenSet;

                    /**
                     * <p>检查维度策略</p><p>枚举值：</p><ul><li>AnyInsufficient：  RPM 或 TPM 任一不足即触发</li><li>AllInsufficient： RPM 和 TPM 同时不足才触发</li></ul>
                     */
                    std::string m_checkDimension;
                    bool m_checkDimensionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_AIGWLLMQUOTAFALLBACKTRIGGER_H_
