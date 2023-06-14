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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_CREATEGAMESERVERSESSIONQUEUEREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_CREATEGAMESERVERSESSIONQUEUEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/GameServerSessionQueueDestination.h>
#include <tencentcloud/gse/v20191112/model/PlayerLatencyPolicy.h>
#include <tencentcloud/gse/v20191112/model/Tag.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * CreateGameServerSessionQueue请求参数结构体
                */
                class CreateGameServerSessionQueueRequest : public AbstractModel
                {
                public:
                    CreateGameServerSessionQueueRequest();
                    ~CreateGameServerSessionQueueRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取游戏服务器会话队列名称，长度1~128
                     * @return Name 游戏服务器会话队列名称，长度1~128
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置游戏服务器会话队列名称，长度1~128
                     * @param _name 游戏服务器会话队列名称，长度1~128
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取目的服务器舰队（可为别名）列表
                     * @return Destinations 目的服务器舰队（可为别名）列表
                     * 
                     */
                    std::vector<GameServerSessionQueueDestination> GetDestinations() const;

                    /**
                     * 设置目的服务器舰队（可为别名）列表
                     * @param _destinations 目的服务器舰队（可为别名）列表
                     * 
                     */
                    void SetDestinations(const std::vector<GameServerSessionQueueDestination>& _destinations);

                    /**
                     * 判断参数 Destinations 是否已赋值
                     * @return Destinations 是否已赋值
                     * 
                     */
                    bool DestinationsHasBeenSet() const;

                    /**
                     * 获取延迟策略集合
                     * @return PlayerLatencyPolicies 延迟策略集合
                     * 
                     */
                    std::vector<PlayerLatencyPolicy> GetPlayerLatencyPolicies() const;

                    /**
                     * 设置延迟策略集合
                     * @param _playerLatencyPolicies 延迟策略集合
                     * 
                     */
                    void SetPlayerLatencyPolicies(const std::vector<PlayerLatencyPolicy>& _playerLatencyPolicies);

                    /**
                     * 判断参数 PlayerLatencyPolicies 是否已赋值
                     * @return PlayerLatencyPolicies 是否已赋值
                     * 
                     */
                    bool PlayerLatencyPoliciesHasBeenSet() const;

                    /**
                     * 获取超时时间（单位秒，默认值为600秒）
                     * @return TimeoutInSeconds 超时时间（单位秒，默认值为600秒）
                     * 
                     */
                    uint64_t GetTimeoutInSeconds() const;

                    /**
                     * 设置超时时间（单位秒，默认值为600秒）
                     * @param _timeoutInSeconds 超时时间（单位秒，默认值为600秒）
                     * 
                     */
                    void SetTimeoutInSeconds(const uint64_t& _timeoutInSeconds);

                    /**
                     * 判断参数 TimeoutInSeconds 是否已赋值
                     * @return TimeoutInSeconds 是否已赋值
                     * 
                     */
                    bool TimeoutInSecondsHasBeenSet() const;

                    /**
                     * 获取标签列表，最大长度50组
                     * @return Tags 标签列表，最大长度50组
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签列表，最大长度50组
                     * @param _tags 标签列表，最大长度50组
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 游戏服务器会话队列名称，长度1~128
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 目的服务器舰队（可为别名）列表
                     */
                    std::vector<GameServerSessionQueueDestination> m_destinations;
                    bool m_destinationsHasBeenSet;

                    /**
                     * 延迟策略集合
                     */
                    std::vector<PlayerLatencyPolicy> m_playerLatencyPolicies;
                    bool m_playerLatencyPoliciesHasBeenSet;

                    /**
                     * 超时时间（单位秒，默认值为600秒）
                     */
                    uint64_t m_timeoutInSeconds;
                    bool m_timeoutInSecondsHasBeenSet;

                    /**
                     * 标签列表，最大长度50组
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_CREATEGAMESERVERSESSIONQUEUEREQUEST_H_
