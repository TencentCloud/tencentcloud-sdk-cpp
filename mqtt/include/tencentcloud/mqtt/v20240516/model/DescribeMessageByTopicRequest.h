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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEMESSAGEBYTOPICREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEMESSAGEBYTOPICREQUEST_H_

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
                * DescribeMessageByTopic请求参数结构体
                */
                class DescribeMessageByTopicRequest : public AbstractModel
                {
                public:
                    DescribeMessageByTopicRequest();
                    ~DescribeMessageByTopicRequest() = default;
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
                     * 获取home/room
                     * @return Topic home/room
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置home/room
                     * @param _topic home/room
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
                     * 获取查询消息条数，最大1024，默认100.
                     * @return MaxNumber 查询消息条数，最大1024，默认100.
                     * 
                     */
                    int64_t GetMaxNumber() const;

                    /**
                     * 设置查询消息条数，最大1024，默认100.
                     * @param _maxNumber 查询消息条数，最大1024，默认100.
                     * 
                     */
                    void SetMaxNumber(const int64_t& _maxNumber);

                    /**
                     * 判断参数 MaxNumber 是否已赋值
                     * @return MaxNumber 是否已赋值
                     * 
                     */
                    bool MaxNumberHasBeenSet() const;

                private:

                    /**
                     * 腾讯云MQTT实例ID，从 [DescribeInstanceList](https://cloud.tencent.com/document/api/1778/111029)接口或控制台获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * home/room
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 开始时间，毫秒级时间戳 。
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询消息条数，最大1024，默认100.
                     */
                    int64_t m_maxNumber;
                    bool m_maxNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEMESSAGEBYTOPICREQUEST_H_
