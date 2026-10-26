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
                     * 获取<p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     * @return InstanceId <p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     * @param _instanceId <p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
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
                     * 获取<p>home/room</p>
                     * @return Topic <p>home/room</p>
                     * 
                     */
                    std::string GetTopic() const;

                    /**
                     * 设置<p>home/room</p>
                     * @param _topic <p>home/room</p>
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
                     * 获取<p>开始时间，毫秒级时间戳 。</p>
                     * @return StartTime <p>开始时间，毫秒级时间戳 。</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>开始时间，毫秒级时间戳 。</p>
                     * @param _startTime <p>开始时间，毫秒级时间戳 。</p>
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
                     * 获取<p>查询消息条数，最大1024，默认100.</p>
                     * @return MaxNumber <p>查询消息条数，最大1024，默认100.</p>
                     * 
                     */
                    int64_t GetMaxNumber() const;

                    /**
                     * 设置<p>查询消息条数，最大1024，默认100.</p>
                     * @param _maxNumber <p>查询消息条数，最大1024，默认100.</p>
                     * 
                     */
                    void SetMaxNumber(const int64_t& _maxNumber);

                    /**
                     * 判断参数 MaxNumber 是否已赋值
                     * @return MaxNumber 是否已赋值
                     * 
                     */
                    bool MaxNumberHasBeenSet() const;

                    /**
                     * 获取<p>消息 body 过滤表达式（Base64 编码），jq 1.6 语法</p><p>枚举值：</p><ul><li>LmxldmVsID09ICJFUlJPUiI=： .level == &quot;ERROR&quot; Base64编码后的字符串</li></ul>
                     * @return FilterExpression <p>消息 body 过滤表达式（Base64 编码），jq 1.6 语法</p><p>枚举值：</p><ul><li>LmxldmVsID09ICJFUlJPUiI=： .level == &quot;ERROR&quot; Base64编码后的字符串</li></ul>
                     * 
                     */
                    std::string GetFilterExpression() const;

                    /**
                     * 设置<p>消息 body 过滤表达式（Base64 编码），jq 1.6 语法</p><p>枚举值：</p><ul><li>LmxldmVsID09ICJFUlJPUiI=： .level == &quot;ERROR&quot; Base64编码后的字符串</li></ul>
                     * @param _filterExpression <p>消息 body 过滤表达式（Base64 编码），jq 1.6 语法</p><p>枚举值：</p><ul><li>LmxldmVsID09ICJFUlJPUiI=： .level == &quot;ERROR&quot; Base64编码后的字符串</li></ul>
                     * 
                     */
                    void SetFilterExpression(const std::string& _filterExpression);

                    /**
                     * 判断参数 FilterExpression 是否已赋值
                     * @return FilterExpression 是否已赋值
                     * 
                     */
                    bool FilterExpressionHasBeenSet() const;

                private:

                    /**
                     * <p>腾讯云MQTT实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>home/room</p>
                     */
                    std::string m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * <p>开始时间，毫秒级时间戳 。</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>查询消息条数，最大1024，默认100.</p>
                     */
                    int64_t m_maxNumber;
                    bool m_maxNumberHasBeenSet;

                    /**
                     * <p>消息 body 过滤表达式（Base64 编码），jq 1.6 语法</p><p>枚举值：</p><ul><li>LmxldmVsID09ICJFUlJPUiI=： .level == &quot;ERROR&quot; Base64编码后的字符串</li></ul>
                     */
                    std::string m_filterExpression;
                    bool m_filterExpressionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_DESCRIBEMESSAGEBYTOPICREQUEST_H_
