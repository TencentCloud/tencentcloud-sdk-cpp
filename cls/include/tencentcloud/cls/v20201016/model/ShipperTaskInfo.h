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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_SHIPPERTASKINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_SHIPPERTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 投递任务信息
                */
                class ShipperTaskInfo : public AbstractModel
                {
                public:
                    ShipperTaskInfo();
                    ~ShipperTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取投递任务ID
                     * @return TaskId 投递任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置投递任务ID
                     * @param _taskId 投递任务ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取投递信息ID
                     * @return ShipperId 投递信息ID
                     * 
                     */
                    std::string GetShipperId() const;

                    /**
                     * 设置投递信息ID
                     * @param _shipperId 投递信息ID
                     * 
                     */
                    void SetShipperId(const std::string& _shipperId);

                    /**
                     * 判断参数 ShipperId 是否已赋值
                     * @return ShipperId 是否已赋值
                     * 
                     */
                    bool ShipperIdHasBeenSet() const;

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
                     * 获取本批投递的日志的开始时间戳，毫秒
                     * @return RangeStart 本批投递的日志的开始时间戳，毫秒
                     * 
                     */
                    int64_t GetRangeStart() const;

                    /**
                     * 设置本批投递的日志的开始时间戳，毫秒
                     * @param _rangeStart 本批投递的日志的开始时间戳，毫秒
                     * 
                     */
                    void SetRangeStart(const int64_t& _rangeStart);

                    /**
                     * 判断参数 RangeStart 是否已赋值
                     * @return RangeStart 是否已赋值
                     * 
                     */
                    bool RangeStartHasBeenSet() const;

                    /**
                     * 获取本批投递的日志的结束时间戳， 毫秒
                     * @return RangeEnd 本批投递的日志的结束时间戳， 毫秒
                     * 
                     */
                    int64_t GetRangeEnd() const;

                    /**
                     * 设置本批投递的日志的结束时间戳， 毫秒
                     * @param _rangeEnd 本批投递的日志的结束时间戳， 毫秒
                     * 
                     */
                    void SetRangeEnd(const int64_t& _rangeEnd);

                    /**
                     * 判断参数 RangeEnd 是否已赋值
                     * @return RangeEnd 是否已赋值
                     * 
                     */
                    bool RangeEndHasBeenSet() const;

                    /**
                     * 获取本次投递任务的开始时间戳， 毫秒
                     * @return StartTime 本次投递任务的开始时间戳， 毫秒
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置本次投递任务的开始时间戳， 毫秒
                     * @param _startTime 本次投递任务的开始时间戳， 毫秒
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取本次投递任务的结束时间戳， 毫秒
                     * @return EndTime 本次投递任务的结束时间戳， 毫秒
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置本次投递任务的结束时间戳， 毫秒
                     * @param _endTime 本次投递任务的结束时间戳， 毫秒
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取本次投递的结果，"success","running","failed"
                     * @return Status 本次投递的结果，"success","running","failed"
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置本次投递的结果，"success","running","failed"
                     * @param _status 本次投递的结果，"success","running","failed"
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取结果的详细信息
                     * @return Message 结果的详细信息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置结果的详细信息
                     * @param _message 结果的详细信息
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 投递任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 投递信息ID
                     */
                    std::string m_shipperId;
                    bool m_shipperIdHasBeenSet;

                    /**
                     * 日志主题ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 本批投递的日志的开始时间戳，毫秒
                     */
                    int64_t m_rangeStart;
                    bool m_rangeStartHasBeenSet;

                    /**
                     * 本批投递的日志的结束时间戳， 毫秒
                     */
                    int64_t m_rangeEnd;
                    bool m_rangeEndHasBeenSet;

                    /**
                     * 本次投递任务的开始时间戳， 毫秒
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 本次投递任务的结束时间戳， 毫秒
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 本次投递的结果，"success","running","failed"
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 结果的详细信息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SHIPPERTASKINFO_H_
