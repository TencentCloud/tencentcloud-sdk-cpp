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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEMESSAGELISTREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEMESSAGELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * DescribeMessageList请求参数结构体
                */
                class DescribeMessageListRequest : public AbstractModel
                {
                public:
                    DescribeMessageListRequest();
                    ~DescribeMessageListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * @return InstanceId 腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * @param _instanceId 腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取要查询的一级Topic，可从 [查询MQTT主题列表](https://cloud.tencent.com/document/product/1778/111082) 获取。
                     * @return Topic 要查询的一级Topic，可从 [查询MQTT主题列表](https://cloud.tencent.com/document/product/1778/111082) 获取。
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置要查询的一级Topic，可从 [查询MQTT主题列表](https://cloud.tencent.com/document/product/1778/111082) 获取。
                     * @param _topic 要查询的一级Topic，可从 [查询MQTT主题列表](https://cloud.tencent.com/document/product/1778/111082) 获取。
                     * 
                     */
                    void SetTopic(const std::string& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取开始时间，毫秒级时间戳 。
                     * @return StartTime 开始时间，毫秒级时间戳 。
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置开始时间，毫秒级时间戳 。
                     * @param _startTime 开始时间，毫秒级时间戳 。
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
                     * 获取结束时间，毫秒级时间戳 。
                     * @return EndTime 结束时间，毫秒级时间戳 。
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间，毫秒级时间戳 。
                     * @param _endTime 结束时间，毫秒级时间戳 。
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
                     * 获取请求任务id，用于相同查询参数下查询加速，第一次查询时无需传递，第一次查询会根据本次查询参数生成查询任务ID，保留查询条件，查询下一页消息时可传递第一次查询返回的任务ID。
                     * @return TaskRequestId 请求任务id，用于相同查询参数下查询加速，第一次查询时无需传递，第一次查询会根据本次查询参数生成查询任务ID，保留查询条件，查询下一页消息时可传递第一次查询返回的任务ID。
                     * 
                     */
                    std::string GetTaskRequestId() const;

                    /**
                     * 设置请求任务id，用于相同查询参数下查询加速，第一次查询时无需传递，第一次查询会根据本次查询参数生成查询任务ID，保留查询条件，查询下一页消息时可传递第一次查询返回的任务ID。
                     * @param _taskRequestId 请求任务id，用于相同查询参数下查询加速，第一次查询时无需传递，第一次查询会根据本次查询参数生成查询任务ID，保留查询条件，查询下一页消息时可传递第一次查询返回的任务ID。
                     * 
                     */
                    void SetTaskRequestId(const std::string& _taskRequestId);

                    /**
                     * 判断参数 TaskRequestId 是否已赋值
                     * @return TaskRequestId 是否已赋值
                     * 
                     */
                    bool TaskRequestIdHasBeenSet() const;

                    /**
                     * 获取查询起始位置，默认0
                     * @return Offset 查询起始位置，默认0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置查询起始位置，默认0
                     * @param _offset 查询起始位置，默认0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取查询结果限制数量，默认20，最大50
                     * @return Limit 查询结果限制数量，默认20，最大50
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置查询结果限制数量，默认20，最大50
                     * @param _limit 查询结果限制数量，默认20，最大50
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 要查询的一级Topic，可从 [查询MQTT主题列表](https://cloud.tencent.com/document/product/1778/111082) 获取。
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 开始时间，毫秒级时间戳 。
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，毫秒级时间戳 。
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 请求任务id，用于相同查询参数下查询加速，第一次查询时无需传递，第一次查询会根据本次查询参数生成查询任务ID，保留查询条件，查询下一页消息时可传递第一次查询返回的任务ID。
                     */
                    std::string m_taskRequestId;
                    bool m_taskRequestIdHasBeenSet;

                    /**
                     * 查询起始位置，默认0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询结果限制数量，默认20，最大50
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEMESSAGELISTREQUEST_H_
