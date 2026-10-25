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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DIALTRENDPOINT_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DIALTRENDPOINT_H_

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
                * 拨测趋势点
                */
                class DialTrendPoint : public AbstractModel
                {
                public:
                    DialTrendPoint();
                    ~DialTrendPoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>时间桶，格式 yyyy-MM-dd HH:mm:ss</p>
                     * @return Time <p>时间桶，格式 yyyy-MM-dd HH:mm:ss</p>
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置<p>时间桶，格式 yyyy-MM-dd HH:mm:ss</p>
                     * @param _time <p>时间桶，格式 yyyy-MM-dd HH:mm:ss</p>
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取<p>执行批次数</p>
                     * @return ExecutionCount <p>执行批次数</p>
                     * 
                     */
                    int64_t GetExecutionCount() const;

                    /**
                     * 设置<p>执行批次数</p>
                     * @param _executionCount <p>执行批次数</p>
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
                     * 获取<p>成功批次数</p>
                     * @return SuccessCount <p>成功批次数</p>
                     * 
                     */
                    int64_t GetSuccessCount() const;

                    /**
                     * 设置<p>成功批次数</p>
                     * @param _successCount <p>成功批次数</p>
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
                     * 获取<p>失败批次数</p>
                     * @return FailCount <p>失败批次数</p>
                     * 
                     */
                    int64_t GetFailCount() const;

                    /**
                     * 设置<p>失败批次数</p>
                     * @param _failCount <p>失败批次数</p>
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

                private:

                    /**
                     * <p>时间桶，格式 yyyy-MM-dd HH:mm:ss</p>
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * <p>执行批次数</p>
                     */
                    int64_t m_executionCount;
                    bool m_executionCountHasBeenSet;

                    /**
                     * <p>成功批次数</p>
                     */
                    int64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * <p>失败批次数</p>
                     */
                    int64_t m_failCount;
                    bool m_failCountHasBeenSet;

                    /**
                     * <p>平均时延，单位毫秒</p>
                     */
                    double m_avgDuration;
                    bool m_avgDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DIALTRENDPOINT_H_
