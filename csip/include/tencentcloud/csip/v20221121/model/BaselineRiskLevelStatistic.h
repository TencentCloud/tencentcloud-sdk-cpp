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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINERISKLEVELSTATISTIC_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINERISKLEVELSTATISTIC_H_

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
                * 按风险等级聚合的未通过检测项数量统计。
                */
                class BaselineRiskLevelStatistic : public AbstractModel
                {
                public:
                    BaselineRiskLevelStatistic();
                    ~BaselineRiskLevelStatistic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>风险等级。取值：LOW（低危）、MEDIUM（中危）、HIGH（高危）、CRITICAL（严重）。</p>
                     * @return RiskLevel <p>风险等级。取值：LOW（低危）、MEDIUM（中危）、HIGH（高危）、CRITICAL（严重）。</p>
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置<p>风险等级。取值：LOW（低危）、MEDIUM（中危）、HIGH（高危）、CRITICAL（严重）。</p>
                     * @param _riskLevel <p>风险等级。取值：LOW（低危）、MEDIUM（中危）、HIGH（高危）、CRITICAL（严重）。</p>
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取<p>该风险等级下结果为 NOT_PASS 的检测项数量。</p>
                     * @return NotPassCount <p>该风险等级下结果为 NOT_PASS 的检测项数量。</p>
                     * 
                     */
                    uint64_t GetNotPassCount() const;

                    /**
                     * 设置<p>该风险等级下结果为 NOT_PASS 的检测项数量。</p>
                     * @param _notPassCount <p>该风险等级下结果为 NOT_PASS 的检测项数量。</p>
                     * 
                     */
                    void SetNotPassCount(const uint64_t& _notPassCount);

                    /**
                     * 判断参数 NotPassCount 是否已赋值
                     * @return NotPassCount 是否已赋值
                     * 
                     */
                    bool NotPassCountHasBeenSet() const;

                private:

                    /**
                     * <p>风险等级。取值：LOW（低危）、MEDIUM（中危）、HIGH（高危）、CRITICAL（严重）。</p>
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>该风险等级下结果为 NOT_PASS 的检测项数量。</p>
                     */
                    uint64_t m_notPassCount;
                    bool m_notPassCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINERISKLEVELSTATISTIC_H_
