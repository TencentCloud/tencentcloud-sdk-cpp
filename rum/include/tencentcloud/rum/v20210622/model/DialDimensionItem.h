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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DIALDIMENSIONITEM_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DIALDIMENSIONITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 拨测维度统计项
                */
                class DialDimensionItem : public AbstractModel
                {
                public:
                    DialDimensionItem();
                    ~DialDimensionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>维度值。空值在控制台展示为未知。</p>
                     * @return Value <p>维度值。空值在控制台展示为未知。</p>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>维度值。空值在控制台展示为未知。</p>
                     * @param _value <p>维度值。空值在控制台展示为未知。</p>
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取<p>执行次数。target_ip 按探测条数，其它维度按批次。</p>
                     * @return ExecutionCount <p>执行次数。target_ip 按探测条数，其它维度按批次。</p>
                     * 
                     */
                    int64_t GetExecutionCount() const;

                    /**
                     * 设置<p>执行次数。target_ip 按探测条数，其它维度按批次。</p>
                     * @param _executionCount <p>执行次数。target_ip 按探测条数，其它维度按批次。</p>
                     * 
                     */
                    void SetExecutionCount(const int64_t& _executionCount);

                    /**
                     * 判断参数 ExecutionCount 是否已赋值
                     * @return ExecutionCount 是否已赋值
                     * 
                     */
                    bool ExecutionCountHasBeenSet() const;

                    /**
                     * 获取<p>成功次数</p>
                     * @return SuccessCount <p>成功次数</p>
                     * 
                     */
                    int64_t GetSuccessCount() const;

                    /**
                     * 设置<p>成功次数</p>
                     * @param _successCount <p>成功次数</p>
                     * 
                     */
                    void SetSuccessCount(const int64_t& _successCount);

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取<p>失败次数</p>
                     * @return FailCount <p>失败次数</p>
                     * 
                     */
                    int64_t GetFailCount() const;

                    /**
                     * 设置<p>失败次数</p>
                     * @param _failCount <p>失败次数</p>
                     * 
                     */
                    void SetFailCount(const int64_t& _failCount);

                    /**
                     * 判断参数 FailCount 是否已赋值
                     * @return FailCount 是否已赋值
                     * 
                     */
                    bool FailCountHasBeenSet() const;

                    /**
                     * 获取<p>平均时延，单位毫秒</p>
                     * @return AvgDuration <p>平均时延，单位毫秒</p>
                     * 
                     */
                    double GetAvgDuration() const;

                    /**
                     * 设置<p>平均时延，单位毫秒</p>
                     * @param _avgDuration <p>平均时延，单位毫秒</p>
                     * 
                     */
                    void SetAvgDuration(const double& _avgDuration);

                    /**
                     * 判断参数 AvgDuration 是否已赋值
                     * @return AvgDuration 是否已赋值
                     * 
                     */
                    bool AvgDurationHasBeenSet() const;

                    /**
                     * 获取<p>平均丢包率，0 到 100</p>
                     * @return AvgLoss <p>平均丢包率，0 到 100</p>
                     * 
                     */
                    double GetAvgLoss() const;

                    /**
                     * 设置<p>平均丢包率，0 到 100</p>
                     * @param _avgLoss <p>平均丢包率，0 到 100</p>
                     * 
                     */
                    void SetAvgLoss(const double& _avgLoss);

                    /**
                     * 判断参数 AvgLoss 是否已赋值
                     * @return AvgLoss 是否已赋值
                     * 
                     */
                    bool AvgLossHasBeenSet() const;

                private:

                    /**
                     * <p>维度值。空值在控制台展示为未知。</p>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * <p>执行次数。target_ip 按探测条数，其它维度按批次。</p>
                     */
                    int64_t m_executionCount;
                    bool m_executionCountHasBeenSet;

                    /**
                     * <p>成功次数</p>
                     */
                    int64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * <p>失败次数</p>
                     */
                    int64_t m_failCount;
                    bool m_failCountHasBeenSet;

                    /**
                     * <p>平均时延，单位毫秒</p>
                     */
                    double m_avgDuration;
                    bool m_avgDurationHasBeenSet;

                    /**
                     * <p>平均丢包率，0 到 100</p>
                     */
                    double m_avgLoss;
                    bool m_avgLossHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DIALDIMENSIONITEM_H_
