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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_STREAMINGSTATISTICS_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_STREAMINGSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * spark流任务统计信息
                */
                class StreamingStatistics : public AbstractModel
                {
                public:
                    StreamingStatistics();
                    ~StreamingStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务开始时间
                     * @return StartTime 任务开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置任务开始时间
                     * @param _startTime 任务开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取数据接收器数
                     * @return Receivers 数据接收器数
                     * 
                     */
                    int64_t GetReceivers() const;

                    /**
                     * 设置数据接收器数
                     * @param _receivers 数据接收器数
                     * 
                     */
                    void SetReceivers(const int64_t& _receivers);

                    /**
                     * 判断参数 Receivers 是否已赋值
                     * @return Receivers 是否已赋值
                     * 
                     */
                    bool ReceiversHasBeenSet() const;

                    /**
                     * 获取运行中的接收器数
                     * @return NumActiveReceivers 运行中的接收器数
                     * 
                     */
                    int64_t GetNumActiveReceivers() const;

                    /**
                     * 设置运行中的接收器数
                     * @param _numActiveReceivers 运行中的接收器数
                     * 
                     */
                    void SetNumActiveReceivers(const int64_t& _numActiveReceivers);

                    /**
                     * 判断参数 NumActiveReceivers 是否已赋值
                     * @return NumActiveReceivers 是否已赋值
                     * 
                     */
                    bool NumActiveReceiversHasBeenSet() const;

                    /**
                     * 获取不活跃的接收器数
                     * @return NumInactiveReceivers 不活跃的接收器数
                     * 
                     */
                    int64_t GetNumInactiveReceivers() const;

                    /**
                     * 设置不活跃的接收器数
                     * @param _numInactiveReceivers 不活跃的接收器数
                     * 
                     */
                    void SetNumInactiveReceivers(const int64_t& _numInactiveReceivers);

                    /**
                     * 判断参数 NumInactiveReceivers 是否已赋值
                     * @return NumInactiveReceivers 是否已赋值
                     * 
                     */
                    bool NumInactiveReceiversHasBeenSet() const;

                    /**
                     * 获取运行中的批数
                     * @return NumActiveBatches 运行中的批数
                     * 
                     */
                    int64_t GetNumActiveBatches() const;

                    /**
                     * 设置运行中的批数
                     * @param _numActiveBatches 运行中的批数
                     * 
                     */
                    void SetNumActiveBatches(const int64_t& _numActiveBatches);

                    /**
                     * 判断参数 NumActiveBatches 是否已赋值
                     * @return NumActiveBatches 是否已赋值
                     * 
                     */
                    bool NumActiveBatchesHasBeenSet() const;

                    /**
                     * 获取待处理的批数
                     * @return NumRetainedCompletedBatches 待处理的批数
                     * 
                     */
                    int64_t GetNumRetainedCompletedBatches() const;

                    /**
                     * 设置待处理的批数
                     * @param _numRetainedCompletedBatches 待处理的批数
                     * 
                     */
                    void SetNumRetainedCompletedBatches(const int64_t& _numRetainedCompletedBatches);

                    /**
                     * 判断参数 NumRetainedCompletedBatches 是否已赋值
                     * @return NumRetainedCompletedBatches 是否已赋值
                     * 
                     */
                    bool NumRetainedCompletedBatchesHasBeenSet() const;

                    /**
                     * 获取已完成的批数
                     * @return NumTotalCompletedBatches 已完成的批数
                     * 
                     */
                    int64_t GetNumTotalCompletedBatches() const;

                    /**
                     * 设置已完成的批数
                     * @param _numTotalCompletedBatches 已完成的批数
                     * 
                     */
                    void SetNumTotalCompletedBatches(const int64_t& _numTotalCompletedBatches);

                    /**
                     * 判断参数 NumTotalCompletedBatches 是否已赋值
                     * @return NumTotalCompletedBatches 是否已赋值
                     * 
                     */
                    bool NumTotalCompletedBatchesHasBeenSet() const;

                    /**
                     * 获取平均输入速率
                     * @return AverageInputRate 平均输入速率
                     * 
                     */
                    double GetAverageInputRate() const;

                    /**
                     * 设置平均输入速率
                     * @param _averageInputRate 平均输入速率
                     * 
                     */
                    void SetAverageInputRate(const double& _averageInputRate);

                    /**
                     * 判断参数 AverageInputRate 是否已赋值
                     * @return AverageInputRate 是否已赋值
                     * 
                     */
                    bool AverageInputRateHasBeenSet() const;

                    /**
                     * 获取平均等待时长
                     * @return AverageSchedulingDelay 平均等待时长
                     * 
                     */
                    double GetAverageSchedulingDelay() const;

                    /**
                     * 设置平均等待时长
                     * @param _averageSchedulingDelay 平均等待时长
                     * 
                     */
                    void SetAverageSchedulingDelay(const double& _averageSchedulingDelay);

                    /**
                     * 判断参数 AverageSchedulingDelay 是否已赋值
                     * @return AverageSchedulingDelay 是否已赋值
                     * 
                     */
                    bool AverageSchedulingDelayHasBeenSet() const;

                    /**
                     * 获取平均处理时长
                     * @return AverageProcessingTime 平均处理时长
                     * 
                     */
                    double GetAverageProcessingTime() const;

                    /**
                     * 设置平均处理时长
                     * @param _averageProcessingTime 平均处理时长
                     * 
                     */
                    void SetAverageProcessingTime(const double& _averageProcessingTime);

                    /**
                     * 判断参数 AverageProcessingTime 是否已赋值
                     * @return AverageProcessingTime 是否已赋值
                     * 
                     */
                    bool AverageProcessingTimeHasBeenSet() const;

                    /**
                     * 获取平均延时
                     * @return AverageTotalDelay 平均延时
                     * 
                     */
                    double GetAverageTotalDelay() const;

                    /**
                     * 设置平均延时
                     * @param _averageTotalDelay 平均延时
                     * 
                     */
                    void SetAverageTotalDelay(const double& _averageTotalDelay);

                    /**
                     * 判断参数 AverageTotalDelay 是否已赋值
                     * @return AverageTotalDelay 是否已赋值
                     * 
                     */
                    bool AverageTotalDelayHasBeenSet() const;

                private:

                    /**
                     * 任务开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 数据接收器数
                     */
                    int64_t m_receivers;
                    bool m_receiversHasBeenSet;

                    /**
                     * 运行中的接收器数
                     */
                    int64_t m_numActiveReceivers;
                    bool m_numActiveReceiversHasBeenSet;

                    /**
                     * 不活跃的接收器数
                     */
                    int64_t m_numInactiveReceivers;
                    bool m_numInactiveReceiversHasBeenSet;

                    /**
                     * 运行中的批数
                     */
                    int64_t m_numActiveBatches;
                    bool m_numActiveBatchesHasBeenSet;

                    /**
                     * 待处理的批数
                     */
                    int64_t m_numRetainedCompletedBatches;
                    bool m_numRetainedCompletedBatchesHasBeenSet;

                    /**
                     * 已完成的批数
                     */
                    int64_t m_numTotalCompletedBatches;
                    bool m_numTotalCompletedBatchesHasBeenSet;

                    /**
                     * 平均输入速率
                     */
                    double m_averageInputRate;
                    bool m_averageInputRateHasBeenSet;

                    /**
                     * 平均等待时长
                     */
                    double m_averageSchedulingDelay;
                    bool m_averageSchedulingDelayHasBeenSet;

                    /**
                     * 平均处理时长
                     */
                    double m_averageProcessingTime;
                    bool m_averageProcessingTimeHasBeenSet;

                    /**
                     * 平均延时
                     */
                    double m_averageTotalDelay;
                    bool m_averageTotalDelayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_STREAMINGSTATISTICS_H_
