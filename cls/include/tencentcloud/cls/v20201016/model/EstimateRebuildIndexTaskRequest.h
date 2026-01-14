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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ESTIMATEREBUILDINDEXTASKREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ESTIMATEREBUILDINDEXTASKREQUEST_H_

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
                * EstimateRebuildIndexTask请求参数结构体
                */
                class EstimateRebuildIndexTaskRequest : public AbstractModel
                {
                public:
                    EstimateRebuildIndexTaskRequest();
                    ~EstimateRebuildIndexTaskRequest() = default;
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
                     * 获取预估任务起始时间，毫秒
                     * @return StartTime 预估任务起始时间，毫秒
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置预估任务起始时间，毫秒
                     * @param _startTime 预估任务起始时间，毫秒
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
                     * 获取预估任务结束时间，毫秒
                     * @return EndTime 预估任务结束时间，毫秒
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置预估任务结束时间，毫秒
                     * @param _endTime 预估任务结束时间，毫秒
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
                     * 预估任务起始时间，毫秒
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 预估任务结束时间，毫秒
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ESTIMATEREBUILDINDEXTASKREQUEST_H_
