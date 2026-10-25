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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMDIALOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMDIALOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeTDEMDialOverview返回参数结构体
                */
                class DescribeTDEMDialOverviewResponse : public AbstractModel
                {
                public:
                    DescribeTDEMDialOverviewResponse();
                    ~DescribeTDEMDialOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务数</p>
                     * @return TaskCount <p>任务数</p>
                     * 
                     */
                    int64_t GetTaskCount() const;

                    /**
                     * 判断参数 TaskCount 是否已赋值
                     * @return TaskCount 是否已赋值
                     * 
                     */
                    bool TaskCountHasBeenSet() const;

                    /**
                     * 获取<p>执行批次数</p>
                     * @return ExecutionCount <p>执行批次数</p>
                     * 
                     */
                    int64_t GetExecutionCount() const;

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
                     * 判断参数 AvgLoss 是否已赋值
                     * @return AvgLoss 是否已赋值
                     * 
                     */
                    bool AvgLossHasBeenSet() const;

                private:

                    /**
                     * <p>任务数</p>
                     */
                    int64_t m_taskCount;
                    bool m_taskCountHasBeenSet;

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

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMDIALOVERVIEWRESPONSE_H_
