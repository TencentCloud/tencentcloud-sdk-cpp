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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQVIRTUALHOSTSTATISTICS_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQVIRTUALHOSTSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * vhost概览统计信息
                */
                class RabbitMQVirtualHostStatistics : public AbstractModel
                {
                public:
                    RabbitMQVirtualHostStatistics();
                    ~RabbitMQVirtualHostStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前vhost的queue数量
                     * @return CurrentQueues 当前vhost的queue数量
                     * 
                     */
                    int64_t GetCurrentQueues() const;

                    /**
                     * 设置当前vhost的queue数量
                     * @param _currentQueues 当前vhost的queue数量
                     * 
                     */
                    void SetCurrentQueues(const int64_t& _currentQueues);

                    /**
                     * 判断参数 CurrentQueues 是否已赋值
                     * @return CurrentQueues 是否已赋值
                     * 
                     */
                    bool CurrentQueuesHasBeenSet() const;

                    /**
                     * 获取当前vhost的exchange数量
                     * @return CurrentExchanges 当前vhost的exchange数量
                     * 
                     */
                    int64_t GetCurrentExchanges() const;

                    /**
                     * 设置当前vhost的exchange数量
                     * @param _currentExchanges 当前vhost的exchange数量
                     * 
                     */
                    void SetCurrentExchanges(const int64_t& _currentExchanges);

                    /**
                     * 判断参数 CurrentExchanges 是否已赋值
                     * @return CurrentExchanges 是否已赋值
                     * 
                     */
                    bool CurrentExchangesHasBeenSet() const;

                    /**
                     * 获取当前vhost的连接数量
                     * @return CurrentConnections 当前vhost的连接数量
                     * 
                     */
                    int64_t GetCurrentConnections() const;

                    /**
                     * 设置当前vhost的连接数量
                     * @param _currentConnections 当前vhost的连接数量
                     * 
                     */
                    void SetCurrentConnections(const int64_t& _currentConnections);

                    /**
                     * 判断参数 CurrentConnections 是否已赋值
                     * @return CurrentConnections 是否已赋值
                     * 
                     */
                    bool CurrentConnectionsHasBeenSet() const;

                    /**
                     * 获取当前vhost的channel数量
                     * @return CurrentChannels 当前vhost的channel数量
                     * 
                     */
                    int64_t GetCurrentChannels() const;

                    /**
                     * 设置当前vhost的channel数量
                     * @param _currentChannels 当前vhost的channel数量
                     * 
                     */
                    void SetCurrentChannels(const int64_t& _currentChannels);

                    /**
                     * 判断参数 CurrentChannels 是否已赋值
                     * @return CurrentChannels 是否已赋值
                     * 
                     */
                    bool CurrentChannelsHasBeenSet() const;

                    /**
                     * 获取当前vhost的用户数量
                     * @return CurrentUsers 当前vhost的用户数量
                     * 
                     */
                    int64_t GetCurrentUsers() const;

                    /**
                     * 设置当前vhost的用户数量
                     * @param _currentUsers 当前vhost的用户数量
                     * 
                     */
                    void SetCurrentUsers(const int64_t& _currentUsers);

                    /**
                     * 判断参数 CurrentUsers 是否已赋值
                     * @return CurrentUsers 是否已赋值
                     * 
                     */
                    bool CurrentUsersHasBeenSet() const;

                private:

                    /**
                     * 当前vhost的queue数量
                     */
                    int64_t m_currentQueues;
                    bool m_currentQueuesHasBeenSet;

                    /**
                     * 当前vhost的exchange数量
                     */
                    int64_t m_currentExchanges;
                    bool m_currentExchangesHasBeenSet;

                    /**
                     * 当前vhost的连接数量
                     */
                    int64_t m_currentConnections;
                    bool m_currentConnectionsHasBeenSet;

                    /**
                     * 当前vhost的channel数量
                     */
                    int64_t m_currentChannels;
                    bool m_currentChannelsHasBeenSet;

                    /**
                     * 当前vhost的用户数量
                     */
                    int64_t m_currentUsers;
                    bool m_currentUsersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQVIRTUALHOSTSTATISTICS_H_
