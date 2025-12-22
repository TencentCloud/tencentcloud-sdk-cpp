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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATECONSUMERGROUPREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATECONSUMERGROUPREQUEST_H_

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
                * CreateConsumerGroup请求参数结构体
                */
                class CreateConsumerGroupRequest : public AbstractModel
                {
                public:
                    CreateConsumerGroupRequest();
                    ~CreateConsumerGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取创建的消费者组标识
限制： 字母数字下划线，不允许数字开头，长度限制256
                     * @return ConsumerGroup 创建的消费者组标识
限制： 字母数字下划线，不允许数字开头，长度限制256
                     * 
                     */
                    std::string GetConsumerGroup() const;

                    /**
                     * 设置创建的消费者组标识
限制： 字母数字下划线，不允许数字开头，长度限制256
                     * @param _consumerGroup 创建的消费者组标识
限制： 字母数字下划线，不允许数字开头，长度限制256
                     * 
                     */
                    void SetConsumerGroup(const std::string& _consumerGroup);

                    /**
                     * 判断参数 ConsumerGroup 是否已赋值
                     * @return ConsumerGroup 是否已赋值
                     * 
                     */
                    bool ConsumerGroupHasBeenSet() const;

                    /**
                     * 获取消费者心跳超时时间（秒）
                     * @return Timeout 消费者心跳超时时间（秒）
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置消费者心跳超时时间（秒）
                     * @param _timeout 消费者心跳超时时间（秒）
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取创建的消费者组包含的日志主题列表
                     * @return Topics 创建的消费者组包含的日志主题列表
                     * 
                     */
                    std::vector<std::string> GetTopics() const;

                    /**
                     * 设置创建的消费者组包含的日志主题列表
                     * @param _topics 创建的消费者组包含的日志主题列表
                     * 
                     */
                    void SetTopics(const std::vector<std::string>& _topics);

                    /**
                     * 判断参数 Topics 是否已赋值
                     * @return Topics 是否已赋值
                     * 
                     */
                    bool TopicsHasBeenSet() const;

                    /**
                     * 获取日志集Id（日志主题所属的日志集）
                     * @return LogsetId 日志集Id（日志主题所属的日志集）
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置日志集Id（日志主题所属的日志集）
                     * @param _logsetId 日志集Id（日志主题所属的日志集）
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                private:

                    /**
                     * 创建的消费者组标识
限制： 字母数字下划线，不允许数字开头，长度限制256
                     */
                    std::string m_consumerGroup;
                    bool m_consumerGroupHasBeenSet;

                    /**
                     * 消费者心跳超时时间（秒）
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 创建的消费者组包含的日志主题列表
                     */
                    std::vector<std::string> m_topics;
                    bool m_topicsHasBeenSet;

                    /**
                     * 日志集Id（日志主题所属的日志集）
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATECONSUMERGROUPREQUEST_H_
