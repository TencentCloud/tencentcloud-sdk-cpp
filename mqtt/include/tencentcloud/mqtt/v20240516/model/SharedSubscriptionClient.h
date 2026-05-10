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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_SHAREDSUBSCRIPTIONCLIENT_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_SHAREDSUBSCRIPTIONCLIENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 共享订阅组下客户端
                */
                class SharedSubscriptionClient : public AbstractModel
                {
                public:
                    SharedSubscriptionClient();
                    ~SharedSubscriptionClient() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户端ID
                     * @return ClientId 客户端ID
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置客户端ID
                     * @param _clientId 客户端ID
                     * 
                     */
                    void SetClientId(const std::string& _clientId);

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取共享订阅组名
                     * @return SharedName 共享订阅组名
                     * 
                     */
                    std::string GetSharedName() const;

                    /**
                     * 设置共享订阅组名
                     * @param _sharedName 共享订阅组名
                     * 
                     */
                    void SetSharedName(const std::string& _sharedName);

                    /**
                     * 判断参数 SharedName 是否已赋值
                     * @return SharedName 是否已赋值
                     * 
                     */
                    bool SharedNameHasBeenSet() const;

                    /**
                     * 获取共享组下的订阅表达式列表
                     * @return TopicFilter 共享组下的订阅表达式列表
                     * 
                     */
                    std::string GetTopicFilter() const;

                    /**
                     * 设置共享组下的订阅表达式列表
                     * @param _topicFilter 共享组下的订阅表达式列表
                     * 
                     */
                    void SetTopicFilter(const std::string& _topicFilter);

                    /**
                     * 判断参数 TopicFilter 是否已赋值
                     * @return TopicFilter 是否已赋值
                     * 
                     */
                    bool TopicFilterHasBeenSet() const;

                    /**
                     * 获取在线状态
                     * @return Online 在线状态
                     * 
                     */
                    bool GetOnline() const;

                    /**
                     * 设置在线状态
                     * @param _online 在线状态
                     * 
                     */
                    void SetOnline(const bool& _online);

                    /**
                     * 判断参数 Online 是否已赋值
                     * @return Online 是否已赋值
                     * 
                     */
                    bool OnlineHasBeenSet() const;

                private:

                    /**
                     * 客户端ID
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * 共享订阅组名
                     */
                    std::string m_sharedName;
                    bool m_sharedNameHasBeenSet;

                    /**
                     * 共享组下的订阅表达式列表
                     */
                    std::string m_topicFilter;
                    bool m_topicFilterHasBeenSet;

                    /**
                     * 在线状态
                     */
                    bool m_online;
                    bool m_onlineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_SHAREDSUBSCRIPTIONCLIENT_H_
