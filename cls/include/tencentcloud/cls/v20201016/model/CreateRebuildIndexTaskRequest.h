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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEREBUILDINDEXTASKREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEREBUILDINDEXTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateRebuildIndexTask请求参数结构体
                */
                class CreateRebuildIndexTaskRequest : public AbstractModel
                {
                public:
                    CreateRebuildIndexTaskRequest();
                    ~CreateRebuildIndexTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取日志主题ID
                     * @return TopicId 日志主题ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题ID
                     * @param _topicId 日志主题ID
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取重建起始时间戳，毫秒
起始时间不允许超过日志生命周期
                     * @return StartTime 重建起始时间戳，毫秒
起始时间不允许超过日志生命周期
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置重建起始时间戳，毫秒
起始时间不允许超过日志生命周期
                     * @param _startTime 重建起始时间戳，毫秒
起始时间不允许超过日志生命周期
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取重建结束时间戳，毫秒
结束时间不晚于当前时间往前推15分钟
注意：建议提前使用“预估重建索引任务(EstimateRebuildIndexTask)”接口评估该时间范围重建索引涉及到的数据量及耗时，避免因数据量过大导致费用成本过高或耗时过长
                     * @return EndTime 重建结束时间戳，毫秒
结束时间不晚于当前时间往前推15分钟
注意：建议提前使用“预估重建索引任务(EstimateRebuildIndexTask)”接口评估该时间范围重建索引涉及到的数据量及耗时，避免因数据量过大导致费用成本过高或耗时过长
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置重建结束时间戳，毫秒
结束时间不晚于当前时间往前推15分钟
注意：建议提前使用“预估重建索引任务(EstimateRebuildIndexTask)”接口评估该时间范围重建索引涉及到的数据量及耗时，避免因数据量过大导致费用成本过高或耗时过长
                     * @param _endTime 重建结束时间戳，毫秒
结束时间不晚于当前时间往前推15分钟
注意：建议提前使用“预估重建索引任务(EstimateRebuildIndexTask)”接口评估该时间范围重建索引涉及到的数据量及耗时，避免因数据量过大导致费用成本过高或耗时过长
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 日志主题ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 重建起始时间戳，毫秒
起始时间不允许超过日志生命周期
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 重建结束时间戳，毫秒
结束时间不晚于当前时间往前推15分钟
注意：建议提前使用“预估重建索引任务(EstimateRebuildIndexTask)”接口评估该时间范围重建索引涉及到的数据量及耗时，避免因数据量过大导致费用成本过高或耗时过长
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEREBUILDINDEXTASKREQUEST_H_
